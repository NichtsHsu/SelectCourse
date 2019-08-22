#ifndef DATABASESTUDENTS_H
#define DATABASESTUDENTS_H

#include <QObject>
#include <QApplication>
#include <QString>
#include "sqlitedatabase.h"

class DatabaseStudents : public QObject
{
    Q_OBJECT
public:
    explicit DatabaseStudents(QObject *parent = nullptr);
    ~DatabaseStudents();

    static void initialize();

    static void setPassword(long long code, const QString &password);
    static QString getPassword(long long code);

    static QList<QVariantList> getSelectedCourse(long long code);
    static void addSelectedCourse(long long code, long long course_id, long long sec_id);

    static DatabaseStudents *self;
    static SQLiteTable db_account, db_studentTemplate;

signals:
    void sendMessage(MessageType type, QString module, QString message);

public slots:
    void receiveMessage(MessageType type, QString module, QString message);

private:
    SQLiteDatabase *m_database;
};

#endif // DATABASESTUDENTS_H
