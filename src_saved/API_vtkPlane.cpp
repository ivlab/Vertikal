
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkPlane.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkPlane* New()
// static vtkPlane *New()
TESTDLLSORT_API bool vtkPlane_New_0(vtkPlane ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPlane::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkPlane_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPlane::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkPlane_IsA_0(vtkTypeBool * return_value, vtkPlane * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::IsA]:[";
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

// static vtkPlane* SafeDownCast(vtkObjectBase * o)
// static vtkPlane* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkPlane_SafeDownCast_0(vtkPlane ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPlane::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkPlane* NewInstance()
// vtkPlane *NewInstance()
TESTDLLSORT_API bool vtkPlane_NewInstance_0(vtkPlane ** return_value, vtkPlane * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::NewInstance]:[";
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

// void EvaluateFunction(vtkDataArray * input, vtkDataArray * output)
// void EvaluateFunction(vtkDataArray* input, vtkDataArray* output)
TESTDLLSORT_API bool vtkPlane_EvaluateFunction_0(vtkPlane * callingObject, vtkDataArray * input, vtkDataArray * output) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::EvaluateFunction]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->EvaluateFunction(input, output);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double EvaluateFunction(double x[3])
// double EvaluateFunction(double x[3])
TESTDLLSORT_API bool vtkPlane_EvaluateFunction_1(double * return_value, vtkPlane * callingObject, double x[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::EvaluateFunction]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->EvaluateFunction(x);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void EvaluateGradient(double x[3], double g[3])
// void EvaluateGradient(double x[3], double g[3])
TESTDLLSORT_API bool vtkPlane_EvaluateGradient_0(vtkPlane * callingObject, double x[3], double g[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::EvaluateGradient]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->EvaluateGradient(x, g);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetNormal(double _arg1, double _arg2, double _arg3)
// virtual void SetNormal (double _arg1, double _arg2, double _arg3)
TESTDLLSORT_API bool vtkPlane_SetNormal_0(vtkPlane * callingObject, double _arg1, double _arg2, double _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::SetNormal]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetNormal(_arg1, _arg2, _arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetNormal(double _arg[3])
// virtual void SetNormal (double _arg[3])
TESTDLLSORT_API bool vtkPlane_SetNormal_1(vtkPlane * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::SetNormal]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetNormal(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetNormal()
// virtual double *GetNormal ()
TESTDLLSORT_API bool vtkPlane_GetNormal_0(double ** return_value, vtkPlane * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::GetNormal]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNormal();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetNormal(double data[3])
// virtual void GetNormal (double data[3])
TESTDLLSORT_API bool vtkPlane_GetNormal_1(vtkPlane * callingObject, double data[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::GetNormal]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetNormal(data);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetOrigin(double _arg1, double _arg2, double _arg3)
// virtual void SetOrigin (double _arg1, double _arg2, double _arg3)
TESTDLLSORT_API bool vtkPlane_SetOrigin_0(vtkPlane * callingObject, double _arg1, double _arg2, double _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::SetOrigin]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetOrigin(_arg1, _arg2, _arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetOrigin(double _arg[3])
// virtual void SetOrigin (double _arg[3])
TESTDLLSORT_API bool vtkPlane_SetOrigin_1(vtkPlane * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::SetOrigin]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetOrigin(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetOrigin()
// virtual double *GetOrigin ()
TESTDLLSORT_API bool vtkPlane_GetOrigin_0(double ** return_value, vtkPlane * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::GetOrigin]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetOrigin();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetOrigin(double data[3])
// virtual void GetOrigin (double data[3])
TESTDLLSORT_API bool vtkPlane_GetOrigin_1(vtkPlane * callingObject, double data[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::GetOrigin]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetOrigin(data);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Push(double distance)
// void Push(double distance)
TESTDLLSORT_API bool vtkPlane_Push_0(vtkPlane * callingObject, double distance) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::Push]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Push(distance);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void ProjectPoint(double x[3], double origin[3], double normal[3], double xproj[3])
// static void ProjectPoint(double x[3], double origin[3], double normal[3], double xproj[3])
TESTDLLSORT_API bool vtkPlane_ProjectPoint_0(double x[3], double origin[3], double normal[3], double xproj[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::ProjectPoint]:[";
#endif
	bool success = true;
	vtkPlane::ProjectPoint(x, origin, normal, xproj);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ProjectPoint(double x[3], double xproj[3])
// void ProjectPoint(double x[3], double xproj[3])
TESTDLLSORT_API bool vtkPlane_ProjectPoint_1(vtkPlane * callingObject, double x[3], double xproj[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::ProjectPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ProjectPoint(x, xproj);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void ProjectVector(double v[3], double origin[3], double normal[3], double vproj[3])
// static void ProjectVector(double v[3], double origin[3], double normal[3], double vproj[3])
TESTDLLSORT_API bool vtkPlane_ProjectVector_0(double v[3], double origin[3], double normal[3], double vproj[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::ProjectVector]:[";
#endif
	bool success = true;
	vtkPlane::ProjectVector(v, origin, normal, vproj);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ProjectVector(double v[3], double vproj[3])
// void ProjectVector(double v[3], double vproj[3])
TESTDLLSORT_API bool vtkPlane_ProjectVector_1(vtkPlane * callingObject, double v[3], double vproj[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::ProjectVector]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ProjectVector(v, vproj);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void GeneralizedProjectPoint(double x[3], double origin[3], double normal[3], double xproj[3])
// static void GeneralizedProjectPoint(double x[3], double origin[3], double normal[3], double xproj[3])
TESTDLLSORT_API bool vtkPlane_GeneralizedProjectPoint_0(double x[3], double origin[3], double normal[3], double xproj[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::GeneralizedProjectPoint]:[";
#endif
	bool success = true;
	vtkPlane::GeneralizedProjectPoint(x, origin, normal, xproj);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GeneralizedProjectPoint(double x[3], double xproj[3])
// void GeneralizedProjectPoint(double x[3], double xproj[3])
TESTDLLSORT_API bool vtkPlane_GeneralizedProjectPoint_1(vtkPlane * callingObject, double x[3], double xproj[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::GeneralizedProjectPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GeneralizedProjectPoint(x, xproj);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double Evaluate(double normal[3], double origin[3], double x[3])
// static double Evaluate(double normal[3], double origin[3], double x[3])
TESTDLLSORT_API bool vtkPlane_Evaluate_0(double * return_value, double normal[3], double origin[3], double x[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::Evaluate]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPlane::Evaluate(normal, origin, x);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double DistanceToPlane(double x[3], double n[3], double p0[3])
// static double DistanceToPlane(double x[3], double n[3], double p0[3])
TESTDLLSORT_API bool vtkPlane_DistanceToPlane_0(double * return_value, double x[3], double n[3], double p0[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::DistanceToPlane]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPlane::DistanceToPlane(x, n, p0);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double DistanceToPlane(double x[3])
// double DistanceToPlane(double x[3])
TESTDLLSORT_API bool vtkPlane_DistanceToPlane_1(double * return_value, vtkPlane * callingObject, double x[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::DistanceToPlane]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->DistanceToPlane(x);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static int IntersectWithLine(double p1[3], double p2[3], double n[3], double p0[3], double & t, double x[3])
// static int IntersectWithLine(double p1[3], double p2[3], double n[3], double p0[3], double& t, double x[3])
TESTDLLSORT_API bool vtkPlane_IntersectWithLine_0(int * return_value, double p1[3], double p2[3], double n[3], double p0[3], double * t, double x[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::IntersectWithLine]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPlane::IntersectWithLine(p1, p2, n, p0, *t, x);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int IntersectWithLine(double p1[3], double p2[3], double & t, double x[3])
// int IntersectWithLine(double p1[3], double p2[3], double& t, double x[3])
TESTDLLSORT_API bool vtkPlane_IntersectWithLine_1(int * return_value, vtkPlane * callingObject, double p1[3], double p2[3], double * t, double x[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPlane::IntersectWithLine]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->IntersectWithLine(p1, p2, *t, x);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
