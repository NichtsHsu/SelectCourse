#ifndef MAINWIN_H
#define MAINWIN_H

#include <QWidget>
#include "login.h"
#include "chooseclasswin.h"

namespace Ui {
class mainwin;
}

class mainwin : public QWidget
{
    Q_OBJECT

public:
    explicit mainwin(QString ID, QString psw,QWidget *parent = nullptr);
    ~mainwin();

    void addClassToTable(QString str,int x,int y,int len);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;


private slots:
    void on_closeBtn_clicked();

    void on_minimumBtn_clicked();

private:
    Ui::mainwin *ui;
    ChooseClassWin *cWin;


    QPoint m_Press;
    QPoint m_Move;
    bool leftBtnClk=false;

    void connectServer();
    QTcpSocket* socketC;

    QStringList classTable;
    QString ID;
    QString psw;

};

#endif // MAINWIN_H
