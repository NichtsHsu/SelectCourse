#include "mainwindow.h"
#include <QApplication>
#include <chooseclasswin.h>
#include <QTextCodec>
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    //w.show();
    ChooseClassWin x;
    x.show();
    return a.exec();
}
