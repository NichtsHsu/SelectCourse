#ifndef MAINWIN_H
#define MAINWIN_H

#include <QWidget>
#include "login.h"
namespace Ui {
class mainwin;
}

class mainwin : public QWidget
{
    Q_OBJECT

public:
    explicit mainwin(QWidget *parent = nullptr);
    ~mainwin();

private:
    Ui::mainwin *ui;
    Login* login;
};

#endif // MAINWIN_H
