#include "section.h"

Section::Section(){}

SectionList::SectionList()
{
    init();
}

SectionList::~SectionList()
{
    removeall();
}

void SectionList::init()
{
    curr = rear = head = new Section();
    len = 0;
}

void SectionList::removeall()
{
    while (head != nullptr)
    {
        curr = head;
        head = head->next;
        delete curr;
    }
    len = 0;
}

void SectionList::clear()
{
    removeall();
    init();
}

void SectionList::append(Section *S)
{
    rear = rear->next = S;
    len++;
}

void SectionList::next()
{
    if(curr != rear)
    {
        curr = curr->next;
    }
}

Section* SectionList::findCourseID(QString c)
{
    curr = head;
    for(int i = 0; i < len; i++ )
    {
        if(curr->course_id == c)
        {
            return curr;
        }
        else if(curr != rear)
        {
            curr = curr->next;
        }
        else
        {
            return new Section();
        }
    }
}

Section* SectionList::findTeacherID(QString t)
{
    curr = head;
    for(int i = 0; i < len; i++ )
    {
        if(curr->course_id == t)
        {
            return curr;
        }
        else if(curr != rear)
        {
            curr = curr->next;
        }
        else
        {
            return new Section();
        }
    }
}

Section* SectionList::now()
{
    return curr;
}

int SectionList::cnt()
{
    return len;
}
