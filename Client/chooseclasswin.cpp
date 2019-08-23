#include "chooseclasswin.h"
#include "ui_chooseclasswin.h"
#include <QScrollBar>
#include <QTextCodec>
#include <QLabel>
#include <QTextCodec>
#include <QDebug>
#include <QDialog>
#include <QPlainTextEdit>
#include <QVBoxLayout>


#include <QGraphicsDropShadowEffect>

ChooseClassWin::ChooseClassWin(long long id, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChooseClassWin)
{
    ID = id;
    ui->setupUi(this);
    //    this->showMaximized();

    this->setWindowFlags(Qt::FramelessWindowHint);


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


    ui->chooseCoursesTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->chooseCoursesTable->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    //设置CoursesList
    ui->CoursesList->setColumnCount(7); //设置列数
    ui->CoursesList->horizontalHeader()->setSectionsClickable(false); //设置表头不可点击（默认点击后进行排序）

    //设置表头内容
    QStringList header;
    header<<tr(u8"课程名称")<<tr(u8"课程代码")<<tr(u8"讲师")<<tr(u8"课程简介")<<tr(u8"学分")<<tr(u8"时间段")<<tr(u8"选课");
    ui->CoursesList->setHorizontalHeaderLabels(header);

    //设置表头字体加粗

    //    QFont font = ui->CoursesList->horizontalHeader()->font();
    //    font.setBold(true);
    //    ui->CoursesList->horizontalHeader()->setFont(font);
    ui->CoursesList->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->CoursesList->horizontalHeader()->setStretchLastSection(true); //设置充满表宽度
    ui->CoursesList->verticalHeader()->setDefaultSectionSize(50); //设置行高
    ui->CoursesList->setFrameShape(QFrame::NoFrame); //设置无边框
    ui->CoursesList->setShowGrid(false); //设置不显示格子线
    ui->CoursesList->verticalHeader()->setVisible(false); //设置垂直头不可见
    ui->CoursesList->setSelectionMode(QAbstractItemView::ExtendedSelection);  //可多选（Ctrl、Shift、  Ctrl+A都可以）
    ui->CoursesList->setSelectionBehavior(QAbstractItemView::SelectRows);  //设置选择行为时每次选择一行
    ui->CoursesList->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置不可编辑
    //ui->CoursesList->horizontalHeader()->resizeSection(0,150); //设置表头第一列的宽度为150
    //ui->CoursesList->horizontalHeader()->setFixedHeight(25); //设置表头的高度
    ui->CoursesList->setStyleSheet("selection-background-color:lightblue;"); //设置选中背景色
    //ui->CoursesList->horizontalHeader()->setStyleSheet("QHeaderView::section{background:white;}"); //设置表头背景色

    //设置水平、垂直滚动条样式
    ui->CoursesList->verticalScrollBar()->setStyleSheet("QScrollBar{background:transparent; height:10px;}"
                                                        "QScrollBar::handle{background:lightgray; border:2px solid transparent; border-radius:5px;}"
                                                        "QScrollBar::handle:hover{background:gray;}"
                                                        "QScrollBar::sub-line{background:transparent;}"
                                                        "QScrollBar::add-line{background:transparent;}");


    //设置ChooseList
    ui->ChooseList->setColumnCount(6); //设置列数
    ui->ChooseList->horizontalHeader()->setSectionsClickable(false); //设置表头不可点击（默认点击后进行排序）

    //设置表头内容
    QStringList header2;
    header2<<tr(u8"课程名称")<<tr(u8"课程代码")<<tr(u8"讲师")<<tr(u8"学分")<<tr(u8"时间段")<<tr(u8"退选");
    ui->ChooseList->setHorizontalHeaderLabels(header2);

    //设置表头字体加粗

    //QFont font = ui->CoursesList->horizontalHeader()->font();
    //font.setBold(true);
    //ui->CoursesList->horizontalHeader()->setFont(font);
    ui->ChooseList->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->ChooseList->horizontalHeader()->setStretchLastSection(true); //设置充满表宽度
    ui->ChooseList->verticalHeader()->setDefaultSectionSize(50); //设置行高
    ui->ChooseList->setFrameShape(QFrame::NoFrame); //设置无边框
    ui->ChooseList->setShowGrid(false); //设置不显示格子线
    ui->ChooseList->verticalHeader()->setVisible(false); //设置垂直头不可见
    ui->ChooseList->setSelectionMode(QAbstractItemView::ExtendedSelection);  //可多选（Ctrl、Shift、  Ctrl+A都可以）
    ui->ChooseList->setSelectionBehavior(QAbstractItemView::SelectRows);  //设置选择行为时每次选择一行
    ui->ChooseList->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置不可编辑
    //ui->CoursesList->horizontalHeader()->resizeSection(0,150); //设置表头第一列的宽度为150
    //ui->CoursesList->horizontalHeader()->setFixedHeight(25); //设置表头的高度
    ui->ChooseList->setStyleSheet("selection-background-color:lightblue;"); //设置选中背景色
    //ui->CoursesList->horizontalHeader()->setStyleSheet("QHeaderView::section{background:white;}"); //设置表头背景色

    //设置水平、垂直滚动条样式
    ui->ChooseList->verticalScrollBar()->setStyleSheet("QScrollBar{background:transparent; height:10px;}"
                                                       "QScrollBar::handle{background:lightgray; border:2px solid transparent; border-radius:5px;}"
                                                       "QScrollBar::handle:hover{background:gray;}"
                                                       "QScrollBar::sub-line{background:transparent;}"
                                                       "QScrollBar::add-line{background:transparent;}");

    connect(ui->backBtn, &QPushButton::clicked, [this](){
        emit backBtnClicked();
    });

    // 预选课程表
    ui->chooseCoursesTable->setEditTriggers(QAbstractItemView::NoEditTriggers); // 设置不可编辑

    connect(this, &ChooseClassWin::courseDetailsClicked, this, &ChooseClassWin::clickCourseDetail);
    connect(this, &ChooseClassWin::chooseClassBtnClicked, this, &ChooseClassWin::addChooseLine);
    connectServer();


    //调试代码
    QString cname=u8"数据库系统";
    QString teacher=u8"li";
    QString dtime=u8"周一 5-6";
    addLine(cname,123,teacher,0,456,dtime);
    addChooseLine(cname, 123, teacher, 0, 4, dtime);
    addClassToTable(u8"数据库系统",0,4,2);

    QString cname1=u8"计算机网络";
    QString teacher1=u8"wang";
    QString dtime1=u8"周二 3-4 && 周五 5-6";
    addLine(cname1,007,teacher1,0,456,dtime1);
    addChooseLine(cname1,007,teacher1,0,4,dtime1);
    addClassToTable(u8"计算机网络",4,4,2);
    addClassToTable(u8"计算机网络",1,2,2);

    QString cname2=u8"编译原理";
    QString teacher2=u8"xu";
    QString dtime2=u8"周二 5-7";
    addLine(cname2, 117, teacher2, 0, 3.5, dtime2);
    addChooseLine(cname2, 117, teacher2, 0, 3.5, dtime2);
    addClassToTable(u8"编译原理",1,4,3);

    QString cname3 = u8"操作系统";
    QString teacher3 = u8"chen";
    QString dtime3 = u8"周四 1-4";
    addLine(cname3, 9591, teacher3, 0, 3.5, dtime3);
    addChooseLine(cname3, 9591, teacher3, 0, 3.5, dtime3);
    addClassToTable(u8"操作系统", 3, 0, 4);

    QString cname4 = u8"大学英语";
    QString teacher4 = u8"yu";
    QString dtime4 = u8"周三 1-2";
    addLine(cname4, 1654, teacher4, 0, 3.0, dtime4);
    addChooseLine(cname4, 1654, teacher4, 0, 3.0, dtime4);
    addClassToTable(u8"大学英语", 2, 0, 2);


    //Section item1;
    //item1.course_id;
//    item1->course_id=111111;
//    item1->section_id=111111;
//    item1->teacher_id=121212;
//    item1->teacher=u8"li";
//    item1->credit=2.5;
//    item1->desp="nihao";
    //sections.append(item1);

    dividingTime(u8"周三1-2");
    dividingTime(u8"周三1-2&&周四4-5");

}


ChooseClassWin::~ChooseClassWin()
{
    delete ui;
}

void ChooseClassWin::addLine(QString itemName, int itemNumber, QString nameOfTeacher, int connectNum, double creditNum, QString duringTime)
{
    ui->CoursesList->setRowCount(ui->CoursesList->rowCount()+1);
    int row=ui->CoursesList->rowCount();
    //1
    QWidget *widget_1=new QWidget;

    QHBoxLayout *layout_1 = new QHBoxLayout();

    QLabel *lab1=new QLabel(itemName);

    lab1->setWordWrap(true);
    lab1->setAlignment(Qt::AlignTop);

    layout_1->addWidget(lab1);
    widget_1->setLayout(layout_1);

    ui->CoursesList->setCellWidget(row-1,0,widget_1);

    //2
    QWidget *widget_2=new QWidget;

    QHBoxLayout *layout_2 = new QHBoxLayout();
    layout_2->addWidget((new QLabel(QString::number(itemNumber))));
    widget_2->setLayout(layout_2);

    ui->CoursesList->setCellWidget(row-1,1,widget_2);

    //3
    QWidget *widget_3=new QWidget;

    QHBoxLayout *layout_3 = new QHBoxLayout();
    layout_3->addWidget((new QLabel(nameOfTeacher)));
    widget_3->setLayout(layout_3);

    ui->CoursesList->setCellWidget(row-1,2,widget_3);

    //4
    QWidget *x=new QWidget;

    QHBoxLayout *l = new QHBoxLayout();
    QPushButton * btn=new QPushButton(u8"查看课程简介");
    l->addWidget(btn);
    x->setLayout(l);
    connect(btn,&QPushButton::clicked,[this,itemName,itemNumber](){
        emit courseDetailsClicked(itemName,itemNumber);
    });

    ui->CoursesList->setCellWidget(row-1,3,x);

    //5
    QWidget *widget_5=new QWidget;

    QHBoxLayout *layout_5 = new QHBoxLayout();
    layout_5->addWidget((new QLabel(QString::number(creditNum))));
    widget_5->setLayout(layout_5);

    ui->CoursesList->setCellWidget(row-1,4,widget_5);

    //6
    QWidget *widget_6=new QWidget;

    QHBoxLayout *layout_6 = new QHBoxLayout();

    QLabel *lab=new QLabel(duringTime);

    lab->setWordWrap(true);
    lab->setAlignment(Qt::AlignTop);

    layout_6->addWidget(lab);
    widget_6->setLayout(layout_6);

    ui->CoursesList->setCellWidget(row-1,5,widget_6);

    //7
    QWidget *widget_7=new QWidget;
    QPushButton *ptn=new QPushButton(u8"选课");
    QHBoxLayout *layout_7 = new QHBoxLayout();
    layout_7->addWidget(ptn);
    widget_7->setLayout(layout_7);
    connect(ptn,&QPushButton::clicked,[this,itemName,itemNumber,nameOfTeacher,connectNum,creditNum, duringTime,ptn](){
        emit chooseClassBtnClicked(itemName,itemNumber,nameOfTeacher,connectNum,creditNum,duringTime);
    });

    ui->CoursesList->setCellWidget(row-1,6,widget_7);

}

void ChooseClassWin::addClassToTable(QString str,int x,int y,int len)
{
    ui->chooseCoursesTable->setSpan(y,x,len,1);
    QTableWidgetItem *item=new QTableWidgetItem();
    item->setText(str);
    item->setTextAlignment(Qt::AlignCenter);
    ui->chooseCoursesTable->setItem(y,x,item);
}

QList<PartOfTime> ChooseClassWin::dividingTime(QString item)
{
    QList<PartOfTime> list;
    QStringList slist=item.split("&&");
    for(int i=0;i<slist.size();i++)
    {
       qDebug()<<slist.at(i).left(4);
       qDebug()<<slist.at(i).mid(4);
    }
}



void ChooseClassWin::clickChooseCourse()
{
    qDebug()<<"hh";
    QPoint cur=mapToParent( cursor().pos());
    qDebug()<<cur;

    qDebug()<< ui->ChooseList->indexAt(cur);
    //qDebug()<<ui->ChooseList->row(item);
    //qDebug()<<ui->ChooseList->column(item);
}

void ChooseClassWin::clickCourseDetail(QString itemName,int itemNumber)
{
    qDebug()<<itemName<<endl;
    QDialog* description = new QDialog(this);                   // 对话框
    description->setWindowTitle(itemName);
    description->setAttribute(Qt::WA_DeleteOnClose);

    QPlainTextEdit * detail = new QPlainTextEdit();             // 显示课程详情
    detail->setLineWrapMode(QPlainTextEdit::WidgetWidth);       // 软换行
    detail->setReadOnly(true);                                  // 只读

    auto cursor = detail->textCursor();
    cursor.movePosition(QTextCursor::End);
    cursor.insertText(u8"课程名字：" + itemName + "\n");
    cursor.insertText(u8"课程代码：" +QString::number(itemNumber) + "\n");

    QVBoxLayout* vbox = new QVBoxLayout();
    vbox->addWidget(detail);

    description->setLayout(vbox);

    description->show();
}

void ChooseClassWin::addChooseLine(QString itemName, int itemNumber, QString nameOfTeacher, int connectNum, double creditNum, QString duringTime)
{
    for(int i=0;i<chooseC.size();i++)
    {
        if( chooseC.at(i).second==connectNum)
            return;
    }

    chooseC.append(QPair<long long, long long>(itemNumber,connectNum));


    ui->ChooseList->setRowCount(ui->ChooseList->rowCount()+1);
    qDebug()<<ui->ChooseList->rowCount();
    int row=ui->ChooseList->rowCount();
    //1
    QWidget *widget_1=new QWidget;

    QHBoxLayout *layout_1 = new QHBoxLayout();
    layout_1->addWidget((new QLabel(itemName)));
    widget_1->setLayout(layout_1);

    ui->ChooseList->setCellWidget(row-1,0,widget_1);

    //2
    QWidget *widget_2=new QWidget;

    QHBoxLayout *layout_2 = new QHBoxLayout();
    layout_2->addWidget((new QLabel(QString::number(itemNumber))));
    widget_2->setLayout(layout_2);

    ui->ChooseList->setCellWidget(row-1,1,widget_2);

    //3
    QWidget *widget_3=new QWidget;

    QHBoxLayout *layout_3 = new QHBoxLayout();
    layout_3->addWidget((new QLabel(nameOfTeacher)));
    widget_3->setLayout(layout_3);

    ui->ChooseList->setCellWidget(row-1,2,widget_3);


    //5
    QWidget *widget_5=new QWidget;

    QHBoxLayout *layout_5 = new QHBoxLayout();
    layout_5->addWidget((new QLabel(QString::number(creditNum))));
    widget_5->setLayout(layout_5);

    ui->ChooseList->setCellWidget(row-1,3,widget_5);

    //6
    QWidget *widget_6=new QWidget;



    QHBoxLayout *layout_6 = new QHBoxLayout();


    QLabel *lab=new QLabel(duringTime);

    lab->setWordWrap(true);
    lab->setAlignment(Qt::AlignTop);

    layout_6->addWidget(lab);

    widget_6->setLayout(layout_6);

    ui->ChooseList->setCellWidget(row-1,4,widget_6);

    //7
    QWidget *widget_7=new QWidget;
    QPushButton *ptn=new QPushButton(u8"退选");
    QHBoxLayout *layout_7 = new QHBoxLayout();
    layout_7->addWidget(ptn);
    widget_7->setLayout(layout_7);
    connect(ptn, &QPushButton::clicked, [this,row](){
       clickQuitCourse(row - 1);
    });

    ui->ChooseList->setCellWidget(row-1,5,widget_7);


}



void ChooseClassWin::on_minimumBtn_clicked()
{
    this->showMinimized();
}

void ChooseClassWin::on_closeBtn_clicked()
{
    exit(0);
}

void ChooseClassWin::mousePressEvent(QMouseEvent *event)
{
    if(event->button()== Qt::LeftButton&&ui->topBar->frameRect().contains(event->globalPos() - this->frameGeometry().topLeft()))
    {
        m_Press = event->globalPos();
        leftBtnClk = true;
    }
    event->ignore();
}

void ChooseClassWin::mouseReleaseEvent(QMouseEvent *event)
{
    if( event->button() == Qt::LeftButton ){
        leftBtnClk = false;
    }
    event->ignore();
}

void ChooseClassWin::mouseMoveEvent(QMouseEvent *event)
{
    if( leftBtnClk ){
        m_Move = event->globalPos();
        this->move( this->pos() + m_Move - m_Press );
        m_Press = m_Move;
    }
    event->ignore();

}


void ChooseClassWin::connectServer()
{
    QString IP="127.0.0.1";

    int port=12345;

    QTcpSocket* socket = new QTcpSocket();

    // 取消已有的连接
    socket->abort();
    // 连接服务器
    socket->connectToHost(IP, port);

    // 等待连接成功
    if(!socket->waitForConnected(1000))
    {

        qDebug() << "mainwin Connection failed!";
        return;
    }
    else
    {
        qDebug() << "mainwin Connect successfully!";
        socketC=socket;
        connect(socketC, &QTcpSocket::readyRead, this, &ChooseClassWin::getdata);

        // 获取开课信息 header<<tr(u8"课程名称")<<tr(u8"课程代码")<<tr(u8"讲师")<<tr(u8"课程简介")<<tr(u8"学分")<<tr(u8"时间段")<<tr(u8"选课");
        QString json = "{\"type\":\"read\",\"database\":\"courses\",\"table\":\"course\",\"primaryKeyValues\":[]}";
        socketC->write(json.toUtf8());
        socketC->flush();
    }
}

void ChooseClassWin::on_sendBtn_clicked()
{
    //获取当前json
    //QString data= ;
    QString json=JsonParser().generateSelectCourseRequirement(ID,chooseC);
      qDebug()<<json;
      QString IP="127.0.0.1";

      int port=12345;

      QTcpSocket* socket = new QTcpSocket();

      // 取消已有的连接
      socket->abort();
      // 连接服务器
      socket->connectToHost(IP, port);

      // 等待连接成功
      if(!socket->waitForConnected(1000))
      {

          qDebug() << "mainwin Connection failed!";
          return;
      }
      else
      {
          qDebug() << "mainwin Connect successfully!";
          socketC=socket;
          connect(socketC, &QTcpSocket::readyRead, this, &ChooseClassWin::getdata);
          socketC->write(json.toUtf8());
          socketC->flush();
      }

}

void ChooseClassWin::getdata()
{
    QByteArray buffer;
    // 读取缓冲区数据
    buffer = socketC->readAll();
    if(!buffer.isEmpty())
    {
        QString json = "";
        json += tr(buffer);
        qDebug() << json;
        rapidjson::Document doc;
        doc.Parse(json.toUtf8().data());

        QString type = doc["type"].GetString();

        if(type == QString("error"))
        {
            QMessageBox::critical(nullptr, "error", doc["message"].GetString());
            return;
        }
        else if(type == QString("return"))
        {
            if(!doc.HasMember("table"))
                return;
            QString table = doc["table"].GetString();

            if(table == "course")
            {
                rapidjson::Value values = doc["values"].GetArray();
                courses.clear();
                for(unsigned i = 0; i < values.Size(); i++)
                {
                    rapidjson::Value record = values[i].GetObject();
                    Course course;
                    course.course_id = record["course_id"].GetInt64();
                    course.title = record["title"].GetString();
                    course.description = record["description"].GetString();
                    course.credits = record["credits"].GetDouble();
                    course.dept_name = record["dept_name"].GetString();
                    courses[course.course_id] = course;
                }

                QString IP="127.0.0.1";

                int port=12345;

                QTcpSocket* socket = new QTcpSocket();

                // 取消已有的连接
                socket->abort();
                // 连接服务器
                socket->connectToHost(IP, port);

                // 等待连接成功
                if(!socket->waitForConnected(1000))
                {

                    qDebug() << "mainwin Connection failed!";
                    return;
                }
                else
                {
                    qDebug() << "mainwin Connect successfully!";
                    socketC=socket;
                    connect(socketC, &QTcpSocket::readyRead, this, &ChooseClassWin::getdata);
                    QString send = "{\"type\":\"read\",\"database\":\"courses\",\"table\":\"section\",\"primaryKeyValues\":[]}";
                    socketC->write(send.toUtf8());
                    socketC->flush();
                }
            }
            else if(table == "section")
            {
                rapidjson::Value values = doc["values"].GetArray();
                sections.clear();
                for(unsigned i = 0; i < values.Size(); i++)
                {
                    rapidjson::Value record = values[i].GetObject();
                    Section section;
                    section.sec_id = record["sec_id"].GetInt64();
                    section.course_id = record["course_id"].GetInt64();
                    section.instructor_id = record["instructor_id"].GetInt64();
                    section.semester = record["semester"].GetString();
                    section.year = record["year"].GetInt64();
                    section.time = record["time"].GetString();
                    section.building = record["building"].GetString();
                    section.room_number = record["room_number"].GetInt64();
                    sections[section.sec_id] = section;
                }

                QString IP="127.0.0.1";

                int port=12345;

                QTcpSocket* socket = new QTcpSocket();

                // 取消已有的连接
                socket->abort();
                // 连接服务器
                socket->connectToHost(IP, port);

                // 等待连接成功
                if(!socket->waitForConnected(1000))
                {

                    qDebug() << "mainwin Connection failed!";
                    return;
                }
                else
                {
                    qDebug() << "mainwin Connect successfully!";
                    socketC=socket;
                    connect(socketC, &QTcpSocket::readyRead, this, &ChooseClassWin::getdata);
                    QString send = "{\"type\":\"read\",\"database\":\"courses\",\"table\":\"instructor\",\"primaryKeyValues\":[]}";
                    socketC->write(send.toUtf8());
                    socketC->flush();
                }
            }
            else if(table == "instructor")
            {
                rapidjson::Value values = doc["values"].GetArray();
                instructors.clear();
                for(unsigned i = 0; i < values.Size(); i++)
                {
                    rapidjson::Value record = values[i].GetObject();
                    Instructor instructor;
                    instructor.ID = record["ID"].GetInt64();
                    instructor.name = record["name"].GetString();
                    instructor.dept_name = record["dept_name"].GetString();
                    instructor.description = record["description"].GetString();
                    instructors[instructor.ID] = instructor;
                }

                foreach(auto i, sections)
                     addLine(courses[i.course_id].title, i.course_id, instructors[i.instructor_id].name, i.sec_id, courses[i.course_id].credits, i.time);


                QString IP="127.0.0.1";

                int port=12345;

                QTcpSocket* socket = new QTcpSocket();

                // 取消已有的连接
                socket->abort();
                // 连接服务器
                socket->connectToHost(IP, port);

                // 等待连接成功
                if(!socket->waitForConnected(1000))
                {

                    qDebug() << "mainwin Connection failed!";
                    return;
                }
                else
                {
                    qDebug() << "mainwin Connect successfully!";
                    socketC=socket;
                    connect(socketC, &QTcpSocket::readyRead, this, &ChooseClassWin::getdata);
                    QString send = "{\"type\":\"read\",\"database\":\"students\",\"table\":\"%1\",\"primaryKeyValues\":[]}";
                    send = send.arg(ID);
                    socketC->write(send.toUtf8());
                    socketC->flush();
                }
            }
            else if(table == QString::number(ID))
            {
                rapidjson::Value values = doc["values"].GetArray();
                selectedSections.clear();
                for(unsigned i = 0; i < values.Size(); i++)
                {
                    rapidjson::Value record = values[i].GetObject();
                    selectedSections << sections[record["sec_id"].GetInt64()];
                }
            }

            return;
        }
        else
        {
            QMessageBox::critical(nullptr, "error", QString("Unknown json type : \"") + type + QString("\"."));
            return;
        }
    }
}

void ChooseClassWin::clickQuitCourse(int row)
{
    qDebug()<<"tui"<<row<<endl;
    chooseC.removeAt(row);
    ui->ChooseList->removeRow(row);
}
