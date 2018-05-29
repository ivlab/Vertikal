
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkColorTransferFunction.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkColorTransferFunction* New()
// static vtkColorTransferFunction *New()
TESTDLLSORT_API bool vtkColorTransferFunction_New_0(vtkColorTransferFunction ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkColorTransferFunction::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkColorTransferFunction_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkColorTransferFunction::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkColorTransferFunction_IsA_0(vtkTypeBool * return_value, vtkColorTransferFunction * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::IsA]:[";
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

// static vtkColorTransferFunction* SafeDownCast(vtkObjectBase * o)
// static vtkColorTransferFunction* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkColorTransferFunction_SafeDownCast_0(vtkColorTransferFunction ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkColorTransferFunction::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkColorTransferFunction* NewInstance()
// vtkColorTransferFunction *NewInstance()
TESTDLLSORT_API bool vtkColorTransferFunction_NewInstance_0(vtkColorTransferFunction ** return_value, vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::NewInstance]:[";
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

// void DeepCopy(vtkScalarsToColors * f)
// void DeepCopy( vtkScalarsToColors *f )
TESTDLLSORT_API bool vtkColorTransferFunction_DeepCopy_0(vtkColorTransferFunction * callingObject, vtkScalarsToColors * f) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::DeepCopy]:[";
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

// void ShallowCopy(vtkColorTransferFunction * f)
// void ShallowCopy( vtkColorTransferFunction *f )
TESTDLLSORT_API bool vtkColorTransferFunction_ShallowCopy_0(vtkColorTransferFunction * callingObject, vtkColorTransferFunction * f) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::ShallowCopy]:[";
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

// int GetSize()
// int GetSize()
TESTDLLSORT_API bool vtkColorTransferFunction_GetSize_0(int * return_value, vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetSize]:[";
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

// int AddRGBPoint(double x, double r, double g, double b)
// int AddRGBPoint( double x, double r, double g, double b )
TESTDLLSORT_API bool vtkColorTransferFunction_AddRGBPoint_0(int * return_value, vtkColorTransferFunction * callingObject, double x, double r, double g, double b) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::AddRGBPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->AddRGBPoint(x, r, g, b);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int AddRGBPoint(double x, double r, double g, double b, double midpoint, double sharpness)
// int AddRGBPoint( double x, double r, double g, double b, double midpoint, double sharpness )
TESTDLLSORT_API bool vtkColorTransferFunction_AddRGBPoint_1(int * return_value, vtkColorTransferFunction * callingObject, double x, double r, double g, double b, double midpoint, double sharpness) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::AddRGBPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->AddRGBPoint(x, r, g, b, midpoint, sharpness);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int AddHSVPoint(double x, double h, double s, double v)
// int AddHSVPoint( double x, double h, double s, double v )
TESTDLLSORT_API bool vtkColorTransferFunction_AddHSVPoint_0(int * return_value, vtkColorTransferFunction * callingObject, double x, double h, double s, double v) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::AddHSVPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->AddHSVPoint(x, h, s, v);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int AddHSVPoint(double x, double h, double s, double v, double midpoint, double sharpness)
// int AddHSVPoint( double x, double h, double s, double v, double midpoint, double sharpness )
TESTDLLSORT_API bool vtkColorTransferFunction_AddHSVPoint_1(int * return_value, vtkColorTransferFunction * callingObject, double x, double h, double s, double v, double midpoint, double sharpness) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::AddHSVPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->AddHSVPoint(x, h, s, v, midpoint, sharpness);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int RemovePoint(double x)
// int RemovePoint( double x )
TESTDLLSORT_API bool vtkColorTransferFunction_RemovePoint_0(int * return_value, vtkColorTransferFunction * callingObject, double x) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::RemovePoint]:[";
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

// void AddRGBSegment(double x1, double r1, double g1, double b1, double x2, double r2, double g2, double b2)
// void AddRGBSegment( double x1, double r1, double g1, double b1, double x2, double r2, double g2, double b2 )
TESTDLLSORT_API bool vtkColorTransferFunction_AddRGBSegment_0(vtkColorTransferFunction * callingObject, double x1, double r1, double g1, double b1, double x2, double r2, double g2, double b2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::AddRGBSegment]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AddRGBSegment(x1, r1, g1, b1, x2, r2, g2, b2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AddHSVSegment(double x1, double h1, double s1, double v1, double x2, double h2, double s2, double v2)
// void AddHSVSegment( double x1, double h1, double s1, double v1, double x2, double h2, double s2, double v2 )
TESTDLLSORT_API bool vtkColorTransferFunction_AddHSVSegment_0(vtkColorTransferFunction * callingObject, double x1, double h1, double s1, double v1, double x2, double h2, double s2, double v2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::AddHSVSegment]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AddHSVSegment(x1, h1, s1, v1, x2, h2, s2, v2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void RemoveAllPoints()
// void RemoveAllPoints()
TESTDLLSORT_API bool vtkColorTransferFunction_RemoveAllPoints_0(vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::RemoveAllPoints]:[";
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

// double* GetColor(double x)
// double *GetColor(double x)
TESTDLLSORT_API bool vtkColorTransferFunction_GetColor_0(double ** return_value, vtkColorTransferFunction * callingObject, double x) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetColor(x);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetColor(double x, double rgb[3])
// void GetColor(double x, double rgb[3])
TESTDLLSORT_API bool vtkColorTransferFunction_GetColor_1(vtkColorTransferFunction * callingObject, double x, double rgb[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetColor(x, rgb);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetRedValue(double x)
// double GetRedValue( double x )
TESTDLLSORT_API bool vtkColorTransferFunction_GetRedValue_0(double * return_value, vtkColorTransferFunction * callingObject, double x) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetRedValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetRedValue(x);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetGreenValue(double x)
// double GetGreenValue( double x )
TESTDLLSORT_API bool vtkColorTransferFunction_GetGreenValue_0(double * return_value, vtkColorTransferFunction * callingObject, double x) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetGreenValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetGreenValue(x);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetBlueValue(double x)
// double GetBlueValue( double x )
TESTDLLSORT_API bool vtkColorTransferFunction_GetBlueValue_0(double * return_value, vtkColorTransferFunction * callingObject, double x) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetBlueValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetBlueValue(x);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetNodeValue(int index, double val[6])
// int GetNodeValue( int index, double val[6] )
TESTDLLSORT_API bool vtkColorTransferFunction_GetNodeValue_0(int * return_value, vtkColorTransferFunction * callingObject, int index, double val[6]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetNodeValue]:[";
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

// int SetNodeValue(int index, double val[6])
// int SetNodeValue( int index, double val[6] )
TESTDLLSORT_API bool vtkColorTransferFunction_SetNodeValue_0(int * return_value, vtkColorTransferFunction * callingObject, int index, double val[6]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::SetNodeValue]:[";
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

// char* MapValue(double v)
// unsigned char *MapValue(double v)
TESTDLLSORT_API bool vtkColorTransferFunction_MapValue_0(unsigned char ** return_value, vtkColorTransferFunction * callingObject, double v) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::MapValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->MapValue(v);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* GetRange()
// double* GetRange()
TESTDLLSORT_API bool vtkColorTransferFunction_GetRange_0(double ** return_value, vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetRange]:[";
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

// virtual void GetRange(double & arg1, double & arg2)
// virtual void GetRange(double& arg1, double& arg2)
TESTDLLSORT_API bool vtkColorTransferFunction_GetRange_1(vtkColorTransferFunction * callingObject, double * arg1, double * arg2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetRange(*arg1, *arg2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetRange(double _arg[2])
// virtual void GetRange(double _arg[2])
TESTDLLSORT_API bool vtkColorTransferFunction_GetRange_2(vtkColorTransferFunction * callingObject, double _arg[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetRange]:[";
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
TESTDLLSORT_API bool vtkColorTransferFunction_AdjustRange_0(int * return_value, vtkColorTransferFunction * callingObject, double range[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::AdjustRange]:[";
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

// void GetTable(double x1, double x2, int n, double * table)
// void GetTable( double x1, double x2, int n, double* table )
TESTDLLSORT_API bool vtkColorTransferFunction_GetTable_0(vtkColorTransferFunction * callingObject, double x1, double x2, int n, double * table) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetTable]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetTable(x1, x2, n, table);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetTable(double x1, double x2, int n, float * table)
// void GetTable( double x1, double x2, int n, float* table )
TESTDLLSORT_API bool vtkColorTransferFunction_GetTable_1(vtkColorTransferFunction * callingObject, double x1, double x2, int n, float * table) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetTable]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetTable(x1, x2, n, table);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char* GetTable(double x1, double x2, int n)
// const unsigned char *GetTable( double x1, double x2, int n )
TESTDLLSORT_API bool vtkColorTransferFunction_GetTable_2(const unsigned char ** return_value, vtkColorTransferFunction * callingObject, double x1, double x2, int n) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetTable]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTable(x1, x2, n);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void BuildFunctionFromTable(double x1, double x2, int size, double * table)
// void BuildFunctionFromTable( double x1, double x2, int size, double *table )
TESTDLLSORT_API bool vtkColorTransferFunction_BuildFunctionFromTable_0(vtkColorTransferFunction * callingObject, double x1, double x2, int size, double * table) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::BuildFunctionFromTable]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->BuildFunctionFromTable(x1, x2, size, table);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetClamping(int _arg)
// virtual void SetClamping (int _arg)
TESTDLLSORT_API bool vtkColorTransferFunction_SetClamping_0(vtkColorTransferFunction * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::SetClamping]:[";
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

// virtual int GetClampingMinValue()
// virtual int GetClampingMinValue ()
TESTDLLSORT_API bool vtkColorTransferFunction_GetClampingMinValue_0(int * return_value, vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetClampingMinValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetClampingMinValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetClampingMaxValue()
// virtual int GetClampingMaxValue ()
TESTDLLSORT_API bool vtkColorTransferFunction_GetClampingMaxValue_0(int * return_value, vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetClampingMaxValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetClampingMaxValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetClamping()
// virtual int GetClamping ()
TESTDLLSORT_API bool vtkColorTransferFunction_GetClamping_0(int * return_value, vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetClamping]:[";
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
TESTDLLSORT_API bool vtkColorTransferFunction_ClampingOn_0(vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::ClampingOn]:[";
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
TESTDLLSORT_API bool vtkColorTransferFunction_ClampingOff_0(vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::ClampingOff]:[";
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

// virtual void SetColorSpace(int _arg)
// virtual void SetColorSpace (int _arg)
TESTDLLSORT_API bool vtkColorTransferFunction_SetColorSpace_0(vtkColorTransferFunction * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::SetColorSpace]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetColorSpace(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetColorSpaceMinValue()
// virtual int GetColorSpaceMinValue ()
TESTDLLSORT_API bool vtkColorTransferFunction_GetColorSpaceMinValue_0(int * return_value, vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetColorSpaceMinValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetColorSpaceMinValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetColorSpaceMaxValue()
// virtual int GetColorSpaceMaxValue ()
TESTDLLSORT_API bool vtkColorTransferFunction_GetColorSpaceMaxValue_0(int * return_value, vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetColorSpaceMaxValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetColorSpaceMaxValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetColorSpaceToRGB()
// void SetColorSpaceToRGB()
TESTDLLSORT_API bool vtkColorTransferFunction_SetColorSpaceToRGB_0(vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::SetColorSpaceToRGB]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetColorSpaceToRGB();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetColorSpaceToHSV()
// void SetColorSpaceToHSV()
TESTDLLSORT_API bool vtkColorTransferFunction_SetColorSpaceToHSV_0(vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::SetColorSpaceToHSV]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetColorSpaceToHSV();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetColorSpaceToLab()
// void SetColorSpaceToLab()
TESTDLLSORT_API bool vtkColorTransferFunction_SetColorSpaceToLab_0(vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::SetColorSpaceToLab]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetColorSpaceToLab();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetColorSpaceToLabCIEDE2000()
// void SetColorSpaceToLabCIEDE2000()
TESTDLLSORT_API bool vtkColorTransferFunction_SetColorSpaceToLabCIEDE2000_0(vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::SetColorSpaceToLabCIEDE2000]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetColorSpaceToLabCIEDE2000();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetColorSpaceToDiverging()
// void SetColorSpaceToDiverging()
TESTDLLSORT_API bool vtkColorTransferFunction_SetColorSpaceToDiverging_0(vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::SetColorSpaceToDiverging]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetColorSpaceToDiverging();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetColorSpace()
// virtual int GetColorSpace ()
TESTDLLSORT_API bool vtkColorTransferFunction_GetColorSpace_0(int * return_value, vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetColorSpace]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetColorSpace();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetHSVWrap(int _arg)
// virtual void SetHSVWrap (int _arg)
TESTDLLSORT_API bool vtkColorTransferFunction_SetHSVWrap_0(vtkColorTransferFunction * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::SetHSVWrap]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetHSVWrap(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetHSVWrap()
// virtual int GetHSVWrap ()
TESTDLLSORT_API bool vtkColorTransferFunction_GetHSVWrap_0(int * return_value, vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetHSVWrap]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetHSVWrap();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void HSVWrapOn()
// virtual void HSVWrapOn ()
TESTDLLSORT_API bool vtkColorTransferFunction_HSVWrapOn_0(vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::HSVWrapOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->HSVWrapOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void HSVWrapOff()
// virtual void HSVWrapOff ()
TESTDLLSORT_API bool vtkColorTransferFunction_HSVWrapOff_0(vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::HSVWrapOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->HSVWrapOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetScale(int _arg)
// virtual void SetScale (int _arg)
TESTDLLSORT_API bool vtkColorTransferFunction_SetScale_0(vtkColorTransferFunction * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::SetScale]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScale(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetScaleToLinear()
// void SetScaleToLinear()
TESTDLLSORT_API bool vtkColorTransferFunction_SetScaleToLinear_0(vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::SetScaleToLinear]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScaleToLinear();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetScaleToLog10()
// void SetScaleToLog10()
TESTDLLSORT_API bool vtkColorTransferFunction_SetScaleToLog10_0(vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::SetScaleToLog10]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScaleToLog10();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetScale()
// virtual int GetScale ()
TESTDLLSORT_API bool vtkColorTransferFunction_GetScale_0(int * return_value, vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetScale]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScale();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetNanColor(double _arg1, double _arg2, double _arg3)
// virtual void SetNanColor (double _arg1, double _arg2, double _arg3)
TESTDLLSORT_API bool vtkColorTransferFunction_SetNanColor_0(vtkColorTransferFunction * callingObject, double _arg1, double _arg2, double _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::SetNanColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetNanColor(_arg1, _arg2, _arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetNanColor(double _arg[3])
// virtual void SetNanColor (double _arg[3])
TESTDLLSORT_API bool vtkColorTransferFunction_SetNanColor_1(vtkColorTransferFunction * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::SetNanColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetNanColor(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetNanColor()
// virtual double *GetNanColor ()
TESTDLLSORT_API bool vtkColorTransferFunction_GetNanColor_0(double ** return_value, vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetNanColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNanColor();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetNanColor(double & _arg1, double & _arg2, double & _arg3)
// virtual void GetNanColor (double &_arg1, double &_arg2, double &_arg3)
TESTDLLSORT_API bool vtkColorTransferFunction_GetNanColor_1(vtkColorTransferFunction * callingObject, double * _arg1, double * _arg2, double * _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetNanColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetNanColor(*_arg1, *_arg2, *_arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetNanColor(double _arg[3])
// virtual void GetNanColor (double _arg[3])
TESTDLLSORT_API bool vtkColorTransferFunction_GetNanColor_2(vtkColorTransferFunction * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetNanColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetNanColor(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetBelowRangeColor(double _arg1, double _arg2, double _arg3)
// virtual void SetBelowRangeColor (double _arg1, double _arg2, double _arg3)
TESTDLLSORT_API bool vtkColorTransferFunction_SetBelowRangeColor_0(vtkColorTransferFunction * callingObject, double _arg1, double _arg2, double _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::SetBelowRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetBelowRangeColor(_arg1, _arg2, _arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetBelowRangeColor(double _arg[3])
// virtual void SetBelowRangeColor (double _arg[3])
TESTDLLSORT_API bool vtkColorTransferFunction_SetBelowRangeColor_1(vtkColorTransferFunction * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::SetBelowRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetBelowRangeColor(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetBelowRangeColor()
// virtual double *GetBelowRangeColor ()
TESTDLLSORT_API bool vtkColorTransferFunction_GetBelowRangeColor_0(double ** return_value, vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetBelowRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetBelowRangeColor();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetBelowRangeColor(double & _arg1, double & _arg2, double & _arg3)
// virtual void GetBelowRangeColor (double &_arg1, double &_arg2, double &_arg3)
TESTDLLSORT_API bool vtkColorTransferFunction_GetBelowRangeColor_1(vtkColorTransferFunction * callingObject, double * _arg1, double * _arg2, double * _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetBelowRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetBelowRangeColor(*_arg1, *_arg2, *_arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetBelowRangeColor(double _arg[3])
// virtual void GetBelowRangeColor (double _arg[3])
TESTDLLSORT_API bool vtkColorTransferFunction_GetBelowRangeColor_2(vtkColorTransferFunction * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetBelowRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetBelowRangeColor(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetUseBelowRangeColor(int _arg)
// virtual void SetUseBelowRangeColor (int _arg)
TESTDLLSORT_API bool vtkColorTransferFunction_SetUseBelowRangeColor_0(vtkColorTransferFunction * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::SetUseBelowRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetUseBelowRangeColor(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetUseBelowRangeColor()
// virtual int GetUseBelowRangeColor ()
TESTDLLSORT_API bool vtkColorTransferFunction_GetUseBelowRangeColor_0(int * return_value, vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetUseBelowRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUseBelowRangeColor();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseBelowRangeColorOn()
// virtual void UseBelowRangeColorOn ()
TESTDLLSORT_API bool vtkColorTransferFunction_UseBelowRangeColorOn_0(vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::UseBelowRangeColorOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseBelowRangeColorOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseBelowRangeColorOff()
// virtual void UseBelowRangeColorOff ()
TESTDLLSORT_API bool vtkColorTransferFunction_UseBelowRangeColorOff_0(vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::UseBelowRangeColorOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseBelowRangeColorOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetAboveRangeColor(double _arg1, double _arg2, double _arg3)
// virtual void SetAboveRangeColor (double _arg1, double _arg2, double _arg3)
TESTDLLSORT_API bool vtkColorTransferFunction_SetAboveRangeColor_0(vtkColorTransferFunction * callingObject, double _arg1, double _arg2, double _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::SetAboveRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAboveRangeColor(_arg1, _arg2, _arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetAboveRangeColor(double _arg[3])
// virtual void SetAboveRangeColor (double _arg[3])
TESTDLLSORT_API bool vtkColorTransferFunction_SetAboveRangeColor_1(vtkColorTransferFunction * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::SetAboveRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAboveRangeColor(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetAboveRangeColor()
// virtual double *GetAboveRangeColor ()
TESTDLLSORT_API bool vtkColorTransferFunction_GetAboveRangeColor_0(double ** return_value, vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetAboveRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAboveRangeColor();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetAboveRangeColor(double & _arg1, double & _arg2, double & _arg3)
// virtual void GetAboveRangeColor (double &_arg1, double &_arg2, double &_arg3)
TESTDLLSORT_API bool vtkColorTransferFunction_GetAboveRangeColor_1(vtkColorTransferFunction * callingObject, double * _arg1, double * _arg2, double * _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetAboveRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetAboveRangeColor(*_arg1, *_arg2, *_arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetAboveRangeColor(double _arg[3])
// virtual void GetAboveRangeColor (double _arg[3])
TESTDLLSORT_API bool vtkColorTransferFunction_GetAboveRangeColor_2(vtkColorTransferFunction * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetAboveRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetAboveRangeColor(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetUseAboveRangeColor(int _arg)
// virtual void SetUseAboveRangeColor (int _arg)
TESTDLLSORT_API bool vtkColorTransferFunction_SetUseAboveRangeColor_0(vtkColorTransferFunction * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::SetUseAboveRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetUseAboveRangeColor(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetUseAboveRangeColor()
// virtual int GetUseAboveRangeColor ()
TESTDLLSORT_API bool vtkColorTransferFunction_GetUseAboveRangeColor_0(int * return_value, vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetUseAboveRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUseAboveRangeColor();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseAboveRangeColorOn()
// virtual void UseAboveRangeColorOn ()
TESTDLLSORT_API bool vtkColorTransferFunction_UseAboveRangeColorOn_0(vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::UseAboveRangeColorOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseAboveRangeColorOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseAboveRangeColorOff()
// virtual void UseAboveRangeColorOff ()
TESTDLLSORT_API bool vtkColorTransferFunction_UseAboveRangeColorOff_0(vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::UseAboveRangeColorOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseAboveRangeColorOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* GetDataPointer()
// double* GetDataPointer()
TESTDLLSORT_API bool vtkColorTransferFunction_GetDataPointer_0(double ** return_value, vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetDataPointer]:[";
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

// void FillFromDataPointer(int n, double * ptr)
// void FillFromDataPointer(int n, double* ptr)
TESTDLLSORT_API bool vtkColorTransferFunction_FillFromDataPointer_0(vtkColorTransferFunction * callingObject, int n, double * ptr) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::FillFromDataPointer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->FillFromDataPointer(n, ptr);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void MapScalarsThroughTable2(void * input, unsigned char * output, int inputDataType, int numberOfValues, int inputIncrement, int outputIncrement)
// void MapScalarsThroughTable2(void *input, unsigned char *output, int inputDataType, int numberOfValues, int inputIncrement, int outputIncrement)
TESTDLLSORT_API bool vtkColorTransferFunction_MapScalarsThroughTable2_0(vtkColorTransferFunction * callingObject, void * input, unsigned char * output, int inputDataType, int numberOfValues, int inputIncrement, int outputIncrement) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::MapScalarsThroughTable2]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->MapScalarsThroughTable2(input, output, inputDataType, numberOfValues, inputIncrement, outputIncrement);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetAllowDuplicateScalars(int _arg)
// virtual void SetAllowDuplicateScalars (int _arg)
TESTDLLSORT_API bool vtkColorTransferFunction_SetAllowDuplicateScalars_0(vtkColorTransferFunction * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::SetAllowDuplicateScalars]:[";
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
TESTDLLSORT_API bool vtkColorTransferFunction_GetAllowDuplicateScalars_0(int * return_value, vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetAllowDuplicateScalars]:[";
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
TESTDLLSORT_API bool vtkColorTransferFunction_AllowDuplicateScalarsOn_0(vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::AllowDuplicateScalarsOn]:[";
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
TESTDLLSORT_API bool vtkColorTransferFunction_AllowDuplicateScalarsOff_0(vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::AllowDuplicateScalarsOff]:[";
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

// vtkIdType GetNumberOfAvailableColors()
// vtkIdType GetNumberOfAvailableColors()
TESTDLLSORT_API bool vtkColorTransferFunction_GetNumberOfAvailableColors_0(vtkIdType * return_value, vtkColorTransferFunction * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetNumberOfAvailableColors]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfAvailableColors();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetIndexedColor(vtkIdType idx, double rgba[4])
// void GetIndexedColor(vtkIdType idx, double rgba[4])
TESTDLLSORT_API bool vtkColorTransferFunction_GetIndexedColor_0(vtkColorTransferFunction * callingObject, vtkIdType idx, double rgba[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::GetIndexedColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetIndexedColor(idx, rgba);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int EstimateMinNumberOfSamples(double const& x1, double const& x2)
// int EstimateMinNumberOfSamples(double const & x1, double const & x2)
TESTDLLSORT_API bool vtkColorTransferFunction_EstimateMinNumberOfSamples_0(int * return_value, vtkColorTransferFunction * callingObject, double const* x1, double const* x2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkColorTransferFunction::EstimateMinNumberOfSamples]:[";
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
