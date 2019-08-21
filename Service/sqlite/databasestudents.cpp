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
}
