#ifndef DATABASECOURSES_H
#define DATABASECOURSES_H

#include <QObject>
#include <QApplication>
#include <QString>
#include "sqlitedatabase.h"

class DatabaseCourses : public QObject
{
    Q_OBJECT
public:
    explicit DatabaseCourses(QObject *parent = nullptr);
    ~DatabaseCourses();

    static void initialize();

    static QVariantList readClassroom(const QStringList &primaryKeyValues = QStringList());
    static QVariantList readCourse(const QStringList &primaryKeyValues = QStringList());
    static QVariantList readDepartment(const QStringList &primaryKeyValues = QStringList());
    static QVariantList readInstructor(const QStringList &primaryKeyValues = QStringList());
    static QVariantList readSection(const QStringList &primaryKeyValues = QStringList());
    static QVariantList readStudent(const QStringList &primaryKeyValues = QStringList());

    static QList<QVariantList> readAllClassroom();
    static QList<QVariantList> readAllCourse();
    static QList<QVariantList> readAllDepartment();
    static QList<QVariantList> readAllInstructor();
    static QList<QVariantList> readAllSection();
    static QList<QVariantList> readAllStudent();

signals:
    void sendMessage(MessageType type, QString module, QString message);

public slots:
    void receiveMessage(MessageType type, QString module, QString message);

private:
    static DatabaseCourses *self;
    SQLiteDatabase *m_database;
    SQLiteTable db_classroom, db_course, db_department, db_instructor, db_section, db_student, db_sequence;
};

#endif // DATABASECOURSES_H
