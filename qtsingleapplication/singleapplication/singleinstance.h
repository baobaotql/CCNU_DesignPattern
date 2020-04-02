#ifndef SINGLEINSTANCE_H
#define SINGLEINSTANCE_H

#include <QObject>
#include <QDebug>
#include <QLocalSocket>
#include <QLocalServer>

class SingleInstance : public QObject
{
    Q_OBJECT
public:
    explicit SingleInstance(QObject *parent = 0);

    ~SingleInstance();

    void listen(QString name);

    bool hasPrevious(QString name, QStringList args);

signals:

    void newInstance();

public slots:

    void newConnection();

    void readyRead();

private:

    QLocalSocket* mSocket;

    QLocalServer mServer;

};

#endif // SINGLEINSTANCE_H
