#include "mainwin.h"
#include "ui_mainwin.h"
#include <QDebug>

mainwin::mainwin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwin)
{
    ui->setupUi(this);

    login = new Login();
    login->show();

    connect(login, &Login::choosedLogin, [this](){
        login->hide();
        this->show();
    });
}

mainwin::~mainwin()
{
    delete ui;
    delete login;
}
