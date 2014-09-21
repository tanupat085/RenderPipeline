/*
 * This file generated by:
 * F:/P3D/1.9.0-1/built_x64/bin/interrogate -D__inline -DCPPPARSER -DP3_INTERROGATE=1 -D__cplusplus -fnames -string -refcount -assert -Dvolatile= -SF:/P3D/1.9.0-1/built_x64/include/parser-inc -SF:/P3D/1.9.0-1/built_x64/include/ -oc Source/InterrogateModule.cxx -od Source/InterrogateModule.in -python-native -module RPCore -library RPCore -srcdir E:/Projects/Brainz stuff/RenderPipeline/Core/Source DemoClass.h 
 *
 */

#include "dtoolbase.h"
#include "interrogate_request.h"
#include "dconfig.h"
#include "pnotify.h"
#include <sstream>
#define PANDA_LIBRARY_NAME_RPCore
#include "py_panda.h"
#include "extension.h"

#include "DemoClass.h"
#include "dtoolbase.h"

#undef _POSIX_C_SOURCE

#if PYTHON_FRAMEWORK
  #include "Python/Python.h"
#else
  #include "Python.h"
#endif

//********************************************************************
//*** prototypes for .. Global
//********************************************************************
//********************************************************************
//*** prototypes for .. DemoClass
//********************************************************************
typedef DemoClass DemoClass_localtype;
Define_Module_Class(RPCore, DemoClass, DemoClass_localtype, DemoClass);

//********************************************************************
//*** prototypes for .. External Objects
//********************************************************************

//********************************************************************
//*** Functions for .. Global
//********************************************************************
//********************************************************************
//*** Functions for .. DemoClass
//********************************************************************
/******************************************************************
 * Python type method wrapper for
 * DemoClass::DemoClass(void)
 *******************************************************************/
int Dtool_Init_DemoClass(PyObject *self, PyObject *args, PyObject *kwds) {

  // 1-DemoClass::DemoClass(void)
  DemoClass *return_value = new DemoClass();
#ifndef NDEBUG
  Notify *notify = Notify::ptr();
  if (notify->has_assert_failed()) {
    PyErr_SetString(PyExc_AssertionError, notify->get_assert_error_message().c_str());
    notify->clear_assert_failed();
    delete return_value;
    return -1;
  }
#endif
  return DTool_PyInit_Finalize(self, return_value, &Dtool_DemoClass, true, false);

  if (!PyErr_Occurred()) {
    PyErr_SetString(PyExc_TypeError,
      "Arguments must match:\n"
      "DemoClass()\n"
      "");
  }
  return -1;
}


int Dtool_InitNoCoerce_DemoClass(PyObject *self, PyObject *args) {
  return Dtool_Init_DemoClass(self, args, NULL);
}

inline void *Dtool_UpcastInterface_DemoClass(PyObject *self, Dtool_PyTypedObject *requested_type) {
  Dtool_PyTypedObject *SelfType = ((Dtool_PyInstDef *)self)->_My_Type;
  if (SelfType != &Dtool_DemoClass) {
    printf("DemoClass ** Bad Source Type-- Requesting Conversion from %s to %s\n", ((Dtool_PyInstDef *)self)->_My_Type->_name, requested_type->_name); fflush(NULL);
    return NULL;
  }

  DemoClass *local_this = (DemoClass *)((Dtool_PyInstDef *)self)->_ptr_to_object;
  if (requested_type == &Dtool_DemoClass) {
    return local_this;
  }
  return NULL;
}

inline void *Dtool_DowncastInterface_DemoClass(void *from_this, Dtool_PyTypedObject *from_type) {
  if (from_this == NULL || from_type == NULL) {
    return NULL;
  }
  if (from_type == &Dtool_DemoClass) {
    return from_this;
  }
  return (void *) NULL;
}

//********************************************************************
//*** Py Init Code For .. DemoClass | DemoClass
//********************************************************************
PyMethodDef Dtool_Methods_DemoClass[] = {
  { NULL, NULL }
};

void Dtool_PyModuleClassInit_DemoClass(PyObject *module) {
  static bool initdone = false;
  if (!initdone) {
    initdone = true;
    // Dependent objects
    Dtool_DTOOL_SUPER_BASE._Dtool_ClassInit(NULL);
    Dtool_DemoClass.As_PyTypeObject().tp_bases = PyTuple_Pack(1, &Dtool_DTOOL_SUPER_BASE.As_PyTypeObject());
    Dtool_DemoClass.As_PyTypeObject().tp_dict = PyDict_New();
    PyDict_SetItemString(Dtool_DemoClass.As_PyTypeObject().tp_dict, "DtoolClassDict", Dtool_DemoClass.As_PyTypeObject().tp_dict);
    if (PyType_Ready(&Dtool_DemoClass.As_PyTypeObject()) < 0) {
      PyErr_SetString(PyExc_TypeError, "PyType_Ready(DemoClass)");
      printf("Error in PyType_Ready(DemoClass)");
      return;
    }
    Py_INCREF(&Dtool_DemoClass.As_PyTypeObject());
    RegisterRuntimeClass(&Dtool_DemoClass, -1);
  }
  if (module != NULL) {
    Py_INCREF(&Dtool_DemoClass.As_PyTypeObject());
    PyModule_AddObject(module, "DemoClass", (PyObject *)&Dtool_DemoClass.As_PyTypeObject());
  }
}


//********************************************************************
//*** Module Object Linker ..
//********************************************************************
static void BuildInstants(PyObject * module) {
  // Module init upcall for DemoClass
  Dtool_PyModuleClassInit_DemoClass(module);
//********************************************************************
//*** Module Init Upcall ..  Externally Defined Class
//********************************************************************
}

static PyMethodDef python_simple_funcs[] = {
  // Support Function For Dtool_types ... for now in each module ??
  {"Dtool_BorrowThisReference", &Dtool_BorrowThisReference, METH_VARARGS, "Used to borrow 'this' pointer (to, from)\nAssumes no ownership."},
  {"Dtool_AddToDictionary", &Dtool_AddToDictionary, METH_VARARGS, "Used to add items into a tp_dict"},
  {NULL, NULL, 0, NULL}
};

EXPORT_THIS struct LibraryDef RPCore_moddef = {python_simple_funcs, BuildInstants};
static InterrogateModuleDef _in_module_def = {
  1408991243,  /* file_identifier */
  "RPCore",  /* library_name */
  "0q07",  /* library_hash_name */
  "RPCore",  /* module_name */
  "InterrogateModule.in",  /* database_filename */
  (InterrogateUniqueNameDef *)0,  /* unique_names */
  0,  /* num_unique_names */
  (void **)0,  /* fptrs */
  0,  /* num_fptrs */
  1,  /* first_index */
  6  /* next_index */
};

Configure(_in_configure_RPCore);
ConfigureFn(_in_configure_RPCore) {
  interrogate_request_module(&_in_module_def);
}

