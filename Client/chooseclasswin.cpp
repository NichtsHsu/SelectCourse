#include "chooseclasswin.h"
#include "ui_chooseclasswin.h"
#include <QScrollBar>
#include <QTextCodec>
#include <QLabel>
ChooseClassWin::ChooseClassWin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChooseClassWin)
{
    ui->setupUi(this);
    this->showMaximized();
    ui->chooseCoursesTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);




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

    addLine();

}


ChooseClassWin::~ChooseClassWin()
{
    delete ui;
}

void ChooseClassWin::addLine()
{
    ui->CoursesList->setRowCount(ui->CoursesList->rowCount()+1);
    int row=ui->CoursesList->rowCount();
//1
    QWidget *widget_1=new QWidget;

    QHBoxLayout *layout_1 = new QHBoxLayout();
    layout_1->addWidget((new QLabel(u8"数据库系统")));
    widget_1->setLayout(layout_1);

    ui->CoursesList->setCellWidget(row-1,0,widget_1);

//2
    QWidget *widget_2=new QWidget;

    QHBoxLayout *layout_2 = new QHBoxLayout();
    layout_2->addWidget((new QLabel("123")));
    widget_2->setLayout(layout_2);

    ui->CoursesList->setCellWidget(row-1,1,widget_2);

//3
    QWidget *widget_3=new QWidget;

    QHBoxLayout *layout_3 = new QHBoxLayout();
    layout_3->addWidget((new QLabel(u8"lin")));
    widget_3->setLayout(layout_3);

    ui->CoursesList->setCellWidget(row-1,2,widget_3);

//4
    QWidget *x=new QWidget;

    QHBoxLayout *l = new QHBoxLayout();
    l->addWidget((new QPushButton(u8"查看课程简介")));
    x->setLayout(l);

    ui->CoursesList->setCellWidget(row-1,3,x);

//5
    QWidget *widget_5=new QWidget;

    QHBoxLayout *layout_5 = new QHBoxLayout();
    layout_5->addWidget((new QLabel("2.5")));
    widget_5->setLayout(layout_5);

    ui->CoursesList->setCellWidget(row-1,4,widget_5);

//6
    QWidget *widget_6=new QWidget;

    QHBoxLayout *layout_6 = new QHBoxLayout();
    layout_6->addWidget((new QLabel(u8"周一 5-6节")));
    widget_6->setLayout(layout_6);

    ui->CoursesList->setCellWidget(row-1,5,widget_6);

//7
    QWidget *widget_7=new QWidget;

    QHBoxLayout *layout_7 = new QHBoxLayout();
    layout_7->addWidget((new QPushButton(u8"选课")));
    widget_7->setLayout(layout_7);

    ui->CoursesList->setCellWidget(row-1,6,widget_7);

}
