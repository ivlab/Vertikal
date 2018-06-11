
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkPiecewiseFunction.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkPiecewiseFunction* New()
// static vtkPiecewiseFunction *New()
TESTDLLSORT_API bool vtkPiecewiseFunction_New_0(vtkPiecewiseFunction ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPiecewiseFunction::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkPiecewiseFunction_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPiecewiseFunction::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkPiecewiseFunction_IsA_0(vtkTypeBool * return_value, vtkPiecewiseFunction * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::IsA]:[";
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

// static vtkPiecewiseFunction* SafeDownCast(vtkObjectBase * o)
// static vtkPiecewiseFunction* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkPiecewiseFunction_SafeDownCast_0(vtkPiecewiseFunction ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPiecewiseFunction::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkPiecewiseFunction* NewInstance()
// vtkPiecewiseFunction *NewInstance()
TESTDLLSORT_API bool vtkPiecewiseFunction_NewInstance_0(vtkPiecewiseFunction ** return_value, vtkPiecewiseFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::NewInstance]:[";
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

// void DeepCopy(vtkDataObject * f)
// void DeepCopy( vtkDataObject *f )
TESTDLLSORT_API bool vtkPiecewiseFunction_DeepCopy_0(vtkPiecewiseFunction * callingObject, vtkDataObject * f) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::DeepCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DeepCopy(f);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ShallowCopy(vtkDataObject * f)
// void ShallowCopy( vtkDataObject *f )
TESTDLLSORT_API bool vtkPiecewiseFunction_ShallowCopy_0(vtkPiecewiseFunction * callingObject, vtkDataObject * f) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::ShallowCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ShallowCopy(f);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetDataObjectType()
// int GetDataObjectType()
TESTDLLSORT_API bool vtkPiecewiseFunction_GetDataObjectType_0(int * return_value, vtkPiecewiseFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::GetDataObjectType]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDataObjectType();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetSize()
// int GetSize()
TESTDLLSORT_API bool vtkPiecewiseFunction_GetSize_0(int * return_value, vtkPiecewiseFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::GetSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetSize();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int AddPoint(double x, double y)
// int AddPoint( double x, double y )
TESTDLLSORT_API bool vtkPiecewiseFunction_AddPoint_0(int * return_value, vtkPiecewiseFunction * callingObject, double x, double y) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::AddPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->AddPoint(x, y);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int AddPoint(double x, double y, double midpoint, double sharpness)
// int AddPoint( double x, double y, double midpoint, double sharpness )
TESTDLLSORT_API bool vtkPiecewiseFunction_AddPoint_1(int * return_value, vtkPiecewiseFunction * callingObject, double x, double y, double midpoint, double sharpness) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::AddPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->AddPoint(x, y, midpoint, sharpness);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int RemovePoint(double x)
// int RemovePoint( double x )
TESTDLLSORT_API bool vtkPiecewiseFunction_RemovePoint_0(int * return_value, vtkPiecewiseFunction * callingObject, double x) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::RemovePoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->RemovePoint(x);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void RemoveAllPoints()
// void RemoveAllPoints()
TESTDLLSORT_API bool vtkPiecewiseFunction_RemoveAllPoints_0(vtkPiecewiseFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::RemoveAllPoints]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveAllPoints();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AddSegment(double x1, double y1, double x2, double y2)
// void AddSegment( double x1, double y1, double x2, double y2 )
TESTDLLSORT_API bool vtkPiecewiseFunction_AddSegment_0(vtkPiecewiseFunction * callingObject, double x1, double y1, double x2, double y2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::AddSegment]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AddSegment(x1, y1, x2, y2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetValue(double x)
// double GetValue( double x )
TESTDLLSORT_API bool vtkPiecewiseFunction_GetValue_0(double * return_value, vtkPiecewiseFunction * callingObject, double x) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::GetValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetValue(x);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetNodeValue(int index, double val[4])
// int GetNodeValue( int index, double val[4] )
TESTDLLSORT_API bool vtkPiecewiseFunction_GetNodeValue_0(int * return_value, vtkPiecewiseFunction * callingObject, int index, double val[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::GetNodeValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNodeValue(index, val);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int SetNodeValue(int index, double val[4])
// int SetNodeValue( int index, double val[4] )
TESTDLLSORT_API bool vtkPiecewiseFunction_SetNodeValue_0(int * return_value, vtkPiecewiseFunction * callingObject, int index, double val[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::SetNodeValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetNodeValue(index, val);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* GetDataPointer()
// double *GetDataPointer()
TESTDLLSORT_API bool vtkPiecewiseFunction_GetDataPointer_0(double ** return_value, vtkPiecewiseFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::GetDataPointer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDataPointer();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void FillFromDataPointer(int ARG_0, double * ARG_1)
// void FillFromDataPointer(int, double*)
TESTDLLSORT_API bool vtkPiecewiseFunction_FillFromDataPointer_0(vtkPiecewiseFunction * callingObject, int ARG_0, double * ARG_1) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::FillFromDataPointer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->FillFromDataPointer(ARG_0, ARG_1);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetRange()
// virtual double *GetRange ()
TESTDLLSORT_API bool vtkPiecewiseFunction_GetRange_0(double ** return_value, vtkPiecewiseFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::GetRange]:[";
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

// virtual void GetRange(double & _arg1, double & _arg2)
// virtual void GetRange (double &_arg1, double &_arg2)
TESTDLLSORT_API bool vtkPiecewiseFunction_GetRange_1(vtkPiecewiseFunction * callingObject, double * _arg1, double * _arg2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::GetRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetRange(*_arg1, *_arg2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetRange(double _arg[2])
// virtual void GetRange (double _arg[2])
TESTDLLSORT_API bool vtkPiecewiseFunction_GetRange_2(vtkPiecewiseFunction * callingObject, double _arg[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::GetRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetRange(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int AdjustRange(double range[2])
// int AdjustRange(double range[2])
TESTDLLSORT_API bool vtkPiecewiseFunction_AdjustRange_0(int * return_value, vtkPiecewiseFunction * callingObject, double range[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::AdjustRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->AdjustRange(range);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetTable(double x1, double x2, int size, float * table, int stride = 1)
// void GetTable( double x1, double x2, int size, float *table, int stride=1 )
TESTDLLSORT_API bool vtkPiecewiseFunction_GetTable_0(vtkPiecewiseFunction * callingObject, double x1, double x2, int size, float * table, int stride = 1) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::GetTable]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetTable(x1, x2, size, table, stride);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetTable(double x1, double x2, int size, double * table, int stride = 1)
// void GetTable( double x1, double x2, int size, double *table, int stride=1 )
TESTDLLSORT_API bool vtkPiecewiseFunction_GetTable_1(vtkPiecewiseFunction * callingObject, double x1, double x2, int size, double * table, int stride = 1) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::GetTable]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetTable(x1, x2, size, table, stride);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void BuildFunctionFromTable(double x1, double x2, int size, double * table, int stride = 1)
// void BuildFunctionFromTable( double x1, double x2, int size, double *table, int stride=1 )
TESTDLLSORT_API bool vtkPiecewiseFunction_BuildFunctionFromTable_0(vtkPiecewiseFunction * callingObject, double x1, double x2, int size, double * table, int stride = 1) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::BuildFunctionFromTable]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->BuildFunctionFromTable(x1, x2, size, table, stride);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetClamping(int _arg)
// virtual void SetClamping (int _arg)
TESTDLLSORT_API bool vtkPiecewiseFunction_SetClamping_0(vtkPiecewiseFunction * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::SetClamping]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetClamping(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetClamping()
// virtual int GetClamping ()
TESTDLLSORT_API bool vtkPiecewiseFunction_GetClamping_0(int * return_value, vtkPiecewiseFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::GetClamping]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetClamping();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ClampingOn()
// virtual void ClampingOn ()
TESTDLLSORT_API bool vtkPiecewiseFunction_ClampingOn_0(vtkPiecewiseFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::ClampingOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ClampingOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ClampingOff()
// virtual void ClampingOff ()
TESTDLLSORT_API bool vtkPiecewiseFunction_ClampingOff_0(vtkPiecewiseFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::ClampingOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ClampingOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetUseLogScale(bool _arg)
// virtual void SetUseLogScale (bool _arg)
TESTDLLSORT_API bool vtkPiecewiseFunction_SetUseLogScale_0(vtkPiecewiseFunction * callingObject, bool _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::SetUseLogScale]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetUseLogScale(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual bool GetUseLogScale()
// virtual bool GetUseLogScale ()
TESTDLLSORT_API bool vtkPiecewiseFunction_GetUseLogScale_0(bool * return_value, vtkPiecewiseFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::GetUseLogScale]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUseLogScale();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseLogScaleOn()
// virtual void UseLogScaleOn ()
TESTDLLSORT_API bool vtkPiecewiseFunction_UseLogScaleOn_0(vtkPiecewiseFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::UseLogScaleOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseLogScaleOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseLogScaleOff()
// virtual void UseLogScaleOff ()
TESTDLLSORT_API bool vtkPiecewiseFunction_UseLogScaleOff_0(vtkPiecewiseFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::UseLogScaleOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseLogScaleOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char* GetType()
// const char *GetType()
TESTDLLSORT_API bool vtkPiecewiseFunction_GetType_0(const char ** return_value, vtkPiecewiseFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::GetType]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetType();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetFirstNonZeroValue()
// double GetFirstNonZeroValue()
TESTDLLSORT_API bool vtkPiecewiseFunction_GetFirstNonZeroValue_0(double * return_value, vtkPiecewiseFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::GetFirstNonZeroValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetFirstNonZeroValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Initialize()
// void Initialize()
TESTDLLSORT_API bool vtkPiecewiseFunction_Initialize_0(vtkPiecewiseFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::Initialize]:[";
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

// static vtkPiecewiseFunction* GetData(vtkInformation * info)
// static vtkPiecewiseFunction* GetData(vtkInformation* info)
TESTDLLSORT_API bool vtkPiecewiseFunction_GetData_0(vtkPiecewiseFunction ** return_value, vtkInformation * info) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::GetData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPiecewiseFunction::GetData(info);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkPiecewiseFunction* GetData(vtkInformationVector * v, int i = 0)
// static vtkPiecewiseFunction* GetData(vtkInformationVector* v, int i=0)
TESTDLLSORT_API bool vtkPiecewiseFunction_GetData_1(vtkPiecewiseFunction ** return_value, vtkInformationVector * v, int i = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::GetData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPiecewiseFunction::GetData(v, i);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetAllowDuplicateScalars(int _arg)
// virtual void SetAllowDuplicateScalars (int _arg)
TESTDLLSORT_API bool vtkPiecewiseFunction_SetAllowDuplicateScalars_0(vtkPiecewiseFunction * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::SetAllowDuplicateScalars]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAllowDuplicateScalars(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetAllowDuplicateScalars()
// virtual int GetAllowDuplicateScalars ()
TESTDLLSORT_API bool vtkPiecewiseFunction_GetAllowDuplicateScalars_0(int * return_value, vtkPiecewiseFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::GetAllowDuplicateScalars]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAllowDuplicateScalars();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void AllowDuplicateScalarsOn()
// virtual void AllowDuplicateScalarsOn ()
TESTDLLSORT_API bool vtkPiecewiseFunction_AllowDuplicateScalarsOn_0(vtkPiecewiseFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::AllowDuplicateScalarsOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AllowDuplicateScalarsOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void AllowDuplicateScalarsOff()
// virtual void AllowDuplicateScalarsOff ()
TESTDLLSORT_API bool vtkPiecewiseFunction_AllowDuplicateScalarsOff_0(vtkPiecewiseFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::AllowDuplicateScalarsOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AllowDuplicateScalarsOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int EstimateMinNumberOfSamples(double const& x1, double const& x2)
// int EstimateMinNumberOfSamples(double const & x1, double const & x2)
TESTDLLSORT_API bool vtkPiecewiseFunction_EstimateMinNumberOfSamples_0(int * return_value, vtkPiecewiseFunction * callingObject, double const* x1, double const* x2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPiecewiseFunction::EstimateMinNumberOfSamples]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->EstimateMinNumberOfSamples(*x1, *x2);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
