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
    QByteArrayData data[23];
    char stringdata0[282];
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
QT_MOC_LITERAL(14, 141, 17), // "clickChooseCourse"
QT_MOC_LITERAL(15, 159, 17), // "clickCourseDetail"
QT_MOC_LITERAL(16, 177, 8), // "itemName"
QT_MOC_LITERAL(17, 186, 10), // "itemNumber"
QT_MOC_LITERAL(18, 197, 15), // "clickQuitCourse"
QT_MOC_LITERAL(19, 213, 21), // "on_minimumBtn_clicked"
QT_MOC_LITERAL(20, 235, 19), // "on_closeBtn_clicked"
QT_MOC_LITERAL(21, 255, 18), // "on_sendBtn_clicked"
QT_MOC_LITERAL(22, 274, 7) // "getdata"

    },
    "ChooseClassWin\0chooseClassBtnClicked\0"
    "\0name\0id\0nameofteacher\0connectNum\0"
    "creidts\0time\0enableBtn\0row\0column\0"
    "backBtnClicked\0courseDetailsClicked\0"
    "clickChooseCourse\0clickCourseDetail\0"
    "itemName\0itemNumber\0clickQuitCourse\0"
    "on_minimumBtn_clicked\0on_closeBtn_clicked\0"
    "on_sendBtn_clicked\0getdata"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChooseClassWin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    6,   69,    2, 0x06 /* Public */,
       9,    2,   82,    2, 0x06 /* Public */,
      12,    0,   87,    2, 0x06 /* Public */,
      13,    2,   88,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   93,    2, 0x08 /* Private */,
      15,    2,   94,    2, 0x08 /* Private */,
      18,    1,   99,    2, 0x08 /* Private */,
      19,    0,  102,    2, 0x08 /* Private */,
      20,    0,  103,    2, 0x08 /* Private */,
      21,    0,  104,    2, 0x08 /* Private */,
      22,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Double, QMetaType::QString,    3,    4,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   16,   17,
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
        case 4: _t->clickChooseCourse(); break;
        case 5: _t->clickCourseDetail((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->clickQuitCourse((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_minimumBtn_clicked(); break;
        case 8: _t->on_closeBtn_clicked(); break;
        case 9: _t->on_sendBtn_clicked(); break;
        case 10: _t->getdata(); break;
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
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
