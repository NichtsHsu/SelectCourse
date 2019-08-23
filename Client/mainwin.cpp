#include "mainwin.h"
#include "ui_mainwin.h"
#include <QDebug>
#include <QPushButton>
#include <QMouseEvent>
#include <QGraphicsDropShadowEffect>
#include "chooseclasswin.h"
mainwin::mainwin(QString ID, QString psw, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwin)
{

    this->setWindowFlags(Qt::FramelessWindowHint);
    this->ID = ID;
    this->psw = psw;

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


    cWin = new ChooseClassWin(ID.toLongLong());
    connect(cWin,SIGNAL(selectedSectionsOk(QList<Section>,QMap<long long, Course>)),this,SLOT(setSelectTime(QList<Section>,QMap<long long, Course>)));
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

    connectServer();

    ui->label_4->setText(ID);


//    QString cname=u8"数据库系统";
//    QString teacher=u8"li";
//    QString dtime=u8"周一 5-6";
//    addClassToTable(u8"数据库系统",0,4,2);

//    QString cname1=u8"计算机网络";
//    QString teacher1=u8"wang";
//    QString dtime1=u8"周二 3-4 && 周五 5-6";
//    addClassToTable(u8"计算机网络",4,4,2);
//    addClassToTable(u8"计算机网络",1,2,2);

//    QString cname2=u8"编译原理";
//    QString teacher2=u8"xu";
//    QString dtime2=u8"周二 5-7";

//    addClassToTable(u8"编译原理",1,4,3);

//    QString cname3 = u8"操作系统";
//    QString teacher3 = u8"chen";
//    QString dtime3 = u8"周四 1-4";

//    addClassToTable(u8"操作系统", 3, 0, 4);

//    QString cname4 = u8"大学英语";
//    QString teacher4 = u8"yu";
//    QString dtime4 = u8"周三 1-2";

//    addClassToTable(u8"大学英语", 2, 0, 2);

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

QList<PartOfTime> mainwin::divideTime(QString item)
{

        QList<PartOfTime> list;
        QStringList slist=item.split("&");
        for(int i=0;i<slist.size();i++)
        {
           QString f=slist.at(i).left(2);
           QString f1=slist.at(i).mid(2);
           QStringList f2=f1.split("-");

           int x=0;

           if(f==u8"周一")
           {
               x=0;
           }
           else {
               if(f==u8"周二")
               {
                   x=1;
               }
               else {
                   if(f==u8"周三")
                   {
                       x=2;
                   }
                   else {
                       if(f==u8"周四")
                       {
                           x=3;
                       }
                       else {
                           if(f==u8"周五")
                           {
                               x=4;
                           }
                           else {
                               if(f==u8"周六")
                               {
                                   x=5;
                               }
                               else {
                                   if(f==u8"周日")
                                   {
                                       x=6;
                                   }
                               }
                           }
                       }
                   }
               }
           }

            int y=f2.at(0).toInt()-1;
            int len=f2.at(1).toInt()-f2.at(0).toInt()+1;
            PartOfTime p;
            p.x=x;
            p.y=y;
            p.len=len;
            list.append(p);
        }
        return  list;


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

void mainwin::setSelectTime(QList<Section> ss, QMap<long long, Course> cc)
{
    QList<Section> s=ss;
    QMap<long long, Course> c=cc;
    for(int i=0;i<s.size();i++)
    {


        QList<PartOfTime> dT= divideTime(s.at(i).time);
        for(int j=0;j<dT.size();j++)
        {
            addClassToTable(c[s.at(i).course_id].title,dT.at(j).x,dT.at(j).y,dT.at(j).len);

        }
    }


}


void mainwin::connectServer()
{
    QFile file(qApp->applicationDirPath() + "/ip.txt");
    QTextStream qts(&file);

    QString IP;

    if(!file.open(QIODevice::Text | QIODevice::ReadOnly))
    {
        IP = "127.0.0.1";
    }
    else
    {
        IP = qts.readAll();
    }
    file.close();

    int port=12345;

    QTcpSocket* socket = new QTcpSocket();

    //取消已有的连接
    socket->abort();
    //连接服务器
    socket->connectToHost(IP, port);

    //等待连接成功
    if(!socket->waitForConnected(1000))
    {
        return;
    }
    else
    {
        socketC=socket;

        // 用学号生成json获取个人选课信息
        QString year = ui->comboBox->currentText();

        QString json = "";
        socketC->write(json.toUtf8());
        // 读取section_id
        QByteArray buffer;
        QString str = "";
        buffer = socketC->readAll();
        if(!buffer.isEmpty())
        {
            str += tr(buffer);
        }
        // ... 这里不知道怎么读取到了section_id
        // 请求课表即section中，课表名字与时间
        // for循环读取课表与时间，然后加入课表
        // addClassToTable(QString name, int x, int y, int len)
        // name 课程名称 x星期几，y第几节开始，len多少节

        socketC->disconnectFromHost();

    }
}
