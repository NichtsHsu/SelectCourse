#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "info.h"

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

    void addNewClass(QString name, QString ID, QString deptment, QString teacher, QString classBuilding, QString classRoom, QString time);  // 开设课程
    void addNewLesson(QString name, QString ID, QString deptment, float credit, QString description); // 新增课程
    void addNewTeacher(QString name, QString ID, QString deptment, QString description);  // 新增讲师
    void addNewStudent(QString name, QString ID, QString deptment);  // 新增学生
    void addNewDeptment(QString name, QString ID);                   // 新增院系
    void addNewRoom(QString building, QString room, int capacity);   // 新增教学楼或教室


private:
    Ui::MainWindow *ui;

    Info *information;
};

#endif // MAINWINDOW_H
