/****************************************************************************
** Meta object code from reading C++ file 'play.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Infogames/play.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'play.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PLAY_t {
    QByteArrayData data[9];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PLAY_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PLAY_t qt_meta_stringdata_PLAY = {
    {
QT_MOC_LITERAL(0, 0, 4), // "PLAY"
QT_MOC_LITERAL(1, 5, 9), // "move_ball"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 19), // "on_btn_INIC_clicked"
QT_MOC_LITERAL(4, 36, 10), // "Transmitir"
QT_MOC_LITERAL(5, 47, 7), // "recibir"
QT_MOC_LITERAL(6, 55, 7), // "puntaje"
QT_MOC_LITERAL(7, 63, 15), // "cargar_comandos"
QT_MOC_LITERAL(8, 79, 16) // "on_PAUSA_clicked"

    },
    "PLAY\0move_ball\0\0on_btn_INIC_clicked\0"
    "Transmitir\0recibir\0puntaje\0cargar_comandos\0"
    "on_PAUSA_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PLAY[] = {

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
       6,    2,   53,    2, 0x08 /* Private */,
       7,    0,   58,    2, 0x08 /* Private */,
       8,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PLAY::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PLAY *_t = static_cast<PLAY *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->move_ball(); break;
        case 1: _t->on_btn_INIC_clicked(); break;
        case 2: _t->Transmitir(); break;
        case 3: _t->recibir(); break;
        case 4: _t->puntaje((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->cargar_comandos(); break;
        case 6: _t->on_PAUSA_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject PLAY::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PLAY.data,
      qt_meta_data_PLAY,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PLAY::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PLAY::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PLAY.stringdata0))
        return static_cast<void*>(const_cast< PLAY*>(this));
    return QWidget::qt_metacast(_clname);
}

int PLAY::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
