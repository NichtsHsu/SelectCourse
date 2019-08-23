#ifndef JSONPARSER_H
#define JSONPARSER_H

#include <QString>
#include <QMessageBox>
#include <rapidjson/rapidjson.h>
#include <rapidjson/document.h>
#include <rapidjson/stringbuffer.h>
#include <rapidjson/writer.h>

class JsonParser
{
public:
    JsonParser();

    QString generateRegisterOrChangePassword(long long code, const QString &password);
    QString generatePasswordRequirement(long long code);
    QString parsePassword(const QString &json);
};

#endif // JSONPARSER_H
