/****************************************************************************
** Meta object code from reading C++ file 'post.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "post.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'post.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Post_t {
    QByteArrayData data[13];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Post_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Post_t qt_meta_stringdata_Post = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Post"
QT_MOC_LITERAL(1, 5, 12), // "groupChanged"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 11), // "textChanged"
QT_MOC_LITERAL(4, 31, 13), // "imagesChanged"
QT_MOC_LITERAL(5, 45, 10), // "avaChanged"
QT_MOC_LITERAL(6, 56, 12), // "titleChanged"
QT_MOC_LITERAL(7, 69, 9), // "getImages"
QT_MOC_LITERAL(8, 79, 6), // "avaUrl"
QT_MOC_LITERAL(9, 86, 5), // "title"
QT_MOC_LITERAL(10, 92, 4), // "text"
QT_MOC_LITERAL(11, 97, 6), // "images"
QT_MOC_LITERAL(12, 104, 12) // "showThisPost"

    },
    "Post\0groupChanged\0\0textChanged\0"
    "imagesChanged\0avaChanged\0titleChanged\0"
    "getImages\0avaUrl\0title\0text\0images\0"
    "showThisPost"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Post[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       5,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   49,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QVariantList,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00495003,
       9, QMetaType::QString, 0x00495103,
      10, QMetaType::QString, 0x00495103,
      11, QMetaType::QVariantList, 0x00495103,
      12, QMetaType::Bool, 0x00095000,

 // properties: notify_signal_id
       3,
       4,
       1,
       2,
       0,

       0        // eod
};

void Post::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Post *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->groupChanged(); break;
        case 1: _t->textChanged(); break;
        case 2: _t->imagesChanged(); break;
        case 3: _t->avaChanged(); break;
        case 4: _t->titleChanged(); break;
        case 5: { QList<QVariant> _r = _t->getImages();
            if (_a[0]) *reinterpret_cast< QList<QVariant>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Post::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Post::groupChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Post::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Post::textChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Post::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Post::imagesChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Post::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Post::avaChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Post::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Post::titleChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Post *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getAva(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getTitle(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getText(); break;
        case 3: *reinterpret_cast< QList<QVariant>*>(_v) = _t->getImages(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Post *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAva(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setImages(*reinterpret_cast< QList<QVariant>*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Post::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Post.data,
    qt_meta_data_Post,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Post::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Post::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Post.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Post::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Post::groupChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Post::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Post::imagesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Post::avaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Post::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
