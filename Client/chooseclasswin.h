#ifndef CHOOSECLASSWIN_H
#define CHOOSECLASSWIN_H

#include <QWidget>

namespace Ui {
class ChooseClassWin;
}

class ChooseClassWin : public QWidget
{
    Q_OBJECT

public:
    explicit ChooseClassWin(QWidget *parent = nullptr);
    ~ChooseClassWin();

    void addLine();
    void addChooseLine();
private:
    Ui::ChooseClassWin *ui;
};

#endif // CHOOSECLASSWIN_H
