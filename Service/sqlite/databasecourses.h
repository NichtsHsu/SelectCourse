#ifndef DATABASECOURSES_H
#define DATABASECOURSES_H

#include <QObject>
#include <QApplication>
#include <QString>
#include "sqlitedatabase.h"
#include "message/message.h"

class DatabaseCourses : public QObject
{
    Q_OBJECT
public:
    explicit DatabaseCourses(QObject *parent = nullptr);
    ~DatabaseCourses();

    static void initialize();

    static QVariantList readClassroom(const QStringList &primaryKeyValues);
    static QVariantList readCourse(const QStringList &primaryKeyValues);
    static QVariantList readDepartment(const QStringList &primaryKeyValues);
    static QVariantList readInstructor(const QStringList &primaryKeyValues);
    static QVariantList readSection(const QStringList &primaryKeyValues);
    static QVariantList readStudent(const QStringList &primaryKeyValues);

    static QList<QVariantList> readAllClassroom();
    static QList<QVariantList> readAllCourse();
    static QList<QVariantList> readAllDepartment();
    static QList<QVariantList> readAllInstructor();
    static QList<QVariantList> readAllSection();
    static QList<QVariantList> readAllStudent();

    static void addClassRoom(QVariantList values);
    static void addCourse(QVariantList values);
    static void addDepartment(QVariantList values);
    static void addInstructor(QVariantList values);
    static void addSection(QVariantList values);
    static void addStudent(QVariantList values);

    static DatabaseCourses *self;
    static SQLiteTable db_classroom, db_course, db_department, db_instructor, db_section, db_student, db_sequence;

signals:
    void sendMessage(MessageType type, QString module, QString message);

public slots:
    void receiveMessage(MessageType type, QString module, QString message);

private:
    SQLiteDatabase *m_database;
};



#endif // DATABASECOURSES_H
