#ifndef JSONPARSER_H
#define JSONPARSER_H

#include <rapidjson/rapidjson.h>
#include <rapidjson/document.h>
#include <rapidjson/stringbuffer.h>
#include <rapidjson/writer.h>
#include "sqlite/databasecourses.h"
#include "sqlite/databasestudents.h"
#include <message/message.h>

class JsonParser : public QObject
{
    Q_OBJECT
public:
    JsonParser();

    QString generateDatabaseRecord(SQLiteTable table, const QList<QMap<QString ,QVariant>> &values);
    QString generateErrorMessage(const QString &message);
    QString parseRequire(QString json);

public slots:
    void receiveMessage(MessageType type, QString module, QString message);
};

#endif // JSONPARSER_H
