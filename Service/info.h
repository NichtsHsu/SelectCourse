#ifndef INFO_H
#define INFO_H

#include <QWidget>

namespace Ui {
class Info;
}

class Info : public QWidget
{
    Q_OBJECT

public:
    explicit Info(QWidget *parent = nullptr);
    ~Info();

    void addBuildingLine(QString building, QString room, int capacity);
    void addDeptLine(QString ID, QString name);
    void addTeacherLine(QString ID, QString name, QString deptment, QString desp);
    void addAccountLine(QString ID, QString password);
    void addLessonLine(QString ID, QString name, QString deptment, double credit, QString desp);
    void addStudentLine(QString ID, QString name, QString deptment, QString grade);
    void addClassLine(QString ID, QString name, QString deptment, QString time);
    void addStudentClassLine(QString ID, QString name);

    void searchBuilding(QString building, QString room, int capaticy);
    void searchDept(QString dept);
    void searchTeacher(QString ID, QString name, QString dept);
    void searchStudent(QString ID, QString name, QString dept, QString grade);
    void searchAccount(QString ID);
    void searchLesson(QString ID, QString name, QString dept,double credit);
    void searchClass(QString ID, QString name, QString dept, QString time);
    void searchStudentClass(QString ID);


signals:
    void back_btn_clicked();

private:
    Ui::Info *ui;
};

#endif // INFO_H
