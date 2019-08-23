#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sqlite/databasecourses.h"
#include "sqlite/databasestudents.h"
#include "network/jsonparser.h"

#include <QFrame>
#include <QPushButton>
#include <QMessageBox>
#include <QIcon>

MessageBox *gb_msgbox;
MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    gb_msgbox = ui->textEdit;

    // this->showMaximized();

    server = new QTcpServer();

    //连接信号槽
    connect(server,&QTcpServer::newConnection,this,&MainWindow::server_New_Connect);
    if(!server->listen(QHostAddress::Any, 12345))
    {
        //若出错，则输出错误信息
        qDebug()<<server->errorString();
        return;
    }

    ui->frame->setFrameStyle( QFrame::Panel | QFrame::Sunken);
    ui->frame_2->setFrameStyle( QFrame::Panel | QFrame::Sunken);
    ui->frame_3->setFrameStyle( QFrame::Panel | QFrame::Sunken);
    ui->frame_4->setFrameStyle( QFrame::Panel | QFrame::Sunken);
    ui->frame_6->setFrameStyle( QFrame::Panel | QFrame::Sunken);
    ui->frame_7->setFrameStyle( QFrame::Panel | QFrame::Sunken);
    this->setWindowTitle(u8"选课管理");
    this->setWindowIcon(QIcon(":/icon/write.png"));

    information = new Info;

    information->hide();

    // init.
    QList<QVariantList> allDept = DatabaseCourses::readAllDepartment();
    foreach(auto i, allDept)
    {
        QString dept = i[0].toString();
        ui->lesson_dept_comboBox->addItem(dept);
        ui->teacher_dept_comboBox->addItem(dept);
        ui->teacher_dept_comboBox->addItem(dept);
        ui->class_dept_comboBox->addItem(dept);
    }

    QList<QVariantList> allCourse = DatabaseCourses::readAllInstructor();
    ui->class_name_comboBox->clear();
    foreach(auto i, allCourse)
    {
        ui->class_name_comboBox->addItem(i[1].toString());
    }

    QList<QVariantList> allInst = DatabaseCourses::readAllInstructor();
    ui->class_teacher_comboBox->clear();
    foreach(auto i, allInst)
    {
        ui->class_teacher_comboBox->addItem(i[1].toString());
    }

    QList<QVariantList> allRoom = DatabaseCourses::readAllClassroom();
    ui->class_building_comboBox->clear();
    ui->class_room_comboBox->clear();
    foreach(auto i, allRoom)
    {
        ui->class_building_comboBox->addItem(i[0].toString());
        ui->class_room_comboBox->addItem(i[1].toString());
    }

    connect(ui->modified_btn, &QPushButton::clicked, [this](){
        this->hide();
        this->information->show();
    });

    connect(information, &Info::back_btn_clicked, [this](){
        information->hide();
        this->show();
    });

    // 开设课程 即section
    connect(ui->class_btn, &QPushButton::clicked,[this](){
        QString name = ui->class_name_comboBox->currentText();
        QString deptment = ui->class_dept_comboBox->currentText();
        bool ok;
        long long teacher = ui->class_teacher_comboBox->currentText().toLongLong(&ok);
        if(!ok)
        {
            QMessageBox::critical(nullptr, "error", "Unvalid id", QMessageBox::Ok, QMessageBox::Ok);
            return;
        }
        QString building = ui->class_building_comboBox->currentText();
        QString semester = ui->class_semester_comboBox->currentText();

        long long room = ui->class_room_comboBox->currentText().toLongLong(&ok);
        if(!ok)
        {
            QMessageBox::critical(nullptr, "error", "Unvalid room number", QMessageBox::Ok, QMessageBox::Ok);
            return;
        }

        long long year = ui->class_year->text().toLongLong(&ok);
        if(!ok)
        {
            QMessageBox::critical(nullptr, "error", "Unvalid year", QMessageBox::Ok, QMessageBox::Ok);
            return;
        }

        QString time = ui->class_time->text();

        addNewClass(name, deptment, teacher,semester, building, room, year, time);
    });

    // 新增课程
    connect(ui->lesson_btn, &QPushButton::clicked,[this](){
        QString name = ui->lesson_name_lineEdit->text();
        QString deptment = ui->lesson_dept_comboBox->currentText();
        bool ok;
        float credit = ui->lesson_credit_lineEdit->text().toFloat(&ok);
        if(!ok)
        {
            QMessageBox::critical(nullptr, "error", "Unvalid credit", QMessageBox::Ok, QMessageBox::Ok);
            return;
        }
        QString desp = ui->lesson_desp_lineEdit->text();
        addNewLesson(name, deptment, credit, desp);

    });

    // 新增讲师
    connect(ui->teacher_btn, &QPushButton::clicked,[this](){
        QString name = ui->teacher_name_lineEdit->text();
        QString deptment = ui->teacher_dept_comboBox->currentText();
        QString desp = ui->teacher_desp_lineEdit->text();
        addNewTeacher(name, deptment, desp);
    });

    // 新增学生
    connect(ui->student_btn, &QPushButton::clicked,[this](){
        QString name = ui->student_name_lineEdit->text();
        QString deptment = ui->student_dept_comboBox->currentText();
        bool ok;
        long long grade = ui->student_grade->text().toLongLong(&ok);

        if(!ok)
        {
            QMessageBox::critical(nullptr, "error", "Unvalid room number", QMessageBox::Ok, QMessageBox::Ok);
            return;
        }

        addNewStudent(name, grade, deptment);
    });

    // 新增院系
    connect(ui->deptment_btn, &QPushButton::clicked,[this](){
        QString name = ui->deptment_name_lineEdit->text();
        addNewDeptment(name);
    });

    // 新增教学楼
    // 开设课程 即section
    connect(ui->building_btn, &QPushButton::clicked,[this](){
        QString name = ui->building_name_lineEdit->text();

        bool ok;
        long long room = ui->buildin_room_lineEdit->text().toLongLong(&ok);

        if(!ok)
        {
            QMessageBox::critical(nullptr, "error", "Unvalid room number", QMessageBox::Ok, QMessageBox::Ok);
            return;
        }

        long long capacity = ui->building_capacity_lineEdit->text().toLongLong(&ok);

        if(!ok)
        {
            QMessageBox::critical(nullptr, "error", "Unvalid capacity", QMessageBox::Ok, QMessageBox::Ok);
            return;
        }

        addNewRoom(name, room, capacity);
    });
}


void MainWindow::server_New_Connect()
{
    // 获取客户端连接
    socket = server->nextPendingConnection();
    // 连接QTcpSocket的信号槽，以读取新数据
    QObject::connect(socket, &QTcpSocket::readyRead, this, &MainWindow::socket_Read_Data);
    QObject::connect(socket, &QTcpSocket::disconnected, this, &MainWindow::socket_Disconnected);

    qDebug() << "A Client connect!";
}


void MainWindow::socket_Read_Data()
{
    QByteArray buffer;
    // 读取缓冲区数据
    buffer = socket->readAll();
    if(!buffer.isEmpty())
    {
        QString str = "";
        str+=tr(buffer);

        qDebug() << str << endl;
        str = JsonParser().parseRequire(str);
        qDebug() << str;
        socket->write(str.toUtf8().data());
        socket->flush();
    }
}

void MainWindow::socket_Disconnected()
{
    qDebug() << "Disconnected!";
}


MainWindow::~MainWindow()
{
    delete ui;
}

// 开设课程
void MainWindow::addNewClass(QString name, QString deptment, long long teacher, QString semester, QString classBuilding, long long classRoom, long long year, QString time)
{
    QList<QVariantList> allCourse = DatabaseCourses::readAllInstructor();
    long long id = -1;
    foreach(auto i, allCourse)
    {
        if(i[1].toString() == ui->class_name_comboBox->currentText())
        {
            id = i[0].toLongLong();
        };
    }

    if(id == -1)
    {
        QMessageBox::critical(nullptr, "error", "No such course", QMessageBox::Ok, QMessageBox::Ok);
        return;
    }

    DatabaseCourses::addSection(QVariantList() << id << teacher << semester << year << time << classBuilding << classRoom);
}

// 新增课程
void MainWindow::addNewLesson(QString name, QString deptment, float credit, QString description)
{
    DatabaseCourses::addCourse(QVariantList() << name << description << credit << deptment);

    QList<QVariantList> allCourse = DatabaseCourses::readAllInstructor();
    ui->class_name_comboBox->clear();
    foreach(auto i, allCourse)
    {
        ui->class_name_comboBox->addItem(i[1].toString());
    }
}

// 新增讲师
void MainWindow::addNewTeacher(QString name, QString deptment, QString description)
{
    DatabaseCourses::addInstructor(QVariantList() << name << deptment << description);

    QList<QVariantList> allInst = DatabaseCourses::readAllInstructor();
    ui->class_teacher_comboBox->clear();
    foreach(auto i, allInst)
    {
        ui->class_teacher_comboBox->addItem(i[1].toString());
    }
}

// 新增学生
void MainWindow::addNewStudent(QString name, long long grade, QString deptment)
{
    DatabaseCourses::addStudent(QVariantList() << name << grade << 0 << deptment);
}

// 新增院系
void MainWindow::addNewDeptment(QString name)
{
    DatabaseCourses::addDepartment(QVariantList() << name);

    QList<QVariantList> allDept = DatabaseCourses::readAllDepartment();
    ui->lesson_dept_comboBox->clear();
    ui->teacher_dept_comboBox->clear();
    ui->teacher_dept_comboBox->clear();
    ui->class_dept_comboBox->clear();
    foreach(auto i, allDept)
    {
        QString dept = i[1].toString();
        ui->lesson_dept_comboBox->addItem(dept);
        ui->teacher_dept_comboBox->addItem(dept);
        ui->teacher_dept_comboBox->addItem(dept);
        ui->class_dept_comboBox->addItem(dept);
    }
}

// 新增教学楼或教室
void MainWindow::addNewRoom(QString building, long long room, long long capacity)
{
    DatabaseCourses::addClassRoom(QVariantList() << building << room << capacity);

    QList<QVariantList> allRoom = DatabaseCourses::readAllClassroom();
    ui->class_building_comboBox->clear();
    ui->class_room_comboBox->clear();
    foreach(auto i, allRoom)
    {
        ui->class_building_comboBox->addItem(i[0].toString());
        ui->class_room_comboBox->addItem(i[1].toString());
    }
}

