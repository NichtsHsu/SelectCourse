#include "mainwindow.h"
#include <QApplication>
#include "network/jsonparser.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    DatabaseCourses::initialize();
    DatabaseStudents::initialize();

    MainWindow w;
    w.show();


    return a.exec();
}
