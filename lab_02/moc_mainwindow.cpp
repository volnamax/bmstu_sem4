/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 25), // "on_downloadFigure_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 19), // "on_dxButton_clicked"
QT_MOC_LITERAL(4, 58, 19), // "on_kxButton_clicked"
QT_MOC_LITERAL(5, 78, 11), // "updateScene"
QT_MOC_LITERAL(6, 90, 8), // "canvas_t"
QT_MOC_LITERAL(7, 99, 9), // "drawScene"
QT_MOC_LITERAL(8, 109, 9), // "action_t&"
QT_MOC_LITERAL(9, 119, 6), // "action"
QT_MOC_LITERAL(10, 126, 22), // "on_AngleButton_clicked"
QT_MOC_LITERAL(11, 149, 12), // "convertToStr"
QT_MOC_LITERAL(12, 162, 3), // "num"
QT_MOC_LITERAL(13, 166, 5), // "char*"
QT_MOC_LITERAL(14, 172, 3), // "str"
QT_MOC_LITERAL(15, 176, 14), // "updateCentrObj"
QT_MOC_LITERAL(16, 191, 8), // "action_t"
QT_MOC_LITERAL(17, 200, 21) // "on_stepButton_clicked"

    },
    "MainWindow\0on_downloadFigure_clicked\0"
    "\0on_dxButton_clicked\0on_kxButton_clicked\0"
    "updateScene\0canvas_t\0drawScene\0action_t&\0"
    "action\0on_AngleButton_clicked\0"
    "convertToStr\0num\0char*\0str\0updateCentrObj\0"
    "action_t\0on_stepButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       7,    1,   63,    2, 0x08 /* Private */,
      10,    0,   66,    2, 0x08 /* Private */,
      11,    2,   67,    2, 0x08 /* Private */,
      15,    1,   72,    2, 0x08 /* Private */,
      17,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 13,   12,   14,
    QMetaType::Void, 0x80000000 | 16,    9,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_downloadFigure_clicked(); break;
        case 1: _t->on_dxButton_clicked(); break;
        case 2: _t->on_kxButton_clicked(); break;
        case 3: { canvas_t _r = _t->updateScene();
            if (_a[0]) *reinterpret_cast< canvas_t*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->drawScene((*reinterpret_cast< action_t(*)>(_a[1]))); break;
        case 5: _t->on_AngleButton_clicked(); break;
        case 6: _t->convertToStr((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2]))); break;
        case 7: _t->updateCentrObj((*reinterpret_cast< action_t(*)>(_a[1]))); break;
        case 8: _t->on_stepButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
