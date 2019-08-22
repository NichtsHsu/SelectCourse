#include "mainwin.h"
#include "ui_mainwin.h"
#include <QDebug>
#include <QPushButton>
#include <QMouseEvent>
#include <QGraphicsDropShadowEffect>

mainwin::mainwin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwin)
{

    this->setWindowFlags(Qt::FramelessWindowHint);


    ui->setupUi(this);

    this->setAttribute(Qt::WA_TranslucentBackground, true);
        //设置无边框
        this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
        //实例阴影shadow
        QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect(this);
        //设置阴影距离
        shadow->setOffset(0, 0);
        //设置阴影颜色
        shadow->setColor(QColor("#444444"));
        //设置阴影圆角
        shadow->setBlurRadius(10);
        //给嵌套QWidget设置阴影
        ui->frame->setGraphicsEffect(shadow);
        //给垂直布局器设置边距(此步很重要, 设置宽度为阴影的宽度)
        //ui->Login->setMargin(24);



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
        this->hide();
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



void mainwin::mousePressEvent(QMouseEvent *event)
{
    if(event->button()== Qt::LeftButton&& ui->topBar_3->frameRect().contains(event->globalPos() - this->frameGeometry().topLeft()))
    {

        m_Press = event->globalPos();
        leftBtnClk = true;
    }
    event->ignore();
}

void mainwin::mouseReleaseEvent(QMouseEvent *event)
{
    if( event->button() == Qt::LeftButton ){

            leftBtnClk = false;
        }
        event->ignore();
}

void mainwin::mouseMoveEvent(QMouseEvent *event)
{
    if( leftBtnClk ){

           m_Move = event->globalPos();
           this->move( this->pos() + m_Move - m_Press );
           m_Press = m_Move;
     }
       event->ignore();

}



void mainwin::on_closeBtn_clicked()
{
    exit(0);
}

void mainwin::on_minimumBtn_clicked()
{
    this->showMinimized();

}
