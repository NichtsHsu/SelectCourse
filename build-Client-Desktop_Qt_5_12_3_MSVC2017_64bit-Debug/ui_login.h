/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QPushButton *login_button;
    QFrame *topBar;
    QHBoxLayout *topLine;
    QSpacerItem *horizontalSpacer;
    QPushButton *minimumBtn;
    QPushButton *closeBtn;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(400, 300);
        Login->setWindowOpacity(1.000000000000000);
        Login->setToolTipDuration(0);
        Login->setAutoFillBackground(false);
        Login->setStyleSheet(QString::fromUtf8("QWidget#Login {\n"
"background-color:rgb(255, 255, 255,100);\n"
"\n"
"};"));
        gridLayout_2 = new QGridLayout(Login);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        frame = new QFrame(Login);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("QFrame#frame {\n"
"border-image: url(:/background/background/background_2.jpg);\n"
"\n"
"};\n"
""));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(24);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        font.setStyleStrategy(QFont::NoAntialias);
        label_3->setFont(font);
        label_3->setAutoFillBackground(false);
        label_3->setStyleSheet(QString::fromUtf8(""));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, -1, 9, 9);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFocusPolicy(Qt::StrongFocus);
        lineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit, 2, 1, 1, 2);

        comboBox = new QComboBox(frame);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setStyleStrategy(QFont::NoAntialias);
        comboBox->setFont(font1);
        comboBox->setCursor(QCursor(Qt::IBeamCursor));
        comboBox->setEditable(true);

        gridLayout->addWidget(comboBox, 0, 1, 1, 2);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);

        login_button = new QPushButton(frame);
        login_button->setObjectName(QString::fromUtf8("login_button"));
        login_button->setStyleSheet(QString::fromUtf8("QPushButton#login_button{\n"
"	width:200px;\n"
"	height:30px;\n"
"	background-color:rgb(85, 170, 255,200);\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton#login_button:pressed {  \n"
"    /* \346\224\271\345\217\230\350\203\214\346\231\257\350\211\262 */  \n"
"    background-color:  rgb(85, 170, 255,100);\n"
"    /* \346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346\240\274 */  \n"
"    border-style:inset;  \n"
"\n"
"}  \n"
"\n"
"\n"
""));
        login_button->setFlat(true);

        gridLayout->addWidget(login_button, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        gridLayout_3->addLayout(verticalLayout, 1, 0, 1, 1);

        topBar = new QFrame(frame);
        topBar->setObjectName(QString::fromUtf8("topBar"));
        topLine = new QHBoxLayout(topBar);
        topLine->setSpacing(6);
        topLine->setObjectName(QString::fromUtf8("topLine"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        topLine->addItem(horizontalSpacer);

        minimumBtn = new QPushButton(topBar);
        minimumBtn->setObjectName(QString::fromUtf8("minimumBtn"));
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
        minimumBtn->setIconSize(QSize(20, 20));
        minimumBtn->setFlat(true);

        topLine->addWidget(minimumBtn);

        closeBtn = new QPushButton(topBar);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
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

        topLine->addWidget(closeBtn);


        gridLayout_3->addWidget(topBar, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(Login);

        login_button->setDefault(false);


        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        label_3->setText(QApplication::translate("Login", "\351\200\211\350\257\276\347\263\273\347\273\237", nullptr));
        label->setText(QApplication::translate("Login", "\345\255\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QApplication::translate("Login", "\345\257\206\347\240\201\357\274\232", nullptr));
        login_button->setText(QApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        minimumBtn->setText(QString());
        closeBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
