#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QPushButton>
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

private:
//    QPushButton* login;
//    QPushButton* find_psw;
};

#endif // LOGIN_H
