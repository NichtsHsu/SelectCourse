#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>
#include <login.h>
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    //w.show();


    Login y;
    y.show();
    return a.exec();
}
