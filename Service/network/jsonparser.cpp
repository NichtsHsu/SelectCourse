#include "jsonparser.h"

JsonParser::JsonParser()
{
    connect(DatabaseCourses::self, &DatabaseCourses::sendMessage, this, &JsonParser::receiveMessage);
    connect(DatabaseStudents::self, &DatabaseStudents::sendMessage, this, &JsonParser::receiveMessage);
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
            QList<QMap<QString, QVariant>> ret;

            if(database == QString("courses"))
            {
                if(table == QString("classroom"))
                {
                    values = DatabaseCourses::readAllClassroom();
                    if(values.size() == 0)
                        return QString();

                    foreach(auto record, values)
                    {
                        QMap<QString, QVariant> rec;
                        for(int i = 0; i < DatabaseCourses::db_classroom.columns.size(); i++)
                            rec[DatabaseCourses::db_classroom.columns[i].first] = record[i];

                        ret << rec;
                    }

                    return generateDatabaseRecord(DatabaseCourses::db_classroom, ret);
                }
                else if(table == QString("course"))
                {
                    values = DatabaseCourses::readAllCourse();
                    if(values.size() == 0)
                        return QString();

                    foreach(auto record, values)
                    {
                        QMap<QString, QVariant> rec;
                        for(int i = 0; i < DatabaseCourses::db_course.columns.size(); i++)
                            rec[DatabaseCourses::db_course.columns[i].first] = record[i];

                        ret << rec;
                    }

                    return generateDatabaseRecord(DatabaseCourses::db_course, ret);
                }
                else if(table == QString("department"))
                {
                    values = DatabaseCourses::readAllDepartment();
                    if(values.size() == 0)
                        return QString();

                    foreach(auto record, values)
                    {
                        QMap<QString, QVariant> rec;
                        for(int i = 0; i < DatabaseCourses::db_department.columns.size(); i++)
                            rec[DatabaseCourses::db_department.columns[i].first] = record[i];

                        ret << rec;
                    }

                    return generateDatabaseRecord(DatabaseCourses::db_department, ret);
                }
                else if(table == QString("instructor"))
                {
                    values = DatabaseCourses::readAllInstructor();
                    if(values.size() == 0)
                        return QString();

                    foreach(auto record, values)
                    {
                        QMap<QString, QVariant> rec;
                        for(int i = 0; i < DatabaseCourses::db_instructor.columns.size(); i++)
                            rec[DatabaseCourses::db_instructor.columns[i].first] = record[i];

                        ret << rec;
                    }

                    return generateDatabaseRecord(DatabaseCourses::db_instructor, ret);
                }
                else if(table == QString("section"))
                {
                    values = DatabaseCourses::readAllSection();
                    if(values.size() == 0)
                        return QString();

                    foreach(auto record, values)
                    {
                        QMap<QString, QVariant> rec;
                        for(int i = 0; i < DatabaseCourses::db_section.columns.size(); i++)
                            rec[DatabaseCourses::db_section.columns[i].first] = record[i];

                        ret << rec;
                    }

                    return generateDatabaseRecord(DatabaseCourses::db_section, ret);
                }
                else if(table == QString("student"))
                {
                    values = DatabaseCourses::readAllStudent();
                    if(values.size() == 0)
                        return QString();

                    foreach(auto record, values)
                    {
                        QMap<QString, QVariant> rec;
                        for(int i = 0; i < DatabaseCourses::db_student.columns.size(); i++)
                            rec[DatabaseCourses::db_student.columns[i].first] = record[i];

                        ret << rec;
                    }

                    return generateDatabaseRecord(DatabaseCourses::db_student, ret);
                }
                else
                    return generateErrorMessage(QString("Not such table named \"") + table + QString("\" in database \"") + database + QString("\"."));
            }
            else if(database == QString("students"))
            {
                if(table == QString("accounts"))
                    return generateErrorMessage(QString("You should provide student code to get password."));
                else
                {
                    bool ok;
                    long long code = table.toLongLong(&ok);
                    if(!ok)
                        return generateErrorMessage(QString("Not such table named \"") + table + QString("\" in database \"") + database + QString("\"."));

                    values = DatabaseStudents::getSelectedCourse(code);

                    if(values.size() == 0)
                        return QString();

                    DatabaseStudents::db_studentTemplate.tableName = table;
                    foreach(auto record, values)
                    {
                        QMap<QString, QVariant> rec;
                        for(int i = 0; i < DatabaseStudents::db_studentTemplate.columns.size(); i++)
                            rec[DatabaseStudents::db_studentTemplate.columns[i].first] = record[i];

                        ret << rec;
                    }

                    return generateDatabaseRecord(DatabaseStudents::db_studentTemplate, ret);
                }
            }
            else
                return generateErrorMessage(QString("Not such database named \"") + database + QString("\", only \"courses\" and \"students\" are allowed/"));
        }
        else
        {
            QStringList primaryKeyValuesQt;
            QVariantList record;
            QList<QMap<QString, QVariant>> ret;

            for(unsigned i = 0; i < size; i++)
                primaryKeyValuesQt << QString(primaryKeyValues[i].GetString());

            if(database == QString("courses"))
            {
                if(table == QString("classroom"))
                {
                    if(size == 1)
                        return generateErrorMessage(QString("The data table \"classroom\" need two primary keys but only get one."));

                    record = DatabaseCourses::readClassroom(primaryKeyValuesQt);
                    if(record.size() == 0)
                        return QString();

                    QMap<QString, QVariant> rec;
                    for(int i = 0; i < DatabaseCourses::db_classroom.columns.size(); i++)
                        rec[DatabaseCourses::db_classroom.columns[i].first] = record[i];

                    ret << rec;

                    return generateDatabaseRecord(DatabaseCourses::db_classroom, ret);
                }
                else if(table == QString("course"))
                {
                    record = DatabaseCourses::readCourse(primaryKeyValuesQt);
                    if(record.size() == 0)
                        return QString();

                    QMap<QString, QVariant> rec;
                    for(int i = 0; i < DatabaseCourses::db_course.columns.size(); i++)
                        rec[DatabaseCourses::db_course.columns[i].first] = record[i];

                    ret << rec;

                    return generateDatabaseRecord(DatabaseCourses::db_course, ret);
                }
                else if(table == QString("department"))
                {
                    record = DatabaseCourses::readDepartment(primaryKeyValuesQt);
                    if(record.size() == 0)
                        return QString();

                    QMap<QString, QVariant> rec;
                    for(int i = 0; i < DatabaseCourses::db_department.columns.size(); i++)
                        rec[DatabaseCourses::db_department.columns[i].first] = record[i];

                    ret << rec;

                    return generateDatabaseRecord(DatabaseCourses::db_department, ret);
                }
                else if(table == QString("instructor"))
                {
                    record = DatabaseCourses::readInstructor(primaryKeyValuesQt);
                    if(record.size() == 0)
                        return QString();

                    QMap<QString, QVariant> rec;
                    for(int i = 0; i < DatabaseCourses::db_instructor.columns.size(); i++)
                        rec[DatabaseCourses::db_instructor.columns[i].first] = record[i];

                    ret << rec;

                    return generateDatabaseRecord(DatabaseCourses::db_instructor, ret);
                }
                else if(table == QString("section"))
                {
                    record = DatabaseCourses::readSection(primaryKeyValuesQt);
                    if(record.size() == 0)
                        return QString();

                    QMap<QString, QVariant> rec;
                    for(int i = 0; i < DatabaseCourses::db_section.columns.size(); i++)
                        rec[DatabaseCourses::db_section.columns[i].first] = record[i];

                    ret << rec;

                    return generateDatabaseRecord(DatabaseCourses::db_section, ret);
                }
                else if(table == QString("student"))
                {
                    record = DatabaseCourses::readStudent(primaryKeyValuesQt);
                    if(record.size() == 0)
                        return QString();

                    QMap<QString, QVariant> rec;
                    for(int i = 0; i < DatabaseCourses::db_student.columns.size(); i++)
                        rec[DatabaseCourses::db_student.columns[i].first] = record[i];

                    ret << rec;

                    return generateDatabaseRecord(DatabaseCourses::db_student, ret);
                }
                else
                    return generateErrorMessage(QString("Not such table named \"") + table + QString("\" in database \"") + database + QString("\"."));
            }
            else if(database == QString("students"))
            {
                if(table == QString("accounts"))
                {
                    QString password = DatabaseStudents::getPassword(primaryKeyValuesQt[0].toLongLong());

                    QMap<QString, QVariant> rec;
                    rec["code"] = primaryKeyValuesQt[0].toLongLong();
                    rec["password"] = password;

                    ret << rec;

                    return generateDatabaseRecord(DatabaseStudents::db_account, ret);
                }
                else
                    return generateErrorMessage(QString("Only support reading all selected courses of student."));
            }
            else
                return generateErrorMessage(QString("Not such database named \"") + database + QString("\", only \"courses\" and \"students\" are allowed/"));
        }
    }
    else if(type == "write")
    {
        rapidjson::Value primaryKeyValues = doc["primaryKeyValues"].GetArray();
        size_t size = primaryKeyValues.Size();
        if(size == 0u)
            return generateErrorMessage(QString("You must provide primary key for writing."));
        else
        {
            if(database == QString("courses"))
                return generateErrorMessage(QString("Database \"courses\" is read only."));
            else if(database == QString("students"))
            {
                rapidjson::Value records = doc["values"].GetArray();
                if(table == QString("accounts"))
                {
                    for(unsigned i = 0; i < records.Size(); i++)
                    {
                        rapidjson::Value record = records[i].GetObject();
                        long long code = record["code"].GetInt64();
                        QString password = record["password"].GetString();

                        DatabaseStudents::setPassword(code, password);
                    }
                }
                else
                {
                    bool ok;
                    long long code = table.toLongLong(&ok);
                    if(!ok)
                        return generateErrorMessage(QString("Not such table named \"") + table + QString("\" in database \"") + database + QString("\"."));

                    for(unsigned i = 0; i < records.Size(); i++)
                    {
                        rapidjson::Value record = records[i].GetObject();
                        long long course_id = primaryKeyValues[0].GetInt64();
                        long long sec_id = record["sec_id"].GetInt64();

                        DatabaseStudents::addSelectedCourse(code, course_id, sec_id);
                    }
                }
            }
            else
                return generateErrorMessage(QString("Not such database named \"") + database + QString("\", only \"courses\" and \"students\" are allowed/"));
        }

        rapidjson::Document doc;
        doc.SetObject();
        rapidjson::Document::AllocatorType& allocator = doc.GetAllocator();

        doc.AddMember("type", "return", allocator);

        rapidjson::StringBuffer s;
        rapidjson::Writer<rapidjson::StringBuffer> writer(s);
        doc.Accept(writer);

        return QString(s.GetString());
    }

    return generateErrorMessage(QString("Unexpected requirement type named \"") + type + QString("\"."));
}

void JsonParser::receiveMessage(MessageType type, QString module, QString message)
{

}
