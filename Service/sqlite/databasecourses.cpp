#include "databasecourses.h"

DatabaseCourses *DatabaseCourses::self = new DatabaseCourses;

DatabaseCourses::DatabaseCourses(QObject *parent) :
    QObject(parent), m_database(nullptr)
{

}

DatabaseCourses::~DatabaseCourses()
{
    if(m_database)
        delete m_database;
}

void DatabaseCourses::initialize()
{
    self->m_database = new SQLiteDatabase(qApp->applicationDirPath() + QString("/database/courses.db"));
    self->connect(self->m_database, &SQLiteDatabase::sendMessage, self, &DatabaseCourses::receiveMessage);

    self->db_classroom.tableName = "classroom";
    self->db_classroom.hasAutoIncrementIndex = false;
    self->db_classroom.primaryKeys << "building" << "room_number";
    self->db_classroom.columns << QPair<QString, SQLiteDataType>("building", SQLiteDataType::TEXT)
            << QPair<QString, SQLiteDataType>("room_number", SQLiteDataType::INTEGER)
            << QPair<QString, SQLiteDataType>("capacity", SQLiteDataType::INTEGER);

    self->db_course.tableName = "course";
    self->db_course.hasAutoIncrementIndex = true;
    self->db_course.primaryKeys << "course_id";
    self->db_course.columns << QPair<QString, SQLiteDataType>("course_id", SQLiteDataType::INTEGER)
            << QPair<QString, SQLiteDataType>("title", SQLiteDataType::TEXT)
            << QPair<QString, SQLiteDataType>("description", SQLiteDataType::TEXT)
            << QPair<QString, SQLiteDataType>("credit", SQLiteDataType::REAL)
            << QPair<QString, SQLiteDataType>("dept_name", SQLiteDataType::TEXT);

    self->db_department.tableName = "department";
    self->db_department.hasAutoIncrementIndex = true;
    self->db_department.primaryKeys << "id";
    self->db_department.columns << QPair<QString, SQLiteDataType>("id", SQLiteDataType::INTEGER)
            << QPair<QString, SQLiteDataType>("dept_name", SQLiteDataType::TEXT);

    self->db_instructor.tableName = "instructor";
    self->db_instructor.hasAutoIncrementIndex = true;
    self->db_instructor.primaryKeys << "ID";
    self->db_instructor.columns << QPair<QString, SQLiteDataType>("ID", SQLiteDataType::INTEGER)
            << QPair<QString, SQLiteDataType>("name", SQLiteDataType::TEXT)
            << QPair<QString, SQLiteDataType>("dept_name", SQLiteDataType::TEXT)
            << QPair<QString, SQLiteDataType>("description", SQLiteDataType::TEXT);

    self->db_section.tableName = "section";
    self->db_section.hasAutoIncrementIndex = true;
    self->db_section.primaryKeys << "sec_id";
    self->db_section.columns << QPair<QString, SQLiteDataType>("sec_id", SQLiteDataType::INTEGER)
            << QPair<QString, SQLiteDataType>("course_id", SQLiteDataType::INTEGER)
            << QPair<QString, SQLiteDataType>("instructor_id", SQLiteDataType::INTEGER)
            << QPair<QString, SQLiteDataType>("semester", SQLiteDataType::TEXT)
            << QPair<QString, SQLiteDataType>("year", SQLiteDataType::INTEGER)
            << QPair<QString, SQLiteDataType>("time", SQLiteDataType::TEXT)
            << QPair<QString, SQLiteDataType>("building", SQLiteDataType::TEXT)
            << QPair<QString, SQLiteDataType>("room_number", SQLiteDataType::INTEGER);

    self->db_student.tableName = "student";
    self->db_student.hasAutoIncrementIndex = true;
    self->db_student.primaryKeys << "ID";
    self->db_student.columns << QPair<QString, SQLiteDataType>("ID", SQLiteDataType::INTEGER)
            << QPair<QString, SQLiteDataType>("name", SQLiteDataType::TEXT)
            << QPair<QString, SQLiteDataType>("grade", SQLiteDataType::REAL)
            << QPair<QString, SQLiteDataType>("code", SQLiteDataType::INTEGER)
            << QPair<QString, SQLiteDataType>("dept_name", SQLiteDataType::TEXT);

    self->db_sequence.tableName = "sqlite_sequence";
    self->db_sequence.hasAutoIncrementIndex = false;
    self->db_sequence.primaryKeys << "name";
    self->db_sequence.columns << QPair<QString, SQLiteDataType>("name", SQLiteDataType::TEXT)
            << QPair<QString, SQLiteDataType>("seq", SQLiteDataType::TEXT);
}

QVariantList DatabaseCourses::readClassroom(const QStringList &primaryKeyValues)
{
    return self->m_database->read(self->db_classroom, primaryKeyValues);
}

QVariantList DatabaseCourses::readCourse(const QStringList &primaryKeyValues)
{
    return self->m_database->read(self->db_course, primaryKeyValues);
}

QVariantList DatabaseCourses::readDepartment(const QStringList &primaryKeyValues)
{
    return self->m_database->read(self->db_department, primaryKeyValues);
}

QVariantList DatabaseCourses::readInstructor(const QStringList &primaryKeyValues)
{
    return self->m_database->read(self->db_instructor, primaryKeyValues);
}

QVariantList DatabaseCourses::readSection(const QStringList &primaryKeyValues)
{
    return self->m_database->read(self->db_section, primaryKeyValues);
}

QVariantList DatabaseCourses::readStudent(const QStringList &primaryKeyValues)
{
    return self->m_database->read(self->db_student, primaryKeyValues);
}

QList<QVariantList> DatabaseCourses::readAllClassroom()
{
    return self->m_database->readAll(self->db_classroom);
}

QList<QVariantList> DatabaseCourses::readAllCourse()
{
    return self->m_database->readAll(self->db_course);
}

QList<QVariantList> DatabaseCourses::readAllDepartment()
{
    return self->m_database->readAll(self->db_department);
}

QList<QVariantList> DatabaseCourses::readAllInstructor()
{
    return self->m_database->readAll(self->db_instructor);
}

QList<QVariantList> DatabaseCourses::readAllSection()
{
    return self->m_database->readAll(self->db_section);
}

QList<QVariantList> DatabaseCourses::readAllStudent()
{
    return self->m_database->readAll(self->db_student);
}

void DatabaseCourses::receiveMessage(MessageType type, QString module, QString message)
{
    emit sendMessage(type, module, message);
}
