/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[28];
    char stringdata0[531];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 26), // "activeVmListResponseSignal"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 8), // "QString&"
QT_MOC_LITERAL(4, 44, 19), // "monitorEnableSignal"
QT_MOC_LITERAL(5, 64, 6), // "enable"
QT_MOC_LITERAL(6, 71, 14), // "vmStatusSignal"
QT_MOC_LITERAL(7, 86, 6), // "vmName"
QT_MOC_LITERAL(8, 93, 6), // "status"
QT_MOC_LITERAL(9, 100, 26), // "on_pushButtonStart_clicked"
QT_MOC_LITERAL(10, 127, 29), // "on_pushButtonShutdown_clicked"
QT_MOC_LITERAL(11, 157, 28), // "on_pushButtonDestroy_clicked"
QT_MOC_LITERAL(12, 186, 27), // "on_pushButtonDefine_clicked"
QT_MOC_LITERAL(13, 214, 29), // "on_pushButtonUndefine_clicked"
QT_MOC_LITERAL(14, 244, 26), // "on_pushButtonFetch_clicked"
QT_MOC_LITERAL(15, 271, 11), // "readMessage"
QT_MOC_LITERAL(16, 283, 12), // "displayError"
QT_MOC_LITERAL(17, 296, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(18, 325, 37), // "on_listWidgetActive_itemDoubl..."
QT_MOC_LITERAL(19, 363, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(20, 380, 4), // "item"
QT_MOC_LITERAL(21, 385, 39), // "on_listWidgetInActive_itemDou..."
QT_MOC_LITERAL(22, 425, 24), // "readMonitorEnableRequest"
QT_MOC_LITERAL(23, 450, 18), // "recvUpdateHostInfo"
QT_MOC_LITERAL(24, 469, 12), // "QJsonObject&"
QT_MOC_LITERAL(25, 482, 8), // "hostInfo"
QT_MOC_LITERAL(26, 491, 22), // "receiveVmStatusRequest"
QT_MOC_LITERAL(27, 514, 16) // "defineDetailRecv"

    },
    "Widget\0activeVmListResponseSignal\0\0"
    "QString&\0monitorEnableSignal\0enable\0"
    "vmStatusSignal\0vmName\0status\0"
    "on_pushButtonStart_clicked\0"
    "on_pushButtonShutdown_clicked\0"
    "on_pushButtonDestroy_clicked\0"
    "on_pushButtonDefine_clicked\0"
    "on_pushButtonUndefine_clicked\0"
    "on_pushButtonFetch_clicked\0readMessage\0"
    "displayError\0QAbstractSocket::SocketError\0"
    "on_listWidgetActive_itemDoubleClicked\0"
    "QListWidgetItem*\0item\0"
    "on_listWidgetInActive_itemDoubleClicked\0"
    "readMonitorEnableRequest\0recvUpdateHostInfo\0"
    "QJsonObject&\0hostInfo\0receiveVmStatusRequest\0"
    "defineDetailRecv"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    1,  102,    2, 0x06 /* Public */,
       6,    2,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  110,    2, 0x08 /* Private */,
      10,    0,  111,    2, 0x08 /* Private */,
      11,    0,  112,    2, 0x08 /* Private */,
      12,    0,  113,    2, 0x08 /* Private */,
      13,    0,  114,    2, 0x08 /* Private */,
      14,    0,  115,    2, 0x08 /* Private */,
      15,    0,  116,    2, 0x08 /* Private */,
      16,    1,  117,    2, 0x08 /* Private */,
      18,    1,  120,    2, 0x08 /* Private */,
      21,    1,  123,    2, 0x08 /* Private */,
      22,    0,  126,    2, 0x08 /* Private */,
      23,    1,  127,    2, 0x08 /* Private */,
      26,    1,  130,    2, 0x08 /* Private */,
      27,    1,  133,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeVmListResponseSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->monitorEnableSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->vmStatusSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->on_pushButtonStart_clicked(); break;
        case 4: _t->on_pushButtonShutdown_clicked(); break;
        case 5: _t->on_pushButtonDestroy_clicked(); break;
        case 6: _t->on_pushButtonDefine_clicked(); break;
        case 7: _t->on_pushButtonUndefine_clicked(); break;
        case 8: _t->on_pushButtonFetch_clicked(); break;
        case 9: _t->readMessage(); break;
        case 10: _t->displayError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 11: _t->on_listWidgetActive_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 12: _t->on_listWidgetInActive_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 13: _t->readMonitorEnableRequest(); break;
        case 14: _t->recvUpdateHostInfo((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 15: _t->receiveVmStatusRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->defineDetailRecv((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Widget::*_t)(QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::activeVmListResponseSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Widget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::monitorEnableSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Widget::*_t)(QString & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::vmStatusSignal)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget.data,
      qt_meta_data_Widget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void Widget::activeVmListResponseSignal(QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Widget::monitorEnableSignal(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Widget::vmStatusSignal(QString & _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
