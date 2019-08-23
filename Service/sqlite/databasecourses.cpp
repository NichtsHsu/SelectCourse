#include "databasecourses.h"

DatabaseCourses *DatabaseCourses::self = new DatabaseCourses;
SQLiteTable DatabaseCourses::db_classroom;
SQLiteTable DatabaseCourses::db_course;
SQLiteTable DatabaseCourses::db_department;
SQLiteTable DatabaseCourses::db_instructor;
SQLiteTable DatabaseCourses::db_section;
SQLiteTable DatabaseCourses::db_student;
SQLiteTable DatabaseCourses::db_sequence;

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

    db_classroom.tableName = "classroom";
    db_classroom.hasAutoIncrementIndex = false;
    db_classroom.primaryKeys << "building" << "room_number";
    db_classroom.columns << QPair<QString, SQLiteDataType>("building", SQLiteDataType::TEXT)
            << QPair<QString, SQLiteDataType>("room_number", SQLiteDataType::INTEGER)
            << QPair<QString, SQLiteDataType>("capacity", SQLiteDataType::INTEGER);

    db_course.tableName = "course";
    db_course.hasAutoIncrementIndex = true;
    db_course.primaryKeys << "course_id";
    db_course.columns << QPair<QString, SQLiteDataType>("course_id", SQLiteDataType::INTEGER)
            << QPair<QString, SQLiteDataType>("title", SQLiteDataType::TEXT)
            << QPair<QString, SQLiteDataType>("description", SQLiteDataType::TEXT)
            << QPair<QString, SQLiteDataType>("credits", SQLiteDataType::REAL)
            << QPair<QString, SQLiteDataType>("dept_name", SQLiteDataType::TEXT);

    db_department.tableName = "department";
    db_department.hasAutoIncrementIndex = true;
    db_department.primaryKeys << "id";
    db_department.columns << QPair<QString, SQLiteDataType>("id", SQLiteDataType::INTEGER)
            << QPair<QString, SQLiteDataType>("dept_name", SQLiteDataType::TEXT);

    db_instructor.tableName = "instructor";
    db_instructor.hasAutoIncrementIndex = true;
    db_instructor.primaryKeys << "ID";
    db_instructor.columns << QPair<QString, SQLiteDataType>("ID", SQLiteDataType::INTEGER)
            << QPair<QString, SQLiteDataType>("name", SQLiteDataType::TEXT)
            << QPair<QString, SQLiteDataType>("dept_name", SQLiteDataType::TEXT)
            << QPair<QString, SQLiteDataType>("description", SQLiteDataType::TEXT);

    db_section.tableName = "section";
    db_section.hasAutoIncrementIndex = true;
    db_section.primaryKeys << "sec_id";
    db_section.columns << QPair<QString, SQLiteDataType>("sec_id", SQLiteDataType::INTEGER)
            << QPair<QString, SQLiteDataType>("course_id", SQLiteDataType::INTEGER)
            << QPair<QString, SQLiteDataType>("instructor_id", SQLiteDataType::INTEGER)
            << QPair<QString, SQLiteDataType>("semester", SQLiteDataType::TEXT)
            << QPair<QString, SQLiteDataType>("year", SQLiteDataType::INTEGER)
            << QPair<QString, SQLiteDataType>("time", SQLiteDataType::TEXT)
            << QPair<QString, SQLiteDataType>("building", SQLiteDataType::TEXT)
            << QPair<QString, SQLiteDataType>("room_number", SQLiteDataType::INTEGER);

    db_student.tableName = "student";
    db_student.hasAutoIncrementIndex = true;
    db_student.primaryKeys << "ID";
    db_student.columns << QPair<QString, SQLiteDataType>("ID", SQLiteDataType::INTEGER)
            << QPair<QString, SQLiteDataType>("name", SQLiteDataType::TEXT)
            << QPair<QString, SQLiteDataType>("grade", SQLiteDataType::INTEGER)
            << QPair<QString, SQLiteDataType>("code", SQLiteDataType::INTEGER)
            << QPair<QString, SQLiteDataType>("dept_name", SQLiteDataType::TEXT);

    db_sequence.tableName = "sqlite_sequence";
    db_sequence.hasAutoIncrementIndex = false;
    db_sequence.primaryKeys << "name";
    db_sequence.columns << QPair<QString, SQLiteDataType>("name", SQLiteDataType::TEXT)
            << QPair<QString, SQLiteDataType>("seq", SQLiteDataType::TEXT);
}

QVariantList DatabaseCourses::readClassroom(const QStringList &primaryKeyValues)
{
    return self->m_database->read(db_classroom, primaryKeyValues);
}

QVariantList DatabaseCourses::readCourse(const QStringList &primaryKeyValues)
{
    return self->m_database->read(db_course, primaryKeyValues);
}

QVariantList DatabaseCourses::readDepartment(const QStringList &primaryKeyValues)
{
    return self->m_database->read(db_department, primaryKeyValues);
}

QVariantList DatabaseCourses::readInstructor(const QStringList &primaryKeyValues)
{
    return self->m_database->read(db_instructor, primaryKeyValues);
}

QVariantList DatabaseCourses::readSection(const QStringList &primaryKeyValues)
{
    return self->m_database->read(db_section, primaryKeyValues);
}

QVariantList DatabaseCourses::readStudent(const QStringList &primaryKeyValues)
{
    return self->m_database->read(db_student, primaryKeyValues);
}

QList<QVariantList> DatabaseCourses::readAllClassroom()
{
    return self->m_database->readAll(db_classroom);
}

QList<QVariantList> DatabaseCourses::readAllCourse()
{
    return self->m_database->readAll(db_course);
}

QList<QVariantList> DatabaseCourses::readAllDepartment()
{
    return self->m_database->readAll(db_department);
}

QList<QVariantList> DatabaseCourses::readAllInstructor()
{
    return self->m_database->readAll(db_instructor);
}

QList<QVariantList> DatabaseCourses::readAllSection()
{
    return self->m_database->readAll(db_section);
}

QList<QVariantList> DatabaseCourses::readAllStudent()
{
    return self->m_database->readAll(db_student);
}

void DatabaseCourses::addClassRoom(QVariantList values)
{
    self->m_database->insert(db_classroom, values);
}

void DatabaseCourses::addCourse(QVariantList values)
{
    self->m_database->insert(db_course, values);
}

void DatabaseCourses::addDepartment(QVariantList values)
{
    self->m_database->insert(db_department, values);
}

void DatabaseCourses::addInstructor(QVariantList values)
{
    self->m_database->insert(db_instructor, values);
}

void DatabaseCourses::addSection(QVariantList values)
{
    self->m_database->insert(db_section, values);
}

void DatabaseCourses::addStudent(QVariantList values)
{
    self->m_database->insert(db_student, values);
    long long id = self->m_database->read(db_sequence, QStringList() << "student", "seq").toString().toLongLong();
    self->m_database->update(db_student, QStringList() << QString::number(id), "code", QVariant(10000 + id));
}

void DatabaseCourses::receiveMessage(MessageType type, QString module, QString message)
{
    emit sendMessage(type, module, message);
}
