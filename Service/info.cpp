#include "info.h"
#include "ui_info.h"
#include <QIcon>
#include <QPushButton>

Info::Info(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Info)
{
    ui->setupUi(this);

    this->setWindowTitle(u8"信息");
    this->setWindowIcon(QIcon(":/icon/contact.png"));

    connect(ui->back_btn, &QPushButton::clicked, [this](){
        emit back_btn_clicked();

    });
}

Info::~Info()
{
    delete ui;
}
