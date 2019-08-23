/****************************************************************************
** Meta object code from reading C++ file 'chooseclasswin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Client/chooseclasswin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chooseclasswin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChooseClassWin_t {
    QByteArrayData data[26];
    char stringdata0[339];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChooseClassWin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChooseClassWin_t qt_meta_stringdata_ChooseClassWin = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ChooseClassWin"
QT_MOC_LITERAL(1, 15, 21), // "chooseClassBtnClicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4), // "name"
QT_MOC_LITERAL(4, 43, 2), // "id"
QT_MOC_LITERAL(5, 46, 13), // "nameofteacher"
QT_MOC_LITERAL(6, 60, 10), // "connectNum"
QT_MOC_LITERAL(7, 71, 7), // "creidts"
QT_MOC_LITERAL(8, 79, 4), // "time"
QT_MOC_LITERAL(9, 84, 9), // "enableBtn"
QT_MOC_LITERAL(10, 94, 3), // "row"
QT_MOC_LITERAL(11, 98, 6), // "column"
QT_MOC_LITERAL(12, 105, 14), // "backBtnClicked"
QT_MOC_LITERAL(13, 120, 20), // "courseDetailsClicked"
QT_MOC_LITERAL(14, 141, 18), // "selectedSectionsOk"
QT_MOC_LITERAL(15, 160, 14), // "QList<Section>"
QT_MOC_LITERAL(16, 175, 22), // "QMap<long long,Course>"
QT_MOC_LITERAL(17, 198, 17), // "clickChooseCourse"
QT_MOC_LITERAL(18, 216, 17), // "clickCourseDetail"
QT_MOC_LITERAL(19, 234, 8), // "itemName"
QT_MOC_LITERAL(20, 243, 10), // "itemNumber"
QT_MOC_LITERAL(21, 254, 15), // "clickQuitCourse"
QT_MOC_LITERAL(22, 270, 21), // "on_minimumBtn_clicked"
QT_MOC_LITERAL(23, 292, 19), // "on_closeBtn_clicked"
QT_MOC_LITERAL(24, 312, 18), // "on_sendBtn_clicked"
QT_MOC_LITERAL(25, 331, 7) // "getdata"

    },
    "ChooseClassWin\0chooseClassBtnClicked\0"
    "\0name\0id\0nameofteacher\0connectNum\0"
    "creidts\0time\0enableBtn\0row\0column\0"
    "backBtnClicked\0courseDetailsClicked\0"
    "selectedSectionsOk\0QList<Section>\0"
    "QMap<long long,Course>\0clickChooseCourse\0"
    "clickCourseDetail\0itemName\0itemNumber\0"
    "clickQuitCourse\0on_minimumBtn_clicked\0"
    "on_closeBtn_clicked\0on_sendBtn_clicked\0"
    "getdata"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChooseClassWin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    6,   74,    2, 0x06 /* Public */,
       9,    2,   87,    2, 0x06 /* Public */,
      12,    0,   92,    2, 0x06 /* Public */,
      13,    2,   93,    2, 0x06 /* Public */,
      14,    2,   98,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,  103,    2, 0x08 /* Private */,
      18,    2,  104,    2, 0x08 /* Private */,
      21,    1,  109,    2, 0x08 /* Private */,
      22,    0,  112,    2, 0x08 /* Private */,
      23,    0,  113,    2, 0x08 /* Private */,
      24,    0,  114,    2, 0x08 /* Private */,
      25,    0,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Double, QMetaType::QString,    3,    4,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 16,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   19,   20,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ChooseClassWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChooseClassWin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->chooseClassBtnClicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6]))); break;
        case 1: _t->enableBtn((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->backBtnClicked(); break;
        case 3: _t->courseDetailsClicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->selectedSectionsOk((*reinterpret_cast< QList<Section>(*)>(_a[1])),(*reinterpret_cast< QMap<long long,Course>(*)>(_a[2]))); break;
        case 5: _t->clickChooseCourse(); break;
        case 6: _t->clickCourseDetail((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->clickQuitCourse((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_minimumBtn_clicked(); break;
        case 9: _t->on_closeBtn_clicked(); break;
        case 10: _t->on_sendBtn_clicked(); break;
        case 11: _t->getdata(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChooseClassWin::*)(QString , int , QString , int , double , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChooseClassWin::chooseClassBtnClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChooseClassWin::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChooseClassWin::enableBtn)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ChooseClassWin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChooseClassWin::backBtnClicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ChooseClassWin::*)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChooseClassWin::courseDetailsClicked)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ChooseClassWin::*)(QList<Section> , QMap<long long,Course> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChooseClassWin::selectedSectionsOk)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ChooseClassWin::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ChooseClassWin.data,
    qt_meta_data_ChooseClassWin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChooseClassWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChooseClassWin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChooseClassWin.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ChooseClassWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void ChooseClassWin::chooseClassBtnClicked(QString _t1, int _t2, QString _t3, int _t4, double _t5, QString _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChooseClassWin::enableBtn(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ChooseClassWin::backBtnClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ChooseClassWin::courseDetailsClicked(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ChooseClassWin::selectedSectionsOk(QList<Section> _t1, QMap<long long,Course> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
