
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkStringArray.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkStringArray* New()
// static vtkStringArray* New()
TESTDLLSORT_API bool vtkStringArray_New_0(vtkStringArray ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkStringArray::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkStringArray_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkStringArray::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkStringArray_IsA_0(vtkTypeBool * return_value, vtkStringArray * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::IsA]:[";
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

// static vtkStringArray* SafeDownCast(vtkObjectBase * o)
// static vtkStringArray* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkStringArray_SafeDownCast_0(vtkStringArray ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkStringArray::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkStringArray* NewInstance()
// vtkStringArray *NewInstance()
TESTDLLSORT_API bool vtkStringArray_NewInstance_0(vtkStringArray ** return_value, vtkStringArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::NewInstance]:[";
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

// int GetDataType()
// int GetDataType()
TESTDLLSORT_API bool vtkStringArray_GetDataType_0(int * return_value, vtkStringArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::GetDataType]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDataType();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int IsNumeric()
// int IsNumeric()
TESTDLLSORT_API bool vtkStringArray_IsNumeric_0(int * return_value, vtkStringArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::IsNumeric]:[";
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

// void Initialize()
// void Initialize()
TESTDLLSORT_API bool vtkStringArray_Initialize_0(vtkStringArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::Initialize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Initialize();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetDataTypeSize()
// int GetDataTypeSize()
TESTDLLSORT_API bool vtkStringArray_GetDataTypeSize_0(int * return_value, vtkStringArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::GetDataTypeSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDataTypeSize();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Squeeze()
// void Squeeze()
TESTDLLSORT_API bool vtkStringArray_Squeeze_0(vtkStringArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::Squeeze]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Squeeze();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Resize(vtkIdType numTuples)
// int Resize(vtkIdType numTuples)
TESTDLLSORT_API bool vtkStringArray_Resize_0(int * return_value, vtkStringArray * callingObject, vtkIdType numTuples) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::Resize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Resize(numTuples);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTuple(vtkIdType i, vtkIdType j, vtkAbstractArray * source)
// void SetTuple(vtkIdType i, vtkIdType j, vtkAbstractArray* source)
TESTDLLSORT_API bool vtkStringArray_SetTuple_0(vtkStringArray * callingObject, vtkIdType i, vtkIdType j, vtkAbstractArray * source) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::SetTuple]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTuple(i, j, source);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InsertTuple(vtkIdType i, vtkIdType j, vtkAbstractArray * source)
// void InsertTuple(vtkIdType i, vtkIdType j, vtkAbstractArray* source)
TESTDLLSORT_API bool vtkStringArray_InsertTuple_0(vtkStringArray * callingObject, vtkIdType i, vtkIdType j, vtkAbstractArray * source) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::InsertTuple]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InsertTuple(i, j, source);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InsertTuples(vtkIdList * dstIds, vtkIdList * srcIds, vtkAbstractArray * source)
// void InsertTuples(vtkIdList *dstIds, vtkIdList *srcIds, vtkAbstractArray *source)
TESTDLLSORT_API bool vtkStringArray_InsertTuples_0(vtkStringArray * callingObject, vtkIdList * dstIds, vtkIdList * srcIds, vtkAbstractArray * source) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::InsertTuples]:[";
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
TESTDLLSORT_API bool vtkStringArray_InsertTuples_1(vtkStringArray * callingObject, vtkIdType dstStart, vtkIdType n, vtkIdType srcStart, vtkAbstractArray * source) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::InsertTuples]:[";
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

// vtkIdType InsertNextTuple(vtkIdType j, vtkAbstractArray * source)
// vtkIdType InsertNextTuple(vtkIdType j, vtkAbstractArray* source)
TESTDLLSORT_API bool vtkStringArray_InsertNextTuple_0(vtkIdType * return_value, vtkStringArray * callingObject, vtkIdType j, vtkAbstractArray * source) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::InsertNextTuple]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InsertNextTuple(j, source);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InterpolateTuple(vtkIdType i, vtkIdList * ptIndices, vtkAbstractArray * source, double * weights)
// void InterpolateTuple(vtkIdType i, vtkIdList *ptIndices, vtkAbstractArray* source, double* weights)
TESTDLLSORT_API bool vtkStringArray_InterpolateTuple_0(vtkStringArray * callingObject, vtkIdType i, vtkIdList * ptIndices, vtkAbstractArray * source, double * weights) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::InterpolateTuple]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InterpolateTuple(i, ptIndices, source, weights);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InterpolateTuple(vtkIdType i, vtkIdType id1, vtkAbstractArray * source1, vtkIdType id2, vtkAbstractArray * source2, double t)
// void InterpolateTuple(vtkIdType i, vtkIdType id1, vtkAbstractArray* source1, vtkIdType id2, vtkAbstractArray* source2, double t)
TESTDLLSORT_API bool vtkStringArray_InterpolateTuple_1(vtkStringArray * callingObject, vtkIdType i, vtkIdType id1, vtkAbstractArray * source1, vtkIdType id2, vtkAbstractArray * source2, double t) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::InterpolateTuple]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InterpolateTuple(i, id1, source1, id2, source2, t);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetTuples(vtkIdList * ptIds, vtkAbstractArray * output)
// void GetTuples(vtkIdList *ptIds, vtkAbstractArray *output)
TESTDLLSORT_API bool vtkStringArray_GetTuples_0(vtkStringArray * callingObject, vtkIdList * ptIds, vtkAbstractArray * output) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::GetTuples]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetTuples(ptIds, output);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetTuples(vtkIdType p1, vtkIdType p2, vtkAbstractArray * output)
// void GetTuples(vtkIdType p1, vtkIdType p2, vtkAbstractArray *output)
TESTDLLSORT_API bool vtkStringArray_GetTuples_1(vtkStringArray * callingObject, vtkIdType p1, vtkIdType p2, vtkAbstractArray * output) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::GetTuples]:[";
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

// int Allocate(vtkIdType sz, vtkIdType ext = 1000)
// int Allocate( vtkIdType sz, vtkIdType ext=1000 )
TESTDLLSORT_API bool vtkStringArray_Allocate_0(int * return_value, vtkStringArray * callingObject, vtkIdType sz, vtkIdType ext = 1000) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::Allocate]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Allocate(sz, ext);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkStdString& GetValue(vtkIdType id)
// vtkStdString &GetValue(vtkIdType id)
TESTDLLSORT_API bool vtkStringArray_GetValue_0(vtkStdString * return_value, vtkStringArray * callingObject, vtkIdType id) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::GetValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetValue(id);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetValue(vtkIdType id, vtkStdString value)
// void SetValue(vtkIdType id, vtkStdString value)
TESTDLLSORT_API bool vtkStringArray_SetValue_0(vtkStringArray * callingObject, vtkIdType id, vtkStdString value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::SetValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetValue(id, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetValue(vtkIdType id, const char * value)
// void SetValue(vtkIdType id, const char *value)
TESTDLLSORT_API bool vtkStringArray_SetValue_1(vtkStringArray * callingObject, vtkIdType id, const char * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::SetValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetValue(id, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetNumberOfTuples(vtkIdType number)
// void SetNumberOfTuples(vtkIdType number)
TESTDLLSORT_API bool vtkStringArray_SetNumberOfTuples_0(vtkStringArray * callingObject, vtkIdType number) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::SetNumberOfTuples]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetNumberOfTuples(number);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetNumberOfValues(vtkIdType number)
// void SetNumberOfValues(vtkIdType number)
TESTDLLSORT_API bool vtkStringArray_SetNumberOfValues_0(vtkStringArray * callingObject, vtkIdType number) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::SetNumberOfValues]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetNumberOfValues(number);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType GetNumberOfValues()
// vtkIdType GetNumberOfValues()
TESTDLLSORT_API bool vtkStringArray_GetNumberOfValues_0(vtkIdType * return_value, vtkStringArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::GetNumberOfValues]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfValues();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetNumberOfElementComponents()
// int GetNumberOfElementComponents()
TESTDLLSORT_API bool vtkStringArray_GetNumberOfElementComponents_0(int * return_value, vtkStringArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::GetNumberOfElementComponents]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfElementComponents();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetElementComponentSize()
// int GetElementComponentSize()
TESTDLLSORT_API bool vtkStringArray_GetElementComponentSize_0(int * return_value, vtkStringArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::GetElementComponentSize]:[";
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

// void InsertValue(vtkIdType id, vtkStdString f)
// void InsertValue(vtkIdType id, vtkStdString f)
TESTDLLSORT_API bool vtkStringArray_InsertValue_0(vtkStringArray * callingObject, vtkIdType id, vtkStdString f) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::InsertValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InsertValue(id, f);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InsertValue(vtkIdType id, const char * val)
// void InsertValue(vtkIdType id, const char *val)
TESTDLLSORT_API bool vtkStringArray_InsertValue_1(vtkStringArray * callingObject, vtkIdType id, const char * val) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::InsertValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InsertValue(id, val);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType InsertNextValue(vtkStdString f)
// vtkIdType InsertNextValue(vtkStdString f)
TESTDLLSORT_API bool vtkStringArray_InsertNextValue_0(vtkIdType * return_value, vtkStringArray * callingObject, vtkStdString f) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::InsertNextValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InsertNextValue(f);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType InsertNextValue(const char * f)
// vtkIdType InsertNextValue(const char *f)
TESTDLLSORT_API bool vtkStringArray_InsertNextValue_1(vtkIdType * return_value, vtkStringArray * callingObject, const char * f) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::InsertNextValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InsertNextValue(f);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkStdString* WritePointer(vtkIdType id, vtkIdType number)
// vtkStdString* WritePointer(vtkIdType id, vtkIdType number)
TESTDLLSORT_API bool vtkStringArray_WritePointer_0(vtkStdString ** return_value, vtkStringArray * callingObject, vtkIdType id, vtkIdType number) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::WritePointer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->WritePointer(id, number);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkStdString* GetPointer(vtkIdType id)
// vtkStdString* GetPointer(vtkIdType id)
TESTDLLSORT_API bool vtkStringArray_GetPointer_0(vtkStdString ** return_value, vtkStringArray * callingObject, vtkIdType id) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::GetPointer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPointer(id);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void* GetVoidPointer(vtkIdType id)
// void* GetVoidPointer(vtkIdType id)
TESTDLLSORT_API bool vtkStringArray_GetVoidPointer_0(void ** return_value, vtkStringArray * callingObject, vtkIdType id) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::GetVoidPointer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetVoidPointer(id);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void DeepCopy(vtkAbstractArray * aa)
// void DeepCopy( vtkAbstractArray* aa )
TESTDLLSORT_API bool vtkStringArray_DeepCopy_0(vtkStringArray * callingObject, vtkAbstractArray * aa) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::DeepCopy]:[";
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

// void SetArray(vtkStdString * array, vtkIdType size, int save)
// void SetArray(vtkStdString* array, vtkIdType size, int save)
TESTDLLSORT_API bool vtkStringArray_SetArray_0(vtkStringArray * callingObject, vtkStdString * array, vtkIdType size, int save) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::SetArray]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetArray(array, size, save);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetVoidArray(void * array, vtkIdType size, int save)
// void SetVoidArray(void* array, vtkIdType size, int save)
TESTDLLSORT_API bool vtkStringArray_SetVoidArray_0(vtkStringArray * callingObject, void * array, vtkIdType size, int save) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::SetVoidArray]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetVoidArray(array, size, save);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetVoidArray(void * array, vtkIdType size, int save, int ARG_0)
// void SetVoidArray(void* array, vtkIdType size, int save, int )
TESTDLLSORT_API bool vtkStringArray_SetVoidArray_1(vtkStringArray * callingObject, void * array, vtkIdType size, int save, int ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::SetVoidArray]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetVoidArray(array, size, save, ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// long GetActualMemorySize()
// unsigned long GetActualMemorySize()
TESTDLLSORT_API bool vtkStringArray_GetActualMemorySize_0(unsigned long * return_value, vtkStringArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::GetActualMemorySize]:[";
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

// vtkArrayIterator* NewIterator()
// vtkArrayIterator* NewIterator()
TESTDLLSORT_API bool vtkStringArray_NewIterator_0(vtkArrayIterator ** return_value, vtkStringArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::NewIterator]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->NewIterator();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType GetDataSize()
// vtkIdType GetDataSize()
TESTDLLSORT_API bool vtkStringArray_GetDataSize_0(vtkIdType * return_value, vtkStringArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::GetDataSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDataSize();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType LookupValue(const vtkStdString & value)
// vtkIdType LookupValue(const vtkStdString& value)
TESTDLLSORT_API bool vtkStringArray_LookupValue_0(vtkIdType * return_value, vtkStringArray * callingObject, const vtkStdString * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::LookupValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->LookupValue(*value);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void LookupValue(const vtkStdString & value, vtkIdList * ids)
// void LookupValue(const vtkStdString& value, vtkIdList* ids)
TESTDLLSORT_API bool vtkStringArray_LookupValue_1(vtkStringArray * callingObject, const vtkStdString * value, vtkIdList * ids) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::LookupValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->LookupValue(*value, ids);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType LookupValue(const char * value)
// vtkIdType LookupValue(const char* value)
TESTDLLSORT_API bool vtkStringArray_LookupValue_2(vtkIdType * return_value, vtkStringArray * callingObject, const char * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::LookupValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->LookupValue(value);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void LookupValue(const char * value, vtkIdList * ids)
// void LookupValue(const char* value, vtkIdList* ids)
TESTDLLSORT_API bool vtkStringArray_LookupValue_3(vtkStringArray * callingObject, const char * value, vtkIdList * ids) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::LookupValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->LookupValue(value, ids);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void DataChanged()
// void DataChanged()
TESTDLLSORT_API bool vtkStringArray_DataChanged_0(vtkStringArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::DataChanged]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DataChanged();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void DataElementChanged(vtkIdType id)
// virtual void DataElementChanged(vtkIdType id)
TESTDLLSORT_API bool vtkStringArray_DataElementChanged_0(vtkStringArray * callingObject, vtkIdType id) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::DataElementChanged]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DataElementChanged(id);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ClearLookup()
// void ClearLookup()
TESTDLLSORT_API bool vtkStringArray_ClearLookup_0(vtkStringArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStringArray::ClearLookup]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ClearLookup();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
