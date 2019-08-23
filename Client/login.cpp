#include "login.h"
#include "ui_login.h"
#include "chooseclasswin.h"
#include "mainwin.h"
#include <QMouseEvent>
#include <QGraphicsDropShadowEffect>

#include <QDebug>
#include <QTcpSocket>
#include <QMessageBox>

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    QIcon *icon=new QIcon(":/icons/icon/school.png");

    this->setWindowIcon(*icon);

    this->setWindowFlags(Qt::SplashScreen);

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


    connect(ui->login_button, &QPushButton::clicked,[this](){
        emit choosedLogin();
    });

    connect(ui->login_button,SIGNAL(clicked()),this,SLOT(loginPush()));

    connectServer();
}

Login::~Login()
{
    delete ui;
}

void Login::mousePressEvent(QMouseEvent *event)
{
    if(event->button()== Qt::LeftButton&&ui->topBar->frameRect().contains(event->globalPos() - this->frameGeometry().topLeft()))
    {
        m_Press = event->globalPos();
        leftBtnClk = true;
    }
    event->ignore();
}

void Login::mouseReleaseEvent(QMouseEvent *event)
{
    if( event->button() == Qt::LeftButton ){

        leftBtnClk = false;
        }
        event->ignore();
}

void Login::mouseMoveEvent(QMouseEvent *event)
{
    if( leftBtnClk ){

           m_Move = event->globalPos();
           this->move( this->pos() + m_Move - m_Press );
           m_Press = m_Move;
     }
       event->ignore();

}


void Login::loginPush()
{
    // 获取账号密码
    QString ID = ui->comboBox->text();
    if(ID.isEmpty())
    {
        QMessageBox::critical(nullptr, "error", u8"学号不能为空", QMessageBox::Ok, QMessageBox::Ok);
        return;
    }

    QString psw = ui->lineEdit->text();
    if(psw.isEmpty())
    {
        QMessageBox::critical(nullptr, "error", u8"密码不能为空", QMessageBox::Ok, QMessageBox::Ok);
        return;
    }
    // 生成json
    QString json = "aaa";
    // 发送登录请求
    socketC->write(json.toUtf8());
    socketC->flush();
    // 获取登录结果
    QByteArray buffer;
    QString str = "";
    buffer = socketC->readAll();
    if(!buffer.isEmpty())
    {
        str += tr(buffer);
    }

    if(str == "success")
    {
        // 关闭连接后打开mainwin
        socketC->disconnectFromHost();
        this->close();
        mainwin *mWin=new mainwin(ID, psw);
        mWin->show();
    }
    else
    {
        ui->lineEdit->setText("");
        QMessageBox::critical(nullptr, "error", u8"学号或密码有误", QMessageBox::Ok, QMessageBox::Ok);
        return;
    }
}

void Login::on_minimumBtn_clicked()
{
        this->showMinimized();
}

void Login::on_closeBtn_clicked()
{
    exit(0);
}

void Login::connectServer()
{
    QFile file("ip.txt");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug()<<"Can't open the file!"<<endl;
    }
    while(!file.atEnd()) {
        QByteArray line = file.readLine();
        QString str(line);
        qDebug()<< str;

        QString IP=str;

        int port=12345;

        QTcpSocket* socket = new QTcpSocket();

      //取消已有的连接
        socket->abort();
      //连接服务器
        socket->connectToHost(IP, port);

        //等待连接成功
        if(!socket->waitForConnected(1000))
        {

            qDebug() << "login Connection failed!";
            return;
        }
        else
        {
            qDebug() << "login Connect successfully!";
            socketC=socket;           
        }
    } 
}
