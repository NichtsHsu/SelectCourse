/********************************************************************************
** Form generated from reading UI file 'chooseclasswin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSECLASSWIN_H
#define UI_CHOOSECLASSWIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseClassWin
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QFrame *topBar;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *minimumBtn;
    QPushButton *closeBtn;
    QFrame *frame_2;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *backBtn;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_6;
    QTableWidget *CoursesList;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *chooseCoursesTable;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QTableWidget *ChooseList;

    void setupUi(QWidget *ChooseClassWin)
    {
        if (ChooseClassWin->objectName().isEmpty())
            ChooseClassWin->setObjectName(QString::fromUtf8("ChooseClassWin"));
        ChooseClassWin->resize(1500, 900);
        gridLayout_2 = new QGridLayout(ChooseClassWin);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        frame = new QFrame(ChooseClassWin);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("QFrame#frame{\n"
"border-image: url(:/background/background/background_3.png);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        topBar = new QFrame(frame);
        topBar->setObjectName(QString::fromUtf8("topBar"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(topBar->sizePolicy().hasHeightForWidth());
        topBar->setSizePolicy(sizePolicy);
        topBar->setMinimumSize(QSize(0, 40));
        topBar->setMaximumSize(QSize(16777215, 40));
        topBar->setFrameShape(QFrame::StyledPanel);
        topBar->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(topBar);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 6, 0);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        minimumBtn = new QPushButton(topBar);
        minimumBtn->setObjectName(QString::fromUtf8("minimumBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(minimumBtn->sizePolicy().hasHeightForWidth());
        minimumBtn->setSizePolicy(sizePolicy1);
        minimumBtn->setMaximumSize(QSize(50, 30));
        minimumBtn->setStyleSheet(QString::fromUtf8("QPushButton#minimumBtn:pressed {  \n"
"\n"
"    /* \346\224\271\345\217\230\350\203\214\346\231\257\350\211\262 */  \n"
"    background-color: rgb(0, 170, 255,50);\n"
"\n"
"    /* \346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346\240\274 */  \n"
"    border-style:inset;  \n"
"}  \n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icon/minimum.png"), QSize(), QIcon::Normal, QIcon::Off);
        minimumBtn->setIcon(icon);
        minimumBtn->setIconSize(QSize(25, 25));
        minimumBtn->setFlat(true);

        horizontalLayout_5->addWidget(minimumBtn);

        closeBtn = new QPushButton(topBar);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        sizePolicy1.setHeightForWidth(closeBtn->sizePolicy().hasHeightForWidth());
        closeBtn->setSizePolicy(sizePolicy1);
        closeBtn->setMaximumSize(QSize(50, 30));
        closeBtn->setStyleSheet(QString::fromUtf8("QPushButton#closeBtn:pressed {  \n"
"\n"
"    /* \346\224\271\345\217\230\350\203\214\346\231\257\350\211\262 */  \n"
"    background-color: rgb(255, 0, 0,50) ;\n"
"\n"
"    /* \346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346\240\274 */  \n"
"    border-style:inset;  \n"
"}  \n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icon/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeBtn->setIcon(icon1);
        closeBtn->setIconSize(QSize(20, 20));
        closeBtn->setFlat(true);

        horizontalLayout_5->addWidget(closeBtn);


        gridLayout_3->addWidget(topBar, 0, 0, 1, 1);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        backBtn = new QPushButton(frame_2);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icon/bcak.png"), QSize(), QIcon::Normal, QIcon::Off);
        backBtn->setIcon(icon2);
        backBtn->setAutoDefault(false);
        backBtn->setFlat(true);

        horizontalLayout_4->addWidget(backBtn);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_4);

        CoursesList = new QTableWidget(frame_2);
        CoursesList->setObjectName(QString::fromUtf8("CoursesList"));

        verticalLayout_2->addWidget(CoursesList);


        gridLayout->addLayout(verticalLayout_2, 0, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        chooseCoursesTable = new QTableWidget(frame_2);
        if (chooseCoursesTable->columnCount() < 7)
            chooseCoursesTable->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        chooseCoursesTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        chooseCoursesTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        chooseCoursesTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        chooseCoursesTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        chooseCoursesTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        chooseCoursesTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        chooseCoursesTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (chooseCoursesTable->rowCount() < 13)
            chooseCoursesTable->setRowCount(13);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        chooseCoursesTable->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        chooseCoursesTable->setVerticalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        chooseCoursesTable->setVerticalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        chooseCoursesTable->setVerticalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        chooseCoursesTable->setVerticalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        chooseCoursesTable->setVerticalHeaderItem(5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        chooseCoursesTable->setVerticalHeaderItem(6, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        chooseCoursesTable->setVerticalHeaderItem(7, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        chooseCoursesTable->setVerticalHeaderItem(8, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        chooseCoursesTable->setVerticalHeaderItem(9, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        chooseCoursesTable->setVerticalHeaderItem(10, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        chooseCoursesTable->setVerticalHeaderItem(11, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        chooseCoursesTable->setVerticalHeaderItem(12, __qtablewidgetitem19);
        chooseCoursesTable->setObjectName(QString::fromUtf8("chooseCoursesTable"));
        chooseCoursesTable->verticalHeader()->setCascadingSectionResizes(true);

        verticalLayout->addWidget(chooseCoursesTable);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        ChooseList = new QTableWidget(frame_2);
        ChooseList->setObjectName(QString::fromUtf8("ChooseList"));

        verticalLayout->addWidget(ChooseList);


        gridLayout->addLayout(verticalLayout, 0, 4, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_3->addWidget(frame_2, 1, 0, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(ChooseClassWin);

        backBtn->setDefault(false);


        QMetaObject::connectSlotsByName(ChooseClassWin);
    } // setupUi

    void retranslateUi(QWidget *ChooseClassWin)
    {
        ChooseClassWin->setWindowTitle(QApplication::translate("ChooseClassWin", "Form", nullptr));
        minimumBtn->setText(QString());
        closeBtn->setText(QString());
        backBtn->setText(QString());
        label_2->setText(QApplication::translate("ChooseClassWin", "\351\200\211\350\257\276\345\210\227\350\241\250", nullptr));
        label->setText(QApplication::translate("ChooseClassWin", "\351\242\204\346\265\213\350\257\276\350\241\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem = chooseCoursesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ChooseClassWin", "\344\270\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = chooseCoursesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ChooseClassWin", "\344\272\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = chooseCoursesTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ChooseClassWin", "\344\270\211", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = chooseCoursesTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ChooseClassWin", "\345\233\233", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = chooseCoursesTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("ChooseClassWin", "\344\272\224", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = chooseCoursesTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("ChooseClassWin", "\345\205\255", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = chooseCoursesTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("ChooseClassWin", "\346\227\245", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = chooseCoursesTable->verticalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("ChooseClassWin", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = chooseCoursesTable->verticalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("ChooseClassWin", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = chooseCoursesTable->verticalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("ChooseClassWin", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = chooseCoursesTable->verticalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("ChooseClassWin", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = chooseCoursesTable->verticalHeaderItem(4);
        ___qtablewidgetitem11->setText(QApplication::translate("ChooseClassWin", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = chooseCoursesTable->verticalHeaderItem(5);
        ___qtablewidgetitem12->setText(QApplication::translate("ChooseClassWin", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = chooseCoursesTable->verticalHeaderItem(6);
        ___qtablewidgetitem13->setText(QApplication::translate("ChooseClassWin", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = chooseCoursesTable->verticalHeaderItem(7);
        ___qtablewidgetitem14->setText(QApplication::translate("ChooseClassWin", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = chooseCoursesTable->verticalHeaderItem(8);
        ___qtablewidgetitem15->setText(QApplication::translate("ChooseClassWin", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = chooseCoursesTable->verticalHeaderItem(9);
        ___qtablewidgetitem16->setText(QApplication::translate("ChooseClassWin", "10", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = chooseCoursesTable->verticalHeaderItem(10);
        ___qtablewidgetitem17->setText(QApplication::translate("ChooseClassWin", "11", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = chooseCoursesTable->verticalHeaderItem(11);
        ___qtablewidgetitem18->setText(QApplication::translate("ChooseClassWin", "12", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = chooseCoursesTable->verticalHeaderItem(12);
        ___qtablewidgetitem19->setText(QApplication::translate("ChooseClassWin", "13", nullptr));
        label_3->setText(QApplication::translate("ChooseClassWin", "\345\267\262\351\200\211\350\257\276\347\250\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseClassWin: public Ui_ChooseClassWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSECLASSWIN_H
