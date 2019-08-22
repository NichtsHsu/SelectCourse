#include "databasestudents.h"

DatabaseStudents *DatabaseStudents::self = new DatabaseStudents;

DatabaseStudents::DatabaseStudents(QObject *parent) :
    QObject(parent), m_database(nullptr)
{

}

DatabaseStudents::~DatabaseStudents()
{
    if(m_database)
        delete m_database;
}

void DatabaseStudents::receiveMessage(MessageType type, QString module, QString message)
{
    emit sendMessage(type, module, message);
}

void DatabaseStudents::initialize()
{
    self->m_database = new SQLiteDatabase(qApp->applicationDirPath() + QString("/database/students.db"));
    self->connect(self->m_database, &SQLiteDatabase::sendMessage, self, &DatabaseStudents::receiveMessage);

    db_account.tableName = "accounts";
    db_account.hasAutoIncrementIndex = false;
    db_account.primaryKeys << "code";
    db_account.columns << QPair<QString, SQLiteDataType>("code", SQLiteDataType::INTEGER)
            << QPair<QString, SQLiteDataType>("password", SQLiteDataType::TEXT);

    db_studentTemplate.hasAutoIncrementIndex = false;
    db_studentTemplate.primaryKeys << "course_id";
    db_studentTemplate.columns << QPair<QString, SQLiteDataType>("course_id", SQLiteDataType::INTEGER)
            << QPair<QString, SQLiteDataType>("sec_id", SQLiteDataType::INTEGER);
}

void DatabaseStudents::setPassword(long long code, const QString &password)
{
    self->m_database->replace(db_account, QVariantList() << code << password);
}

QString DatabaseStudents::getPassword(long long code)
{
    return self->m_database->read(db_account, QStringList() << QString::number(code), "password").toString();
}

QList<QVariantList> DatabaseStudents::getSelectedCourse(long long code)
{
    self->db_studentTemplate.tableName = QString::number(code);
    if(!self->m_database->exists(db_studentTemplate))
    {
        self->m_database->createTable(db_studentTemplate);
        return QList<QVariantList>();
    }

    return self->m_database->readAll(db_studentTemplate);
}

void DatabaseStudents::addSelectedCourse(long long code, long long course_id, long long sec_id)
{
    self->db_studentTemplate.tableName = QString::number(code);
    if(!self->m_database->exists(db_studentTemplate))
        self->m_database->createTable(db_studentTemplate);

    self->m_database->replace(db_studentTemplate, QVariantList() << course_id << sec_id);
}
