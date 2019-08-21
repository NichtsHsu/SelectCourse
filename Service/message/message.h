#ifndef MESSAGE_H
#define MESSAGE_H

#include <QTextEdit>

enum class MessageType
{
    Info, Error, Warning
};

class MessageBox : public QTextEdit
{
    Q_OBJECT

public:
    MessageBox(QWidget *parent = nullptr);

public slots:
    void receiveMessage(MessageType type, QString module, QString message);
};

#endif // MESSAGE_H
