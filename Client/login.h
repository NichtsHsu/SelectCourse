#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QPushButton>
#include <QTcpSocket>
namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

    Ui::Login *ui;
signals:
    void choosedLogin();

protected:

    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;



private slots:

    void loginPush();

    void on_minimumBtn_clicked();

    void on_closeBtn_clicked();

private:
//    QPushButton* login;
//    QPushButton* find_psw;

    void connectServer();
    QTcpSocket* socketC;


    QPoint m_Press;
    QPoint m_Move;
    bool leftBtnClk=false;
};

#endif // LOGIN_H
