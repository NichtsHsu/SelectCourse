/********************************************************************************
** Form generated from reading UI file 'mainwin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIN_H
#define UI_MAINWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_mainwin
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QPushButton *chooseClassButton;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QTableWidget *classTable;

    void setupUi(QWidget *mainwin)
    {
        if (mainwin->objectName().isEmpty())
            mainwin->setObjectName(QString::fromUtf8("mainwin"));
        mainwin->resize(1173, 664);
        gridLayout = new QGridLayout(mainwin);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(mainwin);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFrameShape(QFrame::StyledPanel);
        label->setFrameShadow(QFrame::Plain);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(mainwin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setCursor(QCursor(Qt::ArrowCursor));
        label_2->setFrameShape(QFrame::StyledPanel);
        label_2->setFrameShadow(QFrame::Plain);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        chooseClassButton = new QPushButton(mainwin);
        chooseClassButton->setObjectName(QString::fromUtf8("chooseClassButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(chooseClassButton->sizePolicy().hasHeightForWidth());
        chooseClassButton->setSizePolicy(sizePolicy1);
        chooseClassButton->setCheckable(false);
        chooseClassButton->setAutoDefault(false);

        verticalLayout_2->addWidget(chooseClassButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        widget = new QWidget(mainwin);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        classTable = new QTableWidget(widget);
        if (classTable->columnCount() < 7)
            classTable->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        classTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        classTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        classTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        classTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        classTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        classTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        classTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (classTable->rowCount() < 11)
            classTable->setRowCount(11);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        classTable->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        classTable->setVerticalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        classTable->setVerticalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        classTable->setVerticalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        classTable->setVerticalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        classTable->setVerticalHeaderItem(5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        classTable->setVerticalHeaderItem(6, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        classTable->setVerticalHeaderItem(7, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        classTable->setVerticalHeaderItem(8, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        classTable->setVerticalHeaderItem(9, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        classTable->setVerticalHeaderItem(10, __qtablewidgetitem17);
        QFont font;
        font.setStyleStrategy(QFont::NoAntialias);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setFont(font);
        classTable->setItem(0, 0, __qtablewidgetitem18);
        classTable->setObjectName(QString::fromUtf8("classTable"));

        verticalLayout->addWidget(classTable);


        gridLayout->addWidget(widget, 0, 1, 1, 1);


        retranslateUi(mainwin);

        QMetaObject::connectSlotsByName(mainwin);
    } // setupUi

    void retranslateUi(QWidget *mainwin)
    {
        mainwin->setWindowTitle(QApplication::translate("mainwin", "\345\237\272\346\234\254\344\277\241\346\201\257", nullptr));
        label->setText(QApplication::translate("mainwin", "\345\247\223\345\220\215\357\274\232\351\273\204\350\200\200\346\236\253", nullptr));
        label_2->setText(QApplication::translate("mainwin", "\345\255\246\345\217\267\357\274\232201730685387", nullptr));
        chooseClassButton->setText(QApplication::translate("mainwin", "\351\200\211\350\257\276", nullptr));
        label_3->setText(QApplication::translate("mainwin", "\345\255\246\346\234\237\357\274\232", nullptr));
        comboBox->setItemText(0, QApplication::translate("mainwin", "2019\345\271\264\344\270\212", nullptr));
        comboBox->setItemText(1, QApplication::translate("mainwin", "2018\345\271\264\344\270\213", nullptr));
        comboBox->setItemText(2, QApplication::translate("mainwin", "2018\345\271\264\344\270\212", nullptr));
        comboBox->setItemText(3, QApplication::translate("mainwin", "2017\345\271\264\344\270\213", nullptr));

        QTableWidgetItem *___qtablewidgetitem = classTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("mainwin", "\346\230\237\346\234\237\344\270\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = classTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("mainwin", "\346\230\237\346\234\237\344\272\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = classTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("mainwin", "\346\230\237\346\234\237\344\270\211", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = classTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("mainwin", "\346\230\237\346\234\237\345\233\233", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = classTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("mainwin", "\346\230\237\346\234\237\344\272\224", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = classTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("mainwin", "\346\230\237\346\234\237\345\205\255", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = classTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("mainwin", "\346\230\237\346\234\237\346\227\245", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = classTable->verticalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("mainwin", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = classTable->verticalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("mainwin", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = classTable->verticalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("mainwin", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = classTable->verticalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("mainwin", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = classTable->verticalHeaderItem(4);
        ___qtablewidgetitem11->setText(QApplication::translate("mainwin", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = classTable->verticalHeaderItem(5);
        ___qtablewidgetitem12->setText(QApplication::translate("mainwin", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = classTable->verticalHeaderItem(6);
        ___qtablewidgetitem13->setText(QApplication::translate("mainwin", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = classTable->verticalHeaderItem(7);
        ___qtablewidgetitem14->setText(QApplication::translate("mainwin", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = classTable->verticalHeaderItem(8);
        ___qtablewidgetitem15->setText(QApplication::translate("mainwin", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = classTable->verticalHeaderItem(9);
        ___qtablewidgetitem16->setText(QApplication::translate("mainwin", "10", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = classTable->verticalHeaderItem(10);
        ___qtablewidgetitem17->setText(QApplication::translate("mainwin", "11", nullptr));

        const bool __sortingEnabled = classTable->isSortingEnabled();
        classTable->setSortingEnabled(false);
        classTable->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class mainwin: public Ui_mainwin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIN_H
