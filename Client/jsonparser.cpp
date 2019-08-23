#include "jsonparser.h"
#include <QDebug>

JsonParser::JsonParser()
{

}

QString JsonParser::generatePasswordRequirement(long long code)
{
    rapidjson::Document doc;
    doc.SetObject();
    rapidjson::Document::AllocatorType& allocator = doc.GetAllocator();

    doc.AddMember("type", "read", allocator);
    doc.AddMember("database", "students", allocator);
    doc.AddMember("table", "accounts", allocator);

    rapidjson::Value primaryKeyValue(rapidjson::kArrayType);
    primaryKeyValue.PushBack(rapidjson::Value(rapidjson::StringRef(QString::number(code).toUtf8().data()), allocator), allocator);
    doc.AddMember("primaryKeyValues", primaryKeyValue, allocator);

    rapidjson::StringBuffer s;
    rapidjson::Writer<rapidjson::StringBuffer> writer(s);
    doc.Accept(writer);

    return QString(s.GetString());
}

QString JsonParser::parsePassword(const QString &json)
{
    rapidjson::Document doc;
    doc.Parse(json.toUtf8().data());

    QString type = doc["type"].GetString();

    if(type == QString("error"))
    {
        QMessageBox::critical(nullptr, "error", doc["message"].GetString());
        return QString();
    }
    else if(type == QString("return"))
    {
        rapidjson::Value values = doc["values"].GetArray();
        rapidjson::Value record = values[0].GetObject();
        QString password = record["password"].GetString();

        return  password;
    }
    else
    {
        QMessageBox::critical(nullptr, "error", QString("Unknown json type : \"") + type + QString("\"."));
        return QString();
    }
}

QString JsonParser::generateSelectCourseRequirement(long long code, QList<QPair<long long, long long> > course_ids_and_sec_ids)
{
    rapidjson::Document doc;
    doc.SetObject();
    rapidjson::Document::AllocatorType& allocator = doc.GetAllocator();

    doc.AddMember("type", "write", allocator);
    doc.AddMember("database", "student", allocator);
    doc.AddMember("table", rapidjson::Value(rapidjson::StringRef(QString::number(code).toUtf8().data()), allocator), allocator);

    rapidjson::Value valueArray(rapidjson::kArrayType);
    foreach(auto i, course_ids_and_sec_ids)
    {
        rapidjson::Value obj(rapidjson::kObjectType);
        obj.AddMember("course_id", i.first, allocator);
        obj.AddMember("sec_id", i.second, allocator);
        valueArray.PushBack(obj, allocator);
    }
    doc.AddMember("values", valueArray, allocator);

    rapidjson::StringBuffer s;
    rapidjson::Writer<rapidjson::StringBuffer> writer(s);
    doc.Accept(writer);

    return QString(s.GetString());
}
