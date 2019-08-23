﻿#ifndef CHOOSECLASSWIN_H
#define CHOOSECLASSWIN_H

#include <QWidget>
#include <QPushButton>
#include <QTcpSocket>
#include "jsonparser.h"

struct Course
{
    long long course_id;
    QString title;
    QString description;
    double credits;
    QString dept_name;
};

struct Section
{
    long long sec_id;
    long long course_id;
    long long instructor_id;
    QString semester;
    long long year;
    QString time;
    QString building;
    long long room_number;
};

struct Instructor
{
    long long ID;
    QString name;
    QString dept_name;
    QString description;
};

namespace Ui {
class ChooseClassWin;
}

class ChooseClassWin : public QWidget
{
    Q_OBJECT

public:
    explicit ChooseClassWin(QWidget *parent = nullptr);
    ~ChooseClassWin();

    void addChooseLine(QString itemName="", int itemNumber=0, QString nameOfTeacher="", int connectNum=0, double creditNum=0, QString duringTime="");
    void addLine(QString itemName="", int itemNumber=0, QString nameOfTeacher="", int connectNum=0, double creditNum=0, QString duringTime="");

    void addClassToTable(QString str, int x, int y, int len);


private slots:
    void clickChooseCourse();
    void clickCourseDetail(QString itemName, int itemNumber);


    void on_minimumBtn_clicked();

    void on_closeBtn_clicked();

    void on_sendBtn_clicked();

    void getdata();

protected:

    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;

signals:
    void backBtnClicked();
    void courseDetailsClicked(QString, int);

private:

    Ui::ChooseClassWin *ui;

    void connectServer();
    QTcpSocket* socketC;

    QPoint m_Press;
    QPoint m_Move;
    bool leftBtnClk=false;

    QMap<long long, Course> courses;
    QList<Section> sections;
    QMap<long long, Instructor> instructors;
};

#endif // CHOOSECLASSWIN_H
