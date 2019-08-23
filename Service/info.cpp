#include "info.h"
#include "ui_info.h"
#include <QIcon>
#include <QPushButton>
#include <QTableView>
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

    models[0] = new QueryModel(qApp->applicationDirPath() + QString("/database/courses.db"), "department", QString(), QString(), 0, this);
    ui->dept_tableView->setModel(models[0]);
    ui->dept_tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    models[1] = new QueryModel(qApp->applicationDirPath() + QString("/database/courses.db"), "classroom", QString(), QString(), 0, this);
    ui->building_tableView->setModel(models[1]);
    ui->building_tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    models[2] = new QueryModel(qApp->applicationDirPath() + QString("/database/courses.db"), "instructor", QString(), QString(), 0, this);
    ui->teacher_tableView->setModel(models[2]);
    ui->teacher_tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    models[3] = new QueryModel(qApp->applicationDirPath() + QString("/database/courses.db"), "course", QString(), QString(), 0, this);
    ui->lesson_tableView->setModel(models[3]);
    ui->lesson_tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    models[4] = new QueryModel(qApp->applicationDirPath() + QString("/database/students.db"), "accounts", QString(), QString(), 0, this);
    ui->account_tableView->setModel(models[4]);
    ui->account_tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    models[5] = new QueryModel(qApp->applicationDirPath() + QString("/database/courses.db"), "section", QString(), QString(), 0, this);
    ui->class_tableView->setModel(models[5]);
    ui->class_tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    models[6] = new QueryModel(qApp->applicationDirPath() + QString("/database/courses.db"), "student", QString(), QString(), 0, this);
    ui->student_tableView->setModel(models[6]);
    ui->student_tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

Info::~Info()
{
    delete ui;
}

void Info::showEvent(QShowEvent *ev)
{
    for(int i = 0; i < 7; i++)
        models[i]->__refresh();

    ev->accept();
}
