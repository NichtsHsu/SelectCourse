#ifndef SECTION_H
#define SECTION_H

#include <QString>

class Section
{
public:
    Section();

    QString section_id;
    QString course_id;
    QString course_name;
    QString teacher_id;
    QString teacher;
    QString desp;
    double credit;
    Section* next;
};


class SectionList
{
public:
    SectionList();
    ~SectionList();
    void clear();
    void append(Section* S);
    void next();
    Section* findCourseID(QString c);
    Section* findTeacherID(QString t);
    Section* now();
    int cnt();

private:
    Section *head;
    Section *curr;
    Section *rear;
    int len;

    void init();
    void removeall();
};

#endif // SECTION_H
