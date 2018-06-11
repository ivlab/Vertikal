
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkViewport.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkViewport_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkViewport::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkViewport_IsA_0(vtkTypeBool * return_value, vtkViewport * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::IsA]:[";
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

// static vtkViewport* SafeDownCast(vtkObjectBase * o)
// static vtkViewport* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkViewport_SafeDownCast_0(vtkViewport ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkViewport::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkViewport* NewInstance()
// vtkViewport *NewInstance()
TESTDLLSORT_API bool vtkViewport_NewInstance_0(vtkViewport ** return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::NewInstance]:[";
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

// void AddViewProp(vtkProp * ARG_0)
// void AddViewProp(vtkProp *)
TESTDLLSORT_API bool vtkViewport_AddViewProp_0(vtkViewport * callingObject, vtkProp * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::AddViewProp]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AddViewProp(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkPropCollection* GetViewProps()
// vtkPropCollection *GetViewProps()
TESTDLLSORT_API bool vtkViewport_GetViewProps_0(vtkPropCollection ** return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetViewProps]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetViewProps();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int HasViewProp(vtkProp * ARG_0)
// int HasViewProp(vtkProp *)
TESTDLLSORT_API bool vtkViewport_HasViewProp_0(int * return_value, vtkViewport * callingObject, vtkProp * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::HasViewProp]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->HasViewProp(ARG_0);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void RemoveViewProp(vtkProp * ARG_0)
// void RemoveViewProp(vtkProp *)
TESTDLLSORT_API bool vtkViewport_RemoveViewProp_0(vtkViewport * callingObject, vtkProp * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::RemoveViewProp]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveViewProp(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void RemoveAllViewProps()
// void RemoveAllViewProps(void)
TESTDLLSORT_API bool vtkViewport_RemoveAllViewProps_0(vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::RemoveAllViewProps]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveAllViewProps();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AddActor2D(vtkProp * p)
// void AddActor2D(vtkProp* p)
TESTDLLSORT_API bool vtkViewport_AddActor2D_0(vtkViewport * callingObject, vtkProp * p) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::AddActor2D]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AddActor2D(p);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void RemoveActor2D(vtkProp * p)
// void RemoveActor2D(vtkProp* p)
TESTDLLSORT_API bool vtkViewport_RemoveActor2D_0(vtkViewport * callingObject, vtkProp * p) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::RemoveActor2D]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveActor2D(p);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkActor2DCollection* GetActors2D()
// vtkActor2DCollection *GetActors2D()
TESTDLLSORT_API bool vtkViewport_GetActors2D_0(vtkActor2DCollection ** return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetActors2D]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetActors2D();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetBackground(double _arg1, double _arg2, double _arg3)
// virtual void SetBackground (double _arg1, double _arg2, double _arg3)
TESTDLLSORT_API bool vtkViewport_SetBackground_0(vtkViewport * callingObject, double _arg1, double _arg2, double _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::SetBackground]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetBackground(_arg1, _arg2, _arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetBackground(double _arg[3])
// virtual void SetBackground (double _arg[3])
TESTDLLSORT_API bool vtkViewport_SetBackground_1(vtkViewport * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::SetBackground]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetBackground(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetBackground()
// virtual double *GetBackground ()
TESTDLLSORT_API bool vtkViewport_GetBackground_0(double ** return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetBackground]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetBackground();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetBackground(double & _arg1, double & _arg2, double & _arg3)
// virtual void GetBackground (double &_arg1, double &_arg2, double &_arg3)
TESTDLLSORT_API bool vtkViewport_GetBackground_1(vtkViewport * callingObject, double * _arg1, double * _arg2, double * _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetBackground]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetBackground(*_arg1, *_arg2, *_arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetBackground(double _arg[3])
// virtual void GetBackground (double _arg[3])
TESTDLLSORT_API bool vtkViewport_GetBackground_2(vtkViewport * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetBackground]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetBackground(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetBackground2(double _arg1, double _arg2, double _arg3)
// virtual void SetBackground2 (double _arg1, double _arg2, double _arg3)
TESTDLLSORT_API bool vtkViewport_SetBackground2_0(vtkViewport * callingObject, double _arg1, double _arg2, double _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::SetBackground2]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetBackground2(_arg1, _arg2, _arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetBackground2(double _arg[3])
// virtual void SetBackground2 (double _arg[3])
TESTDLLSORT_API bool vtkViewport_SetBackground2_1(vtkViewport * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::SetBackground2]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetBackground2(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetBackground2()
// virtual double *GetBackground2 ()
TESTDLLSORT_API bool vtkViewport_GetBackground2_0(double ** return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetBackground2]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetBackground2();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetBackground2(double & _arg1, double & _arg2, double & _arg3)
// virtual void GetBackground2 (double &_arg1, double &_arg2, double &_arg3)
TESTDLLSORT_API bool vtkViewport_GetBackground2_1(vtkViewport * callingObject, double * _arg1, double * _arg2, double * _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetBackground2]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetBackground2(*_arg1, *_arg2, *_arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetBackground2(double _arg[3])
// virtual void GetBackground2 (double _arg[3])
TESTDLLSORT_API bool vtkViewport_GetBackground2_2(vtkViewport * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetBackground2]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetBackground2(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetBackgroundAlpha(double _arg)
// virtual void SetBackgroundAlpha (double _arg)
TESTDLLSORT_API bool vtkViewport_SetBackgroundAlpha_0(vtkViewport * callingObject, double _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::SetBackgroundAlpha]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetBackgroundAlpha(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetBackgroundAlphaMinValue()
// virtual double GetBackgroundAlphaMinValue ()
TESTDLLSORT_API bool vtkViewport_GetBackgroundAlphaMinValue_0(double * return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetBackgroundAlphaMinValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetBackgroundAlphaMinValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetBackgroundAlphaMaxValue()
// virtual double GetBackgroundAlphaMaxValue ()
TESTDLLSORT_API bool vtkViewport_GetBackgroundAlphaMaxValue_0(double * return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetBackgroundAlphaMaxValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetBackgroundAlphaMaxValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetBackgroundAlpha()
// virtual double GetBackgroundAlpha ()
TESTDLLSORT_API bool vtkViewport_GetBackgroundAlpha_0(double * return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetBackgroundAlpha]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetBackgroundAlpha();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetGradientBackground(bool _arg)
// virtual void SetGradientBackground (bool _arg)
TESTDLLSORT_API bool vtkViewport_SetGradientBackground_0(vtkViewport * callingObject, bool _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::SetGradientBackground]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetGradientBackground(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual bool GetGradientBackground()
// virtual bool GetGradientBackground ()
TESTDLLSORT_API bool vtkViewport_GetGradientBackground_0(bool * return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetGradientBackground]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetGradientBackground();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GradientBackgroundOn()
// virtual void GradientBackgroundOn ()
TESTDLLSORT_API bool vtkViewport_GradientBackgroundOn_0(vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GradientBackgroundOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GradientBackgroundOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GradientBackgroundOff()
// virtual void GradientBackgroundOff ()
TESTDLLSORT_API bool vtkViewport_GradientBackgroundOff_0(vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GradientBackgroundOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GradientBackgroundOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetAspect(double _arg1, double _arg2)
// virtual void SetAspect (double _arg1, double _arg2)
TESTDLLSORT_API bool vtkViewport_SetAspect_0(vtkViewport * callingObject, double _arg1, double _arg2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::SetAspect]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAspect(_arg1, _arg2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetAspect(double _arg[2])
// void SetAspect (double _arg[2])
TESTDLLSORT_API bool vtkViewport_SetAspect_1(vtkViewport * callingObject, double _arg[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::SetAspect]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAspect(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetAspect()
// virtual double *GetAspect ()
TESTDLLSORT_API bool vtkViewport_GetAspect_0(double ** return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetAspect]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAspect();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetAspect(double data[2])
// virtual void GetAspect (double data[2])
TESTDLLSORT_API bool vtkViewport_GetAspect_1(vtkViewport * callingObject, double data[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetAspect]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetAspect(data);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ComputeAspect()
// virtual void ComputeAspect()
TESTDLLSORT_API bool vtkViewport_ComputeAspect_0(vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::ComputeAspect]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ComputeAspect();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetPixelAspect(double _arg1, double _arg2)
// virtual void SetPixelAspect (double _arg1, double _arg2)
TESTDLLSORT_API bool vtkViewport_SetPixelAspect_0(vtkViewport * callingObject, double _arg1, double _arg2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::SetPixelAspect]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetPixelAspect(_arg1, _arg2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetPixelAspect(double _arg[2])
// void SetPixelAspect (double _arg[2])
TESTDLLSORT_API bool vtkViewport_SetPixelAspect_1(vtkViewport * callingObject, double _arg[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::SetPixelAspect]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetPixelAspect(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetPixelAspect()
// virtual double *GetPixelAspect ()
TESTDLLSORT_API bool vtkViewport_GetPixelAspect_0(double ** return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetPixelAspect]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPixelAspect();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetPixelAspect(double data[2])
// virtual void GetPixelAspect (double data[2])
TESTDLLSORT_API bool vtkViewport_GetPixelAspect_1(vtkViewport * callingObject, double data[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetPixelAspect]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetPixelAspect(data);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetViewport(double _arg1, double _arg2, double _arg3, double _arg4)
// virtual void SetViewport (double _arg1, double _arg2, double _arg3, double _arg4)
TESTDLLSORT_API bool vtkViewport_SetViewport_0(vtkViewport * callingObject, double _arg1, double _arg2, double _arg3, double _arg4) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::SetViewport]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetViewport(_arg1, _arg2, _arg3, _arg4);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetViewport(double _arg[4])
// virtual void SetViewport (double _arg[4])
TESTDLLSORT_API bool vtkViewport_SetViewport_1(vtkViewport * callingObject, double _arg[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::SetViewport]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetViewport(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetViewport()
// virtual double *GetViewport ()
TESTDLLSORT_API bool vtkViewport_GetViewport_0(double ** return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetViewport]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetViewport();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetViewport(double data[4])
// virtual void GetViewport (double data[4])
TESTDLLSORT_API bool vtkViewport_GetViewport_1(vtkViewport * callingObject, double data[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetViewport]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetViewport(data);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetDisplayPoint(double _arg1, double _arg2, double _arg3)
// virtual void SetDisplayPoint (double _arg1, double _arg2, double _arg3)
TESTDLLSORT_API bool vtkViewport_SetDisplayPoint_0(vtkViewport * callingObject, double _arg1, double _arg2, double _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::SetDisplayPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetDisplayPoint(_arg1, _arg2, _arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetDisplayPoint(double _arg[3])
// virtual void SetDisplayPoint (double _arg[3])
TESTDLLSORT_API bool vtkViewport_SetDisplayPoint_1(vtkViewport * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::SetDisplayPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetDisplayPoint(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetDisplayPoint()
// virtual double *GetDisplayPoint ()
TESTDLLSORT_API bool vtkViewport_GetDisplayPoint_0(double ** return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetDisplayPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDisplayPoint();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetDisplayPoint(double data[3])
// virtual void GetDisplayPoint (double data[3])
TESTDLLSORT_API bool vtkViewport_GetDisplayPoint_1(vtkViewport * callingObject, double data[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetDisplayPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetDisplayPoint(data);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetViewPoint(double _arg1, double _arg2, double _arg3)
// virtual void SetViewPoint (double _arg1, double _arg2, double _arg3)
TESTDLLSORT_API bool vtkViewport_SetViewPoint_0(vtkViewport * callingObject, double _arg1, double _arg2, double _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::SetViewPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetViewPoint(_arg1, _arg2, _arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetViewPoint(double _arg[3])
// virtual void SetViewPoint (double _arg[3])
TESTDLLSORT_API bool vtkViewport_SetViewPoint_1(vtkViewport * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::SetViewPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetViewPoint(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetViewPoint()
// virtual double *GetViewPoint ()
TESTDLLSORT_API bool vtkViewport_GetViewPoint_0(double ** return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetViewPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetViewPoint();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetViewPoint(double data[3])
// virtual void GetViewPoint (double data[3])
TESTDLLSORT_API bool vtkViewport_GetViewPoint_1(vtkViewport * callingObject, double data[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetViewPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetViewPoint(data);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetWorldPoint(double _arg1, double _arg2, double _arg3, double _arg4)
// virtual void SetWorldPoint (double _arg1, double _arg2, double _arg3, double _arg4)
TESTDLLSORT_API bool vtkViewport_SetWorldPoint_0(vtkViewport * callingObject, double _arg1, double _arg2, double _arg3, double _arg4) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::SetWorldPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetWorldPoint(_arg1, _arg2, _arg3, _arg4);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetWorldPoint(double _arg[4])
// virtual void SetWorldPoint (double _arg[4])
TESTDLLSORT_API bool vtkViewport_SetWorldPoint_1(vtkViewport * callingObject, double _arg[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::SetWorldPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetWorldPoint(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetWorldPoint()
// virtual double *GetWorldPoint ()
TESTDLLSORT_API bool vtkViewport_GetWorldPoint_0(double ** return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetWorldPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetWorldPoint();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetWorldPoint(double data[4])
// virtual void GetWorldPoint (double data[4])
TESTDLLSORT_API bool vtkViewport_GetWorldPoint_1(vtkViewport * callingObject, double data[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetWorldPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetWorldPoint(data);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetCenter()
// virtual double *GetCenter()
TESTDLLSORT_API bool vtkViewport_GetCenter_0(double ** return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetCenter]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCenter();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int IsInViewport(int x, int y)
// virtual int IsInViewport(int x,int y)
TESTDLLSORT_API bool vtkViewport_IsInViewport_0(int * return_value, vtkViewport * callingObject, int x, int y) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::IsInViewport]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->IsInViewport(x, y);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkWindow* GetVTKWindow()
// virtual vtkWindow *GetVTKWindow()
TESTDLLSORT_API bool vtkViewport_GetVTKWindow_0(vtkWindow ** return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetVTKWindow]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetVTKWindow();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void DisplayToView()
// virtual void DisplayToView()
TESTDLLSORT_API bool vtkViewport_DisplayToView_0(vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::DisplayToView]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DisplayToView();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ViewToDisplay()
// virtual void ViewToDisplay()
TESTDLLSORT_API bool vtkViewport_ViewToDisplay_0(vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::ViewToDisplay]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ViewToDisplay();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void WorldToView()
// virtual void WorldToView()
TESTDLLSORT_API bool vtkViewport_WorldToView_0(vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::WorldToView]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->WorldToView();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ViewToWorld()
// virtual void ViewToWorld()
TESTDLLSORT_API bool vtkViewport_ViewToWorld_0(vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::ViewToWorld]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ViewToWorld();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void DisplayToWorld()
// void DisplayToWorld()
TESTDLLSORT_API bool vtkViewport_DisplayToWorld_0(vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::DisplayToWorld]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DisplayToWorld();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void WorldToDisplay()
// void WorldToDisplay()
TESTDLLSORT_API bool vtkViewport_WorldToDisplay_0(vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::WorldToDisplay]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->WorldToDisplay();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void LocalDisplayToDisplay(double & x, double & y)
// virtual void LocalDisplayToDisplay(double &x, double &y)
TESTDLLSORT_API bool vtkViewport_LocalDisplayToDisplay_0(vtkViewport * callingObject, double * x, double * y) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::LocalDisplayToDisplay]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->LocalDisplayToDisplay(*x, *y);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void DisplayToNormalizedDisplay(double & u, double & v)
// virtual void DisplayToNormalizedDisplay(double &u, double &v)
TESTDLLSORT_API bool vtkViewport_DisplayToNormalizedDisplay_0(vtkViewport * callingObject, double * u, double * v) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::DisplayToNormalizedDisplay]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DisplayToNormalizedDisplay(*u, *v);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void NormalizedDisplayToViewport(double & x, double & y)
// virtual void NormalizedDisplayToViewport(double &x, double &y)
TESTDLLSORT_API bool vtkViewport_NormalizedDisplayToViewport_0(vtkViewport * callingObject, double * x, double * y) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::NormalizedDisplayToViewport]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->NormalizedDisplayToViewport(*x, *y);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ViewportToNormalizedViewport(double & u, double & v)
// virtual void ViewportToNormalizedViewport(double &u, double &v)
TESTDLLSORT_API bool vtkViewport_ViewportToNormalizedViewport_0(vtkViewport * callingObject, double * u, double * v) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::ViewportToNormalizedViewport]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ViewportToNormalizedViewport(*u, *v);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void NormalizedViewportToView(double & x, double & y, double & z)
// virtual void NormalizedViewportToView(double &x, double &y, double &z)
TESTDLLSORT_API bool vtkViewport_NormalizedViewportToView_0(vtkViewport * callingObject, double * x, double * y, double * z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::NormalizedViewportToView]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->NormalizedViewportToView(*x, *y, *z);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ViewToWorld(double & ARG_0, double & ARG_1, double & ARG_2)
// virtual void ViewToWorld(double &, double &, double &)
TESTDLLSORT_API bool vtkViewport_ViewToWorld_1(vtkViewport * callingObject, double * ARG_0, double * ARG_1, double * ARG_2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::ViewToWorld]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ViewToWorld(*ARG_0, *ARG_1, *ARG_2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void DisplayToLocalDisplay(double & x, double & y)
// virtual void DisplayToLocalDisplay(double &x, double &y)
TESTDLLSORT_API bool vtkViewport_DisplayToLocalDisplay_0(vtkViewport * callingObject, double * x, double * y) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::DisplayToLocalDisplay]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DisplayToLocalDisplay(*x, *y);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void NormalizedDisplayToDisplay(double & u, double & v)
// virtual void NormalizedDisplayToDisplay(double &u, double &v)
TESTDLLSORT_API bool vtkViewport_NormalizedDisplayToDisplay_0(vtkViewport * callingObject, double * u, double * v) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::NormalizedDisplayToDisplay]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->NormalizedDisplayToDisplay(*u, *v);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ViewportToNormalizedDisplay(double & x, double & y)
// virtual void ViewportToNormalizedDisplay(double &x, double &y)
TESTDLLSORT_API bool vtkViewport_ViewportToNormalizedDisplay_0(vtkViewport * callingObject, double * x, double * y) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::ViewportToNormalizedDisplay]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ViewportToNormalizedDisplay(*x, *y);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void NormalizedViewportToViewport(double & u, double & v)
// virtual void NormalizedViewportToViewport(double &u, double &v)
TESTDLLSORT_API bool vtkViewport_NormalizedViewportToViewport_0(vtkViewport * callingObject, double * u, double * v) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::NormalizedViewportToViewport]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->NormalizedViewportToViewport(*u, *v);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ViewToNormalizedViewport(double & x, double & y, double & z)
// virtual void ViewToNormalizedViewport(double &x, double &y, double &z)
TESTDLLSORT_API bool vtkViewport_ViewToNormalizedViewport_0(vtkViewport * callingObject, double * x, double * y, double * z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::ViewToNormalizedViewport]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ViewToNormalizedViewport(*x, *y, *z);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void WorldToView(double & ARG_0, double & ARG_1, double & ARG_2)
// virtual void WorldToView(double &, double &, double &)
TESTDLLSORT_API bool vtkViewport_WorldToView_1(vtkViewport * callingObject, double * ARG_0, double * ARG_1, double * ARG_2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::WorldToView]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->WorldToView(*ARG_0, *ARG_1, *ARG_2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int* GetSize()
// virtual int *GetSize()
TESTDLLSORT_API bool vtkViewport_GetSize_0(int ** return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetSize]:[";
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

// virtual int* GetOrigin()
// virtual int *GetOrigin()
TESTDLLSORT_API bool vtkViewport_GetOrigin_0(int ** return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetOrigin]:[";
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

// void GetTiledSize(int * width, int * height)
// void GetTiledSize(int *width, int *height)
TESTDLLSORT_API bool vtkViewport_GetTiledSize_0(vtkViewport * callingObject, int * width, int * height) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetTiledSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetTiledSize(width, height);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetTiledSizeAndOrigin(int * width, int * height, int * lowerLeftX, int * lowerLeftY)
// virtual void GetTiledSizeAndOrigin(int *width, int *height, int *lowerLeftX, int *lowerLeftY)
TESTDLLSORT_API bool vtkViewport_GetTiledSizeAndOrigin_0(vtkViewport * callingObject, int * width, int * height, int * lowerLeftX, int * lowerLeftY) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetTiledSizeAndOrigin]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetTiledSizeAndOrigin(width, height, lowerLeftX, lowerLeftY);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkAssemblyPath* PickProp(double selectionX, double selectionY)
// virtual vtkAssemblyPath* PickProp(double selectionX, double selectionY)
TESTDLLSORT_API bool vtkViewport_PickProp_0(vtkAssemblyPath ** return_value, vtkViewport * callingObject, double selectionX, double selectionY) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::PickProp]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->PickProp(selectionX, selectionY);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkAssemblyPath* PickProp(double selectionX1, double selectionY1, double selectionX2, double selectionY2)
// virtual vtkAssemblyPath* PickProp(double selectionX1, double selectionY1, double selectionX2, double selectionY2)
TESTDLLSORT_API bool vtkViewport_PickProp_1(vtkAssemblyPath ** return_value, vtkViewport * callingObject, double selectionX1, double selectionY1, double selectionX2, double selectionY2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::PickProp]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->PickProp(selectionX1, selectionY1, selectionX2, selectionY2);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkAssemblyPath* PickPropFrom(double selectionX, double selectionY, vtkPropCollection * ARG_0)
// vtkAssemblyPath* PickPropFrom(double selectionX, double selectionY, vtkPropCollection*)
TESTDLLSORT_API bool vtkViewport_PickPropFrom_0(vtkAssemblyPath ** return_value, vtkViewport * callingObject, double selectionX, double selectionY, vtkPropCollection * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::PickPropFrom]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->PickPropFrom(selectionX, selectionY, ARG_0);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkAssemblyPath* PickPropFrom(double selectionX1, double selectionY1, double selectionX2, double selectionY2, vtkPropCollection * ARG_0)
// vtkAssemblyPath* PickPropFrom(double selectionX1, double selectionY1, double selectionX2, double selectionY2, vtkPropCollection*)
TESTDLLSORT_API bool vtkViewport_PickPropFrom_1(vtkAssemblyPath ** return_value, vtkViewport * callingObject, double selectionX1, double selectionY1, double selectionX2, double selectionY2, vtkPropCollection * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::PickPropFrom]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->PickPropFrom(selectionX1, selectionY1, selectionX2, selectionY2, ARG_0);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetPickX()
// double GetPickX()
TESTDLLSORT_API bool vtkViewport_GetPickX_0(double * return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetPickX]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPickX();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetPickY()
// double GetPickY()
TESTDLLSORT_API bool vtkViewport_GetPickY_0(double * return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetPickY]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPickY();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetPickWidth()
// double GetPickWidth()
TESTDLLSORT_API bool vtkViewport_GetPickWidth_0(double * return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetPickWidth]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPickWidth();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetPickHeight()
// double GetPickHeight()
TESTDLLSORT_API bool vtkViewport_GetPickHeight_0(double * return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetPickHeight]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPickHeight();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetPickX1()
// double GetPickX1()
TESTDLLSORT_API bool vtkViewport_GetPickX1_0(double * return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetPickX1]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPickX1();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetPickY1()
// double GetPickY1()
TESTDLLSORT_API bool vtkViewport_GetPickY1_0(double * return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetPickY1]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPickY1();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetPickX2()
// double GetPickX2()
TESTDLLSORT_API bool vtkViewport_GetPickX2_0(double * return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetPickX2]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPickX2();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetPickY2()
// double GetPickY2()
TESTDLLSORT_API bool vtkViewport_GetPickY2_0(double * return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetPickY2]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPickY2();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetIsPicking()
// virtual int GetIsPicking ()
TESTDLLSORT_API bool vtkViewport_GetIsPicking_0(int * return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetIsPicking]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetIsPicking();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetCurrentPickId()
// virtual unsigned int GetCurrentPickId ()
TESTDLLSORT_API bool vtkViewport_GetCurrentPickId_0(unsigned int * return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetCurrentPickId]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCurrentPickId();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCurrentPickId(unsigned int a)
// void SetCurrentPickId(unsigned int a)
TESTDLLSORT_API bool vtkViewport_SetCurrentPickId_0(vtkViewport * callingObject, unsigned int a) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::SetCurrentPickId]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCurrentPickId(a);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkPropCollection* GetPickResultProps()
// virtual vtkPropCollection *GetPickResultProps ()
TESTDLLSORT_API bool vtkViewport_GetPickResultProps_0(vtkPropCollection ** return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetPickResultProps]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPickResultProps();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetPickedZ()
// virtual double GetPickedZ()
TESTDLLSORT_API bool vtkViewport_GetPickedZ_0(double * return_value, vtkViewport * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkViewport::GetPickedZ]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPickedZ();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
