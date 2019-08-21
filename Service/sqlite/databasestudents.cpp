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

    self->db_account.tableName = "accounts";
    self->db_account.hasAutoIncrementIndex = false;
    self->db_account.primaryKeys << "code";
    self->db_account.columns << QPair<QString, SQLiteDataType>("code", SQLiteDataType::INTEGER)
            << QPair<QString, SQLiteDataType>("password", SQLiteDataType::TEXT);

    self->db_studentTemplate.hasAutoIncrementIndex = false;
    self->db_account.primaryKeys << "course_id";
}
