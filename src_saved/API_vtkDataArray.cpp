
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkDataArray.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkDataArray_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataArray::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkDataArray_IsA_0(vtkTypeBool * return_value, vtkDataArray * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::IsA]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->IsA(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkDataArray* SafeDownCast(vtkObjectBase * o)
// static vtkDataArray* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkDataArray_SafeDownCast_0(vtkDataArray ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataArray::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataArray* NewInstance()
// vtkDataArray *NewInstance()
TESTDLLSORT_API bool vtkDataArray_NewInstance_0(vtkDataArray ** return_value, vtkDataArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::NewInstance]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->NewInstance();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkDataArray* FastDownCast(vtkAbstractArray * source)
// static vtkDataArray* FastDownCast(vtkAbstractArray *source)
TESTDLLSORT_API bool vtkDataArray_FastDownCast_0(vtkDataArray ** return_value, vtkAbstractArray * source) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::FastDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataArray::FastDownCast(source);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int IsNumeric()
// int IsNumeric()
TESTDLLSORT_API bool vtkDataArray_IsNumeric_0(int * return_value, vtkDataArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::IsNumeric]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->IsNumeric();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetElementComponentSize()
// int GetElementComponentSize()
TESTDLLSORT_API bool vtkDataArray_GetElementComponentSize_0(int * return_value, vtkDataArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetElementComponentSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetElementComponentSize();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InsertTuple(vtkIdType dstTupleIdx, vtkIdType srcTupleIdx, vtkAbstractArray * source)
// void InsertTuple(vtkIdType dstTupleIdx, vtkIdType srcTupleIdx, vtkAbstractArray* source)
TESTDLLSORT_API bool vtkDataArray_InsertTuple_0(vtkDataArray * callingObject, vtkIdType dstTupleIdx, vtkIdType srcTupleIdx, vtkAbstractArray * source) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::InsertTuple]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InsertTuple(dstTupleIdx, srcTupleIdx, source);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType InsertNextTuple(vtkIdType srcTupleIdx, vtkAbstractArray * source)
// vtkIdType InsertNextTuple(vtkIdType srcTupleIdx, vtkAbstractArray* source)
TESTDLLSORT_API bool vtkDataArray_InsertNextTuple_0(vtkIdType * return_value, vtkDataArray * callingObject, vtkIdType srcTupleIdx, vtkAbstractArray * source) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::InsertNextTuple]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InsertNextTuple(srcTupleIdx, source);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InsertTuples(vtkIdList * dstIds, vtkIdList * srcIds, vtkAbstractArray * source)
// void InsertTuples(vtkIdList *dstIds, vtkIdList *srcIds, vtkAbstractArray *source)
TESTDLLSORT_API bool vtkDataArray_InsertTuples_0(vtkDataArray * callingObject, vtkIdList * dstIds, vtkIdList * srcIds, vtkAbstractArray * source) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::InsertTuples]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InsertTuples(dstIds, srcIds, source);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InsertTuples(vtkIdType dstStart, vtkIdType n, vtkIdType srcStart, vtkAbstractArray * source)
// void InsertTuples(vtkIdType dstStart, vtkIdType n, vtkIdType srcStart, vtkAbstractArray* source)
TESTDLLSORT_API bool vtkDataArray_InsertTuples_1(vtkDataArray * callingObject, vtkIdType dstStart, vtkIdType n, vtkIdType srcStart, vtkAbstractArray * source) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::InsertTuples]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InsertTuples(dstStart, n, srcStart, source);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetTuples(vtkIdList * tupleIds, vtkAbstractArray * output)
// void GetTuples(vtkIdList *tupleIds, vtkAbstractArray *output)
TESTDLLSORT_API bool vtkDataArray_GetTuples_0(vtkDataArray * callingObject, vtkIdList * tupleIds, vtkAbstractArray * output) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetTuples]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetTuples(tupleIds, output);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetTuples(vtkIdType p1, vtkIdType p2, vtkAbstractArray * output)
// void GetTuples(vtkIdType p1, vtkIdType p2, vtkAbstractArray *output)
TESTDLLSORT_API bool vtkDataArray_GetTuples_1(vtkDataArray * callingObject, vtkIdType p1, vtkIdType p2, vtkAbstractArray * output) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetTuples]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetTuples(p1, p2, output);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InterpolateTuple(vtkIdType dstTupleIdx, vtkIdList * ptIndices, vtkAbstractArray * source, double * weights)
// void InterpolateTuple(vtkIdType dstTupleIdx, vtkIdList *ptIndices, vtkAbstractArray* source, double* weights)
TESTDLLSORT_API bool vtkDataArray_InterpolateTuple_0(vtkDataArray * callingObject, vtkIdType dstTupleIdx, vtkIdList * ptIndices, vtkAbstractArray * source, double * weights) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::InterpolateTuple]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InterpolateTuple(dstTupleIdx, ptIndices, source, weights);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InterpolateTuple(vtkIdType dstTupleIdx, vtkIdType srcTupleIdx1, vtkAbstractArray * source1, vtkIdType srcTupleIdx2, vtkAbstractArray * source2, double t)
// void InterpolateTuple(vtkIdType dstTupleIdx, vtkIdType srcTupleIdx1, vtkAbstractArray* source1, vtkIdType srcTupleIdx2, vtkAbstractArray* source2, double t)
TESTDLLSORT_API bool vtkDataArray_InterpolateTuple_1(vtkDataArray * callingObject, vtkIdType dstTupleIdx, vtkIdType srcTupleIdx1, vtkAbstractArray * source1, vtkIdType srcTupleIdx2, vtkAbstractArray * source2, double t) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::InterpolateTuple]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InterpolateTuple(dstTupleIdx, srcTupleIdx1, source1, srcTupleIdx2, source2, t);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetTuple(vtkIdType tupleIdx)
// virtual double *GetTuple(vtkIdType tupleIdx)
TESTDLLSORT_API bool vtkDataArray_GetTuple_0(double ** return_value, vtkDataArray * callingObject, vtkIdType tupleIdx) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetTuple]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTuple(tupleIdx);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetTuple(vtkIdType tupleIdx, double * tuple)
// virtual void GetTuple(vtkIdType tupleIdx, double * tuple)
TESTDLLSORT_API bool vtkDataArray_GetTuple_1(vtkDataArray * callingObject, vtkIdType tupleIdx, double * tuple) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetTuple]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetTuple(tupleIdx, tuple);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetTuple1(vtkIdType tupleIdx)
// double GetTuple1(vtkIdType tupleIdx)
TESTDLLSORT_API bool vtkDataArray_GetTuple1_0(double * return_value, vtkDataArray * callingObject, vtkIdType tupleIdx) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetTuple1]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTuple1(tupleIdx);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* GetTuple2(vtkIdType tupleIdx)
// double* GetTuple2(vtkIdType tupleIdx)
TESTDLLSORT_API bool vtkDataArray_GetTuple2_0(double ** return_value, vtkDataArray * callingObject, vtkIdType tupleIdx) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetTuple2]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTuple2(tupleIdx);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* GetTuple3(vtkIdType tupleIdx)
// double* GetTuple3(vtkIdType tupleIdx)
TESTDLLSORT_API bool vtkDataArray_GetTuple3_0(double ** return_value, vtkDataArray * callingObject, vtkIdType tupleIdx) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetTuple3]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTuple3(tupleIdx);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* GetTuple4(vtkIdType tupleIdx)
// double* GetTuple4(vtkIdType tupleIdx)
TESTDLLSORT_API bool vtkDataArray_GetTuple4_0(double ** return_value, vtkDataArray * callingObject, vtkIdType tupleIdx) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetTuple4]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTuple4(tupleIdx);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* GetTuple6(vtkIdType tupleIdx)
// double* GetTuple6(vtkIdType tupleIdx)
TESTDLLSORT_API bool vtkDataArray_GetTuple6_0(double ** return_value, vtkDataArray * callingObject, vtkIdType tupleIdx) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetTuple6]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTuple6(tupleIdx);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* GetTuple9(vtkIdType tupleIdx)
// double* GetTuple9(vtkIdType tupleIdx)
TESTDLLSORT_API bool vtkDataArray_GetTuple9_0(double ** return_value, vtkDataArray * callingObject, vtkIdType tupleIdx) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetTuple9]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTuple9(tupleIdx);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTuple(vtkIdType dstTupleIdx, vtkIdType srcTupleIdx, vtkAbstractArray * source)
// void SetTuple(vtkIdType dstTupleIdx, vtkIdType srcTupleIdx, vtkAbstractArray* source)
TESTDLLSORT_API bool vtkDataArray_SetTuple_0(vtkDataArray * callingObject, vtkIdType dstTupleIdx, vtkIdType srcTupleIdx, vtkAbstractArray * source) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::SetTuple]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTuple(dstTupleIdx, srcTupleIdx, source);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetTuple(vtkIdType tupleIdx, const float * tuple)
// virtual void SetTuple(vtkIdType tupleIdx, const float * tuple)
TESTDLLSORT_API bool vtkDataArray_SetTuple_1(vtkDataArray * callingObject, vtkIdType tupleIdx, const float * tuple) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::SetTuple]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTuple(tupleIdx, tuple);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetTuple(vtkIdType tupleIdx, const double * tuple)
// virtual void SetTuple(vtkIdType tupleIdx, const double * tuple)
TESTDLLSORT_API bool vtkDataArray_SetTuple_2(vtkDataArray * callingObject, vtkIdType tupleIdx, const double * tuple) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::SetTuple]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTuple(tupleIdx, tuple);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTuple1(vtkIdType tupleIdx, double value)
// void SetTuple1(vtkIdType tupleIdx, double value)
TESTDLLSORT_API bool vtkDataArray_SetTuple1_0(vtkDataArray * callingObject, vtkIdType tupleIdx, double value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::SetTuple1]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTuple1(tupleIdx, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTuple2(vtkIdType tupleIdx, double val0, double val1)
// void SetTuple2(vtkIdType tupleIdx, double val0, double val1)
TESTDLLSORT_API bool vtkDataArray_SetTuple2_0(vtkDataArray * callingObject, vtkIdType tupleIdx, double val0, double val1) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::SetTuple2]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTuple2(tupleIdx, val0, val1);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTuple3(vtkIdType tupleIdx, double val0, double val1, double val2)
// void SetTuple3(vtkIdType tupleIdx, double val0, double val1, double val2)
TESTDLLSORT_API bool vtkDataArray_SetTuple3_0(vtkDataArray * callingObject, vtkIdType tupleIdx, double val0, double val1, double val2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::SetTuple3]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTuple3(tupleIdx, val0, val1, val2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTuple4(vtkIdType tupleIdx, double val0, double val1, double val2, double val3)
// void SetTuple4(vtkIdType tupleIdx, double val0, double val1, double val2, double val3)
TESTDLLSORT_API bool vtkDataArray_SetTuple4_0(vtkDataArray * callingObject, vtkIdType tupleIdx, double val0, double val1, double val2, double val3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::SetTuple4]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTuple4(tupleIdx, val0, val1, val2, val3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTuple6(vtkIdType tupleIdx, double val0, double val1, double val2, double val3, double val4, double val5)
// void SetTuple6(vtkIdType tupleIdx, double val0, double val1, double val2, double val3, double val4, double val5)
TESTDLLSORT_API bool vtkDataArray_SetTuple6_0(vtkDataArray * callingObject, vtkIdType tupleIdx, double val0, double val1, double val2, double val3, double val4, double val5) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::SetTuple6]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTuple6(tupleIdx, val0, val1, val2, val3, val4, val5);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTuple9(vtkIdType tupleIdx, double val0, double val1, double val2, double val3, double val4, double val5, double val6, double val7, double val8)
// void SetTuple9(vtkIdType tupleIdx, double val0, double val1, double val2, double val3, double val4, double val5, double val6, double val7, double val8)
TESTDLLSORT_API bool vtkDataArray_SetTuple9_0(vtkDataArray * callingObject, vtkIdType tupleIdx, double val0, double val1, double val2, double val3, double val4, double val5, double val6, double val7, double val8) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::SetTuple9]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTuple9(tupleIdx, val0, val1, val2, val3, val4, val5, val6, val7, val8);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void InsertTuple(vtkIdType tupleIdx, const float * tuple)
// virtual void InsertTuple(vtkIdType tupleIdx, const float * tuple)
TESTDLLSORT_API bool vtkDataArray_InsertTuple_1(vtkDataArray * callingObject, vtkIdType tupleIdx, const float * tuple) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::InsertTuple]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InsertTuple(tupleIdx, tuple);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void InsertTuple(vtkIdType tupleIdx, const double * tuple)
// virtual void InsertTuple(vtkIdType tupleIdx, const double * tuple)
TESTDLLSORT_API bool vtkDataArray_InsertTuple_2(vtkDataArray * callingObject, vtkIdType tupleIdx, const double * tuple) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::InsertTuple]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InsertTuple(tupleIdx, tuple);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InsertTuple1(vtkIdType tupleIdx, double value)
// void InsertTuple1(vtkIdType tupleIdx, double value)
TESTDLLSORT_API bool vtkDataArray_InsertTuple1_0(vtkDataArray * callingObject, vtkIdType tupleIdx, double value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::InsertTuple1]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InsertTuple1(tupleIdx, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InsertTuple2(vtkIdType tupleIdx, double val0, double val1)
// void InsertTuple2(vtkIdType tupleIdx, double val0, double val1)
TESTDLLSORT_API bool vtkDataArray_InsertTuple2_0(vtkDataArray * callingObject, vtkIdType tupleIdx, double val0, double val1) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::InsertTuple2]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InsertTuple2(tupleIdx, val0, val1);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InsertTuple3(vtkIdType tupleIdx, double val0, double val1, double val2)
// void InsertTuple3(vtkIdType tupleIdx, double val0, double val1, double val2)
TESTDLLSORT_API bool vtkDataArray_InsertTuple3_0(vtkDataArray * callingObject, vtkIdType tupleIdx, double val0, double val1, double val2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::InsertTuple3]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InsertTuple3(tupleIdx, val0, val1, val2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InsertTuple4(vtkIdType tupleIdx, double val0, double val1, double val2, double val3)
// void InsertTuple4(vtkIdType tupleIdx, double val0, double val1, double val2, double val3)
TESTDLLSORT_API bool vtkDataArray_InsertTuple4_0(vtkDataArray * callingObject, vtkIdType tupleIdx, double val0, double val1, double val2, double val3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::InsertTuple4]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InsertTuple4(tupleIdx, val0, val1, val2, val3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InsertTuple6(vtkIdType tupleIdx, double val0, double val1, double val2, double val3, double val4, double val5)
// void InsertTuple6(vtkIdType tupleIdx, double val0, double val1, double val2, double val3, double val4, double val5)
TESTDLLSORT_API bool vtkDataArray_InsertTuple6_0(vtkDataArray * callingObject, vtkIdType tupleIdx, double val0, double val1, double val2, double val3, double val4, double val5) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::InsertTuple6]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InsertTuple6(tupleIdx, val0, val1, val2, val3, val4, val5);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InsertTuple9(vtkIdType tupleIdx, double val0, double val1, double val2, double val3, double val4, double val5, double val6, double val7, double val8)
// void InsertTuple9(vtkIdType tupleIdx, double val0, double val1, double val2, double val3, double val4, double val5, double val6, double val7, double val8)
TESTDLLSORT_API bool vtkDataArray_InsertTuple9_0(vtkDataArray * callingObject, vtkIdType tupleIdx, double val0, double val1, double val2, double val3, double val4, double val5, double val6, double val7, double val8) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::InsertTuple9]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InsertTuple9(tupleIdx, val0, val1, val2, val3, val4, val5, val6, val7, val8);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkIdType InsertNextTuple(const float * tuple)
// virtual vtkIdType InsertNextTuple(const float * tuple)
TESTDLLSORT_API bool vtkDataArray_InsertNextTuple_1(vtkIdType * return_value, vtkDataArray * callingObject, const float * tuple) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::InsertNextTuple]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InsertNextTuple(tuple);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkIdType InsertNextTuple(const double * tuple)
// virtual vtkIdType InsertNextTuple(const double * tuple)
TESTDLLSORT_API bool vtkDataArray_InsertNextTuple_2(vtkIdType * return_value, vtkDataArray * callingObject, const double * tuple) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::InsertNextTuple]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InsertNextTuple(tuple);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InsertNextTuple1(double value)
// void InsertNextTuple1(double value)
TESTDLLSORT_API bool vtkDataArray_InsertNextTuple1_0(vtkDataArray * callingObject, double value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::InsertNextTuple1]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InsertNextTuple1(value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InsertNextTuple2(double val0, double val1)
// void InsertNextTuple2(double val0, double val1)
TESTDLLSORT_API bool vtkDataArray_InsertNextTuple2_0(vtkDataArray * callingObject, double val0, double val1) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::InsertNextTuple2]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InsertNextTuple2(val0, val1);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InsertNextTuple3(double val0, double val1, double val2)
// void InsertNextTuple3(double val0, double val1, double val2)
TESTDLLSORT_API bool vtkDataArray_InsertNextTuple3_0(vtkDataArray * callingObject, double val0, double val1, double val2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::InsertNextTuple3]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InsertNextTuple3(val0, val1, val2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InsertNextTuple4(double val0, double val1, double val2, double val3)
// void InsertNextTuple4(double val0, double val1, double val2, double val3)
TESTDLLSORT_API bool vtkDataArray_InsertNextTuple4_0(vtkDataArray * callingObject, double val0, double val1, double val2, double val3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::InsertNextTuple4]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InsertNextTuple4(val0, val1, val2, val3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InsertNextTuple6(double val0, double val1, double val2, double val3, double val4, double val5)
// void InsertNextTuple6(double val0, double val1, double val2, double val3, double val4, double val5)
TESTDLLSORT_API bool vtkDataArray_InsertNextTuple6_0(vtkDataArray * callingObject, double val0, double val1, double val2, double val3, double val4, double val5) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::InsertNextTuple6]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InsertNextTuple6(val0, val1, val2, val3, val4, val5);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InsertNextTuple9(double val0, double val1, double val2, double val3, double val4, double val5, double val6, double val7, double val8)
// void InsertNextTuple9(double val0, double val1, double val2, double val3, double val4, double val5, double val6, double val7, double val8)
TESTDLLSORT_API bool vtkDataArray_InsertNextTuple9_0(vtkDataArray * callingObject, double val0, double val1, double val2, double val3, double val4, double val5, double val6, double val7, double val8) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::InsertNextTuple9]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InsertNextTuple9(val0, val1, val2, val3, val4, val5, val6, val7, val8);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void RemoveTuple(vtkIdType tupleIdx)
// virtual void RemoveTuple(vtkIdType tupleIdx)
TESTDLLSORT_API bool vtkDataArray_RemoveTuple_0(vtkDataArray * callingObject, vtkIdType tupleIdx) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::RemoveTuple]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveTuple(tupleIdx);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void RemoveFirstTuple()
// virtual void RemoveFirstTuple()
TESTDLLSORT_API bool vtkDataArray_RemoveFirstTuple_0(vtkDataArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::RemoveFirstTuple]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveFirstTuple();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void RemoveLastTuple()
// virtual void RemoveLastTuple()
TESTDLLSORT_API bool vtkDataArray_RemoveLastTuple_0(vtkDataArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::RemoveLastTuple]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveLastTuple();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetComponent(vtkIdType tupleIdx, int compIdx)
// virtual double GetComponent(vtkIdType tupleIdx, int compIdx)
TESTDLLSORT_API bool vtkDataArray_GetComponent_0(double * return_value, vtkDataArray * callingObject, vtkIdType tupleIdx, int compIdx) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetComponent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetComponent(tupleIdx, compIdx);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetComponent(vtkIdType tupleIdx, int compIdx, double value)
// virtual void SetComponent(vtkIdType tupleIdx, int compIdx, double value)
TESTDLLSORT_API bool vtkDataArray_SetComponent_0(vtkDataArray * callingObject, vtkIdType tupleIdx, int compIdx, double value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::SetComponent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetComponent(tupleIdx, compIdx, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void InsertComponent(vtkIdType tupleIdx, int compIdx, double value)
// virtual void InsertComponent(vtkIdType tupleIdx, int compIdx, double value)
TESTDLLSORT_API bool vtkDataArray_InsertComponent_0(vtkDataArray * callingObject, vtkIdType tupleIdx, int compIdx, double value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::InsertComponent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InsertComponent(tupleIdx, compIdx, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetData(vtkIdType tupleMin, vtkIdType tupleMax, int compMin, int compMax, vtkDoubleArray * data)
// virtual void GetData(vtkIdType tupleMin, vtkIdType tupleMax, int compMin, int compMax, vtkDoubleArray* data)
TESTDLLSORT_API bool vtkDataArray_GetData_0(vtkDataArray * callingObject, vtkIdType tupleMin, vtkIdType tupleMax, int compMin, int compMax, vtkDoubleArray * data) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetData(tupleMin, tupleMax, compMin, compMax, data);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void DeepCopy(vtkAbstractArray * aa)
// void DeepCopy(vtkAbstractArray *aa)
TESTDLLSORT_API bool vtkDataArray_DeepCopy_0(vtkDataArray * callingObject, vtkAbstractArray * aa) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::DeepCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DeepCopy(aa);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void DeepCopy(vtkDataArray * da)
// virtual void DeepCopy(vtkDataArray *da)
TESTDLLSORT_API bool vtkDataArray_DeepCopy_1(vtkDataArray * callingObject, vtkDataArray * da) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::DeepCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DeepCopy(da);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ShallowCopy(vtkDataArray * other)
// virtual void ShallowCopy(vtkDataArray *other)
TESTDLLSORT_API bool vtkDataArray_ShallowCopy_0(vtkDataArray * callingObject, vtkDataArray * other) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::ShallowCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ShallowCopy(other);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void FillComponent(int compIdx, double value)
// virtual void FillComponent(int compIdx, double value)
TESTDLLSORT_API bool vtkDataArray_FillComponent_0(vtkDataArray * callingObject, int compIdx, double value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::FillComponent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->FillComponent(compIdx, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void Fill(double value)
// virtual void Fill(double value)
TESTDLLSORT_API bool vtkDataArray_Fill_0(vtkDataArray * callingObject, double value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::Fill]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Fill(value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CopyComponent(int dstComponent, vtkDataArray * src, int srcComponent)
// virtual void CopyComponent(int dstComponent, vtkDataArray *src, int srcComponent)
TESTDLLSORT_API bool vtkDataArray_CopyComponent_0(vtkDataArray * callingObject, int dstComponent, vtkDataArray * src, int srcComponent) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::CopyComponent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyComponent(dstComponent, src, srcComponent);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void* WriteVoidPointer(vtkIdType valueIdx, vtkIdType numValues)
// virtual void* WriteVoidPointer(vtkIdType valueIdx, vtkIdType numValues)
TESTDLLSORT_API bool vtkDataArray_WriteVoidPointer_0(void ** return_value, vtkDataArray * callingObject, vtkIdType valueIdx, vtkIdType numValues) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::WriteVoidPointer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->WriteVoidPointer(valueIdx, numValues);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// long GetActualMemorySize()
// unsigned long GetActualMemorySize()
TESTDLLSORT_API bool vtkDataArray_GetActualMemorySize_0(unsigned long * return_value, vtkDataArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetActualMemorySize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetActualMemorySize();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CreateDefaultLookupTable()
// void CreateDefaultLookupTable()
TESTDLLSORT_API bool vtkDataArray_CreateDefaultLookupTable_0(vtkDataArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::CreateDefaultLookupTable]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CreateDefaultLookupTable();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetLookupTable(vtkLookupTable * lut)
// void SetLookupTable(vtkLookupTable *lut)
TESTDLLSORT_API bool vtkDataArray_SetLookupTable_0(vtkDataArray * callingObject, vtkLookupTable * lut) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::SetLookupTable]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetLookupTable(lut);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkLookupTable* GetLookupTable()
// virtual vtkLookupTable *GetLookupTable ()
TESTDLLSORT_API bool vtkDataArray_GetLookupTable_0(vtkLookupTable ** return_value, vtkDataArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetLookupTable]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetLookupTable();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetRange(double range[2], int comp)
// void GetRange(double range[2], int comp)
TESTDLLSORT_API bool vtkDataArray_GetRange_0(vtkDataArray * callingObject, double range[2], int comp) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetRange(range, comp);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* GetRange(int comp)
// double* GetRange(int comp)
TESTDLLSORT_API bool vtkDataArray_GetRange_1(double ** return_value, vtkDataArray * callingObject, int comp) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetRange(comp);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* GetRange()
// double* GetRange()
TESTDLLSORT_API bool vtkDataArray_GetRange_2(double ** return_value, vtkDataArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetRange();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetRange(double range[2])
// void GetRange(double range[2])
TESTDLLSORT_API bool vtkDataArray_GetRange_3(vtkDataArray * callingObject, double range[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetRange(range);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetFiniteRange(double range[2], int comp)
// void GetFiniteRange(double range[2], int comp)
TESTDLLSORT_API bool vtkDataArray_GetFiniteRange_0(vtkDataArray * callingObject, double range[2], int comp) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetFiniteRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetFiniteRange(range, comp);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* GetFiniteRange(int comp)
// double *GetFiniteRange(int comp)
TESTDLLSORT_API bool vtkDataArray_GetFiniteRange_1(double ** return_value, vtkDataArray * callingObject, int comp) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetFiniteRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetFiniteRange(comp);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* GetFiniteRange()
// double *GetFiniteRange()
TESTDLLSORT_API bool vtkDataArray_GetFiniteRange_2(double ** return_value, vtkDataArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetFiniteRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetFiniteRange();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetFiniteRange(double range[2])
// void GetFiniteRange(double range[2])
TESTDLLSORT_API bool vtkDataArray_GetFiniteRange_3(vtkDataArray * callingObject, double range[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetFiniteRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetFiniteRange(range);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetDataTypeRange(double range[2])
// void GetDataTypeRange(double range[2])
TESTDLLSORT_API bool vtkDataArray_GetDataTypeRange_0(vtkDataArray * callingObject, double range[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetDataTypeRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetDataTypeRange(range);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetDataTypeMin()
// double GetDataTypeMin()
TESTDLLSORT_API bool vtkDataArray_GetDataTypeMin_0(double * return_value, vtkDataArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetDataTypeMin]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDataTypeMin();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetDataTypeMax()
// double GetDataTypeMax()
TESTDLLSORT_API bool vtkDataArray_GetDataTypeMax_0(double * return_value, vtkDataArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetDataTypeMax]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDataTypeMax();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void GetDataTypeRange(int type, double range[2])
// static void GetDataTypeRange(int type, double range[2])
TESTDLLSORT_API bool vtkDataArray_GetDataTypeRange_1(int type, double range[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetDataTypeRange]:[";
#endif
	bool success = true;
	vtkDataArray::GetDataTypeRange(type, range);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double GetDataTypeMin(int type)
// static double GetDataTypeMin(int type)
TESTDLLSORT_API bool vtkDataArray_GetDataTypeMin_1(double * return_value, int type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetDataTypeMin]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataArray::GetDataTypeMin(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double GetDataTypeMax(int type)
// static double GetDataTypeMax(int type)
TESTDLLSORT_API bool vtkDataArray_GetDataTypeMax_1(double * return_value, int type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetDataTypeMax]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataArray::GetDataTypeMax(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetMaxNorm()
// virtual double GetMaxNorm()
TESTDLLSORT_API bool vtkDataArray_GetMaxNorm_0(double * return_value, vtkDataArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetMaxNorm]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetMaxNorm();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkDataArray* CreateDataArray(int dataType)
// static vtkDataArray* CreateDataArray(int dataType)
TESTDLLSORT_API bool vtkDataArray_CreateDataArray_0(vtkDataArray ** return_value, int dataType) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::CreateDataArray]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataArray::CreateDataArray(dataType);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationDoubleVectorKey* COMPONENT_RANGE()
// static vtkInformationDoubleVectorKey* COMPONENT_RANGE()
TESTDLLSORT_API bool vtkDataArray_COMPONENT_RANGE_0(vtkInformationDoubleVectorKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::COMPONENT_RANGE]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataArray::COMPONENT_RANGE();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationDoubleVectorKey* L2_NORM_RANGE()
// static vtkInformationDoubleVectorKey* L2_NORM_RANGE()
TESTDLLSORT_API bool vtkDataArray_L2_NORM_RANGE_0(vtkInformationDoubleVectorKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::L2_NORM_RANGE]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataArray::L2_NORM_RANGE();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationDoubleVectorKey* L2_NORM_FINITE_RANGE()
// static vtkInformationDoubleVectorKey* L2_NORM_FINITE_RANGE()
TESTDLLSORT_API bool vtkDataArray_L2_NORM_FINITE_RANGE_0(vtkInformationDoubleVectorKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::L2_NORM_FINITE_RANGE]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataArray::L2_NORM_FINITE_RANGE();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Modified()
// void Modified()
TESTDLLSORT_API bool vtkDataArray_Modified_0(vtkDataArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::Modified]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Modified();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationStringKey* UNITS_LABEL()
// static vtkInformationStringKey *UNITS_LABEL()
TESTDLLSORT_API bool vtkDataArray_UNITS_LABEL_0(vtkInformationStringKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::UNITS_LABEL]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataArray::UNITS_LABEL();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int CopyInformation(vtkInformation * infoFrom, int deep = 1)
// int CopyInformation(vtkInformation *infoFrom, int deep=1)
TESTDLLSORT_API bool vtkDataArray_CopyInformation_0(int * return_value, vtkDataArray * callingObject, vtkInformation * infoFrom, int deep = 1) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::CopyInformation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->CopyInformation(infoFrom, deep);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetArrayType()
// int GetArrayType()
TESTDLLSORT_API bool vtkDataArray_GetArrayType_0(int * return_value, vtkDataArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataArray::GetArrayType]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetArrayType();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
