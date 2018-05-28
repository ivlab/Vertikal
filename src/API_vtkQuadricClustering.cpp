
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkQuadricClustering.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkQuadricClustering_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkQuadricClustering::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkQuadricClustering_IsA_0(vtkTypeBool * return_value, vtkQuadricClustering * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::IsA]:[";
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

// static vtkQuadricClustering* SafeDownCast(vtkObjectBase * o)
// static vtkQuadricClustering* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkQuadricClustering_SafeDownCast_0(vtkQuadricClustering ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkQuadricClustering::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkQuadricClustering* NewInstance()
// vtkQuadricClustering *NewInstance()
TESTDLLSORT_API bool vtkQuadricClustering_NewInstance_0(vtkQuadricClustering ** return_value, vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::NewInstance]:[";
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

// static vtkQuadricClustering* New()
// static vtkQuadricClustering *New()
TESTDLLSORT_API bool vtkQuadricClustering_New_0(vtkQuadricClustering ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkQuadricClustering::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetNumberOfXDivisions(int num)
// void SetNumberOfXDivisions(int num)
TESTDLLSORT_API bool vtkQuadricClustering_SetNumberOfXDivisions_0(vtkQuadricClustering * callingObject, int num) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::SetNumberOfXDivisions]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetNumberOfXDivisions(num);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetNumberOfYDivisions(int num)
// void SetNumberOfYDivisions(int num)
TESTDLLSORT_API bool vtkQuadricClustering_SetNumberOfYDivisions_0(vtkQuadricClustering * callingObject, int num) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::SetNumberOfYDivisions]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetNumberOfYDivisions(num);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetNumberOfZDivisions(int num)
// void SetNumberOfZDivisions(int num)
TESTDLLSORT_API bool vtkQuadricClustering_SetNumberOfZDivisions_0(vtkQuadricClustering * callingObject, int num) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::SetNumberOfZDivisions]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetNumberOfZDivisions(num);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetNumberOfXDivisions()
// virtual int GetNumberOfXDivisions ()
TESTDLLSORT_API bool vtkQuadricClustering_GetNumberOfXDivisions_0(int * return_value, vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::GetNumberOfXDivisions]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfXDivisions();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetNumberOfYDivisions()
// virtual int GetNumberOfYDivisions ()
TESTDLLSORT_API bool vtkQuadricClustering_GetNumberOfYDivisions_0(int * return_value, vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::GetNumberOfYDivisions]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfYDivisions();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetNumberOfZDivisions()
// virtual int GetNumberOfZDivisions ()
TESTDLLSORT_API bool vtkQuadricClustering_GetNumberOfZDivisions_0(int * return_value, vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::GetNumberOfZDivisions]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfZDivisions();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetNumberOfDivisions(int div[3])
// void SetNumberOfDivisions(int div[3])
TESTDLLSORT_API bool vtkQuadricClustering_SetNumberOfDivisions_0(vtkQuadricClustering * callingObject, int div[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::SetNumberOfDivisions]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetNumberOfDivisions(div);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetNumberOfDivisions(int div0, int div1, int div2)
// void SetNumberOfDivisions(int div0, int div1, int div2)
TESTDLLSORT_API bool vtkQuadricClustering_SetNumberOfDivisions_1(vtkQuadricClustering * callingObject, int div0, int div1, int div2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::SetNumberOfDivisions]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetNumberOfDivisions(div0, div1, div2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int* GetNumberOfDivisions()
// int *GetNumberOfDivisions()
TESTDLLSORT_API bool vtkQuadricClustering_GetNumberOfDivisions_0(int ** return_value, vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::GetNumberOfDivisions]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfDivisions();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetNumberOfDivisions(int div[3])
// void GetNumberOfDivisions(int div[3])
TESTDLLSORT_API bool vtkQuadricClustering_GetNumberOfDivisions_1(vtkQuadricClustering * callingObject, int div[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::GetNumberOfDivisions]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetNumberOfDivisions(div);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetAutoAdjustNumberOfDivisions(int _arg)
// virtual void SetAutoAdjustNumberOfDivisions (int _arg)
TESTDLLSORT_API bool vtkQuadricClustering_SetAutoAdjustNumberOfDivisions_0(vtkQuadricClustering * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::SetAutoAdjustNumberOfDivisions]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAutoAdjustNumberOfDivisions(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetAutoAdjustNumberOfDivisions()
// virtual int GetAutoAdjustNumberOfDivisions ()
TESTDLLSORT_API bool vtkQuadricClustering_GetAutoAdjustNumberOfDivisions_0(int * return_value, vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::GetAutoAdjustNumberOfDivisions]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAutoAdjustNumberOfDivisions();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void AutoAdjustNumberOfDivisionsOn()
// virtual void AutoAdjustNumberOfDivisionsOn ()
TESTDLLSORT_API bool vtkQuadricClustering_AutoAdjustNumberOfDivisionsOn_0(vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::AutoAdjustNumberOfDivisionsOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AutoAdjustNumberOfDivisionsOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void AutoAdjustNumberOfDivisionsOff()
// virtual void AutoAdjustNumberOfDivisionsOff ()
TESTDLLSORT_API bool vtkQuadricClustering_AutoAdjustNumberOfDivisionsOff_0(vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::AutoAdjustNumberOfDivisionsOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AutoAdjustNumberOfDivisionsOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetDivisionOrigin(double x, double y, double z)
// void SetDivisionOrigin(double x, double y, double z)
TESTDLLSORT_API bool vtkQuadricClustering_SetDivisionOrigin_0(vtkQuadricClustering * callingObject, double x, double y, double z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::SetDivisionOrigin]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetDivisionOrigin(x, y, z);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetDivisionOrigin(double o[3])
// void SetDivisionOrigin(double o[3])
TESTDLLSORT_API bool vtkQuadricClustering_SetDivisionOrigin_1(vtkQuadricClustering * callingObject, double o[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::SetDivisionOrigin]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetDivisionOrigin(o);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetDivisionOrigin()
// virtual double *GetDivisionOrigin ()
TESTDLLSORT_API bool vtkQuadricClustering_GetDivisionOrigin_0(double ** return_value, vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::GetDivisionOrigin]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDivisionOrigin();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetDivisionOrigin(double & _arg1, double & _arg2, double & _arg3)
// virtual void GetDivisionOrigin (double &_arg1, double &_arg2, double &_arg3)
TESTDLLSORT_API bool vtkQuadricClustering_GetDivisionOrigin_1(vtkQuadricClustering * callingObject, double * _arg1, double * _arg2, double * _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::GetDivisionOrigin]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetDivisionOrigin(*_arg1, *_arg2, *_arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetDivisionOrigin(double _arg[3])
// virtual void GetDivisionOrigin (double _arg[3])
TESTDLLSORT_API bool vtkQuadricClustering_GetDivisionOrigin_2(vtkQuadricClustering * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::GetDivisionOrigin]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetDivisionOrigin(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetDivisionSpacing(double x, double y, double z)
// void SetDivisionSpacing(double x, double y, double z)
TESTDLLSORT_API bool vtkQuadricClustering_SetDivisionSpacing_0(vtkQuadricClustering * callingObject, double x, double y, double z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::SetDivisionSpacing]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetDivisionSpacing(x, y, z);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetDivisionSpacing(double s[3])
// void SetDivisionSpacing(double s[3])
TESTDLLSORT_API bool vtkQuadricClustering_SetDivisionSpacing_1(vtkQuadricClustering * callingObject, double s[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::SetDivisionSpacing]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetDivisionSpacing(s);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetDivisionSpacing()
// virtual double *GetDivisionSpacing ()
TESTDLLSORT_API bool vtkQuadricClustering_GetDivisionSpacing_0(double ** return_value, vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::GetDivisionSpacing]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDivisionSpacing();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetDivisionSpacing(double & _arg1, double & _arg2, double & _arg3)
// virtual void GetDivisionSpacing (double &_arg1, double &_arg2, double &_arg3)
TESTDLLSORT_API bool vtkQuadricClustering_GetDivisionSpacing_1(vtkQuadricClustering * callingObject, double * _arg1, double * _arg2, double * _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::GetDivisionSpacing]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetDivisionSpacing(*_arg1, *_arg2, *_arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetDivisionSpacing(double _arg[3])
// virtual void GetDivisionSpacing (double _arg[3])
TESTDLLSORT_API bool vtkQuadricClustering_GetDivisionSpacing_2(vtkQuadricClustering * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::GetDivisionSpacing]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetDivisionSpacing(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetUseInputPoints(int _arg)
// virtual void SetUseInputPoints (int _arg)
TESTDLLSORT_API bool vtkQuadricClustering_SetUseInputPoints_0(vtkQuadricClustering * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::SetUseInputPoints]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetUseInputPoints(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetUseInputPoints()
// virtual int GetUseInputPoints ()
TESTDLLSORT_API bool vtkQuadricClustering_GetUseInputPoints_0(int * return_value, vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::GetUseInputPoints]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUseInputPoints();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseInputPointsOn()
// virtual void UseInputPointsOn ()
TESTDLLSORT_API bool vtkQuadricClustering_UseInputPointsOn_0(vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::UseInputPointsOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseInputPointsOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseInputPointsOff()
// virtual void UseInputPointsOff ()
TESTDLLSORT_API bool vtkQuadricClustering_UseInputPointsOff_0(vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::UseInputPointsOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseInputPointsOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetUseFeatureEdges(int _arg)
// virtual void SetUseFeatureEdges (int _arg)
TESTDLLSORT_API bool vtkQuadricClustering_SetUseFeatureEdges_0(vtkQuadricClustering * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::SetUseFeatureEdges]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetUseFeatureEdges(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetUseFeatureEdges()
// virtual int GetUseFeatureEdges ()
TESTDLLSORT_API bool vtkQuadricClustering_GetUseFeatureEdges_0(int * return_value, vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::GetUseFeatureEdges]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUseFeatureEdges();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseFeatureEdgesOn()
// virtual void UseFeatureEdgesOn ()
TESTDLLSORT_API bool vtkQuadricClustering_UseFeatureEdgesOn_0(vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::UseFeatureEdgesOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseFeatureEdgesOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseFeatureEdgesOff()
// virtual void UseFeatureEdgesOff ()
TESTDLLSORT_API bool vtkQuadricClustering_UseFeatureEdgesOff_0(vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::UseFeatureEdgesOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseFeatureEdgesOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkFeatureEdges* GetFeatureEdges()
// vtkFeatureEdges *GetFeatureEdges()
TESTDLLSORT_API bool vtkQuadricClustering_GetFeatureEdges_0(vtkFeatureEdges ** return_value, vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::GetFeatureEdges]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetFeatureEdges();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetUseFeaturePoints(int _arg)
// virtual void SetUseFeaturePoints (int _arg)
TESTDLLSORT_API bool vtkQuadricClustering_SetUseFeaturePoints_0(vtkQuadricClustering * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::SetUseFeaturePoints]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetUseFeaturePoints(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetUseFeaturePoints()
// virtual int GetUseFeaturePoints ()
TESTDLLSORT_API bool vtkQuadricClustering_GetUseFeaturePoints_0(int * return_value, vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::GetUseFeaturePoints]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUseFeaturePoints();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseFeaturePointsOn()
// virtual void UseFeaturePointsOn ()
TESTDLLSORT_API bool vtkQuadricClustering_UseFeaturePointsOn_0(vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::UseFeaturePointsOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseFeaturePointsOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseFeaturePointsOff()
// virtual void UseFeaturePointsOff ()
TESTDLLSORT_API bool vtkQuadricClustering_UseFeaturePointsOff_0(vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::UseFeaturePointsOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseFeaturePointsOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetFeaturePointsAngle(double _arg)
// virtual void SetFeaturePointsAngle (double _arg)
TESTDLLSORT_API bool vtkQuadricClustering_SetFeaturePointsAngle_0(vtkQuadricClustering * callingObject, double _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::SetFeaturePointsAngle]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetFeaturePointsAngle(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetFeaturePointsAngleMinValue()
// virtual double GetFeaturePointsAngleMinValue ()
TESTDLLSORT_API bool vtkQuadricClustering_GetFeaturePointsAngleMinValue_0(double * return_value, vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::GetFeaturePointsAngleMinValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetFeaturePointsAngleMinValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetFeaturePointsAngleMaxValue()
// virtual double GetFeaturePointsAngleMaxValue ()
TESTDLLSORT_API bool vtkQuadricClustering_GetFeaturePointsAngleMaxValue_0(double * return_value, vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::GetFeaturePointsAngleMaxValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetFeaturePointsAngleMaxValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetFeaturePointsAngle()
// virtual double GetFeaturePointsAngle ()
TESTDLLSORT_API bool vtkQuadricClustering_GetFeaturePointsAngle_0(double * return_value, vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::GetFeaturePointsAngle]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetFeaturePointsAngle();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetUseInternalTriangles(int _arg)
// virtual void SetUseInternalTriangles (int _arg)
TESTDLLSORT_API bool vtkQuadricClustering_SetUseInternalTriangles_0(vtkQuadricClustering * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::SetUseInternalTriangles]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetUseInternalTriangles(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetUseInternalTriangles()
// virtual int GetUseInternalTriangles ()
TESTDLLSORT_API bool vtkQuadricClustering_GetUseInternalTriangles_0(int * return_value, vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::GetUseInternalTriangles]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUseInternalTriangles();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseInternalTrianglesOn()
// virtual void UseInternalTrianglesOn ()
TESTDLLSORT_API bool vtkQuadricClustering_UseInternalTrianglesOn_0(vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::UseInternalTrianglesOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseInternalTrianglesOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseInternalTrianglesOff()
// virtual void UseInternalTrianglesOff ()
TESTDLLSORT_API bool vtkQuadricClustering_UseInternalTrianglesOff_0(vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::UseInternalTrianglesOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseInternalTrianglesOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void StartAppend(double * bounds)
// void StartAppend(double *bounds)
TESTDLLSORT_API bool vtkQuadricClustering_StartAppend_0(vtkQuadricClustering * callingObject, double * bounds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::StartAppend]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->StartAppend(bounds);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void StartAppend(double x0, double x1, double y0, double y1, double z0, double z1)
// void StartAppend(double x0,double x1,double y0,double y1,double z0,double z1)
TESTDLLSORT_API bool vtkQuadricClustering_StartAppend_1(vtkQuadricClustering * callingObject, double x0, double x1, double y0, double y1, double z0, double z1) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::StartAppend]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->StartAppend(x0, x1, y0, y1, z0, z1);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Append(vtkPolyData * piece)
// void Append(vtkPolyData *piece)
TESTDLLSORT_API bool vtkQuadricClustering_Append_0(vtkQuadricClustering * callingObject, vtkPolyData * piece) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::Append]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Append(piece);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void EndAppend()
// void EndAppend()
TESTDLLSORT_API bool vtkQuadricClustering_EndAppend_0(vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::EndAppend]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->EndAppend();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetCopyCellData(int _arg)
// virtual void SetCopyCellData (int _arg)
TESTDLLSORT_API bool vtkQuadricClustering_SetCopyCellData_0(vtkQuadricClustering * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::SetCopyCellData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCopyCellData(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetCopyCellData()
// virtual int GetCopyCellData ()
TESTDLLSORT_API bool vtkQuadricClustering_GetCopyCellData_0(int * return_value, vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::GetCopyCellData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCopyCellData();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CopyCellDataOn()
// virtual void CopyCellDataOn ()
TESTDLLSORT_API bool vtkQuadricClustering_CopyCellDataOn_0(vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::CopyCellDataOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyCellDataOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CopyCellDataOff()
// virtual void CopyCellDataOff ()
TESTDLLSORT_API bool vtkQuadricClustering_CopyCellDataOff_0(vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::CopyCellDataOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyCellDataOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetPreventDuplicateCells(int _arg)
// virtual void SetPreventDuplicateCells (int _arg)
TESTDLLSORT_API bool vtkQuadricClustering_SetPreventDuplicateCells_0(vtkQuadricClustering * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::SetPreventDuplicateCells]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetPreventDuplicateCells(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetPreventDuplicateCells()
// virtual int GetPreventDuplicateCells ()
TESTDLLSORT_API bool vtkQuadricClustering_GetPreventDuplicateCells_0(int * return_value, vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::GetPreventDuplicateCells]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPreventDuplicateCells();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void PreventDuplicateCellsOn()
// virtual void PreventDuplicateCellsOn ()
TESTDLLSORT_API bool vtkQuadricClustering_PreventDuplicateCellsOn_0(vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::PreventDuplicateCellsOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->PreventDuplicateCellsOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void PreventDuplicateCellsOff()
// virtual void PreventDuplicateCellsOff ()
TESTDLLSORT_API bool vtkQuadricClustering_PreventDuplicateCellsOff_0(vtkQuadricClustering * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkQuadricClustering::PreventDuplicateCellsOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->PreventDuplicateCellsOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
