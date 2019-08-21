#include "message.h"

MessageBox::MessageBox(QWidget *parent) :
    QTextEdit(parent)
{
    document()->setMaximumBlockCount(200);
    setHtml("<font color=purple>>>></font> ");
}

void MessageBox::receiveMessage(MessageType type, QString module, QString message)
{
    QString messageHtml = "<p>";
    switch(type)
    {
        case MessageType::Info:
            messageHtml += QString("<font color=black><b>[ <font color=green>") + tr("Info") + QString("</font> ]</b></font> ");
        break;

        case MessageType::Error:
            messageHtml += QString("<font color=black><b>[ <font color=red>") + tr("Error") + QString("</font> ]</b></font> ");
        break;

        case MessageType::Warning:
            messageHtml += QString("<font color=black><b>[ <font color=orange>") + tr("Warning") + QString("</font> ]</b></font> ");
        break;
    }

    messageHtml += QString(tr("In module %1 : ")).arg(QString("<font color=purple><u>") + module + QString("</u></font>"));
    messageHtml += QString("<font color=black>") + message + QString("</font></p><font color=purple>>>> </font>");

    moveCursor(QTextCursor::End);
    textCursor().insertHtml(messageHtml);
}
