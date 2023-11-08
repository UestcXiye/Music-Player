/****************************************************************************
** Meta object code from reading C++ file 'mywidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../myPlayer/mywidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mywidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   10,    9,    9, 0x08,
      34,    9,    9,    9, 0x08,
      46,    9,    9,    9, 0x08,
      61,    9,    9,    9, 0x08,
      75,    9,    9,    9, 0x08,
      86,    9,    9,    9, 0x08,
     105,    9,    9,    9, 0x08,
     137,  119,    9,    9, 0x08,
     186,  179,    9,    9, 0x08,
     221,    9,    9,    9, 0x08,
     237,  119,    9,    9, 0x08,
     287,  283,    9,    9, 0x08,
     305,    9,    9,    9, 0x08,
     337,  320,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MyWidget[] = {
    "MyWidget\0\0time\0updateTime(qint64)\0"
    "setPaused()\0skipBackward()\0skipForward()\0"
    "openFile()\0setPlaylistShown()\0"
    "setLrcShown()\0newState,oldState\0"
    "stateChanged(Phonon::State,Phonon::State)\0"
    "source\0sourceChanged(Phonon::MediaSource)\0"
    "aboutToFinish()\0"
    "metaStateChanged(Phonon::State,Phonon::State)\0"
    "row\0tableClicked(int)\0clearSources()\0"
    "activationReason\0"
    "trayIconActivated(QSystemTrayIcon::ActivationReason)\0"
};

void MyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MyWidget *_t = static_cast<MyWidget *>(_o);
        switch (_id) {
        case 0: _t->updateTime((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 1: _t->setPaused(); break;
        case 2: _t->skipBackward(); break;
        case 3: _t->skipForward(); break;
        case 4: _t->openFile(); break;
        case 5: _t->setPlaylistShown(); break;
        case 6: _t->setLrcShown(); break;
        case 7: _t->stateChanged((*reinterpret_cast< Phonon::State(*)>(_a[1])),(*reinterpret_cast< Phonon::State(*)>(_a[2]))); break;
        case 8: _t->sourceChanged((*reinterpret_cast< const Phonon::MediaSource(*)>(_a[1]))); break;
        case 9: _t->aboutToFinish(); break;
        case 10: _t->metaStateChanged((*reinterpret_cast< Phonon::State(*)>(_a[1])),(*reinterpret_cast< Phonon::State(*)>(_a[2]))); break;
        case 11: _t->tableClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->clearSources(); break;
        case 13: _t->trayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MyWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MyWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MyWidget,
      qt_meta_data_MyWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MyWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyWidget))
        return static_cast<void*>(const_cast< MyWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int MyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
