/****************************************************************************
** Meta object code from reading C++ file 'pickParticipants.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pickParticipants.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pickParticipants.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pickParticipants_t {
    QByteArrayData data[8];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pickParticipants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pickParticipants_t qt_meta_stringdata_pickParticipants = {
    {
QT_MOC_LITERAL(0, 0, 16), // "pickParticipants"
QT_MOC_LITERAL(1, 17, 18), // "addNewPilot_Button"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 11), // "deletePilot"
QT_MOC_LITERAL(4, 49, 20), // "updateTableStructure"
QT_MOC_LITERAL(5, 70, 13), // "addNewRaceFcn"
QT_MOC_LITERAL(6, 84, 10), // "deleteRace"
QT_MOC_LITERAL(7, 95, 11) // "openResults"

    },
    "pickParticipants\0addNewPilot_Button\0"
    "\0deletePilot\0updateTableStructure\0"
    "addNewRaceFcn\0deleteRace\0openResults"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pickParticipants[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pickParticipants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pickParticipants *_t = static_cast<pickParticipants *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addNewPilot_Button(); break;
        case 1: _t->deletePilot(); break;
        case 2: _t->updateTableStructure(); break;
        case 3: _t->addNewRaceFcn(); break;
        case 4: _t->deleteRace(); break;
        case 5: _t->openResults(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject pickParticipants::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pickParticipants.data,
      qt_meta_data_pickParticipants,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pickParticipants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pickParticipants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pickParticipants.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int pickParticipants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
