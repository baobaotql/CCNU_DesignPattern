/****************************************************************************
** Meta object code from reading C++ file 'singleinstance.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../singleapplication/singleinstance.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'singleinstance.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SingleInstance_t {
    QByteArrayData data[7];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SingleInstance_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SingleInstance_t qt_meta_stringdata_SingleInstance = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SingleInstance"
QT_MOC_LITERAL(1, 15, 10), // "newMessage"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 3), // "msg"
QT_MOC_LITERAL(4, 31, 18), // "otherInstanceFound"
QT_MOC_LITERAL(5, 50, 6), // "frozen"
QT_MOC_LITERAL(6, 57, 12) // "onlyInstance"

    },
    "SingleInstance\0newMessage\0\0msg\0"
    "otherInstanceFound\0frozen\0onlyInstance"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SingleInstance[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       6,    0,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,

       0        // eod
};

void SingleInstance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SingleInstance *_t = static_cast<SingleInstance *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->otherInstanceFound((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onlyInstance(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SingleInstance::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SingleInstance::newMessage)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SingleInstance::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SingleInstance::otherInstanceFound)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SingleInstance::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SingleInstance::onlyInstance)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject SingleInstance::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SingleInstance.data,
      qt_meta_data_SingleInstance,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SingleInstance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SingleInstance::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SingleInstance.stringdata0))
        return static_cast<void*>(const_cast< SingleInstance*>(this));
    return QObject::qt_metacast(_clname);
}

int SingleInstance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SingleInstance::newMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SingleInstance::otherInstanceFound(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SingleInstance::onlyInstance()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
