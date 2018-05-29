
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkRenderWindowInteractor.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkRenderWindowInteractor* New()
// static vtkRenderWindowInteractor *New()
TESTDLLSORT_API bool vtkRenderWindowInteractor_New_0(vtkRenderWindowInteractor ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkRenderWindowInteractor::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkRenderWindowInteractor_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkRenderWindowInteractor::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkRenderWindowInteractor_IsA_0(vtkTypeBool * return_value, vtkRenderWindowInteractor * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::IsA]:[";
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

// static vtkRenderWindowInteractor* SafeDownCast(vtkObjectBase * o)
// static vtkRenderWindowInteractor* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SafeDownCast_0(vtkRenderWindowInteractor ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkRenderWindowInteractor::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkRenderWindowInteractor* NewInstance()
// vtkRenderWindowInteractor *NewInstance()
TESTDLLSORT_API bool vtkRenderWindowInteractor_NewInstance_0(vtkRenderWindowInteractor ** return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::NewInstance]:[";
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

// virtual void Initialize()
// virtual void Initialize()
TESTDLLSORT_API bool vtkRenderWindowInteractor_Initialize_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::Initialize]:[";
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

// void ReInitialize()
// void ReInitialize()
TESTDLLSORT_API bool vtkRenderWindowInteractor_ReInitialize_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::ReInitialize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ReInitialize();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void UnRegister(vtkObjectBase * o)
// void UnRegister(vtkObjectBase *o)
TESTDLLSORT_API bool vtkRenderWindowInteractor_UnRegister_0(vtkRenderWindowInteractor * callingObject, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::UnRegister]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UnRegister(o);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void Start()
// virtual void Start()
TESTDLLSORT_API bool vtkRenderWindowInteractor_Start_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::Start]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Start();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void Enable()
// virtual void Enable()
TESTDLLSORT_API bool vtkRenderWindowInteractor_Enable_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::Enable]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Enable();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void Disable()
// virtual void Disable()
TESTDLLSORT_API bool vtkRenderWindowInteractor_Disable_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::Disable]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Disable();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetEnabled()
// virtual int GetEnabled ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetEnabled_0(int * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetEnabled]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetEnabled();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void EnableRenderOn()
// virtual void EnableRenderOn ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_EnableRenderOn_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::EnableRenderOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->EnableRenderOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void EnableRenderOff()
// virtual void EnableRenderOff ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_EnableRenderOff_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::EnableRenderOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->EnableRenderOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetEnableRender(bool _arg)
// virtual void SetEnableRender (bool _arg)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetEnableRender_0(vtkRenderWindowInteractor * callingObject, bool _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetEnableRender]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetEnableRender(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual bool GetEnableRender()
// virtual bool GetEnableRender ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetEnableRender_0(bool * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetEnableRender]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetEnableRender();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetRenderWindow(vtkRenderWindow * aren)
// void SetRenderWindow(vtkRenderWindow *aren)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetRenderWindow_0(vtkRenderWindowInteractor * callingObject, vtkRenderWindow * aren) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetRenderWindow]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetRenderWindow(aren);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkRenderWindow* GetRenderWindow()
// virtual vtkRenderWindow *GetRenderWindow ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetRenderWindow_0(vtkRenderWindow ** return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetRenderWindow]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetRenderWindow();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UpdateSize(int x, int y)
// virtual void UpdateSize(int x,int y)
TESTDLLSORT_API bool vtkRenderWindowInteractor_UpdateSize_0(vtkRenderWindowInteractor * callingObject, int x, int y) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::UpdateSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UpdateSize(x, y);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int CreateTimer(int timerType)
// virtual int CreateTimer(int timerType)
TESTDLLSORT_API bool vtkRenderWindowInteractor_CreateTimer_0(int * return_value, vtkRenderWindowInteractor * callingObject, int timerType) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::CreateTimer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->CreateTimer(timerType);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int DestroyTimer()
// virtual int DestroyTimer()
TESTDLLSORT_API bool vtkRenderWindowInteractor_DestroyTimer_0(int * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::DestroyTimer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->DestroyTimer();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int CreateRepeatingTimer(unsigned long duration)
// int CreateRepeatingTimer(unsigned long duration)
TESTDLLSORT_API bool vtkRenderWindowInteractor_CreateRepeatingTimer_0(int * return_value, vtkRenderWindowInteractor * callingObject, unsigned long duration) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::CreateRepeatingTimer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->CreateRepeatingTimer(duration);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int CreateOneShotTimer(unsigned long duration)
// int CreateOneShotTimer(unsigned long duration)
TESTDLLSORT_API bool vtkRenderWindowInteractor_CreateOneShotTimer_0(int * return_value, vtkRenderWindowInteractor * callingObject, unsigned long duration) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::CreateOneShotTimer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->CreateOneShotTimer(duration);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int IsOneShotTimer(int timerId)
// int IsOneShotTimer(int timerId)
TESTDLLSORT_API bool vtkRenderWindowInteractor_IsOneShotTimer_0(int * return_value, vtkRenderWindowInteractor * callingObject, int timerId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::IsOneShotTimer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->IsOneShotTimer(timerId);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// long GetTimerDuration(int timerId)
// unsigned long GetTimerDuration(int timerId)
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetTimerDuration_0(unsigned long * return_value, vtkRenderWindowInteractor * callingObject, int timerId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetTimerDuration]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTimerDuration(timerId);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int ResetTimer(int timerId)
// int ResetTimer(int timerId)
TESTDLLSORT_API bool vtkRenderWindowInteractor_ResetTimer_0(int * return_value, vtkRenderWindowInteractor * callingObject, int timerId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::ResetTimer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->ResetTimer(timerId);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int DestroyTimer(int timerId)
// int DestroyTimer(int timerId)
TESTDLLSORT_API bool vtkRenderWindowInteractor_DestroyTimer_1(int * return_value, vtkRenderWindowInteractor * callingObject, int timerId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::DestroyTimer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->DestroyTimer(timerId);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetVTKTimerId(int platformTimerId)
// virtual int GetVTKTimerId(int platformTimerId)
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetVTKTimerId_0(int * return_value, vtkRenderWindowInteractor * callingObject, int platformTimerId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetVTKTimerId]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetVTKTimerId(platformTimerId);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetTimerDuration(unsigned long _arg)
// virtual void SetTimerDuration (unsigned long _arg)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetTimerDuration_0(vtkRenderWindowInteractor * callingObject, unsigned long _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetTimerDuration]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTimerDuration(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual long GetTimerDurationMinValue()
// virtual unsigned long GetTimerDurationMinValue ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetTimerDurationMinValue_0(unsigned long * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetTimerDurationMinValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTimerDurationMinValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual long GetTimerDurationMaxValue()
// virtual unsigned long GetTimerDurationMaxValue ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetTimerDurationMaxValue_0(unsigned long * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetTimerDurationMaxValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTimerDurationMaxValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual long GetTimerDuration()
// virtual unsigned long GetTimerDuration ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetTimerDuration_1(unsigned long * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetTimerDuration]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTimerDuration();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetTimerEventId(int _arg)
// virtual void SetTimerEventId (int _arg)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetTimerEventId_0(vtkRenderWindowInteractor * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetTimerEventId]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTimerEventId(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetTimerEventId()
// virtual int GetTimerEventId ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetTimerEventId_0(int * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetTimerEventId]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTimerEventId();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetTimerEventType(int _arg)
// virtual void SetTimerEventType (int _arg)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetTimerEventType_0(vtkRenderWindowInteractor * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetTimerEventType]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTimerEventType(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetTimerEventType()
// virtual int GetTimerEventType ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetTimerEventType_0(int * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetTimerEventType]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTimerEventType();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetTimerEventDuration(int _arg)
// virtual void SetTimerEventDuration (int _arg)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetTimerEventDuration_0(vtkRenderWindowInteractor * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetTimerEventDuration]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTimerEventDuration(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetTimerEventDuration()
// virtual int GetTimerEventDuration ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetTimerEventDuration_0(int * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetTimerEventDuration]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTimerEventDuration();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetTimerEventPlatformId(int _arg)
// virtual void SetTimerEventPlatformId (int _arg)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetTimerEventPlatformId_0(vtkRenderWindowInteractor * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetTimerEventPlatformId]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTimerEventPlatformId(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetTimerEventPlatformId()
// virtual int GetTimerEventPlatformId ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetTimerEventPlatformId_0(int * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetTimerEventPlatformId]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTimerEventPlatformId();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void TerminateApp()
// virtual void TerminateApp(void)
TESTDLLSORT_API bool vtkRenderWindowInteractor_TerminateApp_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::TerminateApp]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->TerminateApp();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetInteractorStyle(vtkInteractorObserver * ARG_0)
// virtual void SetInteractorStyle(vtkInteractorObserver *)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetInteractorStyle_0(vtkRenderWindowInteractor * callingObject, vtkInteractorObserver * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetInteractorStyle]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetInteractorStyle(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkInteractorObserver* GetInteractorStyle()
// virtual vtkInteractorObserver *GetInteractorStyle ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetInteractorStyle_0(vtkInteractorObserver ** return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetInteractorStyle]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInteractorStyle();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetLightFollowCamera(int _arg)
// virtual void SetLightFollowCamera (int _arg)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetLightFollowCamera_0(vtkRenderWindowInteractor * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetLightFollowCamera]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetLightFollowCamera(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetLightFollowCamera()
// virtual int GetLightFollowCamera ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetLightFollowCamera_0(int * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetLightFollowCamera]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetLightFollowCamera();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void LightFollowCameraOn()
// virtual void LightFollowCameraOn ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_LightFollowCameraOn_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::LightFollowCameraOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->LightFollowCameraOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void LightFollowCameraOff()
// virtual void LightFollowCameraOff ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_LightFollowCameraOff_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::LightFollowCameraOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->LightFollowCameraOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetDesiredUpdateRate(double _arg)
// virtual void SetDesiredUpdateRate (double _arg)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetDesiredUpdateRate_0(vtkRenderWindowInteractor * callingObject, double _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetDesiredUpdateRate]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetDesiredUpdateRate(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetDesiredUpdateRateMinValue()
// virtual double GetDesiredUpdateRateMinValue ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetDesiredUpdateRateMinValue_0(double * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetDesiredUpdateRateMinValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDesiredUpdateRateMinValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetDesiredUpdateRateMaxValue()
// virtual double GetDesiredUpdateRateMaxValue ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetDesiredUpdateRateMaxValue_0(double * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetDesiredUpdateRateMaxValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDesiredUpdateRateMaxValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetDesiredUpdateRate()
// virtual double GetDesiredUpdateRate ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetDesiredUpdateRate_0(double * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetDesiredUpdateRate]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDesiredUpdateRate();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetStillUpdateRate(double _arg)
// virtual void SetStillUpdateRate (double _arg)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetStillUpdateRate_0(vtkRenderWindowInteractor * callingObject, double _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetStillUpdateRate]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetStillUpdateRate(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetStillUpdateRateMinValue()
// virtual double GetStillUpdateRateMinValue ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetStillUpdateRateMinValue_0(double * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetStillUpdateRateMinValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetStillUpdateRateMinValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetStillUpdateRateMaxValue()
// virtual double GetStillUpdateRateMaxValue ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetStillUpdateRateMaxValue_0(double * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetStillUpdateRateMaxValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetStillUpdateRateMaxValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetStillUpdateRate()
// virtual double GetStillUpdateRate ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetStillUpdateRate_0(double * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetStillUpdateRate]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetStillUpdateRate();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetInitialized()
// virtual int GetInitialized ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetInitialized_0(int * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetInitialized]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInitialized();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetPicker(vtkAbstractPicker * ARG_0)
// virtual void SetPicker(vtkAbstractPicker*)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetPicker_0(vtkRenderWindowInteractor * callingObject, vtkAbstractPicker * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetPicker]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetPicker(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkAbstractPicker* GetPicker()
// virtual vtkAbstractPicker *GetPicker ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetPicker_0(vtkAbstractPicker ** return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetPicker]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPicker();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkAbstractPropPicker* CreateDefaultPicker()
// virtual vtkAbstractPropPicker *CreateDefaultPicker()
TESTDLLSORT_API bool vtkRenderWindowInteractor_CreateDefaultPicker_0(vtkAbstractPropPicker ** return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::CreateDefaultPicker]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->CreateDefaultPicker();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetPickingManager(vtkPickingManager * ARG_0)
// virtual void SetPickingManager(vtkPickingManager*)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetPickingManager_0(vtkRenderWindowInteractor * callingObject, vtkPickingManager * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetPickingManager]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetPickingManager(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkPickingManager* GetPickingManager()
// virtual vtkPickingManager *GetPickingManager ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetPickingManager_0(vtkPickingManager ** return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetPickingManager]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPickingManager();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ExitCallback()
// virtual void ExitCallback()
TESTDLLSORT_API bool vtkRenderWindowInteractor_ExitCallback_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::ExitCallback]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ExitCallback();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UserCallback()
// virtual void UserCallback()
TESTDLLSORT_API bool vtkRenderWindowInteractor_UserCallback_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::UserCallback]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UserCallback();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void StartPickCallback()
// virtual void StartPickCallback()
TESTDLLSORT_API bool vtkRenderWindowInteractor_StartPickCallback_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::StartPickCallback]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->StartPickCallback();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void EndPickCallback()
// virtual void EndPickCallback()
TESTDLLSORT_API bool vtkRenderWindowInteractor_EndPickCallback_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::EndPickCallback]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->EndPickCallback();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetMousePosition(int * x, int * y)
// virtual void GetMousePosition(int *x, int *y)
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetMousePosition_0(vtkRenderWindowInteractor * callingObject, int * x, int * y) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetMousePosition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetMousePosition(x, y);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void HideCursor()
// void HideCursor()
TESTDLLSORT_API bool vtkRenderWindowInteractor_HideCursor_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::HideCursor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->HideCursor();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ShowCursor()
// void ShowCursor()
TESTDLLSORT_API bool vtkRenderWindowInteractor_ShowCursor_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::ShowCursor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ShowCursor();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void Render()
// virtual void Render()
TESTDLLSORT_API bool vtkRenderWindowInteractor_Render_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::Render]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Render();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void FlyTo(vtkRenderer * ren, double x, double y, double z)
// void FlyTo(vtkRenderer *ren, double x, double y, double z)
TESTDLLSORT_API bool vtkRenderWindowInteractor_FlyTo_0(vtkRenderWindowInteractor * callingObject, vtkRenderer * ren, double x, double y, double z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::FlyTo]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->FlyTo(ren, x, y, z);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void FlyTo(vtkRenderer * ren, double * x)
// void FlyTo(vtkRenderer *ren, double *x)
TESTDLLSORT_API bool vtkRenderWindowInteractor_FlyTo_1(vtkRenderWindowInteractor * callingObject, vtkRenderer * ren, double * x) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::FlyTo]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->FlyTo(ren, x);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void FlyToImage(vtkRenderer * ren, double x, double y)
// void FlyToImage(vtkRenderer *ren, double x, double y)
TESTDLLSORT_API bool vtkRenderWindowInteractor_FlyToImage_0(vtkRenderWindowInteractor * callingObject, vtkRenderer * ren, double x, double y) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::FlyToImage]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->FlyToImage(ren, x, y);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void FlyToImage(vtkRenderer * ren, double * x)
// void FlyToImage(vtkRenderer *ren, double *x)
TESTDLLSORT_API bool vtkRenderWindowInteractor_FlyToImage_1(vtkRenderWindowInteractor * callingObject, vtkRenderer * ren, double * x) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::FlyToImage]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->FlyToImage(ren, x);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetNumberOfFlyFrames(int _arg)
// virtual void SetNumberOfFlyFrames (int _arg)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetNumberOfFlyFrames_0(vtkRenderWindowInteractor * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetNumberOfFlyFrames]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetNumberOfFlyFrames(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetNumberOfFlyFramesMinValue()
// virtual int GetNumberOfFlyFramesMinValue ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetNumberOfFlyFramesMinValue_0(int * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetNumberOfFlyFramesMinValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfFlyFramesMinValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetNumberOfFlyFramesMaxValue()
// virtual int GetNumberOfFlyFramesMaxValue ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetNumberOfFlyFramesMaxValue_0(int * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetNumberOfFlyFramesMaxValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfFlyFramesMaxValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetNumberOfFlyFrames()
// virtual int GetNumberOfFlyFrames ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetNumberOfFlyFrames_0(int * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetNumberOfFlyFrames]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfFlyFrames();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetDolly(double _arg)
// virtual void SetDolly (double _arg)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetDolly_0(vtkRenderWindowInteractor * callingObject, double _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetDolly]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetDolly(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetDolly()
// virtual double GetDolly ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetDolly_0(double * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetDolly]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDolly();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int* GetEventPosition()
// virtual int *GetEventPosition ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetEventPosition_0(int ** return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetEventPosition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetEventPosition();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetEventPosition(int & _arg1, int & _arg2)
// virtual void GetEventPosition (int &_arg1, int &_arg2)
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetEventPosition_1(vtkRenderWindowInteractor * callingObject, int * _arg1, int * _arg2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetEventPosition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetEventPosition(*_arg1, *_arg2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetEventPosition(int _arg[2])
// virtual void GetEventPosition (int _arg[2])
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetEventPosition_2(vtkRenderWindowInteractor * callingObject, int _arg[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetEventPosition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetEventPosition(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int* GetLastEventPosition()
// virtual int *GetLastEventPosition ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetLastEventPosition_0(int ** return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetLastEventPosition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetLastEventPosition();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetLastEventPosition(int & _arg1, int & _arg2)
// virtual void GetLastEventPosition (int &_arg1, int &_arg2)
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetLastEventPosition_1(vtkRenderWindowInteractor * callingObject, int * _arg1, int * _arg2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetLastEventPosition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetLastEventPosition(*_arg1, *_arg2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetLastEventPosition(int _arg[2])
// virtual void GetLastEventPosition (int _arg[2])
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetLastEventPosition_2(vtkRenderWindowInteractor * callingObject, int _arg[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetLastEventPosition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetLastEventPosition(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetLastEventPosition(int _arg1, int _arg2)
// virtual void SetLastEventPosition (int _arg1, int _arg2)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetLastEventPosition_0(vtkRenderWindowInteractor * callingObject, int _arg1, int _arg2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetLastEventPosition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetLastEventPosition(_arg1, _arg2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetLastEventPosition(int _arg[2])
// void SetLastEventPosition (int _arg[2])
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetLastEventPosition_1(vtkRenderWindowInteractor * callingObject, int _arg[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetLastEventPosition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetLastEventPosition(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetEventPosition(int x, int y)
// virtual void SetEventPosition(int x, int y)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetEventPosition_0(vtkRenderWindowInteractor * callingObject, int x, int y) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetEventPosition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetEventPosition(x, y);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetEventPosition(int pos[2])
// virtual void SetEventPosition(int pos[2])
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetEventPosition_1(vtkRenderWindowInteractor * callingObject, int pos[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetEventPosition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetEventPosition(pos);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetEventPositionFlipY(int x, int y)
// virtual void SetEventPositionFlipY(int x, int y)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetEventPositionFlipY_0(vtkRenderWindowInteractor * callingObject, int x, int y) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetEventPositionFlipY]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetEventPositionFlipY(x, y);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetEventPositionFlipY(int pos[2])
// virtual void SetEventPositionFlipY(int pos[2])
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetEventPositionFlipY_1(vtkRenderWindowInteractor * callingObject, int pos[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetEventPositionFlipY]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetEventPositionFlipY(pos);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int* GetEventPositions(int pointerIndex)
// virtual int *GetEventPositions(int pointerIndex)
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetEventPositions_0(int ** return_value, vtkRenderWindowInteractor * callingObject, int pointerIndex) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetEventPositions]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetEventPositions(pointerIndex);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int* GetLastEventPositions(int pointerIndex)
// virtual int *GetLastEventPositions(int pointerIndex)
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetLastEventPositions_0(int ** return_value, vtkRenderWindowInteractor * callingObject, int pointerIndex) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetLastEventPositions]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetLastEventPositions(pointerIndex);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetEventPosition(int x, int y, int pointerIndex)
// virtual void SetEventPosition(int x, int y, int pointerIndex)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetEventPosition_2(vtkRenderWindowInteractor * callingObject, int x, int y, int pointerIndex) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetEventPosition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetEventPosition(x, y, pointerIndex);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetEventPosition(int pos[2], int pointerIndex)
// virtual void SetEventPosition(int pos[2], int pointerIndex)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetEventPosition_3(vtkRenderWindowInteractor * callingObject, int pos[2], int pointerIndex) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetEventPosition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetEventPosition(pos, pointerIndex);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetEventPositionFlipY(int x, int y, int pointerIndex)
// virtual void SetEventPositionFlipY(int x, int y, int pointerIndex)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetEventPositionFlipY_2(vtkRenderWindowInteractor * callingObject, int x, int y, int pointerIndex) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetEventPositionFlipY]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetEventPositionFlipY(x, y, pointerIndex);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetEventPositionFlipY(int pos[2], int pointerIndex)
// virtual void SetEventPositionFlipY(int pos[2], int pointerIndex)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetEventPositionFlipY_3(vtkRenderWindowInteractor * callingObject, int pos[2], int pointerIndex) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetEventPositionFlipY]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetEventPositionFlipY(pos, pointerIndex);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetAltKey(int _arg)
// virtual void SetAltKey (int _arg)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetAltKey_0(vtkRenderWindowInteractor * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetAltKey]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAltKey(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetAltKey()
// virtual int GetAltKey ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetAltKey_0(int * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetAltKey]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAltKey();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetControlKey(int _arg)
// virtual void SetControlKey (int _arg)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetControlKey_0(vtkRenderWindowInteractor * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetControlKey]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetControlKey(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetControlKey()
// virtual int GetControlKey ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetControlKey_0(int * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetControlKey]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetControlKey();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetShiftKey(int _arg)
// virtual void SetShiftKey (int _arg)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetShiftKey_0(vtkRenderWindowInteractor * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetShiftKey]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetShiftKey(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetShiftKey()
// virtual int GetShiftKey ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetShiftKey_0(int * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetShiftKey]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetShiftKey();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetKeyCode(char _arg)
// virtual void SetKeyCode (char _arg)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetKeyCode_0(vtkRenderWindowInteractor * callingObject, char _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetKeyCode]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetKeyCode(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual char GetKeyCode()
// virtual char GetKeyCode ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetKeyCode_0(char * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetKeyCode]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetKeyCode();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetRepeatCount(int _arg)
// virtual void SetRepeatCount (int _arg)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetRepeatCount_0(vtkRenderWindowInteractor * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetRepeatCount]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetRepeatCount(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetRepeatCount()
// virtual int GetRepeatCount ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetRepeatCount_0(int * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetRepeatCount]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetRepeatCount();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetKeySym(const char * _arg)
// virtual void SetKeySym (const char* _arg)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetKeySym_0(vtkRenderWindowInteractor * callingObject, const char * _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetKeySym]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetKeySym(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual char* GetKeySym()
// virtual char* GetKeySym ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetKeySym_0(char ** return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetKeySym]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetKeySym();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetPointerIndex(int _arg)
// virtual void SetPointerIndex (int _arg)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetPointerIndex_0(vtkRenderWindowInteractor * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetPointerIndex]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetPointerIndex(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetPointerIndex()
// virtual int GetPointerIndex ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetPointerIndex_0(int * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetPointerIndex]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPointerIndex();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetRotation(double val)
// void SetRotation(double val)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetRotation_0(vtkRenderWindowInteractor * callingObject, double val) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetRotation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetRotation(val);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetRotation()
// virtual double GetRotation ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetRotation_0(double * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetRotation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetRotation();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetLastRotation()
// virtual double GetLastRotation ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetLastRotation_0(double * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetLastRotation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetLastRotation();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetScale(double val)
// void SetScale(double val)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetScale_0(vtkRenderWindowInteractor * callingObject, double val) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetScale]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScale(val);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetScale()
// virtual double GetScale ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetScale_0(double * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetScale]:[";
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

// virtual double GetLastScale()
// virtual double GetLastScale ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetLastScale_0(double * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetLastScale]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetLastScale();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTranslation(double val[2])
// void SetTranslation(double val[2])
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetTranslation_0(vtkRenderWindowInteractor * callingObject, double val[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetTranslation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTranslation(val);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetTranslation()
// virtual double *GetTranslation ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetTranslation_0(double ** return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetTranslation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTranslation();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetTranslation(double & _arg1, double & _arg2)
// virtual void GetTranslation (double &_arg1, double &_arg2)
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetTranslation_1(vtkRenderWindowInteractor * callingObject, double * _arg1, double * _arg2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetTranslation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetTranslation(*_arg1, *_arg2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetTranslation(double _arg[2])
// virtual void GetTranslation (double _arg[2])
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetTranslation_2(vtkRenderWindowInteractor * callingObject, double _arg[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetTranslation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetTranslation(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetLastTranslation()
// virtual double *GetLastTranslation ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetLastTranslation_0(double ** return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetLastTranslation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetLastTranslation();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetLastTranslation(double & _arg1, double & _arg2)
// virtual void GetLastTranslation (double &_arg1, double &_arg2)
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetLastTranslation_1(vtkRenderWindowInteractor * callingObject, double * _arg1, double * _arg2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetLastTranslation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetLastTranslation(*_arg1, *_arg2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetLastTranslation(double _arg[2])
// virtual void GetLastTranslation (double _arg[2])
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetLastTranslation_2(vtkRenderWindowInteractor * callingObject, double _arg[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetLastTranslation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetLastTranslation(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetEventInformation(int x, int y, int ctrl, int shift, char keycode, int repeatcount, const char * keysym, int pointerIndex)
// void SetEventInformation(int x, int y, int ctrl, int shift, char keycode, int repeatcount, const char* keysym, int pointerIndex)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetEventInformation_0(vtkRenderWindowInteractor * callingObject, int x, int y, int ctrl, int shift, char keycode, int repeatcount, const char * keysym, int pointerIndex) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetEventInformation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetEventInformation(x, y, ctrl, shift, keycode, repeatcount, keysym, pointerIndex);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetEventInformationFlipY(int x, int y, int ctrl, int shift, char keycode, int repeatcount, const char * keysym, int pointerIndex)
// void SetEventInformationFlipY(int x, int y, int ctrl, int shift, char keycode, int repeatcount, const char* keysym, int pointerIndex)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetEventInformationFlipY_0(vtkRenderWindowInteractor * callingObject, int x, int y, int ctrl, int shift, char keycode, int repeatcount, const char * keysym, int pointerIndex) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetEventInformationFlipY]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetEventInformationFlipY(x, y, ctrl, shift, keycode, repeatcount, keysym, pointerIndex);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetSize(int _arg1, int _arg2)
// virtual void SetSize (int _arg1, int _arg2)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetSize_0(vtkRenderWindowInteractor * callingObject, int _arg1, int _arg2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetSize(_arg1, _arg2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetSize(int _arg[2])
// void SetSize (int _arg[2])
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetSize_1(vtkRenderWindowInteractor * callingObject, int _arg[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetSize(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int* GetSize()
// virtual int *GetSize ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetSize_0(int ** return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetSize]:[";
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

// virtual void GetSize(int & _arg1, int & _arg2)
// virtual void GetSize (int &_arg1, int &_arg2)
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetSize_1(vtkRenderWindowInteractor * callingObject, int * _arg1, int * _arg2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetSize(*_arg1, *_arg2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetSize(int _arg[2])
// virtual void GetSize (int _arg[2])
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetSize_2(vtkRenderWindowInteractor * callingObject, int _arg[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetSize(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetEventSize(int _arg1, int _arg2)
// virtual void SetEventSize (int _arg1, int _arg2)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetEventSize_0(vtkRenderWindowInteractor * callingObject, int _arg1, int _arg2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetEventSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetEventSize(_arg1, _arg2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetEventSize(int _arg[2])
// void SetEventSize (int _arg[2])
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetEventSize_1(vtkRenderWindowInteractor * callingObject, int _arg[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetEventSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetEventSize(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int* GetEventSize()
// virtual int *GetEventSize ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetEventSize_0(int ** return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetEventSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetEventSize();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetEventSize(int & _arg1, int & _arg2)
// virtual void GetEventSize (int &_arg1, int &_arg2)
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetEventSize_1(vtkRenderWindowInteractor * callingObject, int * _arg1, int * _arg2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetEventSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetEventSize(*_arg1, *_arg2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetEventSize(int _arg[2])
// virtual void GetEventSize (int _arg[2])
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetEventSize_2(vtkRenderWindowInteractor * callingObject, int _arg[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetEventSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetEventSize(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkRenderer* FindPokedRenderer(int ARG_0, int ARG_1)
// virtual vtkRenderer *FindPokedRenderer(int,int)
TESTDLLSORT_API bool vtkRenderWindowInteractor_FindPokedRenderer_0(vtkRenderer ** return_value, vtkRenderWindowInteractor * callingObject, int ARG_0, int ARG_1) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::FindPokedRenderer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->FindPokedRenderer(ARG_0, ARG_1);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkObserverMediator* GetObserverMediator()
// vtkObserverMediator *GetObserverMediator()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetObserverMediator_0(vtkObserverMediator ** return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetObserverMediator]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetObserverMediator();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetUseTDx(bool _arg)
// virtual void SetUseTDx (bool _arg)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetUseTDx_0(vtkRenderWindowInteractor * callingObject, bool _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetUseTDx]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetUseTDx(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual bool GetUseTDx()
// virtual bool GetUseTDx ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetUseTDx_0(bool * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetUseTDx]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUseTDx();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void MouseMoveEvent()
// virtual void MouseMoveEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_MouseMoveEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::MouseMoveEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->MouseMoveEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void RightButtonPressEvent()
// virtual void RightButtonPressEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_RightButtonPressEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::RightButtonPressEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RightButtonPressEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void RightButtonReleaseEvent()
// virtual void RightButtonReleaseEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_RightButtonReleaseEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::RightButtonReleaseEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RightButtonReleaseEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void LeftButtonPressEvent()
// virtual void LeftButtonPressEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_LeftButtonPressEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::LeftButtonPressEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->LeftButtonPressEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void LeftButtonReleaseEvent()
// virtual void LeftButtonReleaseEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_LeftButtonReleaseEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::LeftButtonReleaseEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->LeftButtonReleaseEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void MiddleButtonPressEvent()
// virtual void MiddleButtonPressEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_MiddleButtonPressEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::MiddleButtonPressEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->MiddleButtonPressEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void MiddleButtonReleaseEvent()
// virtual void MiddleButtonReleaseEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_MiddleButtonReleaseEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::MiddleButtonReleaseEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->MiddleButtonReleaseEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void MouseWheelForwardEvent()
// virtual void MouseWheelForwardEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_MouseWheelForwardEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::MouseWheelForwardEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->MouseWheelForwardEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void MouseWheelBackwardEvent()
// virtual void MouseWheelBackwardEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_MouseWheelBackwardEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::MouseWheelBackwardEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->MouseWheelBackwardEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ExposeEvent()
// virtual void ExposeEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_ExposeEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::ExposeEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ExposeEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ConfigureEvent()
// virtual void ConfigureEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_ConfigureEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::ConfigureEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ConfigureEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void EnterEvent()
// virtual void EnterEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_EnterEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::EnterEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->EnterEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void LeaveEvent()
// virtual void LeaveEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_LeaveEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::LeaveEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->LeaveEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void KeyPressEvent()
// virtual void KeyPressEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_KeyPressEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::KeyPressEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->KeyPressEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void KeyReleaseEvent()
// virtual void KeyReleaseEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_KeyReleaseEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::KeyReleaseEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->KeyReleaseEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CharEvent()
// virtual void CharEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_CharEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::CharEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CharEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ExitEvent()
// virtual void ExitEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_ExitEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::ExitEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ExitEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void FourthButtonPressEvent()
// virtual void FourthButtonPressEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_FourthButtonPressEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::FourthButtonPressEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->FourthButtonPressEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void FourthButtonReleaseEvent()
// virtual void FourthButtonReleaseEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_FourthButtonReleaseEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::FourthButtonReleaseEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->FourthButtonReleaseEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void FifthButtonPressEvent()
// virtual void FifthButtonPressEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_FifthButtonPressEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::FifthButtonPressEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->FifthButtonPressEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void FifthButtonReleaseEvent()
// virtual void FifthButtonReleaseEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_FifthButtonReleaseEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::FifthButtonReleaseEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->FifthButtonReleaseEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void StartPinchEvent()
// virtual void StartPinchEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_StartPinchEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::StartPinchEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->StartPinchEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void PinchEvent()
// virtual void PinchEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_PinchEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::PinchEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->PinchEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void EndPinchEvent()
// virtual void EndPinchEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_EndPinchEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::EndPinchEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->EndPinchEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void StartRotateEvent()
// virtual void StartRotateEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_StartRotateEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::StartRotateEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->StartRotateEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void RotateEvent()
// virtual void RotateEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_RotateEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::RotateEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RotateEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void EndRotateEvent()
// virtual void EndRotateEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_EndRotateEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::EndRotateEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->EndRotateEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void StartPanEvent()
// virtual void StartPanEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_StartPanEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::StartPanEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->StartPanEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void PanEvent()
// virtual void PanEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_PanEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::PanEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->PanEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void EndPanEvent()
// virtual void EndPanEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_EndPanEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::EndPanEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->EndPanEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void TapEvent()
// virtual void TapEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_TapEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::TapEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->TapEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void LongTapEvent()
// virtual void LongTapEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_LongTapEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::LongTapEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->LongTapEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SwipeEvent()
// virtual void SwipeEvent()
TESTDLLSORT_API bool vtkRenderWindowInteractor_SwipeEvent_0(vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SwipeEvent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SwipeEvent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetRecognizeGestures(bool _arg)
// virtual void SetRecognizeGestures (bool _arg)
TESTDLLSORT_API bool vtkRenderWindowInteractor_SetRecognizeGestures_0(vtkRenderWindowInteractor * callingObject, bool _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::SetRecognizeGestures]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetRecognizeGestures(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual bool GetRecognizeGestures()
// virtual bool GetRecognizeGestures ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetRecognizeGestures_0(bool * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetRecognizeGestures]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetRecognizeGestures();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetPointersDownCount()
// virtual int GetPointersDownCount ()
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetPointersDownCount_0(int * return_value, vtkRenderWindowInteractor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetPointersDownCount]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPointersDownCount();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ClearContact(size_t contactID)
// void ClearContact(size_t contactID)
TESTDLLSORT_API bool vtkRenderWindowInteractor_ClearContact_0(vtkRenderWindowInteractor * callingObject, size_t contactID) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::ClearContact]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ClearContact(contactID);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetPointerIndexForContact(size_t contactID)
// int GetPointerIndexForContact(size_t contactID)
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetPointerIndexForContact_0(int * return_value, vtkRenderWindowInteractor * callingObject, size_t contactID) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetPointerIndexForContact]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPointerIndexForContact(contactID);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetPointerIndexForExistingContact(size_t contactID)
// int GetPointerIndexForExistingContact(size_t contactID)
TESTDLLSORT_API bool vtkRenderWindowInteractor_GetPointerIndexForExistingContact_0(int * return_value, vtkRenderWindowInteractor * callingObject, size_t contactID) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::GetPointerIndexForExistingContact]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPointerIndexForExistingContact(contactID);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// bool IsPointerIndexSet(int i)
// bool IsPointerIndexSet(int i)
TESTDLLSORT_API bool vtkRenderWindowInteractor_IsPointerIndexSet_0(bool * return_value, vtkRenderWindowInteractor * callingObject, int i) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::IsPointerIndexSet]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->IsPointerIndexSet(i);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ClearPointerIndex(int i)
// void ClearPointerIndex(int i)
TESTDLLSORT_API bool vtkRenderWindowInteractor_ClearPointerIndex_0(vtkRenderWindowInteractor * callingObject, int i) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindowInteractor::ClearPointerIndex]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ClearPointerIndex(i);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
