/****************************************************************************
** Meta object code from reading C++ file 'vk.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vk.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vk.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VK_t {
    QByteArrayData data[13];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VK_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VK_t qt_meta_stringdata_VK = {
    {
QT_MOC_LITERAL(0, 0, 2), // "VK"
QT_MOC_LITERAL(1, 3, 12), // "tokenChanged"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 4), // "done"
QT_MOC_LITERAL(4, 22, 9), // "saveToken"
QT_MOC_LITERAL(5, 32, 11), // "checkAccess"
QT_MOC_LITERAL(6, 44, 6), // "Token*"
QT_MOC_LITERAL(7, 51, 5), // "token"
QT_MOC_LITERAL(8, 57, 16), // "getTokenFromFile"
QT_MOC_LITERAL(9, 74, 6), // "logout"
QT_MOC_LITERAL(10, 81, 8), // "QWindow*"
QT_MOC_LITERAL(11, 90, 6), // "window"
QT_MOC_LITERAL(12, 97, 4) // "quit"

    },
    "VK\0tokenChanged\0\0done\0saveToken\0"
    "checkAccess\0Token*\0token\0getTokenFromFile\0"
    "logout\0QWindow*\0window\0quit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VK[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   51,    2, 0x02 /* Public */,
       5,    1,   52,    2, 0x02 /* Public */,
       8,    0,   55,    2, 0x02 /* Public */,
       9,    1,   56,    2, 0x02 /* Public */,
      12,    0,   59,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::QString, 0x80000000 | 6,    7,
    0x80000000 | 6,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

 // properties: name, type, flags
       7, 0x80000000 | 6, 0x0049510b,

 // properties: notify_signal_id
       0,

       0        // eod
};

void VK::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VK *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tokenChanged(); break;
        case 1: _t->done(); break;
        case 2: _t->saveToken(); break;
        case 3: { QString _r = _t->checkAccess((*reinterpret_cast< Token*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { Token* _r = _t->getTokenFromFile();
            if (_a[0]) *reinterpret_cast< Token**>(_a[0]) = std::move(_r); }  break;
        case 5: _t->logout((*reinterpret_cast< QWindow*(*)>(_a[1]))); break;
        case 6: _t->quit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Token* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWindow* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VK::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VK::tokenChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VK::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VK::done)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Token* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VK *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Token**>(_v) = _t->getToken(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<VK *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setToken(*reinterpret_cast< Token**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject VK::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_VK.data,
    qt_meta_data_VK,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VK::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VK::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VK.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VK::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void VK::tokenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VK::done()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
