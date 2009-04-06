
/* Interface to execute compiled code */

#ifndef Py_EVAL_H
#define Py_EVAL_H
#ifdef __cplusplus
extern "C" {
#endif

PyAPI_FUNC(PyObject *) PyEval_EvalCode(PyCodeObject *, PyObject *, PyObject *);

PyAPI_FUNC(PyObject *) PyEval_EvalCodeEx(PyCodeObject *co,
					PyObject *globals,
					PyObject *locals,
					PyObject **args, int argc,
					PyObject **kwds, int kwdc,
					PyObject **defs, int defc,
					PyObject *closure);

PyAPI_FUNC(PyObject *) _PyEval_CallTracing(PyObject *func, PyObject *args);

PyAPI_FUNC(void) _PyEval_DoRaise(PyObject *type, PyObject *val, PyObject *tb);

PyAPI_FUNC(PyObject *) _PyEval_ApplySlice(PyObject *, PyObject *, PyObject *);
PyAPI_FUNC(int) _PyEval_AssignSlice(PyObject *, PyObject *,
                                    PyObject *, PyObject *);

PyAPI_FUNC(int) _PyEval_UnpackIterable(PyObject *, int, PyObject **);

#ifdef __cplusplus
}
#endif
#endif /* !Py_EVAL_H */
