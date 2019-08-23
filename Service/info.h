#ifndef INFO_H
#define INFO_H

#include <QWidget>
#include <sqlite/querymodel.h>
#include <QShowEvent>

namespace Ui {
class Info;
}

class Info : public QWidget
{
    Q_OBJECT

public:
    explicit Info(QWidget *parent = nullptr);
    ~Info();

    void showEvent(QShowEvent *ev);

signals:
    void back_btn_clicked();

private:
    Ui::Info *ui;

    QueryModel *models[7];
};

#endif // INFO_H
