#ifndef MAINWIN_H
#define MAINWIN_H

#include <QWidget>
#include "login.h"
#include "chooseclasswin.h"

namespace Ui {
class mainwin;
}

class mainwin : public QWidget
{
    Q_OBJECT

public:
    explicit mainwin(QWidget *parent = nullptr);
    ~mainwin();

    void addClassToTable(QString str,int x,int y,int len);

private:
    Ui::mainwin *ui;
    ChooseClassWin *cWin;
};

#endif // MAINWIN_H
