
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkCamera.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkCamera_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkCamera::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkCamera_IsA_0(vtkTypeBool * return_value, vtkCamera * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::IsA]:[";
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

// static vtkCamera* SafeDownCast(vtkObjectBase * o)
// static vtkCamera* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkCamera_SafeDownCast_0(vtkCamera ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkCamera::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkCamera* NewInstance()
// vtkCamera *NewInstance()
TESTDLLSORT_API bool vtkCamera_NewInstance_0(vtkCamera ** return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::NewInstance]:[";
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

// static vtkCamera* New()
// static vtkCamera *New()
TESTDLLSORT_API bool vtkCamera_New_0(vtkCamera ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkCamera::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetPosition(double x, double y, double z)
// void SetPosition(double x, double y, double z)
TESTDLLSORT_API bool vtkCamera_SetPosition_0(vtkCamera * callingObject, double x, double y, double z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetPosition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetPosition(x, y, z);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetPosition(const double a[3])
// void SetPosition(const double a[3])
TESTDLLSORT_API bool vtkCamera_SetPosition_1(vtkCamera * callingObject, const double a[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetPosition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetPosition(a);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetPosition()
// virtual double *GetPosition ()
TESTDLLSORT_API bool vtkCamera_GetPosition_0(double ** return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetPosition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPosition();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetPosition(double & _arg1, double & _arg2, double & _arg3)
// virtual void GetPosition (double &_arg1, double &_arg2, double &_arg3)
TESTDLLSORT_API bool vtkCamera_GetPosition_1(vtkCamera * callingObject, double * _arg1, double * _arg2, double * _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetPosition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetPosition(*_arg1, *_arg2, *_arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetPosition(double _arg[3])
// virtual void GetPosition (double _arg[3])
TESTDLLSORT_API bool vtkCamera_GetPosition_2(vtkCamera * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetPosition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetPosition(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetFocalPoint(double x, double y, double z)
// void SetFocalPoint(double x, double y, double z)
TESTDLLSORT_API bool vtkCamera_SetFocalPoint_0(vtkCamera * callingObject, double x, double y, double z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetFocalPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetFocalPoint(x, y, z);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetFocalPoint(const double a[3])
// void SetFocalPoint(const double a[3])
TESTDLLSORT_API bool vtkCamera_SetFocalPoint_1(vtkCamera * callingObject, const double a[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetFocalPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetFocalPoint(a);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetFocalPoint()
// virtual double *GetFocalPoint ()
TESTDLLSORT_API bool vtkCamera_GetFocalPoint_0(double ** return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetFocalPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetFocalPoint();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetFocalPoint(double & _arg1, double & _arg2, double & _arg3)
// virtual void GetFocalPoint (double &_arg1, double &_arg2, double &_arg3)
TESTDLLSORT_API bool vtkCamera_GetFocalPoint_1(vtkCamera * callingObject, double * _arg1, double * _arg2, double * _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetFocalPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetFocalPoint(*_arg1, *_arg2, *_arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetFocalPoint(double _arg[3])
// virtual void GetFocalPoint (double _arg[3])
TESTDLLSORT_API bool vtkCamera_GetFocalPoint_2(vtkCamera * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetFocalPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetFocalPoint(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetViewUp(double vx, double vy, double vz)
// void SetViewUp(double vx, double vy, double vz)
TESTDLLSORT_API bool vtkCamera_SetViewUp_0(vtkCamera * callingObject, double vx, double vy, double vz) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetViewUp]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetViewUp(vx, vy, vz);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetViewUp(const double a[3])
// void SetViewUp(const double a[3])
TESTDLLSORT_API bool vtkCamera_SetViewUp_1(vtkCamera * callingObject, const double a[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetViewUp]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetViewUp(a);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetViewUp()
// virtual double *GetViewUp ()
TESTDLLSORT_API bool vtkCamera_GetViewUp_0(double ** return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetViewUp]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetViewUp();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetViewUp(double & _arg1, double & _arg2, double & _arg3)
// virtual void GetViewUp (double &_arg1, double &_arg2, double &_arg3)
TESTDLLSORT_API bool vtkCamera_GetViewUp_1(vtkCamera * callingObject, double * _arg1, double * _arg2, double * _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetViewUp]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetViewUp(*_arg1, *_arg2, *_arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetViewUp(double _arg[3])
// virtual void GetViewUp (double _arg[3])
TESTDLLSORT_API bool vtkCamera_GetViewUp_2(vtkCamera * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetViewUp]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetViewUp(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void OrthogonalizeViewUp()
// void OrthogonalizeViewUp()
TESTDLLSORT_API bool vtkCamera_OrthogonalizeViewUp_0(vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::OrthogonalizeViewUp]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->OrthogonalizeViewUp();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetDistance(double ARG_0)
// void SetDistance(double)
TESTDLLSORT_API bool vtkCamera_SetDistance_0(vtkCamera * callingObject, double ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetDistance]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetDistance(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetDistance()
// virtual double GetDistance ()
TESTDLLSORT_API bool vtkCamera_GetDistance_0(double * return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetDistance]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDistance();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetDirectionOfProjection()
// virtual double *GetDirectionOfProjection ()
TESTDLLSORT_API bool vtkCamera_GetDirectionOfProjection_0(double ** return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetDirectionOfProjection]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDirectionOfProjection();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetDirectionOfProjection(double & _arg1, double & _arg2, double & _arg3)
// virtual void GetDirectionOfProjection (double &_arg1, double &_arg2, double &_arg3)
TESTDLLSORT_API bool vtkCamera_GetDirectionOfProjection_1(vtkCamera * callingObject, double * _arg1, double * _arg2, double * _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetDirectionOfProjection]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetDirectionOfProjection(*_arg1, *_arg2, *_arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetDirectionOfProjection(double _arg[3])
// virtual void GetDirectionOfProjection (double _arg[3])
TESTDLLSORT_API bool vtkCamera_GetDirectionOfProjection_2(vtkCamera * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetDirectionOfProjection]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetDirectionOfProjection(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Dolly(double value)
// void Dolly(double value)
TESTDLLSORT_API bool vtkCamera_Dolly_0(vtkCamera * callingObject, double value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::Dolly]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Dolly(value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetRoll(double angle)
// void SetRoll(double angle)
TESTDLLSORT_API bool vtkCamera_SetRoll_0(vtkCamera * callingObject, double angle) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetRoll]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetRoll(angle);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetRoll()
// double GetRoll()
TESTDLLSORT_API bool vtkCamera_GetRoll_0(double * return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetRoll]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetRoll();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Roll(double angle)
// void Roll(double angle)
TESTDLLSORT_API bool vtkCamera_Roll_0(vtkCamera * callingObject, double angle) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::Roll]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Roll(angle);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Azimuth(double angle)
// void Azimuth(double angle)
TESTDLLSORT_API bool vtkCamera_Azimuth_0(vtkCamera * callingObject, double angle) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::Azimuth]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Azimuth(angle);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Yaw(double angle)
// void Yaw(double angle)
TESTDLLSORT_API bool vtkCamera_Yaw_0(vtkCamera * callingObject, double angle) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::Yaw]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Yaw(angle);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Elevation(double angle)
// void Elevation(double angle)
TESTDLLSORT_API bool vtkCamera_Elevation_0(vtkCamera * callingObject, double angle) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::Elevation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Elevation(angle);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Pitch(double angle)
// void Pitch(double angle)
TESTDLLSORT_API bool vtkCamera_Pitch_0(vtkCamera * callingObject, double angle) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::Pitch]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Pitch(angle);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetParallelProjection(int flag)
// void SetParallelProjection(int flag)
TESTDLLSORT_API bool vtkCamera_SetParallelProjection_0(vtkCamera * callingObject, int flag) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetParallelProjection]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetParallelProjection(flag);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetParallelProjection()
// virtual int GetParallelProjection ()
TESTDLLSORT_API bool vtkCamera_GetParallelProjection_0(int * return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetParallelProjection]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetParallelProjection();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ParallelProjectionOn()
// virtual void ParallelProjectionOn ()
TESTDLLSORT_API bool vtkCamera_ParallelProjectionOn_0(vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::ParallelProjectionOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ParallelProjectionOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ParallelProjectionOff()
// virtual void ParallelProjectionOff ()
TESTDLLSORT_API bool vtkCamera_ParallelProjectionOff_0(vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::ParallelProjectionOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ParallelProjectionOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetUseHorizontalViewAngle(int flag)
// void SetUseHorizontalViewAngle(int flag)
TESTDLLSORT_API bool vtkCamera_SetUseHorizontalViewAngle_0(vtkCamera * callingObject, int flag) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetUseHorizontalViewAngle]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetUseHorizontalViewAngle(flag);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetUseHorizontalViewAngle()
// virtual int GetUseHorizontalViewAngle ()
TESTDLLSORT_API bool vtkCamera_GetUseHorizontalViewAngle_0(int * return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetUseHorizontalViewAngle]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUseHorizontalViewAngle();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseHorizontalViewAngleOn()
// virtual void UseHorizontalViewAngleOn ()
TESTDLLSORT_API bool vtkCamera_UseHorizontalViewAngleOn_0(vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::UseHorizontalViewAngleOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseHorizontalViewAngleOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseHorizontalViewAngleOff()
// virtual void UseHorizontalViewAngleOff ()
TESTDLLSORT_API bool vtkCamera_UseHorizontalViewAngleOff_0(vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::UseHorizontalViewAngleOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseHorizontalViewAngleOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetViewAngle(double angle)
// void SetViewAngle(double angle)
TESTDLLSORT_API bool vtkCamera_SetViewAngle_0(vtkCamera * callingObject, double angle) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetViewAngle]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetViewAngle(angle);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetViewAngle()
// virtual double GetViewAngle ()
TESTDLLSORT_API bool vtkCamera_GetViewAngle_0(double * return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetViewAngle]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetViewAngle();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetParallelScale(double scale)
// void SetParallelScale(double scale)
TESTDLLSORT_API bool vtkCamera_SetParallelScale_0(vtkCamera * callingObject, double scale) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetParallelScale]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetParallelScale(scale);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetParallelScale()
// virtual double GetParallelScale ()
TESTDLLSORT_API bool vtkCamera_GetParallelScale_0(double * return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetParallelScale]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetParallelScale();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Zoom(double factor)
// void Zoom(double factor)
TESTDLLSORT_API bool vtkCamera_Zoom_0(vtkCamera * callingObject, double factor) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::Zoom]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Zoom(factor);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetClippingRange(double dNear, double dFar)
// void SetClippingRange(double dNear, double dFar)
TESTDLLSORT_API bool vtkCamera_SetClippingRange_0(vtkCamera * callingObject, double dNear, double dFar) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetClippingRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetClippingRange(dNear, dFar);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetClippingRange(const double a[2])
// void SetClippingRange(const double a[2])
TESTDLLSORT_API bool vtkCamera_SetClippingRange_1(vtkCamera * callingObject, const double a[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetClippingRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetClippingRange(a);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetClippingRange()
// virtual double *GetClippingRange ()
TESTDLLSORT_API bool vtkCamera_GetClippingRange_0(double ** return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetClippingRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetClippingRange();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetClippingRange(double & _arg1, double & _arg2)
// virtual void GetClippingRange (double &_arg1, double &_arg2)
TESTDLLSORT_API bool vtkCamera_GetClippingRange_1(vtkCamera * callingObject, double * _arg1, double * _arg2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetClippingRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetClippingRange(*_arg1, *_arg2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetClippingRange(double _arg[2])
// virtual void GetClippingRange (double _arg[2])
TESTDLLSORT_API bool vtkCamera_GetClippingRange_2(vtkCamera * callingObject, double _arg[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetClippingRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetClippingRange(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetThickness(double ARG_0)
// void SetThickness(double)
TESTDLLSORT_API bool vtkCamera_SetThickness_0(vtkCamera * callingObject, double ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetThickness]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetThickness(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetThickness()
// virtual double GetThickness ()
TESTDLLSORT_API bool vtkCamera_GetThickness_0(double * return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetThickness]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetThickness();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetWindowCenter(double x, double y)
// void SetWindowCenter(double x, double y)
TESTDLLSORT_API bool vtkCamera_SetWindowCenter_0(vtkCamera * callingObject, double x, double y) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetWindowCenter]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetWindowCenter(x, y);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetWindowCenter()
// virtual double *GetWindowCenter ()
TESTDLLSORT_API bool vtkCamera_GetWindowCenter_0(double ** return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetWindowCenter]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetWindowCenter();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetWindowCenter(double & _arg1, double & _arg2)
// virtual void GetWindowCenter (double &_arg1, double &_arg2)
TESTDLLSORT_API bool vtkCamera_GetWindowCenter_1(vtkCamera * callingObject, double * _arg1, double * _arg2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetWindowCenter]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetWindowCenter(*_arg1, *_arg2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetWindowCenter(double _arg[2])
// virtual void GetWindowCenter (double _arg[2])
TESTDLLSORT_API bool vtkCamera_GetWindowCenter_2(vtkCamera * callingObject, double _arg[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetWindowCenter]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetWindowCenter(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetObliqueAngles(double alpha, double beta)
// void SetObliqueAngles(double alpha, double beta)
TESTDLLSORT_API bool vtkCamera_SetObliqueAngles_0(vtkCamera * callingObject, double alpha, double beta) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetObliqueAngles]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetObliqueAngles(alpha, beta);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ApplyTransform(vtkTransform * t)
// void ApplyTransform(vtkTransform *t)
TESTDLLSORT_API bool vtkCamera_ApplyTransform_0(vtkCamera * callingObject, vtkTransform * t) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::ApplyTransform]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ApplyTransform(t);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetViewPlaneNormal()
// virtual double *GetViewPlaneNormal ()
TESTDLLSORT_API bool vtkCamera_GetViewPlaneNormal_0(double ** return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetViewPlaneNormal]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetViewPlaneNormal();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetViewPlaneNormal(double & _arg1, double & _arg2, double & _arg3)
// virtual void GetViewPlaneNormal (double &_arg1, double &_arg2, double &_arg3)
TESTDLLSORT_API bool vtkCamera_GetViewPlaneNormal_1(vtkCamera * callingObject, double * _arg1, double * _arg2, double * _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetViewPlaneNormal]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetViewPlaneNormal(*_arg1, *_arg2, *_arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetViewPlaneNormal(double _arg[3])
// virtual void GetViewPlaneNormal (double _arg[3])
TESTDLLSORT_API bool vtkCamera_GetViewPlaneNormal_2(vtkCamera * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetViewPlaneNormal]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetViewPlaneNormal(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetViewShear(double dxdz, double dydz, double center)
// void SetViewShear(double dxdz, double dydz, double center)
TESTDLLSORT_API bool vtkCamera_SetViewShear_0(vtkCamera * callingObject, double dxdz, double dydz, double center) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetViewShear]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetViewShear(dxdz, dydz, center);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetViewShear(double d[3])
// void SetViewShear(double d[3])
TESTDLLSORT_API bool vtkCamera_SetViewShear_1(vtkCamera * callingObject, double d[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetViewShear]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetViewShear(d);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetViewShear()
// virtual double *GetViewShear ()
TESTDLLSORT_API bool vtkCamera_GetViewShear_0(double ** return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetViewShear]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetViewShear();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetViewShear(double & _arg1, double & _arg2, double & _arg3)
// virtual void GetViewShear (double &_arg1, double &_arg2, double &_arg3)
TESTDLLSORT_API bool vtkCamera_GetViewShear_1(vtkCamera * callingObject, double * _arg1, double * _arg2, double * _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetViewShear]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetViewShear(*_arg1, *_arg2, *_arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetViewShear(double _arg[3])
// virtual void GetViewShear (double _arg[3])
TESTDLLSORT_API bool vtkCamera_GetViewShear_2(vtkCamera * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetViewShear]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetViewShear(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetEyeAngle(double _arg)
// virtual void SetEyeAngle (double _arg)
TESTDLLSORT_API bool vtkCamera_SetEyeAngle_0(vtkCamera * callingObject, double _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetEyeAngle]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetEyeAngle(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetEyeAngle()
// virtual double GetEyeAngle ()
TESTDLLSORT_API bool vtkCamera_GetEyeAngle_0(double * return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetEyeAngle]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetEyeAngle();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetFocalDisk(double _arg)
// virtual void SetFocalDisk (double _arg)
TESTDLLSORT_API bool vtkCamera_SetFocalDisk_0(vtkCamera * callingObject, double _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetFocalDisk]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetFocalDisk(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetFocalDisk()
// virtual double GetFocalDisk ()
TESTDLLSORT_API bool vtkCamera_GetFocalDisk_0(double * return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetFocalDisk]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetFocalDisk();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetUseOffAxisProjection(int _arg)
// virtual void SetUseOffAxisProjection (int _arg)
TESTDLLSORT_API bool vtkCamera_SetUseOffAxisProjection_0(vtkCamera * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetUseOffAxisProjection]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetUseOffAxisProjection(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetUseOffAxisProjection()
// virtual int GetUseOffAxisProjection ()
TESTDLLSORT_API bool vtkCamera_GetUseOffAxisProjection_0(int * return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetUseOffAxisProjection]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUseOffAxisProjection();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseOffAxisProjectionOn()
// virtual void UseOffAxisProjectionOn ()
TESTDLLSORT_API bool vtkCamera_UseOffAxisProjectionOn_0(vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::UseOffAxisProjectionOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseOffAxisProjectionOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseOffAxisProjectionOff()
// virtual void UseOffAxisProjectionOff ()
TESTDLLSORT_API bool vtkCamera_UseOffAxisProjectionOff_0(vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::UseOffAxisProjectionOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseOffAxisProjectionOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetScreenBottomLeft(double _arg1, double _arg2, double _arg3)
// virtual void SetScreenBottomLeft (double _arg1, double _arg2, double _arg3)
TESTDLLSORT_API bool vtkCamera_SetScreenBottomLeft_0(vtkCamera * callingObject, double _arg1, double _arg2, double _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetScreenBottomLeft]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScreenBottomLeft(_arg1, _arg2, _arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetScreenBottomLeft(double _arg[3])
// virtual void SetScreenBottomLeft (double _arg[3])
TESTDLLSORT_API bool vtkCamera_SetScreenBottomLeft_1(vtkCamera * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetScreenBottomLeft]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScreenBottomLeft(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetScreenBottomLeft()
// virtual double *GetScreenBottomLeft ()
TESTDLLSORT_API bool vtkCamera_GetScreenBottomLeft_0(double ** return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetScreenBottomLeft]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScreenBottomLeft();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetScreenBottomLeft(double & _arg1, double & _arg2, double & _arg3)
// virtual void GetScreenBottomLeft (double &_arg1, double &_arg2, double &_arg3)
TESTDLLSORT_API bool vtkCamera_GetScreenBottomLeft_1(vtkCamera * callingObject, double * _arg1, double * _arg2, double * _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetScreenBottomLeft]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetScreenBottomLeft(*_arg1, *_arg2, *_arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetScreenBottomLeft(double _arg[3])
// virtual void GetScreenBottomLeft (double _arg[3])
TESTDLLSORT_API bool vtkCamera_GetScreenBottomLeft_2(vtkCamera * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetScreenBottomLeft]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetScreenBottomLeft(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetScreenBottomRight(double _arg1, double _arg2, double _arg3)
// virtual void SetScreenBottomRight (double _arg1, double _arg2, double _arg3)
TESTDLLSORT_API bool vtkCamera_SetScreenBottomRight_0(vtkCamera * callingObject, double _arg1, double _arg2, double _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetScreenBottomRight]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScreenBottomRight(_arg1, _arg2, _arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetScreenBottomRight(double _arg[3])
// virtual void SetScreenBottomRight (double _arg[3])
TESTDLLSORT_API bool vtkCamera_SetScreenBottomRight_1(vtkCamera * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetScreenBottomRight]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScreenBottomRight(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetScreenBottomRight()
// virtual double *GetScreenBottomRight ()
TESTDLLSORT_API bool vtkCamera_GetScreenBottomRight_0(double ** return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetScreenBottomRight]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScreenBottomRight();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetScreenBottomRight(double & _arg1, double & _arg2, double & _arg3)
// virtual void GetScreenBottomRight (double &_arg1, double &_arg2, double &_arg3)
TESTDLLSORT_API bool vtkCamera_GetScreenBottomRight_1(vtkCamera * callingObject, double * _arg1, double * _arg2, double * _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetScreenBottomRight]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetScreenBottomRight(*_arg1, *_arg2, *_arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetScreenBottomRight(double _arg[3])
// virtual void GetScreenBottomRight (double _arg[3])
TESTDLLSORT_API bool vtkCamera_GetScreenBottomRight_2(vtkCamera * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetScreenBottomRight]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetScreenBottomRight(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetScreenTopRight(double _arg1, double _arg2, double _arg3)
// virtual void SetScreenTopRight (double _arg1, double _arg2, double _arg3)
TESTDLLSORT_API bool vtkCamera_SetScreenTopRight_0(vtkCamera * callingObject, double _arg1, double _arg2, double _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetScreenTopRight]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScreenTopRight(_arg1, _arg2, _arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetScreenTopRight(double _arg[3])
// virtual void SetScreenTopRight (double _arg[3])
TESTDLLSORT_API bool vtkCamera_SetScreenTopRight_1(vtkCamera * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetScreenTopRight]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScreenTopRight(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetScreenTopRight()
// virtual double *GetScreenTopRight ()
TESTDLLSORT_API bool vtkCamera_GetScreenTopRight_0(double ** return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetScreenTopRight]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScreenTopRight();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetScreenTopRight(double & _arg1, double & _arg2, double & _arg3)
// virtual void GetScreenTopRight (double &_arg1, double &_arg2, double &_arg3)
TESTDLLSORT_API bool vtkCamera_GetScreenTopRight_1(vtkCamera * callingObject, double * _arg1, double * _arg2, double * _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetScreenTopRight]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetScreenTopRight(*_arg1, *_arg2, *_arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetScreenTopRight(double _arg[3])
// virtual void GetScreenTopRight (double _arg[3])
TESTDLLSORT_API bool vtkCamera_GetScreenTopRight_2(vtkCamera * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetScreenTopRight]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetScreenTopRight(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetEyeSeparation(double _arg)
// virtual void SetEyeSeparation (double _arg)
TESTDLLSORT_API bool vtkCamera_SetEyeSeparation_0(vtkCamera * callingObject, double _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetEyeSeparation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetEyeSeparation(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetEyeSeparation()
// virtual double GetEyeSeparation ()
TESTDLLSORT_API bool vtkCamera_GetEyeSeparation_0(double * return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetEyeSeparation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetEyeSeparation();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetEyePosition(double eyePosition[3])
// void SetEyePosition(double eyePosition[3])
TESTDLLSORT_API bool vtkCamera_SetEyePosition_0(vtkCamera * callingObject, double eyePosition[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetEyePosition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetEyePosition(eyePosition);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetEyePosition(double eyePosition[3])
// void GetEyePosition(double eyePosition[3])
TESTDLLSORT_API bool vtkCamera_GetEyePosition_0(vtkCamera * callingObject, double eyePosition[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetEyePosition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetEyePosition(eyePosition);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetEyePlaneNormal(double normal[3])
// void GetEyePlaneNormal(double normal[3])
TESTDLLSORT_API bool vtkCamera_GetEyePlaneNormal_0(vtkCamera * callingObject, double normal[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetEyePlaneNormal]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetEyePlaneNormal(normal);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetEyeTransformMatrix(vtkMatrix4x4 * matrix)
// void SetEyeTransformMatrix(vtkMatrix4x4* matrix)
TESTDLLSORT_API bool vtkCamera_SetEyeTransformMatrix_0(vtkCamera * callingObject, vtkMatrix4x4 * matrix) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetEyeTransformMatrix]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetEyeTransformMatrix(matrix);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkMatrix4x4* GetEyeTransformMatrix()
// virtual vtkMatrix4x4 *GetEyeTransformMatrix ()
TESTDLLSORT_API bool vtkCamera_GetEyeTransformMatrix_0(vtkMatrix4x4 ** return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetEyeTransformMatrix]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetEyeTransformMatrix();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetEyeTransformMatrix(const double elements[16])
// void SetEyeTransformMatrix(const double elements[16])
TESTDLLSORT_API bool vtkCamera_SetEyeTransformMatrix_1(vtkCamera * callingObject, const double elements[16]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetEyeTransformMatrix]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetEyeTransformMatrix(elements);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetModelTransformMatrix(vtkMatrix4x4 * matrix)
// void SetModelTransformMatrix(vtkMatrix4x4 *matrix)
TESTDLLSORT_API bool vtkCamera_SetModelTransformMatrix_0(vtkCamera * callingObject, vtkMatrix4x4 * matrix) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetModelTransformMatrix]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetModelTransformMatrix(matrix);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkMatrix4x4* GetModelTransformMatrix()
// virtual vtkMatrix4x4 *GetModelTransformMatrix ()
TESTDLLSORT_API bool vtkCamera_GetModelTransformMatrix_0(vtkMatrix4x4 ** return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetModelTransformMatrix]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetModelTransformMatrix();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetModelTransformMatrix(const double elements[16])
// void SetModelTransformMatrix(const double elements[16])
TESTDLLSORT_API bool vtkCamera_SetModelTransformMatrix_1(vtkCamera * callingObject, const double elements[16]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetModelTransformMatrix]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetModelTransformMatrix(elements);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkMatrix4x4* GetModelViewTransformMatrix()
// virtual vtkMatrix4x4 *GetModelViewTransformMatrix()
TESTDLLSORT_API bool vtkCamera_GetModelViewTransformMatrix_0(vtkMatrix4x4 ** return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetModelViewTransformMatrix]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetModelViewTransformMatrix();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkTransform* GetModelViewTransformObject()
// virtual vtkTransform *GetModelViewTransformObject()
TESTDLLSORT_API bool vtkCamera_GetModelViewTransformObject_0(vtkTransform ** return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetModelViewTransformObject]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetModelViewTransformObject();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkMatrix4x4* GetViewTransformMatrix()
// virtual vtkMatrix4x4 *GetViewTransformMatrix()
TESTDLLSORT_API bool vtkCamera_GetViewTransformMatrix_0(vtkMatrix4x4 ** return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetViewTransformMatrix]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetViewTransformMatrix();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkTransform* GetViewTransformObject()
// virtual vtkTransform *GetViewTransformObject()
TESTDLLSORT_API bool vtkCamera_GetViewTransformObject_0(vtkTransform ** return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetViewTransformObject]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetViewTransformObject();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetExplicitProjectionTransformMatrix(vtkMatrix4x4 * ARG_0)
// virtual void SetExplicitProjectionTransformMatrix(vtkMatrix4x4*)
TESTDLLSORT_API bool vtkCamera_SetExplicitProjectionTransformMatrix_0(vtkCamera * callingObject, vtkMatrix4x4 * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetExplicitProjectionTransformMatrix]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetExplicitProjectionTransformMatrix(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkMatrix4x4* GetExplicitProjectionTransformMatrix()
// virtual vtkMatrix4x4 *GetExplicitProjectionTransformMatrix ()
TESTDLLSORT_API bool vtkCamera_GetExplicitProjectionTransformMatrix_0(vtkMatrix4x4 ** return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetExplicitProjectionTransformMatrix]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetExplicitProjectionTransformMatrix();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetUseExplicitProjectionTransformMatrix(bool _arg)
// virtual void SetUseExplicitProjectionTransformMatrix (bool _arg)
TESTDLLSORT_API bool vtkCamera_SetUseExplicitProjectionTransformMatrix_0(vtkCamera * callingObject, bool _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetUseExplicitProjectionTransformMatrix]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetUseExplicitProjectionTransformMatrix(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual bool GetUseExplicitProjectionTransformMatrix()
// virtual bool GetUseExplicitProjectionTransformMatrix ()
TESTDLLSORT_API bool vtkCamera_GetUseExplicitProjectionTransformMatrix_0(bool * return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetUseExplicitProjectionTransformMatrix]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUseExplicitProjectionTransformMatrix();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseExplicitProjectionTransformMatrixOn()
// virtual void UseExplicitProjectionTransformMatrixOn ()
TESTDLLSORT_API bool vtkCamera_UseExplicitProjectionTransformMatrixOn_0(vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::UseExplicitProjectionTransformMatrixOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseExplicitProjectionTransformMatrixOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseExplicitProjectionTransformMatrixOff()
// virtual void UseExplicitProjectionTransformMatrixOff ()
TESTDLLSORT_API bool vtkCamera_UseExplicitProjectionTransformMatrixOff_0(vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::UseExplicitProjectionTransformMatrixOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseExplicitProjectionTransformMatrixOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkMatrix4x4* GetProjectionTransformMatrix(double aspect, double nearz, double farz)
// virtual vtkMatrix4x4 *GetProjectionTransformMatrix(double aspect, double nearz, double farz)
TESTDLLSORT_API bool vtkCamera_GetProjectionTransformMatrix_0(vtkMatrix4x4 ** return_value, vtkCamera * callingObject, double aspect, double nearz, double farz) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetProjectionTransformMatrix]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetProjectionTransformMatrix(aspect, nearz, farz);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkPerspectiveTransform* GetProjectionTransformObject(double aspect, double nearz, double farz)
// virtual vtkPerspectiveTransform *GetProjectionTransformObject(double aspect, double nearz, double farz)
TESTDLLSORT_API bool vtkCamera_GetProjectionTransformObject_0(vtkPerspectiveTransform ** return_value, vtkCamera * callingObject, double aspect, double nearz, double farz) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetProjectionTransformObject]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetProjectionTransformObject(aspect, nearz, farz);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkMatrix4x4* GetCompositeProjectionTransformMatrix(double aspect, double nearz, double farz)
// virtual vtkMatrix4x4 *GetCompositeProjectionTransformMatrix(double aspect, double nearz, double farz)
TESTDLLSORT_API bool vtkCamera_GetCompositeProjectionTransformMatrix_0(vtkMatrix4x4 ** return_value, vtkCamera * callingObject, double aspect, double nearz, double farz) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetCompositeProjectionTransformMatrix]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCompositeProjectionTransformMatrix(aspect, nearz, farz);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkMatrix4x4* GetProjectionTransformMatrix(vtkRenderer * ren)
// virtual vtkMatrix4x4 *GetProjectionTransformMatrix(vtkRenderer *ren)
TESTDLLSORT_API bool vtkCamera_GetProjectionTransformMatrix_1(vtkMatrix4x4 ** return_value, vtkCamera * callingObject, vtkRenderer * ren) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetProjectionTransformMatrix]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetProjectionTransformMatrix(ren);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetUserViewTransform(vtkHomogeneousTransform * transform)
// void SetUserViewTransform(vtkHomogeneousTransform *transform)
TESTDLLSORT_API bool vtkCamera_SetUserViewTransform_0(vtkCamera * callingObject, vtkHomogeneousTransform * transform) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetUserViewTransform]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetUserViewTransform(transform);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkHomogeneousTransform* GetUserViewTransform()
// virtual vtkHomogeneousTransform *GetUserViewTransform ()
TESTDLLSORT_API bool vtkCamera_GetUserViewTransform_0(vtkHomogeneousTransform ** return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetUserViewTransform]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUserViewTransform();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetUserTransform(vtkHomogeneousTransform * transform)
// void SetUserTransform(vtkHomogeneousTransform *transform)
TESTDLLSORT_API bool vtkCamera_SetUserTransform_0(vtkCamera * callingObject, vtkHomogeneousTransform * transform) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetUserTransform]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetUserTransform(transform);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkHomogeneousTransform* GetUserTransform()
// virtual vtkHomogeneousTransform *GetUserTransform ()
TESTDLLSORT_API bool vtkCamera_GetUserTransform_0(vtkHomogeneousTransform ** return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetUserTransform]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUserTransform();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void Render(vtkRenderer * ARG_0)
// virtual void Render(vtkRenderer *)
TESTDLLSORT_API bool vtkCamera_Render_0(vtkCamera * callingObject, vtkRenderer * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::Render]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Render(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkMTimeType GetViewingRaysMTime()
// vtkMTimeType GetViewingRaysMTime()
TESTDLLSORT_API bool vtkCamera_GetViewingRaysMTime_0(vtkMTimeType * return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetViewingRaysMTime]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetViewingRaysMTime();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ViewingRaysModified()
// void ViewingRaysModified()
TESTDLLSORT_API bool vtkCamera_ViewingRaysModified_0(vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::ViewingRaysModified]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ViewingRaysModified();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetFrustumPlanes(double aspect, double planes[24])
// virtual void GetFrustumPlanes(double aspect, double planes[24])
TESTDLLSORT_API bool vtkCamera_GetFrustumPlanes_0(vtkCamera * callingObject, double aspect, double planes[24]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetFrustumPlanes]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetFrustumPlanes(aspect, planes);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* GetOrientation()
// double *GetOrientation()
TESTDLLSORT_API bool vtkCamera_GetOrientation_0(double ** return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetOrientation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetOrientation();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* GetOrientationWXYZ()
// double *GetOrientationWXYZ()
TESTDLLSORT_API bool vtkCamera_GetOrientationWXYZ_0(double ** return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetOrientationWXYZ]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetOrientationWXYZ();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ComputeViewPlaneNormal()
// void ComputeViewPlaneNormal()
TESTDLLSORT_API bool vtkCamera_ComputeViewPlaneNormal_0(vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::ComputeViewPlaneNormal]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ComputeViewPlaneNormal();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkMatrix4x4* GetCameraLightTransformMatrix()
// vtkMatrix4x4 *GetCameraLightTransformMatrix()
TESTDLLSORT_API bool vtkCamera_GetCameraLightTransformMatrix_0(vtkMatrix4x4 ** return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetCameraLightTransformMatrix]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCameraLightTransformMatrix();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UpdateViewport(vtkRenderer * ARG_0)
// virtual void UpdateViewport(vtkRenderer *)
TESTDLLSORT_API bool vtkCamera_UpdateViewport_0(vtkCamera * callingObject, vtkRenderer * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::UpdateViewport]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UpdateViewport(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetLeftEye(int _arg)
// virtual void SetLeftEye (int _arg)
TESTDLLSORT_API bool vtkCamera_SetLeftEye_0(vtkCamera * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetLeftEye]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetLeftEye(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetLeftEye()
// virtual int GetLeftEye ()
TESTDLLSORT_API bool vtkCamera_GetLeftEye_0(int * return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetLeftEye]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetLeftEye();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ShallowCopy(vtkCamera * source)
// void ShallowCopy(vtkCamera *source)
TESTDLLSORT_API bool vtkCamera_ShallowCopy_0(vtkCamera * callingObject, vtkCamera * source) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::ShallowCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ShallowCopy(source);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void DeepCopy(vtkCamera * source)
// void DeepCopy(vtkCamera *source)
TESTDLLSORT_API bool vtkCamera_DeepCopy_0(vtkCamera * callingObject, vtkCamera * source) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::DeepCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DeepCopy(source);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetFreezeFocalPoint(bool _arg)
// virtual void SetFreezeFocalPoint (bool _arg)
TESTDLLSORT_API bool vtkCamera_SetFreezeFocalPoint_0(vtkCamera * callingObject, bool _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetFreezeFocalPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetFreezeFocalPoint(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual bool GetFreezeFocalPoint()
// virtual bool GetFreezeFocalPoint ()
TESTDLLSORT_API bool vtkCamera_GetFreezeFocalPoint_0(bool * return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetFreezeFocalPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetFreezeFocalPoint();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetUseScissor(bool _arg)
// virtual void SetUseScissor (bool _arg)
TESTDLLSORT_API bool vtkCamera_SetUseScissor_0(vtkCamera * callingObject, bool _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::SetUseScissor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetUseScissor(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual bool GetUseScissor()
// virtual bool GetUseScissor ()
TESTDLLSORT_API bool vtkCamera_GetUseScissor_0(bool * return_value, vtkCamera * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCamera::GetUseScissor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUseScissor();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
