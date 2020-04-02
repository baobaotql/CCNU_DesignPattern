#include "singleappmanager.h"

#include <QLocalSocket>
#include <QCoreApplication>

const QLatin1String SingleAppManager::sc_serverNameTemplate = QLatin1String("%1_SINGLE-APP-SERVER");
const QLatin1String SingleAppManager::sc_pingCommand = QLatin1String("PING!");

SingleAppManager::SingleAppManager(QObject *parent)
    : QObject(parent),
      m_serverName(QString(sc_serverNameTemplate).arg(QCoreApplication::instance()->applicationName()) )
{
    // init connections
    connect(&m_server, &QLocalServer::newConnection, [this]() {
        while (m_server.hasPendingConnections()) {
            auto connection = m_server.nextPendingConnection();

            connect(connection, &QLocalSocket::readyRead,
                    this, [this, connection] () { checkPing(connection); });
        }
    });
}

SingleAppManager::~SingleAppManager()
{}

SingleAppManager &SingleAppManager::instance()
{
    static SingleAppManager instance;
    return instance;
}

bool SingleAppManager::tryRun()
{
    return instance().canRun();
}

bool SingleAppManager::canRun()
{
    if (isAnotherRunned())  // check for windows
        return false;

    if (!createServer())
        return false;

    return true;
}

bool SingleAppManager::isAnotherRunned()
{
    QLocalSocket testSocket;
    testSocket.connectToServer(m_serverName, QLocalSocket::WriteOnly);
    auto connected = testSocket.waitForConnected();
    if (connected) {
        // write ping to another instance
        testSocket.write(sc_pingCommand.data());
        testSocket.waitForBytesWritten();
        testSocket.disconnectFromServer();
        testSocket.waitForDisconnected();   // this line is causing an error on the output, see (QTBUG-50711)
        return true;
    }

    return false;
}

bool SingleAppManager::createServer()
{
    auto success = m_server.listen(m_serverName);
    if (!success &&
            m_server.serverError() == QAbstractSocket::AddressInUseError) {
        QLocalServer::removeServer(m_serverName);

        success = m_server.listen(m_serverName);
    }

    return success;
}

void SingleAppManager::checkPing(QLocalSocket *socket)
{
    Q_ASSERT(socket);
    if (!socket) {
        qWarning() << "Cannot check ping for an null socket instance!";
        return;
    }

    auto readedData = socket->readAll();
    if (readedData.startsWith(sc_pingCommand.data())) {
        emit anotherAppStarted();
    }

    socket->deleteLater();
}
