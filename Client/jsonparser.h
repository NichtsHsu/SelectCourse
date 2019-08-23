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

    QString generateSelectCourseRequirement(long long code, long long course_id, long long sec_id);
};

#endif // JSONPARSER_H
