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

signals:
    void sendMessage(MessageType type, QString module, QString message);

public slots:
    void receiveMessage(MessageType type, QString module, QString message);

private:
    static DatabaseStudents *self;
    SQLiteDatabase *m_database;
    SQLiteTable db_studentTemplate;
};

#endif // DATABASESTUDENTS_H
