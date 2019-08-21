#ifndef DATABASESTUDENTS_H
#define DATABASESTUDENTS_H

#include <QObject>

class DatabaseStudents : public QObject
{
    Q_OBJECT
public:
    explicit DatabaseStudents(QObject *parent = nullptr);

signals:

public slots:
};

#endif // DATABASESTUDENTS_H
