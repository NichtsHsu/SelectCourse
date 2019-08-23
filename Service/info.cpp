#include "info.h"
#include "ui_info.h"
#include <QIcon>
#include <QPushButton>
#include <QTableWidget>
#include <QLabel>
#include <QHBoxLayout>
#include <QMessageBox>


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


    // 设置学生选课信息表
    ui->student_class_tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->student_class_tableWidget->horizontalHeader()->setStretchLastSection(true); //设置充满表宽度
    ui->student_class_tableWidget->verticalHeader()->setDefaultSectionSize(50); //设置行高
    ui->student_class_tableWidget->setFrameShape(QFrame::NoFrame); //设置无边框
    ui->student_class_tableWidget->setShowGrid(false); //设置不显示格子线
    ui->student_class_tableWidget->verticalHeader()->setVisible(false); //设置垂直头不可见
    ui->student_class_tableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);  //可多选（Ctrl、Shift、  Ctrl+A都可以）
    ui->student_class_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);  //设置选择行为时每次选择一行
    ui->student_class_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置不可编辑
    ui->student_class_tableWidget->setStyleSheet("selection-background-color:lightblue;"); //设置选中背景色
    ui->student_class_tableWidget->setFocusPolicy(Qt::NoFocus);//去除选中虚线框
    ui->student_class_tableWidget->horizontalHeader()->setSectionsClickable(false); //设置表头不可点击（默认点击后进行排序）
    ui->student_class_tableWidget->setColumnCount(7); //设置列数
    //设置表头内容
    QStringList header0;
    header0<<tr(u8"课程ID")<<tr(u8"课程名称")<<tr(u8"空")<<tr(u8"学院")<<tr(u8"讲师")<<tr(u8"地点")<<tr(u8"时间");
    ui->student_class_tableWidget->setHorizontalHeaderLabels(header0);


    // 设置deptment 表
    ui->dept_tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->dept_tableWidget->horizontalHeader()->setStretchLastSection(true); //设置充满表宽度
    ui->dept_tableWidget->verticalHeader()->setDefaultSectionSize(50); //设置行高
    ui->dept_tableWidget->setFrameShape(QFrame::NoFrame); //设置无边框
    ui->dept_tableWidget->setShowGrid(false); //设置不显示格子线
    ui->dept_tableWidget->verticalHeader()->setVisible(false); //设置垂直头不可见
    ui->dept_tableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);  //可多选（Ctrl、Shift、  Ctrl+A都可以）
    ui->dept_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);  //设置选择行为时每次选择一行
    ui->dept_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置不可编辑
    ui->dept_tableWidget->setStyleSheet("selection-background-color:lightblue;"); //设置选中背景色
    ui->dept_tableWidget->setFocusPolicy(Qt::NoFocus);//去除选中虚线框
    ui->dept_tableWidget->horizontalHeader()->setSectionsClickable(false); //设置表头不可点击（默认点击后进行排序）
    ui->dept_tableWidget->setColumnCount(2); //设置列数
    //设置表头内容
    QStringList header1;
    header1<<tr(u8"学院ID")<<tr(u8"学院名称");
    ui->dept_tableWidget->setHorizontalHeaderLabels(header1);


    // 设置building 表
    ui->building_tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->building_tableWidget->horizontalHeader()->setStretchLastSection(true); //设置充满表宽度
    ui->building_tableWidget->verticalHeader()->setDefaultSectionSize(50); //设置行高
    ui->building_tableWidget->setFrameShape(QFrame::NoFrame); //设置无边框
    ui->building_tableWidget->setShowGrid(false); //设置不显示格子线
    ui->building_tableWidget->verticalHeader()->setVisible(false); //设置垂直头不可见
    ui->building_tableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);  //可多选（Ctrl、Shift、  Ctrl+A都可以）
    ui->building_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);  //设置选择行为时每次选择一行
    ui->building_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置不可编辑
    ui->building_tableWidget->setStyleSheet("selection-background-color:lightblue;"); //设置选中背景色
    ui->building_tableWidget->setFocusPolicy(Qt::NoFocus);//去除选中虚线框
    ui->building_tableWidget->horizontalHeader()->setSectionsClickable(false); //设置表头不可点击（默认点击后进行排序）
    ui->building_tableWidget->setColumnCount(3); //设置列数
    //设置表头内容
    QStringList header2;
    header2<<tr(u8"教学楼名称")<<tr(u8"房间号")<<tr(u8"容量");
    ui->building_tableWidget->setHorizontalHeaderLabels(header2);


    // 设置teacher 表
    ui->teacher_tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->teacher_tableWidget->horizontalHeader()->setStretchLastSection(true); //设置充满表宽度
    ui->teacher_tableWidget->verticalHeader()->setDefaultSectionSize(50); //设置行高
    ui->teacher_tableWidget->setFrameShape(QFrame::NoFrame); //设置无边框
    ui->teacher_tableWidget->setShowGrid(false); //设置不显示格子线
    ui->teacher_tableWidget->verticalHeader()->setVisible(false); //设置垂直头不可见
    ui->teacher_tableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);  //可多选（Ctrl、Shift、  Ctrl+A都可以）
    ui->teacher_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);  //设置选择行为时每次选择一行
    ui->teacher_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置不可编辑
    ui->teacher_tableWidget->setStyleSheet("selection-background-color:lightblue;"); //设置选中背景色
    ui->teacher_tableWidget->horizontalHeader()->setSectionsClickable(false); //设置表头不可点击（默认点击后进行排序）
    ui->teacher_tableWidget->setFocusPolicy(Qt::NoFocus);//去除选中虚线框
    ui->teacher_tableWidget->setColumnCount(4); //设置列数
    //设置表头内容
    QStringList header3;
    header3<<tr(u8"讲师ID")<<tr(u8"讲师名字")<<tr(u8"院系")<<tr(u8"简介");
    ui->teacher_tableWidget->setHorizontalHeaderLabels(header3);


    // 设置lesson 表
    ui->lesson_tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->lesson_tableWidget->horizontalHeader()->setStretchLastSection(true); //设置充满表宽度
    ui->lesson_tableWidget->verticalHeader()->setDefaultSectionSize(50); //设置行高
    ui->lesson_tableWidget->setFrameShape(QFrame::NoFrame); //设置无边框
    ui->lesson_tableWidget->setShowGrid(false); //设置不显示格子线
    ui->lesson_tableWidget->verticalHeader()->setVisible(false); //设置垂直头不可见
    ui->lesson_tableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);  //可多选（Ctrl、Shift、  Ctrl+A都可以）
    ui->lesson_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);  //设置选择行为时每次选择一行
    ui->lesson_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置不可编辑
    ui->lesson_tableWidget->setStyleSheet("selection-background-color:lightblue;"); //设置选中背景色
    ui->lesson_tableWidget->setFocusPolicy(Qt::NoFocus);//去除选中虚线框
    ui->lesson_tableWidget->horizontalHeader()->setSectionsClickable(false); //设置表头不可点击（默认点击后进行排序）
    ui->lesson_tableWidget->setColumnCount(5); //设置列数
    //设置表头内容
    QStringList header4;
    header4<<tr(u8"课程ID")<<tr(u8"课程名称")<<tr(u8"学院")<<tr(u8"学分")<<tr(u8"简介");
    ui->lesson_tableWidget->setHorizontalHeaderLabels(header4);


    // 设置account 学生账号 表
    ui->account_tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->account_tableWidget->horizontalHeader()->setStretchLastSection(true); //设置充满表宽度
    ui->account_tableWidget->verticalHeader()->setDefaultSectionSize(50); //设置行高
    ui->account_tableWidget->setFrameShape(QFrame::NoFrame); //设置无边框
    ui->account_tableWidget->setShowGrid(false); //设置不显示格子线
    ui->account_tableWidget->verticalHeader()->setVisible(false); //设置垂直头不可见
    ui->account_tableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);  //可多选（Ctrl、Shift、  Ctrl+A都可以）
    ui->account_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);  //设置选择行为时每次选择一行
    ui->account_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置不可编辑
    ui->account_tableWidget->setStyleSheet("selection-background-color:lightblue;"); //设置选中背景色
    ui->account_tableWidget->setFocusPolicy(Qt::NoFocus);//去除选中虚线框
    ui->account_tableWidget->horizontalHeader()->setSectionsClickable(false); //设置表头不可点击（默认点击后进行排序）
    ui->account_tableWidget->setColumnCount(2); //设置列数
    //设置表头内容
    QStringList header5;
    header5<<tr(u8"学号")<<tr(u8"密码");
    ui->account_tableWidget->setHorizontalHeaderLabels(header5);


    // 设置student 表
    ui->student_tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->student_tableWidget->horizontalHeader()->setStretchLastSection(true); //设置充满表宽度
    ui->student_tableWidget->verticalHeader()->setDefaultSectionSize(50); //设置行高
    ui->student_tableWidget->setFrameShape(QFrame::NoFrame); //设置无边框
    ui->student_tableWidget->setShowGrid(false); //设置不显示格子线
    ui->student_tableWidget->verticalHeader()->setVisible(false); //设置垂直头不可见
    ui->student_tableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);  //可多选（Ctrl、Shift、  Ctrl+A都可以）
    ui->student_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);  //设置选择行为时每次选择一行
    ui->student_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置不可编辑
    ui->student_tableWidget->setStyleSheet("selection-background-color:lightblue;"); //设置选中背景色
    ui->student_tableWidget->setFocusPolicy(Qt::NoFocus);//去除选中虚线框
    ui->student_tableWidget->horizontalHeader()->setSectionsClickable(false); //设置表头不可点击（默认点击后进行排序）
    ui->student_tableWidget->setColumnCount(4); //设置列数
    //设置表头内容
    QStringList header6;
    header6<<tr(u8"学号")<<tr(u8"学生姓名")<<tr(u8"学院")<<tr(u8"年级");
    ui->student_tableWidget->setHorizontalHeaderLabels(header6);


    // 设置class 表
    ui->class_tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->class_tableWidget->horizontalHeader()->setStretchLastSection(true); //设置充满表宽度
    ui->class_tableWidget->verticalHeader()->setDefaultSectionSize(50); //设置行高
    ui->class_tableWidget->setFrameShape(QFrame::NoFrame); //设置无边框
    ui->class_tableWidget->setShowGrid(false); //设置不显示格子线
    ui->class_tableWidget->verticalHeader()->setVisible(false); //设置垂直头不可见
    ui->class_tableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);  //可多选（Ctrl、Shift、  Ctrl+A都可以）
    ui->class_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);  //设置选择行为时每次选择一行
    ui->class_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置不可编辑
    ui->class_tableWidget->setStyleSheet("selection-background-color:lightblue;"); //设置选中背景色
    ui->class_tableWidget->setFocusPolicy(Qt::NoFocus);//去除选中虚线框
    ui->class_tableWidget->horizontalHeader()->setSectionsClickable(false); //设置表头不可点击（默认点击后进行排序）
    ui->class_tableWidget->setColumnCount(4); //设置列数
    //设置表头内容
    QStringList header7;
    header7<<tr(u8"课程ID")<<tr(u8"课程名称")<<tr(u8"学院")<<tr(u8"时间");
    ui->class_tableWidget->setHorizontalHeaderLabels(header7);


    // 查找开课信息
    connect(ui->class_Btn, &QPushButton::clicked, [this](){
        QString ID = ui->class_ID_lineEdit->text();
        QString name = ui->class_name_lineEdit->text();
        QString dept = ui->class_dept_lineEdit->text();
        QString time = ui->class_time_lineEdit->text();

        searchClass(ID, name, dept, time);
    });

    // 查找课程信息
    connect(ui->lesson_Btn, &QPushButton::clicked, [this](){
        QString ID = ui->lesson_ID_lineEdit->text();
        QString name = ui->lesson_name_lineEdit->text();
        QString dept = ui->lesson_dept_lineEdit->text();
        QString creditString = ui->lesson_credit_lineEdit->text();
        double credit = 0;
        if(!creditString.isEmpty())
        {
            bool ok;
            credit = ui->lesson_credit_lineEdit->text().toDouble(&ok);
            if(!ok)
            {
            QMessageBox::critical(nullptr, "error", "Unvalid credit", QMessageBox::Ok, QMessageBox::Ok);
            return;
            }
        }

        searchLesson(ID, name, dept, credit);
    });

    // 查找讲师信息
    connect(ui->teacher_Btn, &QPushButton::clicked, [this](){
        QString ID = ui->teacher_ID_lineEdit->text();
        QString name = ui->teacher_name_lineEdit->text();
        QString dept = ui->teacher_dept_lineEdit->text();

        searchTeacher(ID, name, dept);
    });

    // 查找学生
    connect(ui->student_Btn, &QPushButton::clicked, [this](){
       QString ID = ui->student_ID_lineEdit->text();
       QString name = ui->student_name_lineEdit->text();
       QString dept = ui->student_dept_lineEdit->text();
       QString grade = ui->student_grade_lineEdit->text();

       searchStudent(ID, name, dept, grade);
    });

    // 查找学院
    connect(ui->dept_Btn, &QPushButton::clicked, [this](){
       QString dept = ui->dept_lineEdit->text();

       searchDept(dept);
    });

    // 查找教学楼
    connect(ui->building_Btn, &QPushButton::clicked, [this](){
        QString building = ui->building_building_lineEdit->text();
        QString room = ui->building_room_lineEdit->text();
        QString capa = ui->building_capacity_lineEdit->text();
        int capacity = 0;
        if(!capa.isEmpty())
        {
            bool ok;
            capacity = capa.toInt(&ok);
            if(!ok)
            {
            QMessageBox::critical(nullptr, "error", "Unvalid capacity", QMessageBox::Ok, QMessageBox::Ok);
            return;
            }
        }

        searchBuilding(building, room, capacity);
    });

    // 查找学生账号
    connect(ui->account_Btn, &QPushButton::clicked, [this](){
        QString ID = ui->account_lineEdit->text();

        searchAccount(ID);
    });

    // 查找学生选课信息
    connect(ui->stuclass_Btn, &QPushButton::clicked, [this](){
       QString ID = ui->stuclass_ID_lineEdit->text();

       searchStudentClass(ID);
    });

}

Info::~Info()
{
    delete ui;
}


void Info::addBuildingLine(QString building, QString room, int capacity)
{
    ui->building_tableWidget->setRowCount(ui->building_tableWidget->rowCount()+1);
    int row=ui->building_tableWidget->rowCount();
//1
    QWidget *widget_1=new QWidget;

    QHBoxLayout *layout_1 = new QHBoxLayout();
    layout_1->addWidget((new QLabel(building)));
    widget_1->setLayout(layout_1);

    ui->building_tableWidget->setCellWidget(row-1,0,widget_1);

//2
    QWidget *widget_2=new QWidget;

    QHBoxLayout *layout_2 = new QHBoxLayout();
    layout_2->addWidget((new QLabel(room)));
    widget_2->setLayout(layout_2);

    ui->building_tableWidget->setCellWidget(row-1,2,widget_2);

//3
    QWidget *widget_3=new QWidget;

    QHBoxLayout *layout_3 = new QHBoxLayout();
    layout_3->addWidget((new QLabel(QString::number(capacity))));
    widget_3->setLayout(layout_3);

    ui->building_tableWidget->setCellWidget(row-1,1,widget_3);
}

void Info::addDeptLine(QString ID, QString name)
{
    ui->dept_tableWidget->setRowCount(ui->dept_tableWidget->rowCount()+1);
    int row=ui->dept_tableWidget->rowCount();
//1
    QWidget *widget_1=new QWidget;
    QHBoxLayout *layout_1 = new QHBoxLayout();
    layout_1->addWidget((new QLabel(ID)));
    widget_1->setLayout(layout_1);
    ui->dept_tableWidget->setCellWidget(row-1,0,widget_1);

//2
    QWidget *widget_2=new QWidget;
    QHBoxLayout *layout_2 = new QHBoxLayout();
    layout_2->addWidget((new QLabel(name)));
    widget_2->setLayout(layout_2);
    ui->dept_tableWidget->setCellWidget(row-1,1,widget_2);

}

void Info::addTeacherLine(QString ID, QString name, QString deptment, QString desp)
{
    ui->teacher_tableWidget->setRowCount(ui->teacher_tableWidget->rowCount()+1);
    int row=ui->teacher_tableWidget->rowCount();
//1
    QWidget *widget_1=new QWidget;
    QHBoxLayout *layout_1 = new QHBoxLayout();
    layout_1->addWidget((new QLabel(ID)));
    widget_1->setLayout(layout_1);
    ui->teacher_tableWidget->setCellWidget(row-1,0,widget_1);

//2
    QWidget *widget_2=new QWidget;
    QHBoxLayout *layout_2 = new QHBoxLayout();
    layout_2->addWidget((new QLabel(name)));
    widget_2->setLayout(layout_2);
    ui->teacher_tableWidget->setCellWidget(row-1,1,widget_2);

//3
    QWidget *widget_3=new QWidget;
    QHBoxLayout *layout_3 = new QHBoxLayout();
    layout_3->addWidget((new QLabel(deptment)));
    widget_3->setLayout(layout_3);
    ui->teacher_tableWidget->setCellWidget(row-1,2,widget_3);

//4
    QWidget *widget_4=new QWidget;
    QHBoxLayout *layout_4 = new QHBoxLayout();
    layout_4->addWidget((new QLabel(desp)));
    widget_4->setLayout(layout_4);
    ui->teacher_tableWidget->setCellWidget(row-1,3,widget_4);
}

void Info::addAccountLine(QString ID, QString password)
{
    ui->account_tableWidget->setRowCount(ui->account_tableWidget->rowCount()+1);
    int row=ui->account_tableWidget->rowCount();
//1
    QWidget *widget_1=new QWidget;
    QHBoxLayout *layout_1 = new QHBoxLayout();
    layout_1->addWidget((new QLabel(ID)));
    widget_1->setLayout(layout_1);
    ui->account_tableWidget->setCellWidget(row-1,0,widget_1);

//2
    QWidget *widget_2=new QWidget;
    QHBoxLayout *layout_2 = new QHBoxLayout();
    layout_2->addWidget((new QLabel(password)));
    widget_2->setLayout(layout_2);
    ui->account_tableWidget->setCellWidget(row-1,1,widget_2);

}

void Info::addLessonLine(QString ID, QString name, QString deptment, double credit, QString desp)
{
    ui->lesson_tableWidget->setRowCount(ui->lesson_tableWidget->rowCount()+1);
    int row=ui->lesson_tableWidget->rowCount();

//1
    QWidget *widget_1=new QWidget;
    QHBoxLayout *layout_1 = new QHBoxLayout();
    layout_1->addWidget((new QLabel(ID)));
    widget_1->setLayout(layout_1);
    ui->lesson_tableWidget->setCellWidget(row-1,0,widget_1);

//2
    QWidget *widget_2=new QWidget;
    QHBoxLayout *layout_2 = new QHBoxLayout();
    layout_2->addWidget((new QLabel(name)));
    widget_2->setLayout(layout_2);
    ui->lesson_tableWidget->setCellWidget(row-1,1,widget_2);

//3
    QWidget *widget_3 = new QWidget();
    QHBoxLayout *layout_3 = new QHBoxLayout();
    layout_3->addWidget((new QLabel(deptment)));
    widget_3->setLayout(layout_3);
    ui->lesson_tableWidget->setCellWidget(row-1,2,widget_3);

//4
    QWidget *widget_4 = new QWidget();
    QHBoxLayout *layout_4 = new QHBoxLayout();
    layout_4->addWidget((new QLabel(QString::number(credit,'f',1))));
    widget_4->setLayout(layout_4);
    ui->lesson_tableWidget->setCellWidget(row-1,3,widget_4);

//5
    QWidget *widget_5 =new QWidget();
    QHBoxLayout *layout_5 = new QHBoxLayout();
    layout_5->addWidget((new QLabel(desp)));
    widget_5->setLayout(layout_5);
    ui->lesson_tableWidget->setCellWidget(row-1,4,widget_5);

}

void Info::addStudentLine(QString ID, QString name, QString deptment, QString grade)
{
    ui->student_tableWidget->setRowCount(ui->student_tableWidget->rowCount()+1);
    int row=ui->student_tableWidget->rowCount();

//1
    QWidget *widget_1=new QWidget();
    QHBoxLayout *layout_1 = new QHBoxLayout();
    layout_1->addWidget((new QLabel(ID)));
    widget_1->setLayout(layout_1);
    ui->student_tableWidget->setCellWidget(row-1,0,widget_1);

//2
    QWidget *widget_2=new QWidget();
    QHBoxLayout *layout_2 = new QHBoxLayout();
    layout_2->addWidget((new QLabel(name)));
    widget_2->setLayout(layout_2);
    ui->student_tableWidget->setCellWidget(row-1,1,widget_2);

//3
    QWidget *widget_3 = new QWidget();
    QHBoxLayout *layout_3 = new QHBoxLayout();
    layout_3->addWidget((new QLabel(deptment)));
    widget_3->setLayout(layout_3);
    ui->student_tableWidget->setCellWidget(row-1,2,widget_3);

//4
    QWidget *widget_4 = new QWidget();
    QHBoxLayout *layout_4 = new QHBoxLayout();
    layout_4->addWidget((new QLabel(grade)));
    widget_4->setLayout(layout_4);
    ui->student_tableWidget->setCellWidget(row-1,3,widget_4);

}

void Info::addClassLine(QString ID, QString name, QString deptment, QString time)
{
    ui->class_tableWidget->setRowCount(ui->class_tableWidget->rowCount()+1);
    int row=ui->class_tableWidget->rowCount();

//1
    QWidget *widget_1=new QWidget();
    QHBoxLayout *layout_1 = new QHBoxLayout();
    layout_1->addWidget((new QLabel(ID)));
    widget_1->setLayout(layout_1);
    ui->class_tableWidget->setCellWidget(row-1,0,widget_1);

//2
    QWidget *widget_2=new QWidget();
    QHBoxLayout *layout_2 = new QHBoxLayout();
    layout_2->addWidget((new QLabel(name)));
    widget_2->setLayout(layout_2);
    ui->class_tableWidget->setCellWidget(row-1,1,widget_2);

//3
    QWidget *widget_3 = new QWidget();
    QHBoxLayout *layout_3 = new QHBoxLayout();
    layout_3->addWidget((new QLabel(deptment)));
    widget_3->setLayout(layout_3);
    ui->class_tableWidget->setCellWidget(row-1,2,widget_3);

//4
    QWidget *widget_4 = new QWidget();
    QHBoxLayout *layout_4 = new QHBoxLayout();
    layout_4->addWidget((new QLabel(time)));
    widget_4->setLayout(layout_4);
    ui->class_tableWidget->setCellWidget(row-1,3,widget_4);
}

//以下未实现
// 查找教学楼
void Info::searchBuilding(QString building, QString room, int capaticy)
{
    ui->building_tableWidget->clearContents();
}

// 查找学院
void Info::searchDept(QString dept)
{
    ui->dept_tableWidget->clearContents();
}

// 查找讲师
void Info::searchTeacher(QString ID, QString name, QString dept)
{
   ui->teacher_tableWidget->clearContents();
}

// 查找学生
void Info::searchStudent(QString ID, QString name, QString dept, QString grade)
{
    ui->student_tableWidget->clearContents();
}

// 查找学生账号密码
void Info::searchAccount(QString ID)
{
    ui->account_tableWidget->clearContents();
}

// 查找课程信息
void Info::searchLesson(QString ID, QString name, QString dept,double credit)
{
    ui->lesson_tableWidget->clearContents();
}

// 查找开课信息
void Info::searchClass(QString ID, QString name, QString dept, QString time)
{
    ui->class_tableWidget->clearContents();
}

// 查找学生选课信息
void Info::searchStudentClass(QString ID)
{
    ui->student_class_tableWidget->clearContents();
}
