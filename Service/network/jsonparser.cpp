#include "jsonparser.h"

JsonParser::JsonParser()
{

}

QString JsonParser::generateDatabaseRecord(SQLiteTable table, const QList<QMap<QString, QVariant> > &values)
{
    rapidjson::Document doc;
    doc.SetObject();
    rapidjson::Document::AllocatorType& allocator = doc.GetAllocator();

    doc.AddMember("type", "return", allocator);

    rapidjson::Value valueArray(rapidjson::kArrayType);
    for(int i = 0; i < values.size(); i++)
    {
        rapidjson::Value obj(rapidjson::kObjectType);
        foreach(auto j, table.columns)
        {
            rapidjson::Value key(rapidjson::StringRef(j.first.toUtf8().data()), allocator);
            switch(j.second)
            {
                case SQLiteDataType::INTEGER:
                    obj.AddMember(key, values[i].value(j.first).toLongLong(), allocator);
                break;

                case SQLiteDataType::REAL:
                    obj.AddMember(key, values[i].value(j.first).toDouble(), allocator);
                break;

                case SQLiteDataType::TEXT:
                {
                    rapidjson::Value value(rapidjson::StringRef(values[i].value(j.first).toString().toUtf8().data()), allocator);
                    obj.AddMember(key, value, allocator);
                }
                break;
            }
        }
        valueArray.PushBack(obj, allocator);
    }
    doc.AddMember("values", valueArray, allocator);

    rapidjson::StringBuffer s;
    rapidjson::Writer<rapidjson::StringBuffer> writer(s);
    doc.Accept(writer);

    return QString(s.GetString());
}

QString JsonParser::generateErrorMessage(const QString &message)
{
    rapidjson::Document doc;
    doc.SetObject();
    rapidjson::Document::AllocatorType& allocator = doc.GetAllocator();

    doc.AddMember("type", "error", allocator);
    rapidjson::Value msg(rapidjson::StringRef(message.toUtf8().data()), allocator);
    doc.AddMember("message", msg, allocator);

    rapidjson::StringBuffer s;
    rapidjson::Writer<rapidjson::StringBuffer> writer(s);
    doc.Accept(writer);

    return QString(s.GetString());
}

QString JsonParser::parseRequire(QString json)
{
    rapidjson::Document doc;
    doc.Parse(json.toUtf8().data());

    QString type = doc["type"].GetString();
    QString database = doc["database"].GetString();
    QString table = doc["table"].GetString();

    if(type == "read")
    {
        rapidjson::Value primaryKeyValues = doc["primaryKeyValues"].GetArray();
        size_t size = primaryKeyValues.Size();
        if(size == 0u)
        {
            QList<QVariantList> values;
            if(database == QString("courses"))
            {
                if(table == QString("classroom"))
                    values = DatabaseCourses::readAllClassroom();
                else if(table == QString("course"))
                    values = DatabaseCourses::readAllCourse();
                else if(table == QString("department"))
                    values = DatabaseCourses::readAllDepartment();
                else if(table == QString("instructor"))
                    values = DatabaseCourses::readAllInstructor();
                else if(table == QString("section"))
                    values = DatabaseCourses::readAllSection();
                else if(table == QString("student"))
                    values = DatabaseCourses::readAllStudent();
                else
                    return generateErrorMessage(QString("Not such table named \"") + table + QString("\" in database \"") + database + QString("\"."));
            }
            else if(database == QString("students"))
            {

            }
            else
            {
                return generateErrorMessage(QString("Not such database named \"") + database + QString("\", only \"courses\" and \"students\" are allowed/"));
            }
        }
    }
    else if(type == "write")
    {

    }

    return generateErrorMessage(QString("Unexpected Requirement named \"") + type + QString("\"."));
}
