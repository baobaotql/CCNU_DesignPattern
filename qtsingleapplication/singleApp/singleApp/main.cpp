#include "mainwindow.h"
//#include <QApplication>

//int main(int argc, char *argv[])
//{
//    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

//    return a.exec();
//}


#include <QApplication>
#include <QMessageBox>
#include <QTimer>

#include "singleappmanager.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    /* tryRun method shall be used to check if another applications is already started
     * if try run retun false, it means that current application cannot run and should be closed */
    if (!SingleAppManager::tryRun())
        return 1;

    QObject::connect(&SingleAppManager::instance(), &SingleAppManager::anotherAppStarted,
                     []() {
        /* a anotherAppStarted signal is just an information that another instance was trying to start
         * it could be usefull for example to show your application window or do anything else you like */
        QMessageBox::information(nullptr, QApplication::applicationName(), QObject::tr("Anotherone app stopped!"));
    });

    QTimer::singleShot(60000, &a, &QApplication::quit); // this is to close app automatically
    QMessageBox::information(nullptr, QApplication::applicationName(), QObject::tr("One app started!"));

    a.setQuitOnLastWindowClosed(false);
    return a.exec();
}
