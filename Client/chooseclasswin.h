#ifndef CHOOSECLASSWIN_H
#define CHOOSECLASSWIN_H

#include <QWidget>
#include <QPushButton>
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


private:

    Ui::ChooseClassWin *ui;
};

#endif // CHOOSECLASSWIN_H
