/****************************************************************************
** Meta object code from reading C++ file 'VisualInspection.h'
**
** Created: Thu Apr 18 07:29:55 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/Inspection/Gui/VisualInspection.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VisualInspection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InspectionGui__VisualInspection[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   32,   32,   32, 0x09,
      66,   32,   32,   32, 0x09,
      81,   32,   32,   32, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_InspectionGui__VisualInspection[] = {
    "InspectionGui::VisualInspection\0\0"
    "onActivateItem(QTreeWidgetItem*)\0"
    "loadSettings()\0saveSettings()\0"
};

void InspectionGui::VisualInspection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VisualInspection *_t = static_cast<VisualInspection *>(_o);
        switch (_id) {
        case 0: _t->onActivateItem((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->loadSettings(); break;
        case 2: _t->saveSettings(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData InspectionGui::VisualInspection::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject InspectionGui::VisualInspection::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_InspectionGui__VisualInspection,
      qt_meta_data_InspectionGui__VisualInspection, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InspectionGui::VisualInspection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InspectionGui::VisualInspection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InspectionGui::VisualInspection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InspectionGui__VisualInspection))
        return static_cast<void*>(const_cast< VisualInspection*>(this));
    return QDialog::qt_metacast(_clname);
}

int InspectionGui::VisualInspection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE