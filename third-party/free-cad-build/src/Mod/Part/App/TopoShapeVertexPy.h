
// This file is generated by src/Tools/generateTemaplates/templateClassPyExport.py out of the XML file
// Every change you make here get lost at the next full rebuild!
#ifndef PART_TOPOSHAPEVERTEXPY_H
#define PART_TOPOSHAPEVERTEXPY_H

#include <Mod/Part/App/TopoShapePy.h>
#include <Mod/Part/App/TopoShape.h>
#include <string>

namespace Part
{

//===========================================================================
// TopoShapeVertexPy - Python wrapper
//===========================================================================

/** The python export class for TopoShape
 */
class PartExport TopoShapeVertexPy : public Part::TopoShapePy
{
public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    static PyParentObject Parents[];
    virtual PyTypeObject *GetType(void) {return &Type;};
    virtual PyParentObject *GetParents(void) {return Parents;}

public:
    TopoShapeVertexPy(TopoShape *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);
    ~TopoShapeVertexPy();

    typedef TopoShape* PointerType ;

    virtual PyObject *_repr(void);        // the representation
    std::string representation(void) const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the setTolerance() method
    static PyObject * staticCallback_setTolerance (PyObject *self, PyObject *args);
    /// implementer for the setTolerance() method
    PyObject*  setTolerance(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the X attribute
    static PyObject * staticCallback_getX (PyObject *self, void *closure);
    /// getter for the X attribute
    Py::Float getX(void) const;
    /// setter callback for the X attribute
    static int staticCallback_setX (PyObject *self, PyObject *value, void *closure);
    // no setter method,  X is read only!
    ///getter callback for the Y attribute
    static PyObject * staticCallback_getY (PyObject *self, void *closure);
    /// getter for the Y attribute
    Py::Float getY(void) const;
    /// setter callback for the Y attribute
    static int staticCallback_setY (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Y is read only!
    ///getter callback for the Z attribute
    static PyObject * staticCallback_getZ (PyObject *self, void *closure);
    /// getter for the Z attribute
    Py::Float getZ(void) const;
    /// setter callback for the Z attribute
    static int staticCallback_setZ (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Z is read only!
    ///getter callback for the Point attribute
    static PyObject * staticCallback_getPoint (PyObject *self, void *closure);
    /// getter for the Point attribute
    Py::Object getPoint(void) const;
    /// setter callback for the Point attribute
    static int staticCallback_setPoint (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Point is read only!
    ///getter callback for the Tolerance attribute
    static PyObject * staticCallback_getTolerance (PyObject *self, void *closure);
    /// getter for the Tolerance attribute
    Py::Float getTolerance(void) const;
    /// setter callback for the Tolerance attribute
    static int staticCallback_setTolerance (PyObject *self, PyObject *value, void *closure);
    /// setter for the Tolerance attribute
    void setTolerance(Py::Float arg);
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(char *attr);              // __getattr__ function
    int _setattr(char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    TopoShape *getTopoShapePtr(void) const;

    /** @name additional declarations and methods for the wrapper class */
    //@{

    //@}
};

#define PARENTSPartTopoShapeVertexPy &TopoShapeVertexPy::Type,PARENTSPartTopoShapePy

}  //namespace Part

#endif  // PART_TOPOSHAPEVERTEXPY_H


