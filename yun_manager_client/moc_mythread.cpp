/****************************************************************************
** Meta object code from reading C++ file 'mythread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mythread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mythread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_myThread_t {
    QByteArrayData data[8];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_myThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_myThread_t qt_meta_stringdata_myThread = {
    {
QT_MOC_LITERAL(0, 0, 8), // "myThread"
QT_MOC_LITERAL(1, 9, 19), // "monitorEnableSignal"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 20), // "updateHostInfoSignal"
QT_MOC_LITERAL(4, 51, 12), // "QJsonObject&"
QT_MOC_LITERAL(5, 64, 8), // "hostInfo"
QT_MOC_LITERAL(6, 73, 21), // "readMonitorEnableSlot"
QT_MOC_LITERAL(7, 95, 11) // "readMessage"

    },
    "myThread\0monitorEnableSignal\0\0"
    "updateHostInfoSignal\0QJsonObject&\0"
    "hostInfo\0readMonitorEnableSlot\0"
    "readMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   38,    2, 0x0a /* Public */,
       7,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

       0        // eod
};

void myThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        myThread *_t = static_cast<myThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->monitorEnableSignal(); break;
        case 1: _t->updateHostInfoSignal((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 2: _t->readMonitorEnableSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->readMessage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (myThread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&myThread::monitorEnableSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (myThread::*_t)(QJsonObject & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&myThread::updateHostInfoSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject myThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_myThread.data,
      qt_meta_data_myThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *myThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_myThread.stringdata0))
        return static_cast<void*>(const_cast< myThread*>(this));
    return QThread::qt_metacast(_clname);
}

int myThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void myThread::monitorEnableSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void myThread::updateHostInfoSignal(QJsonObject & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
