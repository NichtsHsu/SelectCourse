/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "message/message.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLineEdit *lesson_name_lineEdit;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_6;
    QComboBox *lesson_dept_comboBox;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_5;
    QLineEdit *lesson_credit_lineEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLineEdit *lesson_desp_lineEdit;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *lesson_btn;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLineEdit *teacher_name_lineEdit;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_10;
    QComboBox *teacher_dept_comboBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_29;
    QLineEdit *teacher_desp_lineEdit;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *teacher_btn;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_32;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_30;
    QLineEdit *student_name_lineEdit;
    QSpacerItem *horizontalSpacer_16;
    QLabel *label_33;
    QLineEdit *student_ID_lineEdit;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_31;
    QComboBox *student_dept_comboBox;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_4;
    QLineEdit *student_grade;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *student_btn;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_15;
    QComboBox *class_name_comboBox;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_16;
    QComboBox *class_dept_comboBox;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_17;
    QComboBox *class_teacher_comboBox;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout;
    QComboBox *class_building_comboBox;
    QComboBox *class_room_comboBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_9;
    QLineEdit *class_year;
    QSpacerItem *horizontalSpacer_19;
    QLabel *label_11;
    QComboBox *class_semester_comboBox;
    QSpacerItem *horizontalSpacer_18;
    QLabel *label_18;
    QLineEdit *class_time;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *class_btn;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_20;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_21;
    QLineEdit *deptment_name_lineEdit;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *deptment_btn;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_23;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_24;
    QLineEdit *building_name_lineEdit;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_25;
    QLineEdit *buildin_room_lineEdit;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_26;
    QLineEdit *building_capacity_lineEdit;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *building_btn;
    QPushButton *modified_btn;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    MessageBox *textEdit;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1193, 845);
        gridLayout = new QGridLayout(MainWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(MainWindow);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(tab);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(label_2);

        lesson_name_lineEdit = new QLineEdit(frame);
        lesson_name_lineEdit->setObjectName(QString::fromUtf8("lesson_name_lineEdit"));

        horizontalLayout_6->addWidget(lesson_name_lineEdit);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        lesson_dept_comboBox = new QComboBox(frame);
        lesson_dept_comboBox->setObjectName(QString::fromUtf8("lesson_dept_comboBox"));

        horizontalLayout_6->addWidget(lesson_dept_comboBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(label_5);

        lesson_credit_lineEdit = new QLineEdit(frame);
        lesson_credit_lineEdit->setObjectName(QString::fromUtf8("lesson_credit_lineEdit"));

        horizontalLayout_6->addWidget(lesson_credit_lineEdit);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_8->addWidget(label_7);

        lesson_desp_lineEdit = new QLineEdit(frame);
        lesson_desp_lineEdit->setObjectName(QString::fromUtf8("lesson_desp_lineEdit"));

        horizontalLayout_8->addWidget(lesson_desp_lineEdit);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);

        lesson_btn = new QPushButton(frame);
        lesson_btn->setObjectName(QString::fromUtf8("lesson_btn"));

        horizontalLayout_8->addWidget(lesson_btn);


        verticalLayout_4->addLayout(horizontalLayout_8);


        verticalLayout_2->addWidget(frame);

        frame_2 = new QFrame(tab);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_5->addWidget(label_8);

        teacher_name_lineEdit = new QLineEdit(frame_2);
        teacher_name_lineEdit->setObjectName(QString::fromUtf8("teacher_name_lineEdit"));

        horizontalLayout_5->addWidget(teacher_name_lineEdit);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);

        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_5->addWidget(label_10);

        teacher_dept_comboBox = new QComboBox(frame_2);
        teacher_dept_comboBox->setObjectName(QString::fromUtf8("teacher_dept_comboBox"));

        horizontalLayout_5->addWidget(teacher_dept_comboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_29 = new QLabel(frame_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        horizontalLayout_7->addWidget(label_29);

        teacher_desp_lineEdit = new QLineEdit(frame_2);
        teacher_desp_lineEdit->setObjectName(QString::fromUtf8("teacher_desp_lineEdit"));

        horizontalLayout_7->addWidget(teacher_desp_lineEdit);


        horizontalLayout_9->addLayout(horizontalLayout_7);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        teacher_btn = new QPushButton(frame_2);
        teacher_btn->setObjectName(QString::fromUtf8("teacher_btn"));

        horizontalLayout_9->addWidget(teacher_btn);


        verticalLayout->addLayout(horizontalLayout_9);


        verticalLayout_2->addWidget(frame_2);

        frame_3 = new QFrame(tab);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_32 = new QLabel(frame_3);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_32);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_30 = new QLabel(frame_3);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        horizontalLayout_10->addWidget(label_30);

        student_name_lineEdit = new QLineEdit(frame_3);
        student_name_lineEdit->setObjectName(QString::fromUtf8("student_name_lineEdit"));

        horizontalLayout_10->addWidget(student_name_lineEdit);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_16);

        label_33 = new QLabel(frame_3);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        horizontalLayout_10->addWidget(label_33);

        student_ID_lineEdit = new QLineEdit(frame_3);
        student_ID_lineEdit->setObjectName(QString::fromUtf8("student_ID_lineEdit"));

        horizontalLayout_10->addWidget(student_ID_lineEdit);


        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_31 = new QLabel(frame_3);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        horizontalLayout_11->addWidget(label_31);

        student_dept_comboBox = new QComboBox(frame_3);
        student_dept_comboBox->setObjectName(QString::fromUtf8("student_dept_comboBox"));

        horizontalLayout_11->addWidget(student_dept_comboBox);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_15);

        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_11->addWidget(label_4);

        student_grade = new QLineEdit(frame_3);
        student_grade->setObjectName(QString::fromUtf8("student_grade"));

        horizontalLayout_11->addWidget(student_grade);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_17);

        student_btn = new QPushButton(frame_3);
        student_btn->setObjectName(QString::fromUtf8("student_btn"));

        horizontalLayout_11->addWidget(student_btn);


        verticalLayout_5->addLayout(horizontalLayout_11);


        verticalLayout_2->addWidget(frame_3);

        frame_4 = new QFrame(tab);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_4);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_14 = new QLabel(frame_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_14);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_15 = new QLabel(frame_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy);

        horizontalLayout_12->addWidget(label_15);

        class_name_comboBox = new QComboBox(frame_4);
        class_name_comboBox->setObjectName(QString::fromUtf8("class_name_comboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(class_name_comboBox->sizePolicy().hasHeightForWidth());
        class_name_comboBox->setSizePolicy(sizePolicy2);

        horizontalLayout_12->addWidget(class_name_comboBox);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_9);

        label_16 = new QLabel(frame_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy);

        horizontalLayout_12->addWidget(label_16);

        class_dept_comboBox = new QComboBox(frame_4);
        class_dept_comboBox->setObjectName(QString::fromUtf8("class_dept_comboBox"));
        sizePolicy2.setHeightForWidth(class_dept_comboBox->sizePolicy().hasHeightForWidth());
        class_dept_comboBox->setSizePolicy(sizePolicy2);

        horizontalLayout_12->addWidget(class_dept_comboBox);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_11);

        label_17 = new QLabel(frame_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_12->addWidget(label_17);

        class_teacher_comboBox = new QComboBox(frame_4);
        class_teacher_comboBox->setObjectName(QString::fromUtf8("class_teacher_comboBox"));

        horizontalLayout_12->addWidget(class_teacher_comboBox);


        verticalLayout_7->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_19 = new QLabel(frame_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_13->addWidget(label_19);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        class_building_comboBox = new QComboBox(frame_4);
        class_building_comboBox->setObjectName(QString::fromUtf8("class_building_comboBox"));

        horizontalLayout->addWidget(class_building_comboBox);

        class_room_comboBox = new QComboBox(frame_4);
        class_room_comboBox->setObjectName(QString::fromUtf8("class_room_comboBox"));

        horizontalLayout->addWidget(class_room_comboBox);


        horizontalLayout_13->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_2);

        label_9 = new QLabel(frame_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_13->addWidget(label_9);

        class_year = new QLineEdit(frame_4);
        class_year->setObjectName(QString::fromUtf8("class_year"));

        horizontalLayout_13->addWidget(class_year);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_19);

        label_11 = new QLabel(frame_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_13->addWidget(label_11);

        class_semester_comboBox = new QComboBox(frame_4);
        class_semester_comboBox->addItem(QString());
        class_semester_comboBox->addItem(QString());
        class_semester_comboBox->setObjectName(QString::fromUtf8("class_semester_comboBox"));

        horizontalLayout_13->addWidget(class_semester_comboBox);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_18);

        label_18 = new QLabel(frame_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        sizePolicy.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy);

        horizontalLayout_13->addWidget(label_18);

        class_time = new QLineEdit(frame_4);
        class_time->setObjectName(QString::fromUtf8("class_time"));

        horizontalLayout_13->addWidget(class_time);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_3);

        class_btn = new QPushButton(frame_4);
        class_btn->setObjectName(QString::fromUtf8("class_btn"));

        horizontalLayout_13->addWidget(class_btn);


        verticalLayout_7->addLayout(horizontalLayout_13);


        verticalLayout_2->addWidget(frame_4);

        frame_6 = new QFrame(tab);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_20 = new QLabel(frame_6);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setLayoutDirection(Qt::LeftToRight);
        label_20->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_20);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_21 = new QLabel(frame_6);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_3->addWidget(label_21);

        deptment_name_lineEdit = new QLineEdit(frame_6);
        deptment_name_lineEdit->setObjectName(QString::fromUtf8("deptment_name_lineEdit"));

        horizontalLayout_3->addWidget(deptment_name_lineEdit);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_10);

        deptment_btn = new QPushButton(frame_6);
        deptment_btn->setObjectName(QString::fromUtf8("deptment_btn"));

        horizontalLayout_3->addWidget(deptment_btn);


        verticalLayout_6->addLayout(horizontalLayout_3);


        verticalLayout_2->addWidget(frame_6);

        frame_7 = new QFrame(tab);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(frame_7);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_23 = new QLabel(frame_7);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_23);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_24 = new QLabel(frame_7);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        horizontalLayout_2->addWidget(label_24);

        building_name_lineEdit = new QLineEdit(frame_7);
        building_name_lineEdit->setObjectName(QString::fromUtf8("building_name_lineEdit"));

        horizontalLayout_2->addWidget(building_name_lineEdit);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_12);

        label_25 = new QLabel(frame_7);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_2->addWidget(label_25);

        buildin_room_lineEdit = new QLineEdit(frame_7);
        buildin_room_lineEdit->setObjectName(QString::fromUtf8("buildin_room_lineEdit"));

        horizontalLayout_2->addWidget(buildin_room_lineEdit);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_13);

        label_26 = new QLabel(frame_7);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        horizontalLayout_2->addWidget(label_26);

        building_capacity_lineEdit = new QLineEdit(frame_7);
        building_capacity_lineEdit->setObjectName(QString::fromUtf8("building_capacity_lineEdit"));

        horizontalLayout_2->addWidget(building_capacity_lineEdit);


        verticalLayout_8->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_14);

        building_btn = new QPushButton(frame_7);
        building_btn->setObjectName(QString::fromUtf8("building_btn"));

        horizontalLayout_4->addWidget(building_btn);


        verticalLayout_8->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(frame_7);

        modified_btn = new QPushButton(tab);
        modified_btn->setObjectName(QString::fromUtf8("modified_btn"));

        verticalLayout_2->addWidget(modified_btn);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        textEdit = new MessageBox(tab_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout_3->addWidget(textEdit);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Form", nullptr));
        label->setText(QApplication::translate("MainWindow", "\346\226\260\345\242\236\350\257\276\347\250\213", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\350\257\276\347\250\213\345\220\215\347\247\260\357\274\232", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\351\231\242\347\263\273\357\274\232", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\345\255\246\345\210\206\357\274\232", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\346\217\217\350\277\260\357\274\232", nullptr));
        lesson_btn->setText(QApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\346\226\260\345\242\236\350\256\262\345\270\210", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\350\256\262\345\270\210\345\220\215\345\255\227\357\274\232", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\351\231\242\347\263\273\357\274\232", nullptr));
        label_29->setText(QApplication::translate("MainWindow", "\346\217\217\350\277\260\357\274\232", nullptr));
        teacher_btn->setText(QApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        label_32->setText(QApplication::translate("MainWindow", "\346\226\260\345\242\236\345\255\246\347\224\237", nullptr));
        label_30->setText(QApplication::translate("MainWindow", "\345\255\246\347\224\237\345\247\223\345\220\215\357\274\232", nullptr));
        label_33->setText(QApplication::translate("MainWindow", "\345\255\246\345\217\267\357\274\232", nullptr));
        label_31->setText(QApplication::translate("MainWindow", "\351\231\242\347\263\273\357\274\232", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\345\271\264\347\272\247\357\274\232", nullptr));
        student_btn->setText(QApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "\345\274\200\350\256\276\350\257\276\347\250\213", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "\350\257\276\347\250\213\345\220\215\347\247\260\357\274\232", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "\351\231\242\347\263\273\357\274\232", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "\344\273\273\350\257\276\350\200\201\345\270\210\357\274\232", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "\345\234\260\347\202\271\357\274\232", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\345\271\264\344\273\275\357\274\232", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "\345\255\243\350\212\202\357\274\232", nullptr));
        class_semester_comboBox->setItemText(0, QApplication::translate("MainWindow", "spring", nullptr));
        class_semester_comboBox->setItemText(1, QApplication::translate("MainWindow", "fall", nullptr));

        label_18->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264\357\274\232", nullptr));
        class_btn->setText(QApplication::translate("MainWindow", "\345\274\200\350\256\276", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "\346\226\260\345\242\236\351\231\242\347\263\273", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "\351\231\242\347\263\273\345\220\215\347\247\260\357\274\232", nullptr));
        deptment_btn->setText(QApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "\346\226\260\345\242\236\346\225\231\345\255\246\346\245\274", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "\346\225\231\345\255\246\346\245\274\345\220\215\347\247\260\357\274\232", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "\346\210\277\351\227\264\345\217\267\357\274\232", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "\345\256\271\351\207\217\357\274\232", nullptr));
        building_btn->setText(QApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        modified_btn->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\347\256\241\347\220\206", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
