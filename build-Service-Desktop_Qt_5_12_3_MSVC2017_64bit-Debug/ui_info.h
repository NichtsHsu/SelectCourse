/********************************************************************************
** Form generated from reading UI file 'info.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_H
#define UI_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Info
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_6;
    QTableView *tableView_6;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QTableView *tableView_2;
    QWidget *tab_3;
    QGridLayout *gridLayout_3;
    QTableView *tableView_3;
    QWidget *tab_4;
    QGridLayout *gridLayout_4;
    QTableView *tableView_4;
    QWidget *tab_5;
    QGridLayout *gridLayout_5;
    QTableView *tableView_5;
    QWidget *tab_6;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *modified_btn;
    QSpacerItem *horizontalSpacer;
    QPushButton *back_btn;

    void setupUi(QWidget *Info)
    {
        if (Info->objectName().isEmpty())
            Info->setObjectName(QString::fromUtf8("Info"));
        Info->resize(1211, 667);
        verticalLayout = new QVBoxLayout(Info);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(Info);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_6 = new QGridLayout(tab);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        tableView_6 = new QTableView(tab);
        tableView_6->setObjectName(QString::fromUtf8("tableView_6"));

        gridLayout_6->addWidget(tableView_6, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));

        gridLayout_2->addWidget(tableView_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_3 = new QGridLayout(tab_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tableView_3 = new QTableView(tab_3);
        tableView_3->setObjectName(QString::fromUtf8("tableView_3"));

        gridLayout_3->addWidget(tableView_3, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_4 = new QGridLayout(tab_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tableView_4 = new QTableView(tab_4);
        tableView_4->setObjectName(QString::fromUtf8("tableView_4"));

        gridLayout_4->addWidget(tableView_4, 0, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_5 = new QGridLayout(tab_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        tableView_5 = new QTableView(tab_5);
        tableView_5->setObjectName(QString::fromUtf8("tableView_5"));

        gridLayout_5->addWidget(tableView_5, 0, 0, 1, 1);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        gridLayout = new QGridLayout(tab_6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(tab_6);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        tabWidget->addTab(tab_6, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        modified_btn = new QPushButton(Info);
        modified_btn->setObjectName(QString::fromUtf8("modified_btn"));

        horizontalLayout->addWidget(modified_btn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        back_btn = new QPushButton(Info);
        back_btn->setObjectName(QString::fromUtf8("back_btn"));

        horizontalLayout->addWidget(back_btn);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Info);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Info);
    } // setupUi

    void retranslateUi(QWidget *Info)
    {
        Info->setWindowTitle(QApplication::translate("Info", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Info", "\345\274\200\350\257\276\344\277\241\346\201\257", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Info", "\350\257\276\347\250\213\344\277\241\346\201\257", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Info", "\350\256\262\345\270\210\344\277\241\346\201\257", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Info", "\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("Info", "\345\255\246\351\231\242\344\277\241\346\201\257", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("Info", "\346\225\231\345\255\246\346\245\274\344\277\241\346\201\257", nullptr));
        modified_btn->setText(QApplication::translate("Info", "\344\277\256\346\224\271", nullptr));
        back_btn->setText(QApplication::translate("Info", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Info: public Ui_Info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_H
