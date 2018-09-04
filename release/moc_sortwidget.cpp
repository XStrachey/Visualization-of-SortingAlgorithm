/****************************************************************************
** Meta object code from reading C++ file 'sortwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../untitled/sortwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sortwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SortWidget_t {
    QByteArrayData data[24];
    char stringdata0[357];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SortWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SortWidget_t qt_meta_stringdata_SortWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SortWidget"
QT_MOC_LITERAL(1, 11, 20), // "noOfSortItemsChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "sendData"
QT_MOC_LITERAL(4, 42, 4), // "data"
QT_MOC_LITERAL(5, 47, 8), // "sendAlog"
QT_MOC_LITERAL(6, 56, 4), // "alog"
QT_MOC_LITERAL(7, 61, 14), // "setNoSortItems"
QT_MOC_LITERAL(8, 76, 24), // "slotFillSortItemsInRange"
QT_MOC_LITERAL(9, 101, 1), // "a"
QT_MOC_LITERAL(10, 103, 1), // "b"
QT_MOC_LITERAL(11, 105, 25), // "slotFillSortItemsWithRand"
QT_MOC_LITERAL(12, 131, 3), // "max"
QT_MOC_LITERAL(13, 135, 22), // "onInsertionSortClicked"
QT_MOC_LITERAL(14, 158, 18), // "onShellSortClicked"
QT_MOC_LITERAL(15, 177, 18), // "onQuickSortClicked"
QT_MOC_LITERAL(16, 196, 19), // "onBubbleSortClicked"
QT_MOC_LITERAL(17, 216, 19), // "onShakerSortClicked"
QT_MOC_LITERAL(18, 236, 19), // "onSelectSortClicked"
QT_MOC_LITERAL(19, 256, 25), // "onBinaryInsertSortClicked"
QT_MOC_LITERAL(20, 282, 17), // "onHeapSortClicked"
QT_MOC_LITERAL(21, 300, 18), // "onMergeSortClicked"
QT_MOC_LITERAL(22, 319, 18), // "onRadixSortClicked"
QT_MOC_LITERAL(23, 338, 18) // "onCountSortClicked"

    },
    "SortWidget\0noOfSortItemsChanged\0\0"
    "sendData\0data\0sendAlog\0alog\0setNoSortItems\0"
    "slotFillSortItemsInRange\0a\0b\0"
    "slotFillSortItemsWithRand\0max\0"
    "onInsertionSortClicked\0onShellSortClicked\0"
    "onQuickSortClicked\0onBubbleSortClicked\0"
    "onShakerSortClicked\0onSelectSortClicked\0"
    "onBinaryInsertSortClicked\0onHeapSortClicked\0"
    "onMergeSortClicked\0onRadixSortClicked\0"
    "onCountSortClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SortWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x06 /* Public */,
       3,    1,  117,    2, 0x06 /* Public */,
       5,    1,  120,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,  123,    2, 0x0a /* Public */,
       8,    2,  126,    2, 0x0a /* Public */,
       8,    1,  131,    2, 0x2a /* Public | MethodCloned */,
       8,    0,  134,    2, 0x2a /* Public | MethodCloned */,
      11,    1,  135,    2, 0x0a /* Public */,
      11,    0,  138,    2, 0x2a /* Public | MethodCloned */,
      13,    0,  139,    2, 0x0a /* Public */,
      14,    0,  140,    2, 0x0a /* Public */,
      15,    0,  141,    2, 0x0a /* Public */,
      16,    0,  142,    2, 0x0a /* Public */,
      17,    0,  143,    2, 0x0a /* Public */,
      18,    0,  144,    2, 0x0a /* Public */,
      19,    0,  145,    2, 0x0a /* Public */,
      20,    0,  146,    2, 0x0a /* Public */,
      21,    0,  147,    2, 0x0a /* Public */,
      22,    0,  148,    2, 0x0a /* Public */,
      23,    0,  149,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SortWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SortWidget *_t = static_cast<SortWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->noOfSortItemsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sendData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sendAlog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->setNoSortItems((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slotFillSortItemsInRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->slotFillSortItemsInRange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slotFillSortItemsInRange(); break;
        case 7: _t->slotFillSortItemsWithRand((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->slotFillSortItemsWithRand(); break;
        case 9: _t->onInsertionSortClicked(); break;
        case 10: _t->onShellSortClicked(); break;
        case 11: _t->onQuickSortClicked(); break;
        case 12: _t->onBubbleSortClicked(); break;
        case 13: _t->onShakerSortClicked(); break;
        case 14: _t->onSelectSortClicked(); break;
        case 15: _t->onBinaryInsertSortClicked(); break;
        case 16: _t->onHeapSortClicked(); break;
        case 17: _t->onMergeSortClicked(); break;
        case 18: _t->onRadixSortClicked(); break;
        case 19: _t->onCountSortClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SortWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SortWidget::noOfSortItemsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SortWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SortWidget::sendData)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SortWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SortWidget::sendAlog)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject SortWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SortWidget.data,
      qt_meta_data_SortWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SortWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SortWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SortWidget.stringdata0))
        return static_cast<void*>(const_cast< SortWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SortWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void SortWidget::noOfSortItemsChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SortWidget::sendData(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SortWidget::sendAlog(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
