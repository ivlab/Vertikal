
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkRenderWindow.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkRenderWindow_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkRenderWindow::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkRenderWindow_IsA_0(vtkTypeBool * return_value, vtkRenderWindow * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::IsA]:[";
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

// static vtkRenderWindow* SafeDownCast(vtkObjectBase * o)
// static vtkRenderWindow* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkRenderWindow_SafeDownCast_0(vtkRenderWindow ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkRenderWindow::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkRenderWindow* NewInstance()
// vtkRenderWindow *NewInstance()
TESTDLLSORT_API bool vtkRenderWindow_NewInstance_0(vtkRenderWindow ** return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::NewInstance]:[";
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

// static vtkRenderWindow* New()
// static vtkRenderWindow *New()
TESTDLLSORT_API bool vtkRenderWindow_New_0(vtkRenderWindow ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkRenderWindow::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void AddRenderer(vtkRenderer * ARG_0)
// virtual void AddRenderer(vtkRenderer *)
TESTDLLSORT_API bool vtkRenderWindow_AddRenderer_0(vtkRenderWindow * callingObject, vtkRenderer * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::AddRenderer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AddRenderer(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void RemoveRenderer(vtkRenderer * ARG_0)
// void RemoveRenderer(vtkRenderer *)
TESTDLLSORT_API bool vtkRenderWindow_RemoveRenderer_0(vtkRenderWindow * callingObject, vtkRenderer * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::RemoveRenderer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveRenderer(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int HasRenderer(vtkRenderer * ARG_0)
// int HasRenderer(vtkRenderer *)
TESTDLLSORT_API bool vtkRenderWindow_HasRenderer_0(int * return_value, vtkRenderWindow * callingObject, vtkRenderer * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::HasRenderer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->HasRenderer(ARG_0);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static char* GetRenderLibrary()
// static const char *GetRenderLibrary()
TESTDLLSORT_API bool vtkRenderWindow_GetRenderLibrary_0(const char ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetRenderLibrary]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkRenderWindow::GetRenderLibrary();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual char* GetRenderingBackend()
// virtual const char *GetRenderingBackend()
TESTDLLSORT_API bool vtkRenderWindow_GetRenderingBackend_0(const char ** return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetRenderingBackend]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetRenderingBackend();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkRenderTimerLog* GetRenderTimer()
// virtual vtkRenderTimerLog *GetRenderTimer ()
TESTDLLSORT_API bool vtkRenderWindow_GetRenderTimer_0(vtkRenderTimerLog ** return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetRenderTimer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetRenderTimer();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkRendererCollection* GetRenderers()
// vtkRendererCollection *GetRenderers()
TESTDLLSORT_API bool vtkRenderWindow_GetRenderers_0(vtkRendererCollection ** return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetRenderers]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetRenderers();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CaptureGL2PSSpecialProps(vtkCollection * specialProps)
// void CaptureGL2PSSpecialProps(vtkCollection *specialProps)
TESTDLLSORT_API bool vtkRenderWindow_CaptureGL2PSSpecialProps_0(vtkRenderWindow * callingObject, vtkCollection * specialProps) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::CaptureGL2PSSpecialProps]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CaptureGL2PSSpecialProps(specialProps);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetCapturingGL2PSSpecialProps()
// virtual int GetCapturingGL2PSSpecialProps ()
TESTDLLSORT_API bool vtkRenderWindow_GetCapturingGL2PSSpecialProps_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetCapturingGL2PSSpecialProps]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCapturingGL2PSSpecialProps();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Render()
// void Render()
TESTDLLSORT_API bool vtkRenderWindow_Render_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::Render]:[";
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

// virtual void Start()
// virtual void Start()
TESTDLLSORT_API bool vtkRenderWindow_Start_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::Start]:[";
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

// virtual void Finalize()
// virtual void Finalize()
TESTDLLSORT_API bool vtkRenderWindow_Finalize_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::Finalize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Finalize();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void Frame()
// virtual void Frame()
TESTDLLSORT_API bool vtkRenderWindow_Frame_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::Frame]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Frame();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void WaitForCompletion()
// virtual void WaitForCompletion()
TESTDLLSORT_API bool vtkRenderWindow_WaitForCompletion_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::WaitForCompletion]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->WaitForCompletion();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CopyResultFrame()
// virtual void CopyResultFrame()
TESTDLLSORT_API bool vtkRenderWindow_CopyResultFrame_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::CopyResultFrame]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyResultFrame();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkRenderWindowInteractor* MakeRenderWindowInteractor()
// virtual vtkRenderWindowInteractor *MakeRenderWindowInteractor()
TESTDLLSORT_API bool vtkRenderWindow_MakeRenderWindowInteractor_0(vtkRenderWindowInteractor ** return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::MakeRenderWindowInteractor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->MakeRenderWindowInteractor();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void HideCursor()
// virtual void HideCursor()
TESTDLLSORT_API bool vtkRenderWindow_HideCursor_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::HideCursor]:[";
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

// virtual void ShowCursor()
// virtual void ShowCursor()
TESTDLLSORT_API bool vtkRenderWindow_ShowCursor_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::ShowCursor]:[";
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

// virtual void SetCursorPosition(int ARG_0, int ARG_1)
// virtual void SetCursorPosition(int , int )
TESTDLLSORT_API bool vtkRenderWindow_SetCursorPosition_0(vtkRenderWindow * callingObject, int ARG_0, int ARG_1) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetCursorPosition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCursorPosition(ARG_0, ARG_1);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetCurrentCursor(int _arg)
// virtual void SetCurrentCursor (int _arg)
TESTDLLSORT_API bool vtkRenderWindow_SetCurrentCursor_0(vtkRenderWindow * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetCurrentCursor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCurrentCursor(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetCurrentCursor()
// virtual int GetCurrentCursor ()
TESTDLLSORT_API bool vtkRenderWindow_GetCurrentCursor_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetCurrentCursor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCurrentCursor();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetFullScreen(int ARG_0)
// virtual void SetFullScreen(int)
TESTDLLSORT_API bool vtkRenderWindow_SetFullScreen_0(vtkRenderWindow * callingObject, int ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetFullScreen]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetFullScreen(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetFullScreen()
// virtual int GetFullScreen ()
TESTDLLSORT_API bool vtkRenderWindow_GetFullScreen_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetFullScreen]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetFullScreen();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void FullScreenOn()
// virtual void FullScreenOn ()
TESTDLLSORT_API bool vtkRenderWindow_FullScreenOn_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::FullScreenOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->FullScreenOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void FullScreenOff()
// virtual void FullScreenOff ()
TESTDLLSORT_API bool vtkRenderWindow_FullScreenOff_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::FullScreenOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->FullScreenOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetBorders(int _arg)
// virtual void SetBorders (int _arg)
TESTDLLSORT_API bool vtkRenderWindow_SetBorders_0(vtkRenderWindow * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetBorders]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetBorders(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetBorders()
// virtual int GetBorders ()
TESTDLLSORT_API bool vtkRenderWindow_GetBorders_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetBorders]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetBorders();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void BordersOn()
// virtual void BordersOn ()
TESTDLLSORT_API bool vtkRenderWindow_BordersOn_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::BordersOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->BordersOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void BordersOff()
// virtual void BordersOff ()
TESTDLLSORT_API bool vtkRenderWindow_BordersOff_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::BordersOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->BordersOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetStereoCapableWindow()
// virtual int GetStereoCapableWindow ()
TESTDLLSORT_API bool vtkRenderWindow_GetStereoCapableWindow_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetStereoCapableWindow]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetStereoCapableWindow();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void StereoCapableWindowOn()
// virtual void StereoCapableWindowOn ()
TESTDLLSORT_API bool vtkRenderWindow_StereoCapableWindowOn_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::StereoCapableWindowOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->StereoCapableWindowOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void StereoCapableWindowOff()
// virtual void StereoCapableWindowOff ()
TESTDLLSORT_API bool vtkRenderWindow_StereoCapableWindowOff_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::StereoCapableWindowOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->StereoCapableWindowOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetStereoCapableWindow(int capable)
// virtual void SetStereoCapableWindow(int capable)
TESTDLLSORT_API bool vtkRenderWindow_SetStereoCapableWindow_0(vtkRenderWindow * callingObject, int capable) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetStereoCapableWindow]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetStereoCapableWindow(capable);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetStereoRender()
// virtual int GetStereoRender ()
TESTDLLSORT_API bool vtkRenderWindow_GetStereoRender_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetStereoRender]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetStereoRender();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetStereoRender(int stereo)
// void SetStereoRender(int stereo)
TESTDLLSORT_API bool vtkRenderWindow_SetStereoRender_0(vtkRenderWindow * callingObject, int stereo) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetStereoRender]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetStereoRender(stereo);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void StereoRenderOn()
// virtual void StereoRenderOn ()
TESTDLLSORT_API bool vtkRenderWindow_StereoRenderOn_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::StereoRenderOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->StereoRenderOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void StereoRenderOff()
// virtual void StereoRenderOff ()
TESTDLLSORT_API bool vtkRenderWindow_StereoRenderOff_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::StereoRenderOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->StereoRenderOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetAlphaBitPlanes(int _arg)
// virtual void SetAlphaBitPlanes (int _arg)
TESTDLLSORT_API bool vtkRenderWindow_SetAlphaBitPlanes_0(vtkRenderWindow * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetAlphaBitPlanes]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAlphaBitPlanes(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetAlphaBitPlanes()
// virtual int GetAlphaBitPlanes ()
TESTDLLSORT_API bool vtkRenderWindow_GetAlphaBitPlanes_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetAlphaBitPlanes]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAlphaBitPlanes();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void AlphaBitPlanesOn()
// virtual void AlphaBitPlanesOn ()
TESTDLLSORT_API bool vtkRenderWindow_AlphaBitPlanesOn_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::AlphaBitPlanesOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AlphaBitPlanesOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void AlphaBitPlanesOff()
// virtual void AlphaBitPlanesOff ()
TESTDLLSORT_API bool vtkRenderWindow_AlphaBitPlanesOff_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::AlphaBitPlanesOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AlphaBitPlanesOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetPointSmoothing(int _arg)
// virtual void SetPointSmoothing (int _arg)
TESTDLLSORT_API bool vtkRenderWindow_SetPointSmoothing_0(vtkRenderWindow * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetPointSmoothing]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetPointSmoothing(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetPointSmoothing()
// virtual int GetPointSmoothing ()
TESTDLLSORT_API bool vtkRenderWindow_GetPointSmoothing_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetPointSmoothing]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPointSmoothing();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void PointSmoothingOn()
// virtual void PointSmoothingOn ()
TESTDLLSORT_API bool vtkRenderWindow_PointSmoothingOn_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::PointSmoothingOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->PointSmoothingOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void PointSmoothingOff()
// virtual void PointSmoothingOff ()
TESTDLLSORT_API bool vtkRenderWindow_PointSmoothingOff_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::PointSmoothingOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->PointSmoothingOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetLineSmoothing(int _arg)
// virtual void SetLineSmoothing (int _arg)
TESTDLLSORT_API bool vtkRenderWindow_SetLineSmoothing_0(vtkRenderWindow * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetLineSmoothing]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetLineSmoothing(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetLineSmoothing()
// virtual int GetLineSmoothing ()
TESTDLLSORT_API bool vtkRenderWindow_GetLineSmoothing_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetLineSmoothing]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetLineSmoothing();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void LineSmoothingOn()
// virtual void LineSmoothingOn ()
TESTDLLSORT_API bool vtkRenderWindow_LineSmoothingOn_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::LineSmoothingOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->LineSmoothingOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void LineSmoothingOff()
// virtual void LineSmoothingOff ()
TESTDLLSORT_API bool vtkRenderWindow_LineSmoothingOff_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::LineSmoothingOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->LineSmoothingOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetPolygonSmoothing(int _arg)
// virtual void SetPolygonSmoothing (int _arg)
TESTDLLSORT_API bool vtkRenderWindow_SetPolygonSmoothing_0(vtkRenderWindow * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetPolygonSmoothing]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetPolygonSmoothing(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetPolygonSmoothing()
// virtual int GetPolygonSmoothing ()
TESTDLLSORT_API bool vtkRenderWindow_GetPolygonSmoothing_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetPolygonSmoothing]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPolygonSmoothing();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void PolygonSmoothingOn()
// virtual void PolygonSmoothingOn ()
TESTDLLSORT_API bool vtkRenderWindow_PolygonSmoothingOn_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::PolygonSmoothingOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->PolygonSmoothingOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void PolygonSmoothingOff()
// virtual void PolygonSmoothingOff ()
TESTDLLSORT_API bool vtkRenderWindow_PolygonSmoothingOff_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::PolygonSmoothingOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->PolygonSmoothingOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetStereoType()
// virtual int GetStereoType ()
TESTDLLSORT_API bool vtkRenderWindow_GetStereoType_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetStereoType]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetStereoType();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetStereoType(int _arg)
// virtual void SetStereoType (int _arg)
TESTDLLSORT_API bool vtkRenderWindow_SetStereoType_0(vtkRenderWindow * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetStereoType]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetStereoType(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetStereoTypeToCrystalEyes()
// void SetStereoTypeToCrystalEyes()
TESTDLLSORT_API bool vtkRenderWindow_SetStereoTypeToCrystalEyes_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetStereoTypeToCrystalEyes]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetStereoTypeToCrystalEyes();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetStereoTypeToRedBlue()
// void SetStereoTypeToRedBlue()
TESTDLLSORT_API bool vtkRenderWindow_SetStereoTypeToRedBlue_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetStereoTypeToRedBlue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetStereoTypeToRedBlue();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetStereoTypeToInterlaced()
// void SetStereoTypeToInterlaced()
TESTDLLSORT_API bool vtkRenderWindow_SetStereoTypeToInterlaced_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetStereoTypeToInterlaced]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetStereoTypeToInterlaced();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetStereoTypeToLeft()
// void SetStereoTypeToLeft()
TESTDLLSORT_API bool vtkRenderWindow_SetStereoTypeToLeft_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetStereoTypeToLeft]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetStereoTypeToLeft();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetStereoTypeToRight()
// void SetStereoTypeToRight()
TESTDLLSORT_API bool vtkRenderWindow_SetStereoTypeToRight_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetStereoTypeToRight]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetStereoTypeToRight();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetStereoTypeToDresden()
// void SetStereoTypeToDresden()
TESTDLLSORT_API bool vtkRenderWindow_SetStereoTypeToDresden_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetStereoTypeToDresden]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetStereoTypeToDresden();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetStereoTypeToAnaglyph()
// void SetStereoTypeToAnaglyph()
TESTDLLSORT_API bool vtkRenderWindow_SetStereoTypeToAnaglyph_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetStereoTypeToAnaglyph]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetStereoTypeToAnaglyph();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetStereoTypeToCheckerboard()
// void SetStereoTypeToCheckerboard()
TESTDLLSORT_API bool vtkRenderWindow_SetStereoTypeToCheckerboard_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetStereoTypeToCheckerboard]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetStereoTypeToCheckerboard();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetStereoTypeToSplitViewportHorizontal()
// void SetStereoTypeToSplitViewportHorizontal()
TESTDLLSORT_API bool vtkRenderWindow_SetStereoTypeToSplitViewportHorizontal_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetStereoTypeToSplitViewportHorizontal]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetStereoTypeToSplitViewportHorizontal();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetStereoTypeToFake()
// void SetStereoTypeToFake()
TESTDLLSORT_API bool vtkRenderWindow_SetStereoTypeToFake_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetStereoTypeToFake]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetStereoTypeToFake();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char* GetStereoTypeAsString()
// const char *GetStereoTypeAsString()
TESTDLLSORT_API bool vtkRenderWindow_GetStereoTypeAsString_0(const char ** return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetStereoTypeAsString]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetStereoTypeAsString();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void StereoUpdate()
// virtual void StereoUpdate()
TESTDLLSORT_API bool vtkRenderWindow_StereoUpdate_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::StereoUpdate]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->StereoUpdate();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void StereoMidpoint()
// virtual void StereoMidpoint()
TESTDLLSORT_API bool vtkRenderWindow_StereoMidpoint_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::StereoMidpoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->StereoMidpoint();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void StereoRenderComplete()
// virtual void StereoRenderComplete()
TESTDLLSORT_API bool vtkRenderWindow_StereoRenderComplete_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::StereoRenderComplete]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->StereoRenderComplete();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetAnaglyphColorSaturation(float _arg)
// virtual void SetAnaglyphColorSaturation (float _arg)
TESTDLLSORT_API bool vtkRenderWindow_SetAnaglyphColorSaturation_0(vtkRenderWindow * callingObject, float _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetAnaglyphColorSaturation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAnaglyphColorSaturation(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual float GetAnaglyphColorSaturationMinValue()
// virtual float GetAnaglyphColorSaturationMinValue ()
TESTDLLSORT_API bool vtkRenderWindow_GetAnaglyphColorSaturationMinValue_0(float * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetAnaglyphColorSaturationMinValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAnaglyphColorSaturationMinValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual float GetAnaglyphColorSaturationMaxValue()
// virtual float GetAnaglyphColorSaturationMaxValue ()
TESTDLLSORT_API bool vtkRenderWindow_GetAnaglyphColorSaturationMaxValue_0(float * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetAnaglyphColorSaturationMaxValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAnaglyphColorSaturationMaxValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual float GetAnaglyphColorSaturation()
// virtual float GetAnaglyphColorSaturation ()
TESTDLLSORT_API bool vtkRenderWindow_GetAnaglyphColorSaturation_0(float * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetAnaglyphColorSaturation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAnaglyphColorSaturation();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetAnaglyphColorMask(int _arg1, int _arg2)
// virtual void SetAnaglyphColorMask (int _arg1, int _arg2)
TESTDLLSORT_API bool vtkRenderWindow_SetAnaglyphColorMask_0(vtkRenderWindow * callingObject, int _arg1, int _arg2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetAnaglyphColorMask]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAnaglyphColorMask(_arg1, _arg2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetAnaglyphColorMask(int _arg[2])
// void SetAnaglyphColorMask (int _arg[2])
TESTDLLSORT_API bool vtkRenderWindow_SetAnaglyphColorMask_1(vtkRenderWindow * callingObject, int _arg[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetAnaglyphColorMask]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAnaglyphColorMask(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int* GetAnaglyphColorMask()
// virtual int *GetAnaglyphColorMask ()
TESTDLLSORT_API bool vtkRenderWindow_GetAnaglyphColorMask_0(int ** return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetAnaglyphColorMask]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAnaglyphColorMask();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetAnaglyphColorMask(int data[2])
// virtual void GetAnaglyphColorMask (int data[2])
TESTDLLSORT_API bool vtkRenderWindow_GetAnaglyphColorMask_1(vtkRenderWindow * callingObject, int data[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetAnaglyphColorMask]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetAnaglyphColorMask(data);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void WindowRemap()
// virtual void WindowRemap()
TESTDLLSORT_API bool vtkRenderWindow_WindowRemap_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::WindowRemap]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->WindowRemap();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetSwapBuffers(int _arg)
// virtual void SetSwapBuffers (int _arg)
TESTDLLSORT_API bool vtkRenderWindow_SetSwapBuffers_0(vtkRenderWindow * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetSwapBuffers]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetSwapBuffers(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetSwapBuffers()
// virtual int GetSwapBuffers ()
TESTDLLSORT_API bool vtkRenderWindow_GetSwapBuffers_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetSwapBuffers]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetSwapBuffers();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SwapBuffersOn()
// virtual void SwapBuffersOn ()
TESTDLLSORT_API bool vtkRenderWindow_SwapBuffersOn_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SwapBuffersOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SwapBuffersOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SwapBuffersOff()
// virtual void SwapBuffersOff ()
TESTDLLSORT_API bool vtkRenderWindow_SwapBuffersOff_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SwapBuffersOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SwapBuffersOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int SetPixelData(int x, int y, int x2, int y2, unsigned char * data, int front, int right = 0)
// virtual int SetPixelData(int x, int y, int x2, int y2, unsigned char *data, int front, int right=0)
TESTDLLSORT_API bool vtkRenderWindow_SetPixelData_0(int * return_value, vtkRenderWindow * callingObject, int x, int y, int x2, int y2, unsigned char * data, int front, int right = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetPixelData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetPixelData(x, y, x2, y2, data, front, right);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int SetPixelData(int x, int y, int x2, int y2, vtkUnsignedCharArray * data, int front, int right = 0)
// virtual int SetPixelData(int x, int y, int x2, int y2, vtkUnsignedCharArray *data, int front, int right=0)
TESTDLLSORT_API bool vtkRenderWindow_SetPixelData_1(int * return_value, vtkRenderWindow * callingObject, int x, int y, int x2, int y2, vtkUnsignedCharArray * data, int front, int right = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetPixelData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetPixelData(x, y, x2, y2, data, front, right);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual float* GetRGBAPixelData(int x, int y, int x2, int y2, int front, int right = 0)
// virtual float *GetRGBAPixelData(int x, int y, int x2, int y2, int front, int right=0)
TESTDLLSORT_API bool vtkRenderWindow_GetRGBAPixelData_0(float ** return_value, vtkRenderWindow * callingObject, int x, int y, int x2, int y2, int front, int right = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetRGBAPixelData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetRGBAPixelData(x, y, x2, y2, front, right);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetRGBAPixelData(int x, int y, int x2, int y2, int front, vtkFloatArray * data, int right = 0)
// virtual int GetRGBAPixelData(int x, int y, int x2, int y2, int front, vtkFloatArray *data, int right=0)
TESTDLLSORT_API bool vtkRenderWindow_GetRGBAPixelData_1(int * return_value, vtkRenderWindow * callingObject, int x, int y, int x2, int y2, int front, vtkFloatArray * data, int right = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetRGBAPixelData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetRGBAPixelData(x, y, x2, y2, front, data, right);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int SetRGBAPixelData(int x, int y, int x2, int y2, float * ARG_0, int front, int blend = 0, int right = 0)
// virtual int SetRGBAPixelData(int x, int y, int x2, int y2, float *, int front, int blend=0, int right=0)
TESTDLLSORT_API bool vtkRenderWindow_SetRGBAPixelData_0(int * return_value, vtkRenderWindow * callingObject, int x, int y, int x2, int y2, float * ARG_0, int front, int blend = 0, int right = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetRGBAPixelData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetRGBAPixelData(x, y, x2, y2, ARG_0, front, blend, right);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int SetRGBAPixelData(int ARG_0, int ARG_1, int ARG_2, int ARG_3, vtkFloatArray * ARG_4, int ARG_5, int blend = 0, int right = 0)
// virtual int SetRGBAPixelData(int, int, int, int, vtkFloatArray*, int, int blend=0, int right=0)
TESTDLLSORT_API bool vtkRenderWindow_SetRGBAPixelData_1(int * return_value, vtkRenderWindow * callingObject, int ARG_0, int ARG_1, int ARG_2, int ARG_3, vtkFloatArray * ARG_4, int ARG_5, int blend = 0, int right = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetRGBAPixelData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetRGBAPixelData(ARG_0, ARG_1, ARG_2, ARG_3, ARG_4, ARG_5, blend, right);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ReleaseRGBAPixelData(float * data)
// virtual void ReleaseRGBAPixelData(float *data)
TESTDLLSORT_API bool vtkRenderWindow_ReleaseRGBAPixelData_0(vtkRenderWindow * callingObject, float * data) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::ReleaseRGBAPixelData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ReleaseRGBAPixelData(data);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual char* GetRGBACharPixelData(int x, int y, int x2, int y2, int front, int right = 0)
// virtual unsigned char *GetRGBACharPixelData(int x, int y, int x2, int y2, int front, int right=0)
TESTDLLSORT_API bool vtkRenderWindow_GetRGBACharPixelData_0(unsigned char ** return_value, vtkRenderWindow * callingObject, int x, int y, int x2, int y2, int front, int right = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetRGBACharPixelData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetRGBACharPixelData(x, y, x2, y2, front, right);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetRGBACharPixelData(int x, int y, int x2, int y2, int front, vtkUnsignedCharArray * data, int right = 0)
// virtual int GetRGBACharPixelData(int x, int y, int x2, int y2, int front, vtkUnsignedCharArray *data, int right=0)
TESTDLLSORT_API bool vtkRenderWindow_GetRGBACharPixelData_1(int * return_value, vtkRenderWindow * callingObject, int x, int y, int x2, int y2, int front, vtkUnsignedCharArray * data, int right = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetRGBACharPixelData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetRGBACharPixelData(x, y, x2, y2, front, data, right);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int SetRGBACharPixelData(int x, int y, int x2, int y2, unsigned char * data, int front, int blend = 0, int right = 0)
// virtual int SetRGBACharPixelData(int x,int y, int x2, int y2, unsigned char *data, int front, int blend=0, int right=0)
TESTDLLSORT_API bool vtkRenderWindow_SetRGBACharPixelData_0(int * return_value, vtkRenderWindow * callingObject, int x, int y, int x2, int y2, unsigned char * data, int front, int blend = 0, int right = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetRGBACharPixelData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetRGBACharPixelData(x, y, x2, y2, data, front, blend, right);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int SetRGBACharPixelData(int x, int y, int x2, int y2, vtkUnsignedCharArray * data, int front, int blend = 0, int right = 0)
// virtual int SetRGBACharPixelData(int x, int y, int x2, int y2, vtkUnsignedCharArray *data, int front, int blend=0, int right=0)
TESTDLLSORT_API bool vtkRenderWindow_SetRGBACharPixelData_1(int * return_value, vtkRenderWindow * callingObject, int x, int y, int x2, int y2, vtkUnsignedCharArray * data, int front, int blend = 0, int right = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetRGBACharPixelData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetRGBACharPixelData(x, y, x2, y2, data, front, blend, right);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual float* GetZbufferData(int x, int y, int x2, int y2)
// virtual float *GetZbufferData(int x, int y, int x2, int y2)
TESTDLLSORT_API bool vtkRenderWindow_GetZbufferData_0(float ** return_value, vtkRenderWindow * callingObject, int x, int y, int x2, int y2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetZbufferData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetZbufferData(x, y, x2, y2);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetZbufferData(int x, int y, int x2, int y2, float * z)
// virtual int GetZbufferData(int x, int y, int x2, int y2, float *z)
TESTDLLSORT_API bool vtkRenderWindow_GetZbufferData_1(int * return_value, vtkRenderWindow * callingObject, int x, int y, int x2, int y2, float * z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetZbufferData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetZbufferData(x, y, x2, y2, z);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetZbufferData(int x, int y, int x2, int y2, vtkFloatArray * z)
// virtual int GetZbufferData(int x, int y, int x2, int y2, vtkFloatArray *z)
TESTDLLSORT_API bool vtkRenderWindow_GetZbufferData_2(int * return_value, vtkRenderWindow * callingObject, int x, int y, int x2, int y2, vtkFloatArray * z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetZbufferData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetZbufferData(x, y, x2, y2, z);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int SetZbufferData(int x, int y, int x2, int y2, float * z)
// virtual int SetZbufferData(int x, int y, int x2, int y2, float *z)
TESTDLLSORT_API bool vtkRenderWindow_SetZbufferData_0(int * return_value, vtkRenderWindow * callingObject, int x, int y, int x2, int y2, float * z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetZbufferData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetZbufferData(x, y, x2, y2, z);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int SetZbufferData(int x, int y, int x2, int y2, vtkFloatArray * z)
// virtual int SetZbufferData(int x, int y, int x2, int y2, vtkFloatArray *z)
TESTDLLSORT_API bool vtkRenderWindow_SetZbufferData_1(int * return_value, vtkRenderWindow * callingObject, int x, int y, int x2, int y2, vtkFloatArray * z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetZbufferData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetZbufferData(x, y, x2, y2, z);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// float GetZbufferDataAtPoint(int x, int y)
// float GetZbufferDataAtPoint(int x, int y)
TESTDLLSORT_API bool vtkRenderWindow_GetZbufferDataAtPoint_0(float * return_value, vtkRenderWindow * callingObject, int x, int y) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetZbufferDataAtPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetZbufferDataAtPoint(x, y);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetNeverRendered()
// virtual int GetNeverRendered ()
TESTDLLSORT_API bool vtkRenderWindow_GetNeverRendered_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetNeverRendered]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNeverRendered();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetAbortRender()
// virtual int GetAbortRender ()
TESTDLLSORT_API bool vtkRenderWindow_GetAbortRender_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetAbortRender]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAbortRender();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetAbortRender(int _arg)
// virtual void SetAbortRender (int _arg)
TESTDLLSORT_API bool vtkRenderWindow_SetAbortRender_0(vtkRenderWindow * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetAbortRender]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAbortRender(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetInAbortCheck()
// virtual int GetInAbortCheck ()
TESTDLLSORT_API bool vtkRenderWindow_GetInAbortCheck_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetInAbortCheck]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInAbortCheck();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetInAbortCheck(int _arg)
// virtual void SetInAbortCheck (int _arg)
TESTDLLSORT_API bool vtkRenderWindow_SetInAbortCheck_0(vtkRenderWindow * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetInAbortCheck]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetInAbortCheck(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int CheckAbortStatus()
// virtual int CheckAbortStatus()
TESTDLLSORT_API bool vtkRenderWindow_CheckAbortStatus_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::CheckAbortStatus]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->CheckAbortStatus();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetIsPicking()
// virtual int GetIsPicking ()
TESTDLLSORT_API bool vtkRenderWindow_GetIsPicking_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetIsPicking]:[";
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

// virtual void SetIsPicking(int _arg)
// virtual void SetIsPicking (int _arg)
TESTDLLSORT_API bool vtkRenderWindow_SetIsPicking_0(vtkRenderWindow * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetIsPicking]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetIsPicking(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void IsPickingOn()
// virtual void IsPickingOn ()
TESTDLLSORT_API bool vtkRenderWindow_IsPickingOn_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::IsPickingOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->IsPickingOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void IsPickingOff()
// virtual void IsPickingOff ()
TESTDLLSORT_API bool vtkRenderWindow_IsPickingOff_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::IsPickingOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->IsPickingOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetEventPending()
// virtual int GetEventPending()
TESTDLLSORT_API bool vtkRenderWindow_GetEventPending_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetEventPending]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetEventPending();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int CheckInRenderStatus()
// virtual int CheckInRenderStatus()
TESTDLLSORT_API bool vtkRenderWindow_CheckInRenderStatus_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::CheckInRenderStatus]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->CheckInRenderStatus();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ClearInRenderStatus()
// virtual void ClearInRenderStatus()
TESTDLLSORT_API bool vtkRenderWindow_ClearInRenderStatus_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::ClearInRenderStatus]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ClearInRenderStatus();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetDesiredUpdateRate(double ARG_0)
// virtual void SetDesiredUpdateRate(double)
TESTDLLSORT_API bool vtkRenderWindow_SetDesiredUpdateRate_0(vtkRenderWindow * callingObject, double ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetDesiredUpdateRate]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetDesiredUpdateRate(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetDesiredUpdateRate()
// virtual double GetDesiredUpdateRate ()
TESTDLLSORT_API bool vtkRenderWindow_GetDesiredUpdateRate_0(double * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetDesiredUpdateRate]:[";
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

// virtual int GetNumberOfLayers()
// virtual int GetNumberOfLayers ()
TESTDLLSORT_API bool vtkRenderWindow_GetNumberOfLayers_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetNumberOfLayers]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfLayers();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetNumberOfLayers(int _arg)
// virtual void SetNumberOfLayers (int _arg)
TESTDLLSORT_API bool vtkRenderWindow_SetNumberOfLayers_0(vtkRenderWindow * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetNumberOfLayers]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetNumberOfLayers(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetNumberOfLayersMinValue()
// virtual int GetNumberOfLayersMinValue ()
TESTDLLSORT_API bool vtkRenderWindow_GetNumberOfLayersMinValue_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetNumberOfLayersMinValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfLayersMinValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetNumberOfLayersMaxValue()
// virtual int GetNumberOfLayersMaxValue ()
TESTDLLSORT_API bool vtkRenderWindow_GetNumberOfLayersMaxValue_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetNumberOfLayersMaxValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfLayersMaxValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkRenderWindowInteractor* GetInteractor()
// virtual vtkRenderWindowInteractor *GetInteractor ()
TESTDLLSORT_API bool vtkRenderWindow_GetInteractor_0(vtkRenderWindowInteractor ** return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetInteractor]:[";
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

// void SetInteractor(vtkRenderWindowInteractor * ARG_0)
// void SetInteractor(vtkRenderWindowInteractor *)
TESTDLLSORT_API bool vtkRenderWindow_SetInteractor_0(vtkRenderWindow * callingObject, vtkRenderWindowInteractor * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetInteractor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetInteractor(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void UnRegister(vtkObjectBase * o)
// void UnRegister(vtkObjectBase *o)
TESTDLLSORT_API bool vtkRenderWindow_UnRegister_0(vtkRenderWindow * callingObject, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::UnRegister]:[";
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

// void SetDisplayId(void * ARG_0)
// void SetDisplayId(void *)
TESTDLLSORT_API bool vtkRenderWindow_SetDisplayId_0(vtkRenderWindow * callingObject, void * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetDisplayId]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetDisplayId(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetWindowId(void * ARG_0)
// void SetWindowId(void *)
TESTDLLSORT_API bool vtkRenderWindow_SetWindowId_0(vtkRenderWindow * callingObject, void * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetWindowId]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetWindowId(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetNextWindowId(void * ARG_0)
// virtual void SetNextWindowId(void *)
TESTDLLSORT_API bool vtkRenderWindow_SetNextWindowId_0(vtkRenderWindow * callingObject, void * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetNextWindowId]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetNextWindowId(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetParentId(void * ARG_0)
// void SetParentId(void *)
TESTDLLSORT_API bool vtkRenderWindow_SetParentId_0(vtkRenderWindow * callingObject, void * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetParentId]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetParentId(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void* GetGenericDisplayId()
// void *GetGenericDisplayId()
TESTDLLSORT_API bool vtkRenderWindow_GetGenericDisplayId_0(void ** return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetGenericDisplayId]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetGenericDisplayId();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void* GetGenericWindowId()
// void *GetGenericWindowId()
TESTDLLSORT_API bool vtkRenderWindow_GetGenericWindowId_0(void ** return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetGenericWindowId]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetGenericWindowId();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void* GetGenericParentId()
// void *GetGenericParentId()
TESTDLLSORT_API bool vtkRenderWindow_GetGenericParentId_0(void ** return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetGenericParentId]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetGenericParentId();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void* GetGenericContext()
// void *GetGenericContext()
TESTDLLSORT_API bool vtkRenderWindow_GetGenericContext_0(void ** return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetGenericContext]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetGenericContext();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void* GetGenericDrawable()
// void *GetGenericDrawable()
TESTDLLSORT_API bool vtkRenderWindow_GetGenericDrawable_0(void ** return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetGenericDrawable]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetGenericDrawable();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetWindowInfo(char * ARG_0)
// void SetWindowInfo(char *)
TESTDLLSORT_API bool vtkRenderWindow_SetWindowInfo_0(vtkRenderWindow * callingObject, char * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetWindowInfo]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetWindowInfo(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetNextWindowInfo(char * ARG_0)
// virtual void SetNextWindowInfo(char *)
TESTDLLSORT_API bool vtkRenderWindow_SetNextWindowInfo_0(vtkRenderWindow * callingObject, char * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetNextWindowInfo]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetNextWindowInfo(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetParentInfo(char * ARG_0)
// void SetParentInfo(char *)
TESTDLLSORT_API bool vtkRenderWindow_SetParentInfo_0(vtkRenderWindow * callingObject, char * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetParentInfo]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetParentInfo(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual bool InitializeFromCurrentContext()
// virtual bool InitializeFromCurrentContext()
TESTDLLSORT_API bool vtkRenderWindow_InitializeFromCurrentContext_0(bool * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::InitializeFromCurrentContext]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InitializeFromCurrentContext();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void MakeCurrent()
// void MakeCurrent()
TESTDLLSORT_API bool vtkRenderWindow_MakeCurrent_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::MakeCurrent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->MakeCurrent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual bool IsCurrent()
// virtual bool IsCurrent()
TESTDLLSORT_API bool vtkRenderWindow_IsCurrent_0(bool * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::IsCurrent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->IsCurrent();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual bool IsDrawable()
// virtual bool IsDrawable()
TESTDLLSORT_API bool vtkRenderWindow_IsDrawable_0(bool * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::IsDrawable]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->IsDrawable();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetForceMakeCurrent()
// virtual void SetForceMakeCurrent()
TESTDLLSORT_API bool vtkRenderWindow_SetForceMakeCurrent_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetForceMakeCurrent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetForceMakeCurrent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual char* ReportCapabilities()
// virtual const char *ReportCapabilities()
TESTDLLSORT_API bool vtkRenderWindow_ReportCapabilities_0(const char ** return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::ReportCapabilities]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->ReportCapabilities();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int SupportsOpenGL()
// virtual int SupportsOpenGL()
TESTDLLSORT_API bool vtkRenderWindow_SupportsOpenGL_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SupportsOpenGL]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SupportsOpenGL();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int IsDirect()
// virtual int IsDirect()
TESTDLLSORT_API bool vtkRenderWindow_IsDirect_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::IsDirect]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->IsDirect();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetDepthBufferSize()
// virtual int GetDepthBufferSize()
TESTDLLSORT_API bool vtkRenderWindow_GetDepthBufferSize_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetDepthBufferSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDepthBufferSize();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetColorBufferSizes(int * rgba)
// virtual int GetColorBufferSizes(int *rgba)
TESTDLLSORT_API bool vtkRenderWindow_GetColorBufferSizes_0(int * return_value, vtkRenderWindow * callingObject, int * rgba) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetColorBufferSizes]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetColorBufferSizes(rgba);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetMultiSamples(int _arg)
// virtual void SetMultiSamples (int _arg)
TESTDLLSORT_API bool vtkRenderWindow_SetMultiSamples_0(vtkRenderWindow * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetMultiSamples]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetMultiSamples(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetMultiSamples()
// virtual int GetMultiSamples ()
TESTDLLSORT_API bool vtkRenderWindow_GetMultiSamples_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetMultiSamples]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetMultiSamples();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetStencilCapable(int _arg)
// virtual void SetStencilCapable (int _arg)
TESTDLLSORT_API bool vtkRenderWindow_SetStencilCapable_0(vtkRenderWindow * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetStencilCapable]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetStencilCapable(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetStencilCapable()
// virtual int GetStencilCapable ()
TESTDLLSORT_API bool vtkRenderWindow_GetStencilCapable_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetStencilCapable]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetStencilCapable();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void StencilCapableOn()
// virtual void StencilCapableOn ()
TESTDLLSORT_API bool vtkRenderWindow_StencilCapableOn_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::StencilCapableOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->StencilCapableOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void StencilCapableOff()
// virtual void StencilCapableOff ()
TESTDLLSORT_API bool vtkRenderWindow_StencilCapableOff_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::StencilCapableOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->StencilCapableOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetDeviceIndex(int _arg)
// virtual void SetDeviceIndex (int _arg)
TESTDLLSORT_API bool vtkRenderWindow_SetDeviceIndex_0(vtkRenderWindow * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetDeviceIndex]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetDeviceIndex(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetDeviceIndex()
// virtual int GetDeviceIndex ()
TESTDLLSORT_API bool vtkRenderWindow_GetDeviceIndex_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetDeviceIndex]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDeviceIndex();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetNumberOfDevices()
// virtual int GetNumberOfDevices()
TESTDLLSORT_API bool vtkRenderWindow_GetNumberOfDevices_0(int * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetNumberOfDevices]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfDevices();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int SetUseOffScreenBuffers(bool ARG_0)
// virtual int SetUseOffScreenBuffers(bool)
TESTDLLSORT_API bool vtkRenderWindow_SetUseOffScreenBuffers_0(int * return_value, vtkRenderWindow * callingObject, bool ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetUseOffScreenBuffers]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetUseOffScreenBuffers(ARG_0);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual bool GetUseOffScreenBuffers()
// virtual bool GetUseOffScreenBuffers()
TESTDLLSORT_API bool vtkRenderWindow_GetUseOffScreenBuffers_0(bool * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetUseOffScreenBuffers]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUseOffScreenBuffers();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual bool GetUseSRGBColorSpace()
// virtual bool GetUseSRGBColorSpace ()
TESTDLLSORT_API bool vtkRenderWindow_GetUseSRGBColorSpace_0(bool * return_value, vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::GetUseSRGBColorSpace]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUseSRGBColorSpace();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetUseSRGBColorSpace(bool _arg)
// virtual void SetUseSRGBColorSpace (bool _arg)
TESTDLLSORT_API bool vtkRenderWindow_SetUseSRGBColorSpace_0(vtkRenderWindow * callingObject, bool _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::SetUseSRGBColorSpace]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetUseSRGBColorSpace(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseSRGBColorSpaceOn()
// virtual void UseSRGBColorSpaceOn ()
TESTDLLSORT_API bool vtkRenderWindow_UseSRGBColorSpaceOn_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::UseSRGBColorSpaceOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseSRGBColorSpaceOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseSRGBColorSpaceOff()
// virtual void UseSRGBColorSpaceOff ()
TESTDLLSORT_API bool vtkRenderWindow_UseSRGBColorSpaceOff_0(vtkRenderWindow * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderWindow::UseSRGBColorSpaceOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseSRGBColorSpaceOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
