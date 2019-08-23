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
    QByteArrayData data[12];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChooseClassWin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChooseClassWin_t qt_meta_stringdata_ChooseClassWin = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ChooseClassWin"
QT_MOC_LITERAL(1, 15, 14), // "backBtnClicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 20), // "courseDetailsClicked"
QT_MOC_LITERAL(4, 52, 17), // "clickChooseCourse"
QT_MOC_LITERAL(5, 70, 17), // "clickCourseDetail"
QT_MOC_LITERAL(6, 88, 8), // "itemName"
QT_MOC_LITERAL(7, 97, 10), // "itemNumber"
QT_MOC_LITERAL(8, 108, 21), // "on_minimumBtn_clicked"
QT_MOC_LITERAL(9, 130, 19), // "on_closeBtn_clicked"
QT_MOC_LITERAL(10, 150, 18), // "on_sendBtn_clicked"
QT_MOC_LITERAL(11, 169, 7) // "getdata"

    },
    "ChooseClassWin\0backBtnClicked\0\0"
    "courseDetailsClicked\0clickChooseCourse\0"
    "clickCourseDetail\0itemName\0itemNumber\0"
    "on_minimumBtn_clicked\0on_closeBtn_clicked\0"
    "on_sendBtn_clicked\0getdata"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChooseClassWin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    2,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   60,    2, 0x08 /* Private */,
       5,    2,   61,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    6,    7,
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
        case 0: _t->backBtnClicked(); break;
        case 1: _t->courseDetailsClicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->clickChooseCourse(); break;
        case 3: _t->clickCourseDetail((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->on_minimumBtn_clicked(); break;
        case 5: _t->on_closeBtn_clicked(); break;
        case 6: _t->on_sendBtn_clicked(); break;
        case 7: _t->getdata(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChooseClassWin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChooseClassWin::backBtnClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChooseClassWin::*)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChooseClassWin::courseDetailsClicked)) {
                *result = 1;
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
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ChooseClassWin::backBtnClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ChooseClassWin::courseDetailsClicked(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
