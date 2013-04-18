
// This file is generated by src/Tools/generateTemaplates/templateClassPyExport.py out of the .XML file
// Every change you make here get lost at the next full rebuild!
// This File is normaly build as an include in DocumentObjectPyImp.cpp! Its not intended to be in a project!

#include <boost/filesystem/path.hpp>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/exception.hpp>
#include <Base/PyObjectBase.h>
#include <Base/Console.h>
#include <Base/Exception.h>
#include <CXX/Objects.hxx>

#define new DEBUG_CLIENTBLOCK

using Base::streq;
using namespace App;

/// Type structure of DocumentObjectPy
PyTypeObject DocumentObjectPy::Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,                                                /*ob_size*/
    "App.DocumentObject",     /*tp_name*/
    sizeof(DocumentObjectPy),                       /*tp_basicsize*/
    0,                                                /*tp_itemsize*/
    /* methods */
    PyDestructor,                                     /*tp_dealloc*/
    0,                                                /*tp_print*/
    __getattr,                                        /*tp_getattr*/
    __setattr,                                        /*tp_setattr*/
    0,                                                /*tp_compare*/
    __repr,                                           /*tp_repr*/
    0,                                                /*tp_as_number*/
    0,                                                /*tp_as_sequence*/
    0,                                                /*tp_as_mapping*/
    0,                                                /*tp_hash*/
    0,                                                /*tp_call */
    0,                                                /*tp_str  */
    0,                                                /*tp_getattro*/
    0,                                                /*tp_setattro*/
    /* --- Functions to access object as input/output buffer ---------*/
    0,                                                /* tp_as_buffer */
    /* --- Flags to define presence of optional/expanded features */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_CLASS,        /*tp_flags */
    "This is the father of all classes handled by the document",           /*tp_doc */
    0,                                                /*tp_traverse */
    0,                                                /*tp_clear */
    0,                                                /*tp_richcompare */
    0,                                                /*tp_weaklistoffset */
    0,                                                /*tp_iter */
    0,                                                /*tp_iternext */
    App::DocumentObjectPy::Methods,                     /*tp_methods */
    0,                                                /*tp_members */
    App::DocumentObjectPy::GetterSetter,                     /*tp_getset */
    &App::PropertyContainerPy::Type,                        /*tp_base */
    0,                                                /*tp_dict */
    0,                                                /*tp_descr_get */
    0,                                                /*tp_descr_set */
    0,                                                /*tp_dictoffset */
    __PyInit,                                         /*tp_init */
    0,                                                /*tp_alloc */
    App::DocumentObjectPy::PyMake,/*tp_new */
    0,                                                /*tp_free   Low-level free-memory routine */
    0,                                                /*tp_is_gc  For PyObject_IS_GC */
    0,                                                /*tp_bases */
    0,                                                /*tp_mro    method resolution order */
    0,                                                /*tp_cache */
    0,                                                /*tp_subclasses */
    0,                                                /*tp_weaklist */
    0                                                 /*tp_del */
};

/// Methods structure of DocumentObjectPy
PyMethodDef DocumentObjectPy::Methods[] = {
    {"touch",
        (PyCFunction) staticCallback_touch,
        METH_VARARGS,
        "Mark the object as changed (touched)"
    },
    {"purgeTouched",
        (PyCFunction) staticCallback_purgeTouched,
        METH_VARARGS,
        "Mark the object as unchanged"
    },
    {NULL, NULL, 0, NULL}		/* Sentinel */
};



/// Attribute structure of DocumentObjectPy
PyGetSetDef DocumentObjectPy::GetterSetter[] = {
    {"OutList",
        (getter) staticCallback_getOutList,
        (setter) staticCallback_setOutList, 
        "A list of all objects this object links to.",
        NULL
    },
    {"InList",
        (getter) staticCallback_getInList,
        (setter) staticCallback_setInList, 
        "A list of all objects which link to this object.",
        NULL
    },
    {"Name",
        (getter) staticCallback_getName,
        (setter) staticCallback_setName, 
        "Return the internal name of this object",
        NULL
    },
    {"Document",
        (getter) staticCallback_getDocument,
        (setter) staticCallback_setDocument, 
        "Return the document this object is part of",
        NULL
    },
    {"State",
        (getter) staticCallback_getState,
        (setter) staticCallback_setState, 
        "State of the object in the document",
        NULL
    },
    {"ViewObject",
        (getter) staticCallback_getViewObject,
        (setter) staticCallback_setViewObject, 
        "If the GUI is loaded the associated view provider is returned\nor None if the GUI is not up",
        NULL
    },
    {NULL, NULL, NULL, NULL, NULL}		/* Sentinel */
};

// touch() callback and implementer
// PyObject*  DocumentObjectPy::touch(PyObject *args){};
// has to be implemented in DocumentObjectPyImp.cpp
PyObject * DocumentObjectPy::staticCallback_touch (PyObject *self, PyObject *args)
{
    // test if twin object not allready deleted
    if (!((PyObjectBase*) self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    // test if object is set Const
    if (((PyObjectBase*) self)->isConst()){
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a non const method");
        return NULL;
    }

    try { // catches all exceptions coming up from c++ and generate a python exception
        PyObject* ret = ((DocumentObjectPy*)self)->touch(args);
        if (ret != 0)
            ((DocumentObjectPy*)self)->startNotify();
        return ret;
    }
    catch(const Base::Exception& e) // catch the FreeCAD exceptions
    {
        std::string str;
        str += "FreeCAD exception thrown (";
        str += e.what();
        str += ")";
        e.ReportException();
        PyErr_SetString(PyExc_Exception,str.c_str());
        return NULL;
    }
    catch(const boost::filesystem::filesystem_error& e) // catch boost filesystem exception
    {
        std::string str;
        str += "File system exception thrown (";
        //str += e.who();
        //str += ", ";
        str += e.what();
        str += ")\n";
        Base::Console().Error(str.c_str());
        PyErr_SetString(PyExc_Exception,str.c_str());
        return NULL;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return NULL;
    }
    catch(const char* e) // catch simple string exceptions
    {
        Base::Console().Error(e);
        PyErr_SetString(PyExc_Exception,e);
        return NULL;
    }
    // in debug not all exceptions will be catched to get the attention of the developer!
#ifndef DONT_CATCH_CXX_EXCEPTIONS 
    catch(const std::exception& e) // catch other c++ exceptions
    {
        std::string str;
        str += "FC++ exception thrown (";
        str += e.what();
        str += ")";
        Base::Console().Error(str.c_str());
        PyErr_SetString(PyExc_Exception,str.c_str());
        return NULL;
    }
    catch(...)  // catch the rest!
    {
        PyErr_SetString(PyExc_Exception,"Unknown C++ exception");
        return NULL;
    }
#endif
}

// purgeTouched() callback and implementer
// PyObject*  DocumentObjectPy::purgeTouched(PyObject *args){};
// has to be implemented in DocumentObjectPyImp.cpp
PyObject * DocumentObjectPy::staticCallback_purgeTouched (PyObject *self, PyObject *args)
{
    // test if twin object not allready deleted
    if (!((PyObjectBase*) self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    // test if object is set Const
    if (((PyObjectBase*) self)->isConst()){
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a non const method");
        return NULL;
    }

    try { // catches all exceptions coming up from c++ and generate a python exception
        PyObject* ret = ((DocumentObjectPy*)self)->purgeTouched(args);
        if (ret != 0)
            ((DocumentObjectPy*)self)->startNotify();
        return ret;
    }
    catch(const Base::Exception& e) // catch the FreeCAD exceptions
    {
        std::string str;
        str += "FreeCAD exception thrown (";
        str += e.what();
        str += ")";
        e.ReportException();
        PyErr_SetString(PyExc_Exception,str.c_str());
        return NULL;
    }
    catch(const boost::filesystem::filesystem_error& e) // catch boost filesystem exception
    {
        std::string str;
        str += "File system exception thrown (";
        //str += e.who();
        //str += ", ";
        str += e.what();
        str += ")\n";
        Base::Console().Error(str.c_str());
        PyErr_SetString(PyExc_Exception,str.c_str());
        return NULL;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return NULL;
    }
    catch(const char* e) // catch simple string exceptions
    {
        Base::Console().Error(e);
        PyErr_SetString(PyExc_Exception,e);
        return NULL;
    }
    // in debug not all exceptions will be catched to get the attention of the developer!
#ifndef DONT_CATCH_CXX_EXCEPTIONS 
    catch(const std::exception& e) // catch other c++ exceptions
    {
        std::string str;
        str += "FC++ exception thrown (";
        str += e.what();
        str += ")";
        Base::Console().Error(str.c_str());
        PyErr_SetString(PyExc_Exception,str.c_str());
        return NULL;
    }
    catch(...)  // catch the rest!
    {
        PyErr_SetString(PyExc_Exception,"Unknown C++ exception");
        return NULL;
    }
#endif
}

// OutList() callback and implementer
// PyObject*  DocumentObjectPy::OutList(PyObject *args){};
// has to be implemented in DocumentObjectPyImp.cpp
PyObject * DocumentObjectPy::staticCallback_getOutList (PyObject *self, void * /*closure*/)
{
    if (!((PyObjectBase*) self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(((DocumentObjectPy*)self)->getOutList());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(PyExc_Exception, "Unknown exception while reading attribute 'OutList' of object 'DocumentObject'");
        return NULL;
    }
}

int DocumentObjectPy::staticCallback_setOutList (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!((PyObjectBase*) self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'OutList' of object 'DocumentObject' is read-only");
    return -1;
}

// InList() callback and implementer
// PyObject*  DocumentObjectPy::InList(PyObject *args){};
// has to be implemented in DocumentObjectPyImp.cpp
PyObject * DocumentObjectPy::staticCallback_getInList (PyObject *self, void * /*closure*/)
{
    if (!((PyObjectBase*) self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(((DocumentObjectPy*)self)->getInList());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(PyExc_Exception, "Unknown exception while reading attribute 'InList' of object 'DocumentObject'");
        return NULL;
    }
}

int DocumentObjectPy::staticCallback_setInList (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!((PyObjectBase*) self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'InList' of object 'DocumentObject' is read-only");
    return -1;
}

// Name() callback and implementer
// PyObject*  DocumentObjectPy::Name(PyObject *args){};
// has to be implemented in DocumentObjectPyImp.cpp
PyObject * DocumentObjectPy::staticCallback_getName (PyObject *self, void * /*closure*/)
{
    if (!((PyObjectBase*) self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(((DocumentObjectPy*)self)->getName());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(PyExc_Exception, "Unknown exception while reading attribute 'Name' of object 'DocumentObject'");
        return NULL;
    }
}

int DocumentObjectPy::staticCallback_setName (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!((PyObjectBase*) self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'Name' of object 'DocumentObject' is read-only");
    return -1;
}

// Document() callback and implementer
// PyObject*  DocumentObjectPy::Document(PyObject *args){};
// has to be implemented in DocumentObjectPyImp.cpp
PyObject * DocumentObjectPy::staticCallback_getDocument (PyObject *self, void * /*closure*/)
{
    if (!((PyObjectBase*) self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(((DocumentObjectPy*)self)->getDocument());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(PyExc_Exception, "Unknown exception while reading attribute 'Document' of object 'DocumentObject'");
        return NULL;
    }
}

int DocumentObjectPy::staticCallback_setDocument (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!((PyObjectBase*) self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'Document' of object 'DocumentObject' is read-only");
    return -1;
}

// State() callback and implementer
// PyObject*  DocumentObjectPy::State(PyObject *args){};
// has to be implemented in DocumentObjectPyImp.cpp
PyObject * DocumentObjectPy::staticCallback_getState (PyObject *self, void * /*closure*/)
{
    if (!((PyObjectBase*) self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(((DocumentObjectPy*)self)->getState());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(PyExc_Exception, "Unknown exception while reading attribute 'State' of object 'DocumentObject'");
        return NULL;
    }
}

int DocumentObjectPy::staticCallback_setState (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!((PyObjectBase*) self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'State' of object 'DocumentObject' is read-only");
    return -1;
}

// ViewObject() callback and implementer
// PyObject*  DocumentObjectPy::ViewObject(PyObject *args){};
// has to be implemented in DocumentObjectPyImp.cpp
PyObject * DocumentObjectPy::staticCallback_getViewObject (PyObject *self, void * /*closure*/)
{
    if (!((PyObjectBase*) self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(((DocumentObjectPy*)self)->getViewObject());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(PyExc_Exception, "Unknown exception while reading attribute 'ViewObject' of object 'DocumentObject'");
        return NULL;
    }
}

int DocumentObjectPy::staticCallback_setViewObject (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!((PyObjectBase*) self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'ViewObject' of object 'DocumentObject' is read-only");
    return -1;
}



//--------------------------------------------------------------------------
// Parents structure
//--------------------------------------------------------------------------
PyParentObject DocumentObjectPy::Parents[] = { PARENTSAppDocumentObjectPy };

//--------------------------------------------------------------------------
// Constructor
//--------------------------------------------------------------------------
DocumentObjectPy::DocumentObjectPy(DocumentObject *pcObject, PyTypeObject *T)
    : PropertyContainerPy(reinterpret_cast<PropertyContainerPy::PointerType>(pcObject), T)
{
}

PyObject *DocumentObjectPy::PyMake(struct _typeobject *, PyObject *, PyObject *)  // Python wrapper
{
    // never create such objects with the constructor
    PyErr_SetString(PyExc_RuntimeError, "You cannot create directly an instance of 'DocumentObjectPy'.");
 
    return 0;
}

int DocumentObjectPy::PyInit(PyObject* /*args*/, PyObject* /*kwd*/)
{
    return 0;
}

//--------------------------------------------------------------------------
// destructor
//--------------------------------------------------------------------------
DocumentObjectPy::~DocumentObjectPy()                                // Everything handled in parent
{
}

//--------------------------------------------------------------------------
// DocumentObjectPy representation
//--------------------------------------------------------------------------
PyObject *DocumentObjectPy::_repr(void)
{
    return Py_BuildValue("s", representation().c_str());
}

//--------------------------------------------------------------------------
// DocumentObjectPy Attributes
//--------------------------------------------------------------------------
PyObject *DocumentObjectPy::_getattr(char *attr)				// __getattr__ function: note only need to handle new state
{
    try {
        // getter method for special Attributes (e.g. dynamic ones)
        PyObject *r = getCustomAttributes(attr);
        if(r) return r;
    }
#ifndef DONT_CATCH_CXX_EXCEPTIONS 
    catch(const Base::Exception& e) // catch the FreeCAD exceptions
    {
        std::string str;
        str += "FreeCAD exception thrown (";
        str += e.what();
        str += ")";
        e.ReportException();
        PyErr_SetString(PyExc_Exception,str.c_str());
        return NULL;
    }
    catch(const std::exception& e) // catch other c++ exceptions
    {
        std::string str;
        str += "FC++ exception thrown (";
        str += e.what();
        str += ")";
        Base::Console().Error(str.c_str());
        PyErr_SetString(PyExc_Exception,str.c_str());
        return NULL;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return NULL;
    }
    catch(...)  // catch the rest!
    {
        PyErr_SetString(PyExc_Exception,"Unknown C++ exception");
        return NULL;
    }
#else  // DONT_CATCH_CXX_EXCEPTIONS  
    catch(const Base::Exception& e) // catch the FreeCAD exceptions
    {
        std::string str;
        str += "FreeCAD exception thrown (";
        str += e.what();
        str += ")";
        e.ReportException();
        PyErr_SetString(PyExc_Exception,str.c_str());
        return NULL;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return NULL;
    }
#endif  // DONT_CATCH_CXX_EXCEPTIONS

    PyObject *rvalue = Py_FindMethod(Methods, this, attr);
    if (rvalue == NULL)
    {
        PyErr_Clear();
        return PropertyContainerPy::_getattr(attr);
    }
    else
    {
        return rvalue;
    }
}

int DocumentObjectPy::_setattr(char *attr, PyObject *value) 	// __setattr__ function: note only need to handle new state
{
    try {
        // setter for  special Attributes (e.g. dynamic ones)
        int r = setCustomAttributes(attr, value);
        if(r==1) return 0;
    }
#ifndef DONT_CATCH_CXX_EXCEPTIONS 
    catch(const Base::Exception& e) // catch the FreeCAD exceptions
    {
        std::string str;
        str += "FreeCAD exception thrown (";
        str += e.what();
        str += ")";
        e.ReportException();
        PyErr_SetString(PyExc_Exception,str.c_str());
        return -1;
    }
    catch(const std::exception& e) // catch other c++ exceptions
    {
        std::string str;
        str += "FC++ exception thrown (";
        str += e.what();
        str += ")";
        Base::Console().Error(str.c_str());
        PyErr_SetString(PyExc_Exception,str.c_str());
        return -1;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return -1;
    }
    catch(...)  // catch the rest!
    {
        PyErr_SetString(PyExc_Exception,"Unknown C++ exception");
        return -1;
    }
#else  // DONT_CATCH_CXX_EXCEPTIONS  
    catch(const Base::Exception& e) // catch the FreeCAD exceptions
    {
        std::string str;
        str += "FreeCAD exception thrown (";
        str += e.what();
        str += ")";
        e.ReportException();
        PyErr_SetString(PyExc_Exception,str.c_str());
        return -1;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return -1;
    }
#endif  // DONT_CATCH_CXX_EXCEPTIONS

    return PropertyContainerPy::_setattr(attr, value);
}

DocumentObject *DocumentObjectPy::getDocumentObjectPtr(void) const
{
    return static_cast<DocumentObject *>(_pcTwinPointer);
}

#if 0
/* From here on come the methods you have to implement, but NOT in this module. Implement in DocumentObjectPyImp.cpp! This prototypes 
 * are just for convenience when you add a new method.
 */


// returns a string which represents the object e.g. when printed in python
std::string DocumentObjectPy::representation(void) const
{
    return std::string("<DocumentObject object>");
}

PyObject* DocumentObjectPy::touch(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return 0;
}

PyObject* DocumentObjectPy::purgeTouched(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return 0;
}



Py::List DocumentObjectPy::getOutList(void) const
{
    //return Py::List();
    throw Py::AttributeError("Not yet implemented");
}

Py::List DocumentObjectPy::getInList(void) const
{
    //return Py::List();
    throw Py::AttributeError("Not yet implemented");
}

Py::String DocumentObjectPy::getName(void) const
{
    //return Py::String();
    throw Py::AttributeError("Not yet implemented");
}

Py::Object DocumentObjectPy::getDocument(void) const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

Py::List DocumentObjectPy::getState(void) const
{
    //return Py::List();
    throw Py::AttributeError("Not yet implemented");
}

Py::Object DocumentObjectPy::getViewObject(void) const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

PyObject *DocumentObjectPy::getCustomAttributes(const char* attr) const
{
    return 0;
}

int DocumentObjectPy::setCustomAttributes(const char* attr, PyObject *obj)
{
    return 0; 
}
#endif



