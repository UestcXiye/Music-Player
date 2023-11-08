/****************************************************************************
** Meta object code from reading C++ file 'myplaylist.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../myPlayer/myplaylist.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myplaylist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyPlaylist[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      28,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MyPlaylist[] = {
    "MyPlaylist\0\0playlistClean()\0clearPlaylist()\0"
};

void MyPlaylist::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MyPlaylist *_t = static_cast<MyPlaylist *>(_o);
        switch (_id) {
        case 0: _t->playlistClean(); break;
        case 1: _t->clearPlaylist(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MyPlaylist::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MyPlaylist::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_MyPlaylist,
      qt_meta_data_MyPlaylist, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MyPlaylist::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MyPlaylist::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MyPlaylist::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyPlaylist))
        return static_cast<void*>(const_cast< MyPlaylist*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int MyPlaylist::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void MyPlaylist::playlistClean()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
