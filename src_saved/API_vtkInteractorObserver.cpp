
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkInteractorObserver.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkInteractorObserver_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkInteractorObserver::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkInteractorObserver_IsA_0(vtkTypeBool * return_value, vtkInteractorObserver * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::IsA]:[";
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

// static vtkInteractorObserver* SafeDownCast(vtkObjectBase * o)
// static vtkInteractorObserver* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkInteractorObserver_SafeDownCast_0(vtkInteractorObserver ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkInteractorObserver::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkInteractorObserver* NewInstance()
// vtkInteractorObserver *NewInstance()
TESTDLLSORT_API bool vtkInteractorObserver_NewInstance_0(vtkInteractorObserver ** return_value, vtkInteractorObserver * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::NewInstance]:[";
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

// virtual void SetEnabled(int ARG_0)
// virtual void SetEnabled(int)
TESTDLLSORT_API bool vtkInteractorObserver_SetEnabled_0(vtkInteractorObserver * callingObject, int ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::SetEnabled]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetEnabled(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetEnabled()
// int GetEnabled()
TESTDLLSORT_API bool vtkInteractorObserver_GetEnabled_0(int * return_value, vtkInteractorObserver * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::GetEnabled]:[";
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

// void EnabledOn()
// void EnabledOn()
TESTDLLSORT_API bool vtkInteractorObserver_EnabledOn_0(vtkInteractorObserver * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::EnabledOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->EnabledOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void EnabledOff()
// void EnabledOff()
TESTDLLSORT_API bool vtkInteractorObserver_EnabledOff_0(vtkInteractorObserver * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::EnabledOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->EnabledOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void On()
// void On()
TESTDLLSORT_API bool vtkInteractorObserver_On_0(vtkInteractorObserver * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::On]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->On();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Off()
// void Off()
TESTDLLSORT_API bool vtkInteractorObserver_Off_0(vtkInteractorObserver * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::Off]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Off();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetInteractor(vtkRenderWindowInteractor * iren)
// virtual void SetInteractor(vtkRenderWindowInteractor* iren)
TESTDLLSORT_API bool vtkInteractorObserver_SetInteractor_0(vtkInteractorObserver * callingObject, vtkRenderWindowInteractor * iren) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::SetInteractor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetInteractor(iren);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkRenderWindowInteractor* GetInteractor()
// virtual vtkRenderWindowInteractor *GetInteractor ()
TESTDLLSORT_API bool vtkInteractorObserver_GetInteractor_0(vtkRenderWindowInteractor ** return_value, vtkInteractorObserver * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::GetInteractor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInteractor();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetPriority(float _arg)
// virtual void SetPriority (float _arg)
TESTDLLSORT_API bool vtkInteractorObserver_SetPriority_0(vtkInteractorObserver * callingObject, float _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::SetPriority]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetPriority(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual float GetPriorityMinValue()
// virtual float GetPriorityMinValue ()
TESTDLLSORT_API bool vtkInteractorObserver_GetPriorityMinValue_0(float * return_value, vtkInteractorObserver * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::GetPriorityMinValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPriorityMinValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual float GetPriorityMaxValue()
// virtual float GetPriorityMaxValue ()
TESTDLLSORT_API bool vtkInteractorObserver_GetPriorityMaxValue_0(float * return_value, vtkInteractorObserver * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::GetPriorityMaxValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPriorityMaxValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual float GetPriority()
// virtual float GetPriority ()
TESTDLLSORT_API bool vtkInteractorObserver_GetPriority_0(float * return_value, vtkInteractorObserver * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::GetPriority]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPriority();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void PickingManagedOn()
// virtual void PickingManagedOn ()
TESTDLLSORT_API bool vtkInteractorObserver_PickingManagedOn_0(vtkInteractorObserver * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::PickingManagedOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->PickingManagedOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void PickingManagedOff()
// virtual void PickingManagedOff ()
TESTDLLSORT_API bool vtkInteractorObserver_PickingManagedOff_0(vtkInteractorObserver * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::PickingManagedOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->PickingManagedOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetPickingManaged(bool _arg)
// virtual void SetPickingManaged (bool _arg)
TESTDLLSORT_API bool vtkInteractorObserver_SetPickingManaged_0(vtkInteractorObserver * callingObject, bool _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::SetPickingManaged]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetPickingManaged(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual bool GetPickingManaged()
// virtual bool GetPickingManaged ()
TESTDLLSORT_API bool vtkInteractorObserver_GetPickingManaged_0(bool * return_value, vtkInteractorObserver * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::GetPickingManaged]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPickingManaged();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetKeyPressActivation(int _arg)
// virtual void SetKeyPressActivation (int _arg)
TESTDLLSORT_API bool vtkInteractorObserver_SetKeyPressActivation_0(vtkInteractorObserver * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::SetKeyPressActivation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetKeyPressActivation(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetKeyPressActivation()
// virtual int GetKeyPressActivation ()
TESTDLLSORT_API bool vtkInteractorObserver_GetKeyPressActivation_0(int * return_value, vtkInteractorObserver * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::GetKeyPressActivation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetKeyPressActivation();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void KeyPressActivationOn()
// virtual void KeyPressActivationOn ()
TESTDLLSORT_API bool vtkInteractorObserver_KeyPressActivationOn_0(vtkInteractorObserver * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::KeyPressActivationOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->KeyPressActivationOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void KeyPressActivationOff()
// virtual void KeyPressActivationOff ()
TESTDLLSORT_API bool vtkInteractorObserver_KeyPressActivationOff_0(vtkInteractorObserver * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::KeyPressActivationOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->KeyPressActivationOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetKeyPressActivationValue(char _arg)
// virtual void SetKeyPressActivationValue (char _arg)
TESTDLLSORT_API bool vtkInteractorObserver_SetKeyPressActivationValue_0(vtkInteractorObserver * callingObject, char _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::SetKeyPressActivationValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetKeyPressActivationValue(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual char GetKeyPressActivationValue()
// virtual char GetKeyPressActivationValue ()
TESTDLLSORT_API bool vtkInteractorObserver_GetKeyPressActivationValue_0(char * return_value, vtkInteractorObserver * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::GetKeyPressActivationValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetKeyPressActivationValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkRenderer* GetDefaultRenderer()
// virtual vtkRenderer *GetDefaultRenderer ()
TESTDLLSORT_API bool vtkInteractorObserver_GetDefaultRenderer_0(vtkRenderer ** return_value, vtkInteractorObserver * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::GetDefaultRenderer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDefaultRenderer();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetDefaultRenderer(vtkRenderer * ARG_0)
// virtual void SetDefaultRenderer(vtkRenderer*)
TESTDLLSORT_API bool vtkInteractorObserver_SetDefaultRenderer_0(vtkInteractorObserver * callingObject, vtkRenderer * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::SetDefaultRenderer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetDefaultRenderer(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkRenderer* GetCurrentRenderer()
// virtual vtkRenderer *GetCurrentRenderer ()
TESTDLLSORT_API bool vtkInteractorObserver_GetCurrentRenderer_0(vtkRenderer ** return_value, vtkInteractorObserver * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::GetCurrentRenderer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCurrentRenderer();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetCurrentRenderer(vtkRenderer * ARG_0)
// virtual void SetCurrentRenderer(vtkRenderer*)
TESTDLLSORT_API bool vtkInteractorObserver_SetCurrentRenderer_0(vtkInteractorObserver * callingObject, vtkRenderer * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::SetCurrentRenderer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCurrentRenderer(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void OnChar()
// virtual void OnChar()
TESTDLLSORT_API bool vtkInteractorObserver_OnChar_0(vtkInteractorObserver * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::OnChar]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->OnChar();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void ComputeDisplayToWorld(vtkRenderer * ren, double x, double y, double z, double worldPt[4])
// static void ComputeDisplayToWorld(vtkRenderer *ren, double x, double y, double z, double worldPt[4])
TESTDLLSORT_API bool vtkInteractorObserver_ComputeDisplayToWorld_0(vtkRenderer * ren, double x, double y, double z, double worldPt[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::ComputeDisplayToWorld]:[";
#endif
	bool success = true;
	vtkInteractorObserver::ComputeDisplayToWorld(ren, x, y, z, worldPt);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void ComputeWorldToDisplay(vtkRenderer * ren, double x, double y, double z, double displayPt[3])
// static void ComputeWorldToDisplay(vtkRenderer *ren, double x, double y, double z, double displayPt[3])
TESTDLLSORT_API bool vtkInteractorObserver_ComputeWorldToDisplay_0(vtkRenderer * ren, double x, double y, double z, double displayPt[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::ComputeWorldToDisplay]:[";
#endif
	bool success = true;
	vtkInteractorObserver::ComputeWorldToDisplay(ren, x, y, z, displayPt);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ReleaseFocus()
// void ReleaseFocus()
TESTDLLSORT_API bool vtkInteractorObserver_ReleaseFocus_0(vtkInteractorObserver * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInteractorObserver::ReleaseFocus]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ReleaseFocus();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
