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

    QString generatePasswordRequirement(long long code);
    QString parsePassword(const QString &json);

    QString generateSelectCourseRequirement(long long code, QList<QPair<long long, long long>> course_ids_and_sec_ids);
};

#endif // JSONPARSER_H
