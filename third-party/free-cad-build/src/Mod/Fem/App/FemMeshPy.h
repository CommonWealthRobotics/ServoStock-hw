
// This file is generated by src/Tools/generateTemaplates/templateClassPyExport.py out of the XML file
// Every change you make here get lost at the next full rebuild!
#ifndef FEM_FEMMESHPY_H
#define FEM_FEMMESHPY_H

#include <App/ComplexGeoDataPy.h>
#include <Mod/Fem/App/FemMesh.h>
#include <string>

namespace Fem
{

//===========================================================================
// FemMeshPy - Python wrapper
//===========================================================================

/** The python export class for FemMesh
 */
class FemExport FemMeshPy : public Data::ComplexGeoDataPy
{
public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    static PyParentObject Parents[];
    virtual PyTypeObject *GetType(void) {return &Type;};
    virtual PyParentObject *GetParents(void) {return Parents;}

public:
    FemMeshPy(FemMesh *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);
    ~FemMeshPy();

    typedef FemMesh* PointerType ;

    virtual PyObject *_repr(void);        // the representation
    std::string representation(void) const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the setShape() method
    static PyObject * staticCallback_setShape (PyObject *self, PyObject *args);
    /// implementer for the setShape() method
    PyObject*  setShape(PyObject *args);
    /// callback for the compute() method
    static PyObject * staticCallback_compute (PyObject *self, PyObject *args);
    /// implementer for the compute() method
    PyObject*  compute(PyObject *args);
    /// callback for the addHypothesis() method
    static PyObject * staticCallback_addHypothesis (PyObject *self, PyObject *args);
    /// implementer for the addHypothesis() method
    PyObject*  addHypothesis(PyObject *args);
    /// callback for the setStanardHypotheses() method
    static PyObject * staticCallback_setStanardHypotheses (PyObject *self, PyObject *args);
    /// implementer for the setStanardHypotheses() method
    PyObject*  setStanardHypotheses(PyObject *args);
    /// callback for the addNode() method
    static PyObject * staticCallback_addNode (PyObject *self, PyObject *args);
    /// implementer for the addNode() method
    PyObject*  addNode(PyObject *args);
    /// callback for the addEdge() method
    static PyObject * staticCallback_addEdge (PyObject *self, PyObject *args);
    /// implementer for the addEdge() method
    PyObject*  addEdge(PyObject *args);
    /// callback for the addFace() method
    static PyObject * staticCallback_addFace (PyObject *self, PyObject *args);
    /// implementer for the addFace() method
    PyObject*  addFace(PyObject *args);
    /// callback for the addQuad() method
    static PyObject * staticCallback_addQuad (PyObject *self, PyObject *args);
    /// implementer for the addQuad() method
    PyObject*  addQuad(PyObject *args);
    /// callback for the addVolume() method
    static PyObject * staticCallback_addVolume (PyObject *self, PyObject *args);
    /// implementer for the addVolume() method
    PyObject*  addVolume(PyObject *args);
    /// callback for the read() method
    static PyObject * staticCallback_read (PyObject *self, PyObject *args);
    /// implementer for the read() method
    PyObject*  read(PyObject *args);
    /// callback for the write() method
    static PyObject * staticCallback_write (PyObject *self, PyObject *args);
    /// implementer for the write() method
    PyObject*  write(PyObject *args);
    /// callback for the writeABAQUS() method
    static PyObject * staticCallback_writeABAQUS (PyObject *self, PyObject *args);
    /// implementer for the writeABAQUS() method
    PyObject*  writeABAQUS(PyObject *args);
    /// callback for the setTransform() method
    static PyObject * staticCallback_setTransform (PyObject *self, PyObject *args);
    /// implementer for the setTransform() method
    PyObject*  setTransform(PyObject *args);
    /// callback for the copy() method
    static PyObject * staticCallback_copy (PyObject *self, PyObject *args);
    /// implementer for the copy() method
    PyObject*  copy(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the NodeCount attribute
    static PyObject * staticCallback_getNodeCount (PyObject *self, void *closure);
    /// getter for the NodeCount attribute
    Py::Int getNodeCount(void) const;
    /// setter callback for the NodeCount attribute
    static int staticCallback_setNodeCount (PyObject *self, PyObject *value, void *closure);
    // no setter method,  NodeCount is read only!
    ///getter callback for the EdgeCount attribute
    static PyObject * staticCallback_getEdgeCount (PyObject *self, void *closure);
    /// getter for the EdgeCount attribute
    Py::Int getEdgeCount(void) const;
    /// setter callback for the EdgeCount attribute
    static int staticCallback_setEdgeCount (PyObject *self, PyObject *value, void *closure);
    // no setter method,  EdgeCount is read only!
    ///getter callback for the FacesCount attribute
    static PyObject * staticCallback_getFacesCount (PyObject *self, void *closure);
    /// getter for the FacesCount attribute
    Py::Int getFacesCount(void) const;
    /// setter callback for the FacesCount attribute
    static int staticCallback_setFacesCount (PyObject *self, PyObject *value, void *closure);
    // no setter method,  FacesCount is read only!
    ///getter callback for the TriangleCount attribute
    static PyObject * staticCallback_getTriangleCount (PyObject *self, void *closure);
    /// getter for the TriangleCount attribute
    Py::Int getTriangleCount(void) const;
    /// setter callback for the TriangleCount attribute
    static int staticCallback_setTriangleCount (PyObject *self, PyObject *value, void *closure);
    // no setter method,  TriangleCount is read only!
    ///getter callback for the QuadrangleCount attribute
    static PyObject * staticCallback_getQuadrangleCount (PyObject *self, void *closure);
    /// getter for the QuadrangleCount attribute
    Py::Int getQuadrangleCount(void) const;
    /// setter callback for the QuadrangleCount attribute
    static int staticCallback_setQuadrangleCount (PyObject *self, PyObject *value, void *closure);
    // no setter method,  QuadrangleCount is read only!
    ///getter callback for the PolygonCount attribute
    static PyObject * staticCallback_getPolygonCount (PyObject *self, void *closure);
    /// getter for the PolygonCount attribute
    Py::Int getPolygonCount(void) const;
    /// setter callback for the PolygonCount attribute
    static int staticCallback_setPolygonCount (PyObject *self, PyObject *value, void *closure);
    // no setter method,  PolygonCount is read only!
    ///getter callback for the VolumeCount attribute
    static PyObject * staticCallback_getVolumeCount (PyObject *self, void *closure);
    /// getter for the VolumeCount attribute
    Py::Int getVolumeCount(void) const;
    /// setter callback for the VolumeCount attribute
    static int staticCallback_setVolumeCount (PyObject *self, PyObject *value, void *closure);
    // no setter method,  VolumeCount is read only!
    ///getter callback for the TetraCount attribute
    static PyObject * staticCallback_getTetraCount (PyObject *self, void *closure);
    /// getter for the TetraCount attribute
    Py::Int getTetraCount(void) const;
    /// setter callback for the TetraCount attribute
    static int staticCallback_setTetraCount (PyObject *self, PyObject *value, void *closure);
    // no setter method,  TetraCount is read only!
    ///getter callback for the HexaCount attribute
    static PyObject * staticCallback_getHexaCount (PyObject *self, void *closure);
    /// getter for the HexaCount attribute
    Py::Int getHexaCount(void) const;
    /// setter callback for the HexaCount attribute
    static int staticCallback_setHexaCount (PyObject *self, PyObject *value, void *closure);
    // no setter method,  HexaCount is read only!
    ///getter callback for the PyramidCount attribute
    static PyObject * staticCallback_getPyramidCount (PyObject *self, void *closure);
    /// getter for the PyramidCount attribute
    Py::Int getPyramidCount(void) const;
    /// setter callback for the PyramidCount attribute
    static int staticCallback_setPyramidCount (PyObject *self, PyObject *value, void *closure);
    // no setter method,  PyramidCount is read only!
    ///getter callback for the PrismCount attribute
    static PyObject * staticCallback_getPrismCount (PyObject *self, void *closure);
    /// getter for the PrismCount attribute
    Py::Int getPrismCount(void) const;
    /// setter callback for the PrismCount attribute
    static int staticCallback_setPrismCount (PyObject *self, PyObject *value, void *closure);
    // no setter method,  PrismCount is read only!
    ///getter callback for the PolyhedronCount attribute
    static PyObject * staticCallback_getPolyhedronCount (PyObject *self, void *closure);
    /// getter for the PolyhedronCount attribute
    Py::Int getPolyhedronCount(void) const;
    /// setter callback for the PolyhedronCount attribute
    static int staticCallback_setPolyhedronCount (PyObject *self, PyObject *value, void *closure);
    // no setter method,  PolyhedronCount is read only!
    ///getter callback for the SubMeshCount attribute
    static PyObject * staticCallback_getSubMeshCount (PyObject *self, void *closure);
    /// getter for the SubMeshCount attribute
    Py::Int getSubMeshCount(void) const;
    /// setter callback for the SubMeshCount attribute
    static int staticCallback_setSubMeshCount (PyObject *self, PyObject *value, void *closure);
    // no setter method,  SubMeshCount is read only!
    ///getter callback for the GroupCount attribute
    static PyObject * staticCallback_getGroupCount (PyObject *self, void *closure);
    /// getter for the GroupCount attribute
    Py::Int getGroupCount(void) const;
    /// setter callback for the GroupCount attribute
    static int staticCallback_setGroupCount (PyObject *self, PyObject *value, void *closure);
    // no setter method,  GroupCount is read only!
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(char *attr);              // __getattr__ function
    int _setattr(char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    FemMesh *getFemMeshPtr(void) const;

    /** @name additional declarations and methods for the wrapper class */
    //@{

    //@}
};

#define PARENTSFemFemMeshPy &FemMeshPy::Type,PARENTSDataComplexGeoDataPy

}  //namespace Fem

#endif  // FEM_FEMMESHPY_H


