/****************************************************************************
** Meta object code from reading C++ file 'registro.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CorrecionExamen/registro.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'registro.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Registro_t {
    QByteArrayData data[10];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Registro_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Registro_t qt_meta_stringdata_Registro = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Registro"
QT_MOC_LITERAL(1, 9, 22), // "manejarDatosIngresados"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 7), // "Modelo*"
QT_MOC_LITERAL(4, 41, 6), // "modelo"
QT_MOC_LITERAL(5, 48, 37), // "on_actionIngreso_Estudiante_t..."
QT_MOC_LITERAL(6, 86, 30), // "on_actionRepositorio_triggered"
QT_MOC_LITERAL(7, 117, 22), // "on_pushButton_released"
QT_MOC_LITERAL(8, 140, 24), // "on_actionSalir_triggered"
QT_MOC_LITERAL(9, 165, 23) // "on_pushButton_2_clicked"

    },
    "Registro\0manejarDatosIngresados\0\0"
    "Modelo*\0modelo\0on_actionIngreso_Estudiante_triggered\0"
    "on_actionRepositorio_triggered\0"
    "on_pushButton_released\0on_actionSalir_triggered\0"
    "on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Registro[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,
       8,    0,   50,    2, 0x08 /* Private */,
       9,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Registro::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Registro *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->manejarDatosIngresados((*reinterpret_cast< Modelo*(*)>(_a[1]))); break;
        case 1: _t->on_actionIngreso_Estudiante_triggered(); break;
        case 2: _t->on_actionRepositorio_triggered(); break;
        case 3: _t->on_pushButton_released(); break;
        case 4: _t->on_actionSalir_triggered(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Registro::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_Registro.data,
    qt_meta_data_Registro,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Registro::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Registro::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Registro.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Registro::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
