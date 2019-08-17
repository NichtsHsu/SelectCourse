#include "mainwin.h"
#include "ui_mainwin.h"
#include <QDebug>
#include <QPushButton>

mainwin::mainwin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwin)
{


    ui->setupUi(this);


    this->showMaximized();

    //设置icon和标题
    QIcon *icon=new QIcon(":/icons/icon/school.png");

    this->setWindowIcon(*icon);

    this->setWindowTitle(u8"华南理工大学选课系统--选课界面");


    cWin = new ChooseClassWin();
    cWin->hide();

    ui->classTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->classTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->classTable->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    connect(ui->chooseClassButton, &QPushButton::clicked, [this](){
        this->close();
        cWin->show();
    });

    connect(cWin, &ChooseClassWin::backBtnClicked, [this](){
        cWin->hide();
        this->show();
    });

    QString cname=u8"数据库系统";
    QString teacher=u8"li";
    QString dtime=u8"周一 5-6";
    addClassToTable(u8"数据库系统",0,4,2);

    QString cname1=u8"计算机网络";
    QString teacher1=u8"wang";
    QString dtime1=u8"周二 3-4 && 周五 5-6";
    addClassToTable(u8"计算机网络",4,4,2);
    addClassToTable(u8"计算机网络",1,2,2);

    QString cname2=u8"编译原理";
    QString teacher2=u8"xu";
    QString dtime2=u8"周二 5-7";

    addClassToTable(u8"编译原理",1,4,3);

    QString cname3 = u8"操作系统";
    QString teacher3 = u8"chen";
    QString dtime3 = u8"周四 1-4";

    addClassToTable(u8"操作系统", 3, 0, 4);

    QString cname4 = u8"大学英语";
    QString teacher4 = u8"yu";
    QString dtime4 = u8"周三 1-2";

    addClassToTable(u8"大学英语", 2, 0, 2);

}

mainwin::~mainwin()
{
    delete ui;
    delete cWin;
}

void mainwin::addClassToTable(QString str,int x,int y,int len)
{
    ui->classTable->setSpan(y,x,len,1);
    QTableWidgetItem *item=new QTableWidgetItem();
    item->setText(str);
    item->setTextAlignment(Qt::AlignCenter);
    ui->classTable->setItem(y,x,item);
}
