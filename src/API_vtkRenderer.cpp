
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkRenderer.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkRenderer_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkRenderer::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkRenderer_IsA_0(vtkTypeBool * return_value, vtkRenderer * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::IsA]:[";
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

// static vtkRenderer* SafeDownCast(vtkObjectBase * o)
// static vtkRenderer* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkRenderer_SafeDownCast_0(vtkRenderer ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkRenderer::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkRenderer* NewInstance()
// vtkRenderer *NewInstance()
TESTDLLSORT_API bool vtkRenderer_NewInstance_0(vtkRenderer ** return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::NewInstance]:[";
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

// static vtkRenderer* New()
// static vtkRenderer *New()
TESTDLLSORT_API bool vtkRenderer_New_0(vtkRenderer ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkRenderer::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AddActor(vtkProp * p)
// void AddActor(vtkProp *p)
TESTDLLSORT_API bool vtkRenderer_AddActor_0(vtkRenderer * callingObject, vtkProp * p) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::AddActor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AddActor(p);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AddVolume(vtkProp * p)
// void AddVolume(vtkProp *p)
TESTDLLSORT_API bool vtkRenderer_AddVolume_0(vtkRenderer * callingObject, vtkProp * p) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::AddVolume]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AddVolume(p);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void RemoveActor(vtkProp * p)
// void RemoveActor(vtkProp *p)
TESTDLLSORT_API bool vtkRenderer_RemoveActor_0(vtkRenderer * callingObject, vtkProp * p) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::RemoveActor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveActor(p);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void RemoveVolume(vtkProp * p)
// void RemoveVolume(vtkProp *p)
TESTDLLSORT_API bool vtkRenderer_RemoveVolume_0(vtkRenderer * callingObject, vtkProp * p) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::RemoveVolume]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveVolume(p);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AddLight(vtkLight * ARG_0)
// void AddLight(vtkLight *)
TESTDLLSORT_API bool vtkRenderer_AddLight_0(vtkRenderer * callingObject, vtkLight * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::AddLight]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AddLight(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void RemoveLight(vtkLight * ARG_0)
// void RemoveLight(vtkLight *)
TESTDLLSORT_API bool vtkRenderer_RemoveLight_0(vtkRenderer * callingObject, vtkLight * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::RemoveLight]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveLight(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void RemoveAllLights()
// void RemoveAllLights()
TESTDLLSORT_API bool vtkRenderer_RemoveAllLights_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::RemoveAllLights]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveAllLights();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkLightCollection* GetLights()
// vtkLightCollection *GetLights()
TESTDLLSORT_API bool vtkRenderer_GetLights_0(vtkLightCollection ** return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetLights]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetLights();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetLightCollection(vtkLightCollection * lights)
// void SetLightCollection(vtkLightCollection *lights)
TESTDLLSORT_API bool vtkRenderer_SetLightCollection_0(vtkRenderer * callingObject, vtkLightCollection * lights) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetLightCollection]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetLightCollection(lights);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CreateLight()
// void CreateLight(void)
TESTDLLSORT_API bool vtkRenderer_CreateLight_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::CreateLight]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CreateLight();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkLight* MakeLight()
// virtual vtkLight *MakeLight()
TESTDLLSORT_API bool vtkRenderer_MakeLight_0(vtkLight ** return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::MakeLight]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->MakeLight();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetTwoSidedLighting()
// virtual int GetTwoSidedLighting ()
TESTDLLSORT_API bool vtkRenderer_GetTwoSidedLighting_0(int * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetTwoSidedLighting]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTwoSidedLighting();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetTwoSidedLighting(int _arg)
// virtual void SetTwoSidedLighting (int _arg)
TESTDLLSORT_API bool vtkRenderer_SetTwoSidedLighting_0(vtkRenderer * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetTwoSidedLighting]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTwoSidedLighting(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void TwoSidedLightingOn()
// virtual void TwoSidedLightingOn ()
TESTDLLSORT_API bool vtkRenderer_TwoSidedLightingOn_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::TwoSidedLightingOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->TwoSidedLightingOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void TwoSidedLightingOff()
// virtual void TwoSidedLightingOff ()
TESTDLLSORT_API bool vtkRenderer_TwoSidedLightingOff_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::TwoSidedLightingOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->TwoSidedLightingOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetLightFollowCamera(int _arg)
// virtual void SetLightFollowCamera (int _arg)
TESTDLLSORT_API bool vtkRenderer_SetLightFollowCamera_0(vtkRenderer * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetLightFollowCamera]:[";
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
TESTDLLSORT_API bool vtkRenderer_GetLightFollowCamera_0(int * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetLightFollowCamera]:[";
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
TESTDLLSORT_API bool vtkRenderer_LightFollowCameraOn_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::LightFollowCameraOn]:[";
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
TESTDLLSORT_API bool vtkRenderer_LightFollowCameraOff_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::LightFollowCameraOff]:[";
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

// virtual int GetAutomaticLightCreation()
// virtual int GetAutomaticLightCreation ()
TESTDLLSORT_API bool vtkRenderer_GetAutomaticLightCreation_0(int * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetAutomaticLightCreation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAutomaticLightCreation();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetAutomaticLightCreation(int _arg)
// virtual void SetAutomaticLightCreation (int _arg)
TESTDLLSORT_API bool vtkRenderer_SetAutomaticLightCreation_0(vtkRenderer * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetAutomaticLightCreation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAutomaticLightCreation(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void AutomaticLightCreationOn()
// virtual void AutomaticLightCreationOn ()
TESTDLLSORT_API bool vtkRenderer_AutomaticLightCreationOn_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::AutomaticLightCreationOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AutomaticLightCreationOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void AutomaticLightCreationOff()
// virtual void AutomaticLightCreationOff ()
TESTDLLSORT_API bool vtkRenderer_AutomaticLightCreationOff_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::AutomaticLightCreationOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AutomaticLightCreationOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int UpdateLightsGeometryToFollowCamera()
// virtual int UpdateLightsGeometryToFollowCamera(void)
TESTDLLSORT_API bool vtkRenderer_UpdateLightsGeometryToFollowCamera_0(int * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::UpdateLightsGeometryToFollowCamera]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->UpdateLightsGeometryToFollowCamera();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkVolumeCollection* GetVolumes()
// vtkVolumeCollection *GetVolumes()
TESTDLLSORT_API bool vtkRenderer_GetVolumes_0(vtkVolumeCollection ** return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetVolumes]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetVolumes();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkActorCollection* GetActors()
// vtkActorCollection *GetActors()
TESTDLLSORT_API bool vtkRenderer_GetActors_0(vtkActorCollection ** return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetActors]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetActors();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetActiveCamera(vtkCamera * ARG_0)
// void SetActiveCamera(vtkCamera *)
TESTDLLSORT_API bool vtkRenderer_SetActiveCamera_0(vtkRenderer * callingObject, vtkCamera * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetActiveCamera]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetActiveCamera(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkCamera* GetActiveCamera()
// vtkCamera *GetActiveCamera()
TESTDLLSORT_API bool vtkRenderer_GetActiveCamera_0(vtkCamera ** return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetActiveCamera]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetActiveCamera();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkCamera* MakeCamera()
// virtual vtkCamera *MakeCamera()
TESTDLLSORT_API bool vtkRenderer_MakeCamera_0(vtkCamera ** return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::MakeCamera]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->MakeCamera();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetErase(int _arg)
// virtual void SetErase (int _arg)
TESTDLLSORT_API bool vtkRenderer_SetErase_0(vtkRenderer * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetErase]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetErase(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetErase()
// virtual int GetErase ()
TESTDLLSORT_API bool vtkRenderer_GetErase_0(int * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetErase]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetErase();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void EraseOn()
// virtual void EraseOn ()
TESTDLLSORT_API bool vtkRenderer_EraseOn_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::EraseOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->EraseOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void EraseOff()
// virtual void EraseOff ()
TESTDLLSORT_API bool vtkRenderer_EraseOff_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::EraseOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->EraseOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetDraw(int _arg)
// virtual void SetDraw (int _arg)
TESTDLLSORT_API bool vtkRenderer_SetDraw_0(vtkRenderer * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetDraw]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetDraw(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetDraw()
// virtual int GetDraw ()
TESTDLLSORT_API bool vtkRenderer_GetDraw_0(int * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetDraw]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDraw();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void DrawOn()
// virtual void DrawOn ()
TESTDLLSORT_API bool vtkRenderer_DrawOn_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::DrawOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DrawOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void DrawOff()
// virtual void DrawOff ()
TESTDLLSORT_API bool vtkRenderer_DrawOff_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::DrawOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DrawOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int CaptureGL2PSSpecialProp(vtkProp * ARG_0)
// int CaptureGL2PSSpecialProp(vtkProp *)
TESTDLLSORT_API bool vtkRenderer_CaptureGL2PSSpecialProp_0(int * return_value, vtkRenderer * callingObject, vtkProp * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::CaptureGL2PSSpecialProp]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->CaptureGL2PSSpecialProp(ARG_0);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetGL2PSSpecialPropCollection(vtkPropCollection * ARG_0)
// void SetGL2PSSpecialPropCollection(vtkPropCollection *)
TESTDLLSORT_API bool vtkRenderer_SetGL2PSSpecialPropCollection_0(vtkRenderer * callingObject, vtkPropCollection * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetGL2PSSpecialPropCollection]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetGL2PSSpecialPropCollection(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AddCuller(vtkCuller * ARG_0)
// void AddCuller(vtkCuller *)
TESTDLLSORT_API bool vtkRenderer_AddCuller_0(vtkRenderer * callingObject, vtkCuller * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::AddCuller]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AddCuller(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void RemoveCuller(vtkCuller * ARG_0)
// void RemoveCuller(vtkCuller *)
TESTDLLSORT_API bool vtkRenderer_RemoveCuller_0(vtkRenderer * callingObject, vtkCuller * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::RemoveCuller]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveCuller(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkCullerCollection* GetCullers()
// vtkCullerCollection *GetCullers()
TESTDLLSORT_API bool vtkRenderer_GetCullers_0(vtkCullerCollection ** return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetCullers]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCullers();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetAmbient(double _arg1, double _arg2, double _arg3)
// virtual void SetAmbient (double _arg1, double _arg2, double _arg3)
TESTDLLSORT_API bool vtkRenderer_SetAmbient_0(vtkRenderer * callingObject, double _arg1, double _arg2, double _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetAmbient]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAmbient(_arg1, _arg2, _arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetAmbient(double _arg[3])
// virtual void SetAmbient (double _arg[3])
TESTDLLSORT_API bool vtkRenderer_SetAmbient_1(vtkRenderer * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetAmbient]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAmbient(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetAmbient()
// virtual double *GetAmbient ()
TESTDLLSORT_API bool vtkRenderer_GetAmbient_0(double ** return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetAmbient]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAmbient();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetAmbient(double data[3])
// virtual void GetAmbient (double data[3])
TESTDLLSORT_API bool vtkRenderer_GetAmbient_1(vtkRenderer * callingObject, double data[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetAmbient]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetAmbient(data);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetAllocatedRenderTime(double _arg)
// virtual void SetAllocatedRenderTime (double _arg)
TESTDLLSORT_API bool vtkRenderer_SetAllocatedRenderTime_0(vtkRenderer * callingObject, double _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetAllocatedRenderTime]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAllocatedRenderTime(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetAllocatedRenderTime()
// virtual double GetAllocatedRenderTime()
TESTDLLSORT_API bool vtkRenderer_GetAllocatedRenderTime_0(double * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetAllocatedRenderTime]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAllocatedRenderTime();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetTimeFactor()
// virtual double GetTimeFactor()
TESTDLLSORT_API bool vtkRenderer_GetTimeFactor_0(double * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetTimeFactor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTimeFactor();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void Render()
// virtual void Render()
TESTDLLSORT_API bool vtkRenderer_Render_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::Render]:[";
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

// virtual void DeviceRender()
// virtual void DeviceRender()
TESTDLLSORT_API bool vtkRenderer_DeviceRender_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::DeviceRender]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DeviceRender();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void DeviceRenderOpaqueGeometry()
// virtual void DeviceRenderOpaqueGeometry()
TESTDLLSORT_API bool vtkRenderer_DeviceRenderOpaqueGeometry_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::DeviceRenderOpaqueGeometry]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DeviceRenderOpaqueGeometry();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void DeviceRenderTranslucentPolygonalGeometry()
// virtual void DeviceRenderTranslucentPolygonalGeometry()
TESTDLLSORT_API bool vtkRenderer_DeviceRenderTranslucentPolygonalGeometry_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::DeviceRenderTranslucentPolygonalGeometry]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DeviceRenderTranslucentPolygonalGeometry();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ClearLights()
// virtual void ClearLights(void)
TESTDLLSORT_API bool vtkRenderer_ClearLights_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::ClearLights]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ClearLights();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void Clear()
// virtual void Clear()
TESTDLLSORT_API bool vtkRenderer_Clear_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::Clear]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Clear();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int VisibleActorCount()
// int VisibleActorCount()
TESTDLLSORT_API bool vtkRenderer_VisibleActorCount_0(int * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::VisibleActorCount]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->VisibleActorCount();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int VisibleVolumeCount()
// int VisibleVolumeCount()
TESTDLLSORT_API bool vtkRenderer_VisibleVolumeCount_0(int * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::VisibleVolumeCount]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->VisibleVolumeCount();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ComputeVisiblePropBounds(double bounds[6])
// void ComputeVisiblePropBounds( double bounds[6] )
TESTDLLSORT_API bool vtkRenderer_ComputeVisiblePropBounds_0(vtkRenderer * callingObject, double bounds[6]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::ComputeVisiblePropBounds]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ComputeVisiblePropBounds(bounds);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* ComputeVisiblePropBounds()
// double *ComputeVisiblePropBounds()
TESTDLLSORT_API bool vtkRenderer_ComputeVisiblePropBounds_1(double ** return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::ComputeVisiblePropBounds]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->ComputeVisiblePropBounds();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ResetCameraClippingRange()
// virtual void ResetCameraClippingRange()
TESTDLLSORT_API bool vtkRenderer_ResetCameraClippingRange_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::ResetCameraClippingRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ResetCameraClippingRange();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ResetCameraClippingRange(double bounds[6])
// virtual void ResetCameraClippingRange( double bounds[6] )
TESTDLLSORT_API bool vtkRenderer_ResetCameraClippingRange_1(vtkRenderer * callingObject, double bounds[6]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::ResetCameraClippingRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ResetCameraClippingRange(bounds);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ResetCameraClippingRange(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax)
// virtual void ResetCameraClippingRange( double xmin, double xmax, double ymin, double ymax, double zmin, double zmax)
TESTDLLSORT_API bool vtkRenderer_ResetCameraClippingRange_2(vtkRenderer * callingObject, double xmin, double xmax, double ymin, double ymax, double zmin, double zmax) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::ResetCameraClippingRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ResetCameraClippingRange(xmin, xmax, ymin, ymax, zmin, zmax);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetNearClippingPlaneTolerance(double _arg)
// virtual void SetNearClippingPlaneTolerance (double _arg)
TESTDLLSORT_API bool vtkRenderer_SetNearClippingPlaneTolerance_0(vtkRenderer * callingObject, double _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetNearClippingPlaneTolerance]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetNearClippingPlaneTolerance(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetNearClippingPlaneToleranceMinValue()
// virtual double GetNearClippingPlaneToleranceMinValue ()
TESTDLLSORT_API bool vtkRenderer_GetNearClippingPlaneToleranceMinValue_0(double * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetNearClippingPlaneToleranceMinValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNearClippingPlaneToleranceMinValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetNearClippingPlaneToleranceMaxValue()
// virtual double GetNearClippingPlaneToleranceMaxValue ()
TESTDLLSORT_API bool vtkRenderer_GetNearClippingPlaneToleranceMaxValue_0(double * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetNearClippingPlaneToleranceMaxValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNearClippingPlaneToleranceMaxValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetNearClippingPlaneTolerance()
// virtual double GetNearClippingPlaneTolerance ()
TESTDLLSORT_API bool vtkRenderer_GetNearClippingPlaneTolerance_0(double * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetNearClippingPlaneTolerance]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNearClippingPlaneTolerance();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetClippingRangeExpansion(double _arg)
// virtual void SetClippingRangeExpansion (double _arg)
TESTDLLSORT_API bool vtkRenderer_SetClippingRangeExpansion_0(vtkRenderer * callingObject, double _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetClippingRangeExpansion]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetClippingRangeExpansion(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetClippingRangeExpansionMinValue()
// virtual double GetClippingRangeExpansionMinValue ()
TESTDLLSORT_API bool vtkRenderer_GetClippingRangeExpansionMinValue_0(double * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetClippingRangeExpansionMinValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetClippingRangeExpansionMinValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetClippingRangeExpansionMaxValue()
// virtual double GetClippingRangeExpansionMaxValue ()
TESTDLLSORT_API bool vtkRenderer_GetClippingRangeExpansionMaxValue_0(double * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetClippingRangeExpansionMaxValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetClippingRangeExpansionMaxValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetClippingRangeExpansion()
// virtual double GetClippingRangeExpansion ()
TESTDLLSORT_API bool vtkRenderer_GetClippingRangeExpansion_0(double * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetClippingRangeExpansion]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetClippingRangeExpansion();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ResetCamera()
// virtual void ResetCamera()
TESTDLLSORT_API bool vtkRenderer_ResetCamera_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::ResetCamera]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ResetCamera();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ResetCamera(double bounds[6])
// virtual void ResetCamera(double bounds[6])
TESTDLLSORT_API bool vtkRenderer_ResetCamera_1(vtkRenderer * callingObject, double bounds[6]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::ResetCamera]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ResetCamera(bounds);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ResetCamera(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax)
// virtual void ResetCamera(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax)
TESTDLLSORT_API bool vtkRenderer_ResetCamera_2(vtkRenderer * callingObject, double xmin, double xmax, double ymin, double ymax, double zmin, double zmax) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::ResetCamera]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ResetCamera(xmin, xmax, ymin, ymax, zmin, zmax);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetRenderWindow(vtkRenderWindow * ARG_0)
// void SetRenderWindow(vtkRenderWindow *)
TESTDLLSORT_API bool vtkRenderer_SetRenderWindow_0(vtkRenderer * callingObject, vtkRenderWindow * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetRenderWindow]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetRenderWindow(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkRenderWindow* GetRenderWindow()
// vtkRenderWindow *GetRenderWindow()
TESTDLLSORT_API bool vtkRenderer_GetRenderWindow_0(vtkRenderWindow ** return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetRenderWindow]:[";
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

// vtkWindow* GetVTKWindow()
// vtkWindow *GetVTKWindow()
TESTDLLSORT_API bool vtkRenderer_GetVTKWindow_0(vtkWindow ** return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetVTKWindow]:[";
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

// virtual void SetBackingStore(int _arg)
// virtual void SetBackingStore (int _arg)
TESTDLLSORT_API bool vtkRenderer_SetBackingStore_0(vtkRenderer * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetBackingStore]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetBackingStore(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetBackingStore()
// virtual int GetBackingStore ()
TESTDLLSORT_API bool vtkRenderer_GetBackingStore_0(int * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetBackingStore]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetBackingStore();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void BackingStoreOn()
// virtual void BackingStoreOn ()
TESTDLLSORT_API bool vtkRenderer_BackingStoreOn_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::BackingStoreOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->BackingStoreOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void BackingStoreOff()
// virtual void BackingStoreOff ()
TESTDLLSORT_API bool vtkRenderer_BackingStoreOff_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::BackingStoreOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->BackingStoreOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetInteractive(int _arg)
// virtual void SetInteractive (int _arg)
TESTDLLSORT_API bool vtkRenderer_SetInteractive_0(vtkRenderer * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetInteractive]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetInteractive(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetInteractive()
// virtual int GetInteractive ()
TESTDLLSORT_API bool vtkRenderer_GetInteractive_0(int * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetInteractive]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInteractive();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void InteractiveOn()
// virtual void InteractiveOn ()
TESTDLLSORT_API bool vtkRenderer_InteractiveOn_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::InteractiveOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InteractiveOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void InteractiveOff()
// virtual void InteractiveOff ()
TESTDLLSORT_API bool vtkRenderer_InteractiveOff_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::InteractiveOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InteractiveOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetLayer(int layer)
// virtual void SetLayer(int layer)
TESTDLLSORT_API bool vtkRenderer_SetLayer_0(vtkRenderer * callingObject, int layer) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetLayer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetLayer(layer);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetLayer()
// virtual int GetLayer ()
TESTDLLSORT_API bool vtkRenderer_GetLayer_0(int * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetLayer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetLayer();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetPreserveColorBuffer()
// virtual int GetPreserveColorBuffer ()
TESTDLLSORT_API bool vtkRenderer_GetPreserveColorBuffer_0(int * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetPreserveColorBuffer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPreserveColorBuffer();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetPreserveColorBuffer(int _arg)
// virtual void SetPreserveColorBuffer (int _arg)
TESTDLLSORT_API bool vtkRenderer_SetPreserveColorBuffer_0(vtkRenderer * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetPreserveColorBuffer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetPreserveColorBuffer(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void PreserveColorBufferOn()
// virtual void PreserveColorBufferOn ()
TESTDLLSORT_API bool vtkRenderer_PreserveColorBufferOn_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::PreserveColorBufferOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->PreserveColorBufferOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void PreserveColorBufferOff()
// virtual void PreserveColorBufferOff ()
TESTDLLSORT_API bool vtkRenderer_PreserveColorBufferOff_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::PreserveColorBufferOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->PreserveColorBufferOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetPreserveDepthBuffer(int _arg)
// virtual void SetPreserveDepthBuffer (int _arg)
TESTDLLSORT_API bool vtkRenderer_SetPreserveDepthBuffer_0(vtkRenderer * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetPreserveDepthBuffer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetPreserveDepthBuffer(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetPreserveDepthBuffer()
// virtual int GetPreserveDepthBuffer ()
TESTDLLSORT_API bool vtkRenderer_GetPreserveDepthBuffer_0(int * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetPreserveDepthBuffer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPreserveDepthBuffer();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void PreserveDepthBufferOn()
// virtual void PreserveDepthBufferOn ()
TESTDLLSORT_API bool vtkRenderer_PreserveDepthBufferOn_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::PreserveDepthBufferOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->PreserveDepthBufferOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void PreserveDepthBufferOff()
// virtual void PreserveDepthBufferOff ()
TESTDLLSORT_API bool vtkRenderer_PreserveDepthBufferOff_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::PreserveDepthBufferOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->PreserveDepthBufferOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Transparent()
// int Transparent()
TESTDLLSORT_API bool vtkRenderer_Transparent_0(int * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::Transparent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Transparent();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void WorldToView()
// void WorldToView()
TESTDLLSORT_API bool vtkRenderer_WorldToView_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::WorldToView]:[";
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

// void ViewToWorld()
// void ViewToWorld()
TESTDLLSORT_API bool vtkRenderer_ViewToWorld_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::ViewToWorld]:[";
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

// void ViewToWorld(double & wx, double & wy, double & wz)
// void ViewToWorld(double &wx, double &wy, double &wz)
TESTDLLSORT_API bool vtkRenderer_ViewToWorld_1(vtkRenderer * callingObject, double * wx, double * wy, double * wz) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::ViewToWorld]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ViewToWorld(*wx, *wy, *wz);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void WorldToView(double & wx, double & wy, double & wz)
// void WorldToView(double &wx, double &wy, double &wz)
TESTDLLSORT_API bool vtkRenderer_WorldToView_1(vtkRenderer * callingObject, double * wx, double * wy, double * wz) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::WorldToView]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->WorldToView(*wx, *wy, *wz);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetZ(int x, int y)
// double GetZ (int x, int y)
TESTDLLSORT_API bool vtkRenderer_GetZ_0(double * return_value, vtkRenderer * callingObject, int x, int y) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetZ]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetZ(x, y);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkMTimeType GetMTime()
// vtkMTimeType GetMTime()
TESTDLLSORT_API bool vtkRenderer_GetMTime_0(vtkMTimeType * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetMTime]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetMTime();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetLastRenderTimeInSeconds()
// virtual double GetLastRenderTimeInSeconds ()
TESTDLLSORT_API bool vtkRenderer_GetLastRenderTimeInSeconds_0(double * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetLastRenderTimeInSeconds]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetLastRenderTimeInSeconds();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetNumberOfPropsRendered()
// virtual int GetNumberOfPropsRendered ()
TESTDLLSORT_API bool vtkRenderer_GetNumberOfPropsRendered_0(int * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetNumberOfPropsRendered]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfPropsRendered();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkAssemblyPath* PickProp(double selectionX, double selectionY)
// vtkAssemblyPath* PickProp(double selectionX, double selectionY)
TESTDLLSORT_API bool vtkRenderer_PickProp_0(vtkAssemblyPath ** return_value, vtkRenderer * callingObject, double selectionX, double selectionY) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::PickProp]:[";
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

// vtkAssemblyPath* PickProp(double selectionX1, double selectionY1, double selectionX2, double selectionY2)
// vtkAssemblyPath* PickProp(double selectionX1, double selectionY1, double selectionX2, double selectionY2)
TESTDLLSORT_API bool vtkRenderer_PickProp_1(vtkAssemblyPath ** return_value, vtkRenderer * callingObject, double selectionX1, double selectionY1, double selectionX2, double selectionY2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::PickProp]:[";
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

// virtual void StereoMidpoint()
// virtual void StereoMidpoint()
TESTDLLSORT_API bool vtkRenderer_StereoMidpoint_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::StereoMidpoint]:[";
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

// double GetTiledAspectRatio()
// double GetTiledAspectRatio()
TESTDLLSORT_API bool vtkRenderer_GetTiledAspectRatio_0(double * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetTiledAspectRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTiledAspectRatio();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int IsActiveCameraCreated()
// int IsActiveCameraCreated()
TESTDLLSORT_API bool vtkRenderer_IsActiveCameraCreated_0(int * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::IsActiveCameraCreated]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->IsActiveCameraCreated();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetUseDepthPeeling(int _arg)
// virtual void SetUseDepthPeeling (int _arg)
TESTDLLSORT_API bool vtkRenderer_SetUseDepthPeeling_0(vtkRenderer * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetUseDepthPeeling]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetUseDepthPeeling(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetUseDepthPeeling()
// virtual int GetUseDepthPeeling ()
TESTDLLSORT_API bool vtkRenderer_GetUseDepthPeeling_0(int * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetUseDepthPeeling]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUseDepthPeeling();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseDepthPeelingOn()
// virtual void UseDepthPeelingOn ()
TESTDLLSORT_API bool vtkRenderer_UseDepthPeelingOn_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::UseDepthPeelingOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseDepthPeelingOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseDepthPeelingOff()
// virtual void UseDepthPeelingOff ()
TESTDLLSORT_API bool vtkRenderer_UseDepthPeelingOff_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::UseDepthPeelingOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseDepthPeelingOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetUseDepthPeelingForVolumes(bool _arg)
// virtual void SetUseDepthPeelingForVolumes (bool _arg)
TESTDLLSORT_API bool vtkRenderer_SetUseDepthPeelingForVolumes_0(vtkRenderer * callingObject, bool _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetUseDepthPeelingForVolumes]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetUseDepthPeelingForVolumes(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual bool GetUseDepthPeelingForVolumes()
// virtual bool GetUseDepthPeelingForVolumes ()
TESTDLLSORT_API bool vtkRenderer_GetUseDepthPeelingForVolumes_0(bool * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetUseDepthPeelingForVolumes]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUseDepthPeelingForVolumes();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseDepthPeelingForVolumesOn()
// virtual void UseDepthPeelingForVolumesOn ()
TESTDLLSORT_API bool vtkRenderer_UseDepthPeelingForVolumesOn_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::UseDepthPeelingForVolumesOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseDepthPeelingForVolumesOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseDepthPeelingForVolumesOff()
// virtual void UseDepthPeelingForVolumesOff ()
TESTDLLSORT_API bool vtkRenderer_UseDepthPeelingForVolumesOff_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::UseDepthPeelingForVolumesOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseDepthPeelingForVolumesOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetOcclusionRatio(double _arg)
// virtual void SetOcclusionRatio (double _arg)
TESTDLLSORT_API bool vtkRenderer_SetOcclusionRatio_0(vtkRenderer * callingObject, double _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetOcclusionRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetOcclusionRatio(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetOcclusionRatioMinValue()
// virtual double GetOcclusionRatioMinValue ()
TESTDLLSORT_API bool vtkRenderer_GetOcclusionRatioMinValue_0(double * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetOcclusionRatioMinValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetOcclusionRatioMinValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetOcclusionRatioMaxValue()
// virtual double GetOcclusionRatioMaxValue ()
TESTDLLSORT_API bool vtkRenderer_GetOcclusionRatioMaxValue_0(double * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetOcclusionRatioMaxValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetOcclusionRatioMaxValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetOcclusionRatio()
// virtual double GetOcclusionRatio ()
TESTDLLSORT_API bool vtkRenderer_GetOcclusionRatio_0(double * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetOcclusionRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetOcclusionRatio();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetMaximumNumberOfPeels(int _arg)
// virtual void SetMaximumNumberOfPeels (int _arg)
TESTDLLSORT_API bool vtkRenderer_SetMaximumNumberOfPeels_0(vtkRenderer * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetMaximumNumberOfPeels]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetMaximumNumberOfPeels(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetMaximumNumberOfPeels()
// virtual int GetMaximumNumberOfPeels ()
TESTDLLSORT_API bool vtkRenderer_GetMaximumNumberOfPeels_0(int * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetMaximumNumberOfPeels]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetMaximumNumberOfPeels();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetLastRenderingUsedDepthPeeling()
// virtual int GetLastRenderingUsedDepthPeeling ()
TESTDLLSORT_API bool vtkRenderer_GetLastRenderingUsedDepthPeeling_0(int * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetLastRenderingUsedDepthPeeling]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetLastRenderingUsedDepthPeeling();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetDelegate(vtkRendererDelegate * d)
// void SetDelegate(vtkRendererDelegate *d)
TESTDLLSORT_API bool vtkRenderer_SetDelegate_0(vtkRenderer * callingObject, vtkRendererDelegate * d) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetDelegate]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetDelegate(d);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkRendererDelegate* GetDelegate()
// virtual vtkRendererDelegate *GetDelegate ()
TESTDLLSORT_API bool vtkRenderer_GetDelegate_0(vtkRendererDelegate ** return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetDelegate]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDelegate();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkHardwareSelector* GetSelector()
// virtual vtkHardwareSelector *GetSelector ()
TESTDLLSORT_API bool vtkRenderer_GetSelector_0(vtkHardwareSelector ** return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetSelector]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetSelector();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetBackgroundTexture(vtkTexture * ARG_0)
// virtual void SetBackgroundTexture(vtkTexture*)
TESTDLLSORT_API bool vtkRenderer_SetBackgroundTexture_0(vtkRenderer * callingObject, vtkTexture * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetBackgroundTexture]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetBackgroundTexture(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkTexture* GetBackgroundTexture()
// virtual vtkTexture *GetBackgroundTexture ()
TESTDLLSORT_API bool vtkRenderer_GetBackgroundTexture_0(vtkTexture ** return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetBackgroundTexture]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetBackgroundTexture();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetTexturedBackground(bool _arg)
// virtual void SetTexturedBackground (bool _arg)
TESTDLLSORT_API bool vtkRenderer_SetTexturedBackground_0(vtkRenderer * callingObject, bool _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetTexturedBackground]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTexturedBackground(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual bool GetTexturedBackground()
// virtual bool GetTexturedBackground ()
TESTDLLSORT_API bool vtkRenderer_GetTexturedBackground_0(bool * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetTexturedBackground]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTexturedBackground();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void TexturedBackgroundOn()
// virtual void TexturedBackgroundOn ()
TESTDLLSORT_API bool vtkRenderer_TexturedBackgroundOn_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::TexturedBackgroundOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->TexturedBackgroundOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void TexturedBackgroundOff()
// virtual void TexturedBackgroundOff ()
TESTDLLSORT_API bool vtkRenderer_TexturedBackgroundOff_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::TexturedBackgroundOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->TexturedBackgroundOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ReleaseGraphicsResources(vtkWindow * ARG_0)
// virtual void ReleaseGraphicsResources(vtkWindow *)
TESTDLLSORT_API bool vtkRenderer_ReleaseGraphicsResources_0(vtkRenderer * callingObject, vtkWindow * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::ReleaseGraphicsResources]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ReleaseGraphicsResources(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetUseFXAA(bool _arg)
// virtual void SetUseFXAA (bool _arg)
TESTDLLSORT_API bool vtkRenderer_SetUseFXAA_0(vtkRenderer * callingObject, bool _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetUseFXAA]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetUseFXAA(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual bool GetUseFXAA()
// virtual bool GetUseFXAA ()
TESTDLLSORT_API bool vtkRenderer_GetUseFXAA_0(bool * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetUseFXAA]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUseFXAA();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseFXAAOn()
// virtual void UseFXAAOn ()
TESTDLLSORT_API bool vtkRenderer_UseFXAAOn_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::UseFXAAOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseFXAAOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseFXAAOff()
// virtual void UseFXAAOff ()
TESTDLLSORT_API bool vtkRenderer_UseFXAAOff_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::UseFXAAOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseFXAAOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkFXAAOptions* GetFXAAOptions()
// virtual vtkFXAAOptions *GetFXAAOptions ()
TESTDLLSORT_API bool vtkRenderer_GetFXAAOptions_0(vtkFXAAOptions ** return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetFXAAOptions]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetFXAAOptions();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetFXAAOptions(vtkFXAAOptions * ARG_0)
// virtual void SetFXAAOptions(vtkFXAAOptions*)
TESTDLLSORT_API bool vtkRenderer_SetFXAAOptions_0(vtkRenderer * callingObject, vtkFXAAOptions * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetFXAAOptions]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetFXAAOptions(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetUseShadows(int _arg)
// virtual void SetUseShadows (int _arg)
TESTDLLSORT_API bool vtkRenderer_SetUseShadows_0(vtkRenderer * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetUseShadows]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetUseShadows(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetUseShadows()
// virtual int GetUseShadows ()
TESTDLLSORT_API bool vtkRenderer_GetUseShadows_0(int * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetUseShadows]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUseShadows();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseShadowsOn()
// virtual void UseShadowsOn ()
TESTDLLSORT_API bool vtkRenderer_UseShadowsOn_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::UseShadowsOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseShadowsOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseShadowsOff()
// virtual void UseShadowsOff ()
TESTDLLSORT_API bool vtkRenderer_UseShadowsOff_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::UseShadowsOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseShadowsOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetUseHiddenLineRemoval(int _arg)
// virtual void SetUseHiddenLineRemoval (int _arg)
TESTDLLSORT_API bool vtkRenderer_SetUseHiddenLineRemoval_0(vtkRenderer * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetUseHiddenLineRemoval]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetUseHiddenLineRemoval(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetUseHiddenLineRemoval()
// virtual int GetUseHiddenLineRemoval ()
TESTDLLSORT_API bool vtkRenderer_GetUseHiddenLineRemoval_0(int * return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetUseHiddenLineRemoval]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUseHiddenLineRemoval();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseHiddenLineRemovalOn()
// virtual void UseHiddenLineRemovalOn ()
TESTDLLSORT_API bool vtkRenderer_UseHiddenLineRemovalOn_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::UseHiddenLineRemovalOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseHiddenLineRemovalOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseHiddenLineRemovalOff()
// virtual void UseHiddenLineRemovalOff ()
TESTDLLSORT_API bool vtkRenderer_UseHiddenLineRemovalOff_0(vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::UseHiddenLineRemovalOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseHiddenLineRemovalOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetPass(vtkRenderPass * p)
// void SetPass(vtkRenderPass *p)
TESTDLLSORT_API bool vtkRenderer_SetPass_0(vtkRenderer * callingObject, vtkRenderPass * p) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetPass]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetPass(p);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkRenderPass* GetPass()
// virtual vtkRenderPass *GetPass ()
TESTDLLSORT_API bool vtkRenderer_GetPass_0(vtkRenderPass ** return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetPass]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPass();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkInformation* GetInformation()
// virtual vtkInformation *GetInformation ()
TESTDLLSORT_API bool vtkRenderer_GetInformation_0(vtkInformation ** return_value, vtkRenderer * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::GetInformation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInformation();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetInformation(vtkInformation * ARG_0)
// virtual void SetInformation(vtkInformation*)
TESTDLLSORT_API bool vtkRenderer_SetInformation_0(vtkRenderer * callingObject, vtkInformation * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkRenderer::SetInformation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetInformation(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
