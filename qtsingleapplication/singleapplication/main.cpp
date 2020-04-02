#include <QCoreApplication>
#include <QDebug>
#include "singleinstance.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "com.shaunfowler.myapp";

    SingleInstance cInstance;
    if(cInstance.hasPrevious(name, QCoreApplication::arguments()))
    {
        qDebug() << "Previous instance detected";
        return 0;
    }

    qDebug() << "This is the first instance";
    cInstance.listen(name);

    return a.exec();
}
