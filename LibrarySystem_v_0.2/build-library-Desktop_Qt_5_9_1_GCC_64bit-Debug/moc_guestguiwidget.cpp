/****************************************************************************
** Meta object code from reading C++ file 'guestguiwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../library/guestguiwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'guestguiwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GuestGUIWidget_t {
    QByteArrayData data[10];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GuestGUIWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GuestGUIWidget_t qt_meta_stringdata_GuestGUIWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GuestGUIWidget"
QT_MOC_LITERAL(1, 15, 21), // "on_exitButton_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 26), // "on_searchingButton_clicked"
QT_MOC_LITERAL(4, 65, 23), // "on_borrowButton_clicked"
QT_MOC_LITERAL(5, 89, 23), // "on_returnButton_clicked"
QT_MOC_LITERAL(6, 113, 23), // "on_logOffButton_clicked"
QT_MOC_LITERAL(7, 137, 11), // "receiveData"
QT_MOC_LITERAL(8, 149, 4), // "data"
QT_MOC_LITERAL(9, 154, 21) // "on_pushButton_clicked"

    },
    "GuestGUIWidget\0on_exitButton_clicked\0"
    "\0on_searchingButton_clicked\0"
    "on_borrowButton_clicked\0on_returnButton_clicked\0"
    "on_logOffButton_clicked\0receiveData\0"
    "data\0on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GuestGUIWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,

       0        // eod
};

void GuestGUIWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GuestGUIWidget *_t = static_cast<GuestGUIWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_exitButton_clicked(); break;
        case 1: _t->on_searchingButton_clicked(); break;
        case 2: _t->on_borrowButton_clicked(); break;
        case 3: _t->on_returnButton_clicked(); break;
        case 4: _t->on_logOffButton_clicked(); break;
        case 5: _t->receiveData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject GuestGUIWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GuestGUIWidget.data,
      qt_meta_data_GuestGUIWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GuestGUIWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuestGUIWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GuestGUIWidget.stringdata0))
        return static_cast<void*>(const_cast< GuestGUIWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int GuestGUIWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE