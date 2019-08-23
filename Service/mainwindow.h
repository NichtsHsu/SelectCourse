#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "info.h"

#include <QTcpServer>
#include <QTcpSocket>

namespace Ui {
class MainWindow;
}

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // 以下deptment 是 department 的缩写，即院系

    void addNewClass(QString name, QString deptment, long long teacher, QString semester, QString classBuilding, long long classRoom, long long year, QString time);  // 开设课程
    void addNewLesson(QString name, QString deptment, float credit, QString description); // 新增课程
    void addNewTeacher(QString name, QString deptment, QString description);  // 新增讲师
    void addNewStudent(QString name, long long grade, QString deptment);  // 新增学生
    void addNewDeptment(QString name);                   // 新增院系
    void addNewRoom(QString building, long long room, long long capacity);   // 新增教学楼或教室

private slots:
    void server_New_Connect();

    void socket_Read_Data();

    void socket_Disconnected();

    void sendError(MessageType type, QString module, QString message);

private:
    Ui::MainWindow *ui;

    Info *information;

    QTcpServer* server;
    QTcpSocket* socket;
};

#endif // MAINWINDOW_H
