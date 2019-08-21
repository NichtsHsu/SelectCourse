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
    QGridLayout *gridLayout_3;
    QLineEdit *lesson_name_lineEdit;
    QLineEdit *lesson_ID_lineEdit;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lesson_credit_lineEdit;
    QPushButton *lesson_btn;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lesson_desp_lineEdit;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_28;
    QComboBox *lesson_dept_comboBox;
    QLabel *label_5;
    QFrame *frame_2;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_8;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *teacher_name_lineEdit;
    QComboBox *teacher_dept_comboBox;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout;
    QLabel *label_9;
    QLabel *label_29;
    QLineEdit *teacher_ID_lineEdit;
    QLineEdit *teacher_desp_lineEdit;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *teacher_btn;
    QFrame *frame_3;
    QGridLayout *gridLayout_8;
    QLineEdit *student_name_lineEdit;
    QComboBox *student_dept_comboBox;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_30;
    QLabel *label_31;
    QSpacerItem *horizontalSpacer_16;
    QLabel *label_32;
    QLabel *label_33;
    QSpacerItem *horizontalSpacer_17;
    QLineEdit *student_ID_lineEdit;
    QPushButton *student_btn;
    QFrame *frame_4;
    QGridLayout *gridLayout_2;
    QComboBox *class_teacher_comboBox;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_27;
    QLabel *label_18;
    QComboBox *class_dept_comboBox;
    QLabel *label_17;
    QLabel *label_19;
    QPushButton *class_btn;
    QComboBox *class_name_comboBox;
    QLabel *label_16;
    QComboBox *class_ID_comboBox;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout;
    QComboBox *class_building_comboBox;
    QComboBox *class_room_comboBox;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_6;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_22;
    QLineEdit *deptment_name_lineEdit;
    QLineEdit *deptment_ID_lineEdit_2;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *deptment_btn;
    QLabel *label_21;
    QLabel *label_20;
    QFrame *frame_7;
    QGridLayout *gridLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_23;
    QLabel *label_24;
    QSpacerItem *horizontalSpacer_12;
    QLineEdit *building_name_lineEdit;
    QLabel *label_26;
    QPushButton *building_btn;
    QLabel *label_25;
    QLineEdit *building_capacity_lineEdit;
    QLineEdit *buildin_room_lineEdit;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *horizontalSpacer_14;
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
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lesson_name_lineEdit = new QLineEdit(frame);
        lesson_name_lineEdit->setObjectName(QString::fromUtf8("lesson_name_lineEdit"));

        gridLayout_3->addWidget(lesson_name_lineEdit, 1, 1, 1, 1);

        lesson_ID_lineEdit = new QLineEdit(frame);
        lesson_ID_lineEdit->setObjectName(QString::fromUtf8("lesson_ID_lineEdit"));

        gridLayout_3->addWidget(lesson_ID_lineEdit, 1, 4, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        lesson_credit_lineEdit = new QLineEdit(frame);
        lesson_credit_lineEdit->setObjectName(QString::fromUtf8("lesson_credit_lineEdit"));

        gridLayout_3->addWidget(lesson_credit_lineEdit, 2, 4, 1, 1);

        lesson_btn = new QPushButton(frame);
        lesson_btn->setObjectName(QString::fromUtf8("lesson_btn"));

        gridLayout_3->addWidget(lesson_btn, 3, 6, 1, 1);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 2, 0, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 3, 0, 1, 1);

        lesson_desp_lineEdit = new QLineEdit(frame);
        lesson_desp_lineEdit->setObjectName(QString::fromUtf8("lesson_desp_lineEdit"));

        gridLayout_3->addWidget(lesson_desp_lineEdit, 3, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 3, 5, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 3, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        label_28 = new QLabel(frame);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_3->addWidget(label_28, 1, 3, 1, 1);

        lesson_dept_comboBox = new QComboBox(frame);
        lesson_dept_comboBox->setObjectName(QString::fromUtf8("lesson_dept_comboBox"));

        gridLayout_3->addWidget(lesson_dept_comboBox, 2, 1, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_5, 2, 3, 1, 1);


        verticalLayout_2->addWidget(frame);

        frame_2 = new QFrame(tab);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 0, 3, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_4->addWidget(label_8);

        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_4->addWidget(label_10);


        gridLayout_4->addLayout(verticalLayout_4, 1, 0, 2, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        teacher_name_lineEdit = new QLineEdit(frame_2);
        teacher_name_lineEdit->setObjectName(QString::fromUtf8("teacher_name_lineEdit"));

        verticalLayout_5->addWidget(teacher_name_lineEdit);

        teacher_dept_comboBox = new QComboBox(frame_2);
        teacher_dept_comboBox->setObjectName(QString::fromUtf8("teacher_dept_comboBox"));

        verticalLayout_5->addWidget(teacher_dept_comboBox);


        gridLayout_4->addLayout(verticalLayout_5, 1, 1, 2, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_6, 1, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout->addWidget(label_9);

        label_29 = new QLabel(frame_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        verticalLayout->addWidget(label_29);


        gridLayout_4->addLayout(verticalLayout, 1, 3, 2, 1);

        teacher_ID_lineEdit = new QLineEdit(frame_2);
        teacher_ID_lineEdit->setObjectName(QString::fromUtf8("teacher_ID_lineEdit"));

        gridLayout_4->addWidget(teacher_ID_lineEdit, 1, 4, 1, 1);

        teacher_desp_lineEdit = new QLineEdit(frame_2);
        teacher_desp_lineEdit->setObjectName(QString::fromUtf8("teacher_desp_lineEdit"));

        gridLayout_4->addWidget(teacher_desp_lineEdit, 2, 4, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_7, 2, 5, 1, 1);

        teacher_btn = new QPushButton(frame_2);
        teacher_btn->setObjectName(QString::fromUtf8("teacher_btn"));

        gridLayout_4->addWidget(teacher_btn, 2, 6, 1, 1);


        verticalLayout_2->addWidget(frame_2);

        frame_3 = new QFrame(tab);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_8 = new QGridLayout(frame_3);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        student_name_lineEdit = new QLineEdit(frame_3);
        student_name_lineEdit->setObjectName(QString::fromUtf8("student_name_lineEdit"));

        gridLayout_8->addWidget(student_name_lineEdit, 1, 1, 1, 1);

        student_dept_comboBox = new QComboBox(frame_3);
        student_dept_comboBox->setObjectName(QString::fromUtf8("student_dept_comboBox"));

        gridLayout_8->addWidget(student_dept_comboBox, 2, 1, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_30 = new QLabel(frame_3);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        verticalLayout_7->addWidget(label_30);

        label_31 = new QLabel(frame_3);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        verticalLayout_7->addWidget(label_31);


        gridLayout_8->addLayout(verticalLayout_7, 1, 0, 2, 1);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_16, 1, 2, 1, 1);

        label_32 = new QLabel(frame_3);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout_8->addWidget(label_32, 0, 3, 1, 1);

        label_33 = new QLabel(frame_3);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        gridLayout_8->addWidget(label_33, 1, 3, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_17, 1, 5, 1, 1);

        student_ID_lineEdit = new QLineEdit(frame_3);
        student_ID_lineEdit->setObjectName(QString::fromUtf8("student_ID_lineEdit"));

        gridLayout_8->addWidget(student_ID_lineEdit, 1, 4, 1, 1);

        student_btn = new QPushButton(frame_3);
        student_btn->setObjectName(QString::fromUtf8("student_btn"));

        gridLayout_8->addWidget(student_btn, 2, 6, 1, 1);


        verticalLayout_2->addWidget(frame_3);

        frame_4 = new QFrame(tab);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        class_teacher_comboBox = new QComboBox(frame_4);
        class_teacher_comboBox->setObjectName(QString::fromUtf8("class_teacher_comboBox"));

        gridLayout_2->addWidget(class_teacher_comboBox, 2, 4, 1, 1);

        label_15 = new QLabel(frame_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_15, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 3, 5, 1, 1);

        label_27 = new QLabel(frame_4);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_2->addWidget(label_27, 1, 3, 1, 1);

        label_18 = new QLabel(frame_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        sizePolicy.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_18, 3, 3, 1, 1);

        class_dept_comboBox = new QComboBox(frame_4);
        class_dept_comboBox->setObjectName(QString::fromUtf8("class_dept_comboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(class_dept_comboBox->sizePolicy().hasHeightForWidth());
        class_dept_comboBox->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(class_dept_comboBox, 2, 1, 1, 1);

        label_17 = new QLabel(frame_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_2->addWidget(label_17, 2, 3, 1, 1);

        label_19 = new QLabel(frame_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_2->addWidget(label_19, 3, 0, 1, 1);

        class_btn = new QPushButton(frame_4);
        class_btn->setObjectName(QString::fromUtf8("class_btn"));

        gridLayout_2->addWidget(class_btn, 3, 6, 1, 1);

        class_name_comboBox = new QComboBox(frame_4);
        class_name_comboBox->setObjectName(QString::fromUtf8("class_name_comboBox"));
        sizePolicy2.setHeightForWidth(class_name_comboBox->sizePolicy().hasHeightForWidth());
        class_name_comboBox->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(class_name_comboBox, 1, 1, 1, 1);

        label_16 = new QLabel(frame_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_16, 2, 0, 1, 1);

        class_ID_comboBox = new QComboBox(frame_4);
        class_ID_comboBox->setObjectName(QString::fromUtf8("class_ID_comboBox"));
        sizePolicy2.setHeightForWidth(class_ID_comboBox->sizePolicy().hasHeightForWidth());
        class_ID_comboBox->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(class_ID_comboBox, 1, 4, 1, 1);

        label_14 = new QLabel(frame_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 0, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        class_building_comboBox = new QComboBox(frame_4);
        class_building_comboBox->setObjectName(QString::fromUtf8("class_building_comboBox"));

        horizontalLayout->addWidget(class_building_comboBox);

        class_room_comboBox = new QComboBox(frame_4);
        class_room_comboBox->setObjectName(QString::fromUtf8("class_room_comboBox"));

        horizontalLayout->addWidget(class_room_comboBox);


        gridLayout_2->addLayout(horizontalLayout, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 3, 2, 1, 1);


        verticalLayout_2->addWidget(frame_4);

        frame_6 = new QFrame(tab);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_11, 2, 5, 1, 1);

        label_22 = new QLabel(frame_6);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_5->addWidget(label_22, 1, 3, 1, 1);

        deptment_name_lineEdit = new QLineEdit(frame_6);
        deptment_name_lineEdit->setObjectName(QString::fromUtf8("deptment_name_lineEdit"));

        gridLayout_5->addWidget(deptment_name_lineEdit, 1, 1, 1, 1);

        deptment_ID_lineEdit_2 = new QLineEdit(frame_6);
        deptment_ID_lineEdit_2->setObjectName(QString::fromUtf8("deptment_ID_lineEdit_2"));

        gridLayout_5->addWidget(deptment_ID_lineEdit_2, 1, 4, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_10, 1, 2, 1, 1);

        deptment_btn = new QPushButton(frame_6);
        deptment_btn->setObjectName(QString::fromUtf8("deptment_btn"));

        gridLayout_5->addWidget(deptment_btn, 2, 6, 1, 1);

        label_21 = new QLabel(frame_6);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_5->addWidget(label_21, 1, 0, 1, 1);

        label_20 = new QLabel(frame_6);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_5->addWidget(label_20, 0, 3, 1, 1);


        verticalLayout_2->addWidget(frame_6);

        frame_7 = new QFrame(tab);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(frame_7);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_15);

        label_23 = new QLabel(frame_7);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout_2->addWidget(label_23);


        gridLayout_7->addLayout(horizontalLayout_2, 0, 3, 1, 2);

        label_24 = new QLabel(frame_7);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_7->addWidget(label_24, 1, 0, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_12, 1, 2, 1, 1);

        building_name_lineEdit = new QLineEdit(frame_7);
        building_name_lineEdit->setObjectName(QString::fromUtf8("building_name_lineEdit"));

        gridLayout_7->addWidget(building_name_lineEdit, 1, 1, 1, 1);

        label_26 = new QLabel(frame_7);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_7->addWidget(label_26, 1, 6, 1, 1);

        building_btn = new QPushButton(frame_7);
        building_btn->setObjectName(QString::fromUtf8("building_btn"));

        gridLayout_7->addWidget(building_btn, 2, 9, 1, 1);

        label_25 = new QLabel(frame_7);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_7->addWidget(label_25, 1, 3, 1, 1);

        building_capacity_lineEdit = new QLineEdit(frame_7);
        building_capacity_lineEdit->setObjectName(QString::fromUtf8("building_capacity_lineEdit"));

        gridLayout_7->addWidget(building_capacity_lineEdit, 1, 7, 1, 1);

        buildin_room_lineEdit = new QLineEdit(frame_7);
        buildin_room_lineEdit->setObjectName(QString::fromUtf8("buildin_room_lineEdit"));

        gridLayout_7->addWidget(buildin_room_lineEdit, 1, 4, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_13, 1, 5, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_14, 2, 8, 1, 1);


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
        lesson_btn->setText(QApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\351\231\242\347\263\273\357\274\232", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\346\217\217\350\277\260\357\274\232", nullptr));
        label->setText(QApplication::translate("MainWindow", "\346\226\260\345\242\236\350\257\276\347\250\213", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\350\257\276\347\250\213\345\220\215\347\247\260\357\274\232", nullptr));
        label_28->setText(QApplication::translate("MainWindow", "\350\257\276\347\250\213ID:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\345\255\246\345\210\206\357\274\232", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\346\226\260\345\242\236\350\256\262\345\270\210", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\350\256\262\345\270\210\345\220\215\345\255\227\357\274\232", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\351\231\242\347\263\273\357\274\232", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "ID\357\274\232", nullptr));
        label_29->setText(QApplication::translate("MainWindow", "\346\217\217\350\277\260\357\274\232", nullptr));
        teacher_btn->setText(QApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        label_30->setText(QApplication::translate("MainWindow", "\345\255\246\347\224\237\345\247\223\345\220\215\357\274\232", nullptr));
        label_31->setText(QApplication::translate("MainWindow", "\351\231\242\347\263\273\357\274\232", nullptr));
        label_32->setText(QApplication::translate("MainWindow", "\346\226\260\345\242\236\345\255\246\347\224\237", nullptr));
        label_33->setText(QApplication::translate("MainWindow", "\345\255\246\345\217\267\357\274\232", nullptr));
        student_btn->setText(QApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "\350\257\276\347\250\213\345\220\215\347\247\260\357\274\232", nullptr));
        label_27->setText(QApplication::translate("MainWindow", "\350\257\276\347\250\213ID\357\274\232", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264\357\274\232", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "\344\273\273\350\257\276\350\200\201\345\270\210\357\274\232", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "\345\234\260\347\202\271\357\274\232", nullptr));
        class_btn->setText(QApplication::translate("MainWindow", "\345\274\200\350\256\276", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "\351\231\242\347\263\273\357\274\232", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "\345\274\200\350\256\276\350\257\276\347\250\213", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "\351\231\242\347\263\273ID\357\274\232", nullptr));
        deptment_btn->setText(QApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "\351\231\242\347\263\273\345\220\215\347\247\260\357\274\232", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "\346\226\260\345\242\236\351\231\242\347\263\273", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "\346\226\260\345\242\236\346\225\231\345\255\246\346\245\274", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "\346\225\231\345\255\246\346\245\274\345\220\215\347\247\260\357\274\232", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "\345\256\271\351\207\217\357\274\232", nullptr));
        building_btn->setText(QApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "\346\210\277\351\227\264\345\217\267\357\274\232", nullptr));
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
