#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFrame>
#include <QPushButton>
#include <QMessageBox>
#include <QIcon>
MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

   // this->showMaximized();

    ui->frame->setFrameStyle( QFrame::Panel | QFrame::Sunken);
    ui->frame_2->setFrameStyle( QFrame::Panel | QFrame::Sunken);
    ui->frame_3->setFrameStyle( QFrame::Panel | QFrame::Sunken);
    ui->frame_4->setFrameStyle( QFrame::Panel | QFrame::Sunken);
    ui->frame_6->setFrameStyle( QFrame::Panel | QFrame::Sunken);
    ui->frame_7->setFrameStyle( QFrame::Panel | QFrame::Sunken);
    this->setWindowTitle(u8"选课管理");
    this->setWindowIcon(QIcon(":/icon/write.png"));

    information = new Info();

    information->hide();

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
        QString ID = ui->class_ID_comboBox->currentText();
        QString deptment = ui->class_dept_comboBox->currentText();
        QString teacher = ui->class_teacher_comboBox->currentText();
        QString building = ui->class_building_comboBox->currentText();
        QString room = ui->class_room_comboBox->currentText();
        QString time = "a";

        if(time == "a")
        {
            addNewClass(name,ID,deptment,teacher,building,room,time);
        }
    });

    // 新增课程
    connect(ui->lesson_btn, &QPushButton::clicked,[this](){
        QString name = ui->lesson_name_lineEdit->text();
        QString ID = ui->lesson_ID_lineEdit->text();
        QString deptment = ui->lesson_dept_comboBox->currentText();

        bool ok;
        float credit = ui->lesson_credit_lineEdit->text().toFloat(&ok);
        if(!ok)
        {
            QMessageBox::critical(nullptr, "error", "Unvalid credit", QMessageBox::Ok, QMessageBox::Ok);
            return;
        }

        QString desp = ui->lesson_desp_lineEdit->text();

        addNewLesson(name, ID, deptment, credit, desp);

    });

    // 新增讲师
    connect(ui->teacher_btn, &QPushButton::clicked,[this](){
        QString name = ui->teacher_name_lineEdit->text();
        QString ID = ui->teacher_ID_lineEdit->text();
        QString deptment = ui->teacher_dept_comboBox->currentText();
        QString desp = ui->teacher_desp_lineEdit->text();

        addNewTeacher(name, ID, deptment, desp);
    });

    // 新增学生
    connect(ui->student_btn, &QPushButton::clicked,[this](){
        QString name = ui->student_name_lineEdit->text();
        QString ID = ui->student_ID_lineEdit->text();
        QString deptment = ui->student_dept_comboBox->currentText();

        addNewStudent(name, ID, deptment);
    });

    // 新增院系
    connect(ui->deptment_btn, &QPushButton::clicked,[this](){
        QString name = ui->deptment_name_lineEdit->text();
        QString ID = ui->deptment_ID_lineEdit_2->text();

        addNewDeptment(name, ID);
    });

    // 新增教学楼
    // 开设课程 即section
    connect(ui->building_btn, &QPushButton::clicked,[this](){
        QString name = ui->building_name_lineEdit->text();
        QString room = ui->buildin_room_lineEdit->text();

        bool ok;
        int capacity = ui->building_capacity_lineEdit->text().toInt(&ok, 10);

        if(!ok)
        {
            QMessageBox::critical(nullptr, "error", "Unvalid capacity", QMessageBox::Ok, QMessageBox::Ok);
            return;
        }

        addNewRoom(name,room, capacity);
    });
}




MainWindow::~MainWindow()
{
    delete ui;
}

// 开设课程
void MainWindow::addNewClass(QString name, QString ID, QString deptment, QString teacher, QString classBuilding, QString classRoom, QString time)
{

}

// 新增课程
void MainWindow::addNewLesson(QString name, QString ID, QString deptment, float credit, QString description)
{

}

// 新增讲师
void MainWindow::addNewTeacher(QString name, QString ID, QString deptment, QString description)
{

}

// 新增学生
void MainWindow::addNewStudent(QString name, QString ID, QString deptment)
{

}

// 新增院系
void MainWindow::addNewDeptment(QString name, QString ID)
{

}

// 新增教学楼或教室
void MainWindow::addNewRoom(QString building, QString room, int capacity)
{

}

