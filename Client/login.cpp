#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    connect(ui->login_button, &QPushButton::clicked,[this](){
        emit choosedLogin();
    });
}

Login::~Login()
{
    delete ui;
}

