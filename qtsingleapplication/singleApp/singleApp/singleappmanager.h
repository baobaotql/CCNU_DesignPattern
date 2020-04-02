#ifndef QTSINGLEAPPMANAGER_H
#define QTSINGLEAPPMANAGER_H

#include <QObject>
#include <QLocalServer>

class SingleAppManager : public QObject
{
    Q_OBJECT
public:
    virtual ~SingleAppManager();

    static SingleAppManager &instance();

    static bool tryRun();

signals:
    void anotherAppStarted() const;

protected:
    QLocalServer m_server;

    bool canRun();

    bool isAnotherRunned();
    bool createServer();

    void checkPing(QLocalSocket *socket);

private:
    static const QLatin1String sc_serverNameTemplate;
    static const QLatin1String sc_pingCommand;

    QString m_serverName;

    explicit SingleAppManager(QObject *parent = 0);
};

#endif // QTSINGLEAPPMANAGER_H
