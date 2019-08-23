#ifndef CHOOSECLASSWIN_H
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

struct PartOfTime{
    int x;
    int y;
    int len;
};


namespace Ui {
class ChooseClassWin;
}

class ChooseClassWin : public QWidget
{
    Q_OBJECT

public:
    explicit ChooseClassWin(long long id, QWidget *parent = nullptr);
    ~ChooseClassWin();

    void addChooseLine(QString itemName="", int itemNumber=0, QString nameOfTeacher="", int connectNum=0, double creditNum=0, QString duringTime="");
    void addLine(QString itemName="", int itemNumber=0, QString nameOfTeacher="", int connectNum=0, double creditNum=0, QString duringTime="");

    void addClassToTable(QString str, int x, int y, int len);

    QList<PartOfTime> dividingTime(QString);
private slots:
    void clickChooseCourse();
    void clickCourseDetail(QString itemName, int itemNumber);


    void clickQuitCourse(int row);


    void on_minimumBtn_clicked();

    void on_closeBtn_clicked();

    void on_sendBtn_clicked();

    void getdata();

protected:

    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;

signals:
    void chooseClassBtnClicked(QString name, int id, QString nameofteacher, int connectNum, double creidts, QString time);
    void enableBtn(int row, int column);

    void backBtnClicked();
    void courseDetailsClicked(QString, int);

    void selectedSectionsOk(QList<Section>,QMap<long long, Course>);

private:


    Ui::ChooseClassWin *ui;

    QList<QPair<long long,long long>> chooseC;

    void connectServer();
    QTcpSocket* socketC;

    QPoint m_Press;
    QPoint m_Move;
    bool leftBtnClk=false;

    QMap<long long, Course> courses;
    QMap<long long, Section> sections;
    QMap<long long, Instructor> instructors;
    QList<Section> selectedSections;

    long long ID;
};

#endif // CHOOSECLASSWIN_H
