/****************************************************************************
** Meta object code from reading C++ file 'mainloja.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../EstoqueEmLoja_GABRIELBARBOSA/EstoqueEmLoja/mainloja.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainloja.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainLoja_t {
    const uint offsetsAndSize[42];
    char stringdata0[344];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainLoja_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainLoja_t qt_meta_stringdata_MainLoja = {
    {
QT_MOC_LITERAL(0, 8), // "MainLoja"
QT_MOC_LITERAL(9, 23), // "on_WL_cellDoubleClicked"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 3), // "row"
QT_MOC_LITERAL(38, 6), // "column"
QT_MOC_LITERAL(45, 24), // "on_WCD_cellDoubleClicked"
QT_MOC_LITERAL(70, 25), // "on_WDVD_cellDoubleClicked"
QT_MOC_LITERAL(96, 22), // "on_actionLer_triggered"
QT_MOC_LITERAL(119, 25), // "on_actionSalvar_triggered"
QT_MOC_LITERAL(145, 23), // "on_actionSair_triggered"
QT_MOC_LITERAL(169, 32), // "on_actionIncluir_Livro_triggered"
QT_MOC_LITERAL(202, 29), // "on_actionIncluir_CD_triggered"
QT_MOC_LITERAL(232, 30), // "on_actionIncluir_DVD_triggered"
QT_MOC_LITERAL(263, 16), // "slotIncluirLivro"
QT_MOC_LITERAL(280, 4), // "nome"
QT_MOC_LITERAL(285, 5), // "preco"
QT_MOC_LITERAL(291, 5), // "autor"
QT_MOC_LITERAL(297, 14), // "slotIncluirDVD"
QT_MOC_LITERAL(312, 7), // "duracao"
QT_MOC_LITERAL(320, 13), // "slotIncluirCD"
QT_MOC_LITERAL(334, 9) // "numfaixas"

    },
    "MainLoja\0on_WL_cellDoubleClicked\0\0row\0"
    "column\0on_WCD_cellDoubleClicked\0"
    "on_WDVD_cellDoubleClicked\0"
    "on_actionLer_triggered\0on_actionSalvar_triggered\0"
    "on_actionSair_triggered\0"
    "on_actionIncluir_Livro_triggered\0"
    "on_actionIncluir_CD_triggered\0"
    "on_actionIncluir_DVD_triggered\0"
    "slotIncluirLivro\0nome\0preco\0autor\0"
    "slotIncluirDVD\0duracao\0slotIncluirCD\0"
    "numfaixas"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainLoja[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   86,    2, 0x08,    1 /* Private */,
       5,    2,   91,    2, 0x08,    4 /* Private */,
       6,    2,   96,    2, 0x08,    7 /* Private */,
       7,    0,  101,    2, 0x08,   10 /* Private */,
       8,    0,  102,    2, 0x08,   11 /* Private */,
       9,    0,  103,    2, 0x08,   12 /* Private */,
      10,    0,  104,    2, 0x08,   13 /* Private */,
      11,    0,  105,    2, 0x08,   14 /* Private */,
      12,    0,  106,    2, 0x08,   15 /* Private */,
      13,    3,  107,    2, 0x08,   16 /* Private */,
      17,    3,  114,    2, 0x08,   20 /* Private */,
      19,    3,  121,    2, 0x08,   24 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   14,   15,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   14,   15,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   14,   15,   20,

       0        // eod
};

void MainLoja::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainLoja *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_WL_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->on_WCD_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_WDVD_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->on_actionLer_triggered(); break;
        case 4: _t->on_actionSalvar_triggered(); break;
        case 5: _t->on_actionSair_triggered(); break;
        case 6: _t->on_actionIncluir_Livro_triggered(); break;
        case 7: _t->on_actionIncluir_CD_triggered(); break;
        case 8: _t->on_actionIncluir_DVD_triggered(); break;
        case 9: _t->slotIncluirLivro((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 10: _t->slotIncluirDVD((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 11: _t->slotIncluirCD((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject MainLoja::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainLoja.offsetsAndSize,
    qt_meta_data_MainLoja,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainLoja_t
, QtPrivate::TypeAndForceComplete<MainLoja, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainLoja::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainLoja::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainLoja.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainLoja::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
