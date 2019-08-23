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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
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
    QFrame *frame_2;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QPushButton *login_button;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton;
    QLineEdit *comboBox;
    QSpacerItem *verticalSpacer_4;
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
"	border-image: url(:/background/background/background_3.png);\n"
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

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(0, 40));
        frame_2->setMaximumSize(QSize(16777215, 16777215));
        frame_2->setStyleSheet(QString::fromUtf8("QFrame#frame_2 {\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_2);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, -1, 9, 9);
        horizontalSpacer_3 = new QSpacerItem(60, 30, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 8, 0, 1, 1);

        line = new QFrame(frame_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setLineWidth(1);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 6, 1, 1, 1);

        line_2 = new QFrame(frame_2);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setLineWidth(1);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 9, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(60, 30, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 8, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 10, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 7, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);

        login_button = new QPushButton(frame_2);
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

        gridLayout->addWidget(login_button, 11, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        toolButton_2 = new QToolButton(frame_2);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icon/lock.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon);
        toolButton_2->setIconSize(QSize(18, 18));
        toolButton_2->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButton_2);

        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 25));
        QFont font1;
        font1.setPointSize(14);
        lineEdit->setFont(font1);
        lineEdit->setFocusPolicy(Qt::StrongFocus);
        lineEdit->setStyleSheet(QString::fromUtf8("border:none;"));
        lineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout_2, 8, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        toolButton = new QToolButton(frame_2);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icon/Account.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon1);
        toolButton->setIconSize(QSize(18, 18));
        toolButton->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton);

        comboBox = new QLineEdit(frame_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(0, 25));
        comboBox->setFont(font1);
        comboBox->setStyleSheet(QString::fromUtf8("border:none;"));

        horizontalLayout->addWidget(comboBox);


        gridLayout->addLayout(horizontalLayout, 5, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 12, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout, 1, 0, 1, 1);


        verticalLayout->addWidget(frame_2);


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
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icon/minimum.png"), QSize(), QIcon::Normal, QIcon::Off);
        minimumBtn->setIcon(icon2);
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
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icon/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeBtn->setIcon(icon3);
        closeBtn->setIconSize(QSize(20, 20));
        closeBtn->setFlat(true);

        topLine->addWidget(closeBtn);


        gridLayout_3->addWidget(topBar, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        QWidget::setTabOrder(comboBox, lineEdit);
        QWidget::setTabOrder(lineEdit, login_button);
        QWidget::setTabOrder(login_button, closeBtn);
        QWidget::setTabOrder(closeBtn, minimumBtn);
        QWidget::setTabOrder(minimumBtn, toolButton);
        QWidget::setTabOrder(toolButton, toolButton_2);

        retranslateUi(Login);

        login_button->setDefault(false);


        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        label_3->setText(QApplication::translate("Login", "\351\200\211\350\257\276\347\263\273\347\273\237", nullptr));
        login_button->setText(QApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        toolButton_2->setText(QApplication::translate("Login", "...", nullptr));
        toolButton->setText(QString());
        minimumBtn->setText(QString());
        closeBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
