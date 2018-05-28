
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkPropAssembly.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkPropAssembly_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPropAssembly::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPropAssembly::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkPropAssembly_IsA_0(vtkTypeBool * return_value, vtkPropAssembly * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPropAssembly::IsA]:[";
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

// static vtkPropAssembly* SafeDownCast(vtkObjectBase * o)
// static vtkPropAssembly* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkPropAssembly_SafeDownCast_0(vtkPropAssembly ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPropAssembly::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPropAssembly::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkPropAssembly* NewInstance()
// vtkPropAssembly *NewInstance()
TESTDLLSORT_API bool vtkPropAssembly_NewInstance_0(vtkPropAssembly ** return_value, vtkPropAssembly * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPropAssembly::NewInstance]:[";
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

// static vtkPropAssembly* New()
// static vtkPropAssembly *New()
TESTDLLSORT_API bool vtkPropAssembly_New_0(vtkPropAssembly ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPropAssembly::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPropAssembly::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AddPart(vtkProp * ARG_0)
// void AddPart(vtkProp *)
TESTDLLSORT_API bool vtkPropAssembly_AddPart_0(vtkPropAssembly * callingObject, vtkProp * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPropAssembly::AddPart]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AddPart(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void RemovePart(vtkProp * ARG_0)
// void RemovePart(vtkProp *)
TESTDLLSORT_API bool vtkPropAssembly_RemovePart_0(vtkPropAssembly * callingObject, vtkProp * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPropAssembly::RemovePart]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemovePart(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkPropCollection* GetParts()
// vtkPropCollection *GetParts()
TESTDLLSORT_API bool vtkPropAssembly_GetParts_0(vtkPropCollection ** return_value, vtkPropAssembly * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPropAssembly::GetParts]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetParts();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int RenderOpaqueGeometry(vtkViewport * ren)
// int RenderOpaqueGeometry(vtkViewport *ren)
TESTDLLSORT_API bool vtkPropAssembly_RenderOpaqueGeometry_0(int * return_value, vtkPropAssembly * callingObject, vtkViewport * ren) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPropAssembly::RenderOpaqueGeometry]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->RenderOpaqueGeometry(ren);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int RenderTranslucentPolygonalGeometry(vtkViewport * ren)
// int RenderTranslucentPolygonalGeometry( vtkViewport *ren)
TESTDLLSORT_API bool vtkPropAssembly_RenderTranslucentPolygonalGeometry_0(int * return_value, vtkPropAssembly * callingObject, vtkViewport * ren) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPropAssembly::RenderTranslucentPolygonalGeometry]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->RenderTranslucentPolygonalGeometry(ren);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int RenderVolumetricGeometry(vtkViewport * ren)
// int RenderVolumetricGeometry( vtkViewport *ren)
TESTDLLSORT_API bool vtkPropAssembly_RenderVolumetricGeometry_0(int * return_value, vtkPropAssembly * callingObject, vtkViewport * ren) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPropAssembly::RenderVolumetricGeometry]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->RenderVolumetricGeometry(ren);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int RenderOverlay(vtkViewport * ren)
// int RenderOverlay(vtkViewport *ren)
TESTDLLSORT_API bool vtkPropAssembly_RenderOverlay_0(int * return_value, vtkPropAssembly * callingObject, vtkViewport * ren) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPropAssembly::RenderOverlay]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->RenderOverlay(ren);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int HasTranslucentPolygonalGeometry()
// int HasTranslucentPolygonalGeometry()
TESTDLLSORT_API bool vtkPropAssembly_HasTranslucentPolygonalGeometry_0(int * return_value, vtkPropAssembly * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPropAssembly::HasTranslucentPolygonalGeometry]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->HasTranslucentPolygonalGeometry();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ReleaseGraphicsResources(vtkWindow * ARG_0)
// void ReleaseGraphicsResources(vtkWindow *)
TESTDLLSORT_API bool vtkPropAssembly_ReleaseGraphicsResources_0(vtkPropAssembly * callingObject, vtkWindow * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPropAssembly::ReleaseGraphicsResources]:[";
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

// double* GetBounds()
// double *GetBounds()
TESTDLLSORT_API bool vtkPropAssembly_GetBounds_0(double ** return_value, vtkPropAssembly * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPropAssembly::GetBounds]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetBounds();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ShallowCopy(vtkProp * Prop)
// void ShallowCopy(vtkProp *Prop)
TESTDLLSORT_API bool vtkPropAssembly_ShallowCopy_0(vtkPropAssembly * callingObject, vtkProp * Prop) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPropAssembly::ShallowCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ShallowCopy(Prop);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkMTimeType GetMTime()
// vtkMTimeType GetMTime()
TESTDLLSORT_API bool vtkPropAssembly_GetMTime_0(vtkMTimeType * return_value, vtkPropAssembly * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPropAssembly::GetMTime]:[";
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

// void InitPathTraversal()
// void InitPathTraversal()
TESTDLLSORT_API bool vtkPropAssembly_InitPathTraversal_0(vtkPropAssembly * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPropAssembly::InitPathTraversal]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InitPathTraversal();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkAssemblyPath* GetNextPath()
// vtkAssemblyPath *GetNextPath()
TESTDLLSORT_API bool vtkPropAssembly_GetNextPath_0(vtkAssemblyPath ** return_value, vtkPropAssembly * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPropAssembly::GetNextPath]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNextPath();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetNumberOfPaths()
// int GetNumberOfPaths()
TESTDLLSORT_API bool vtkPropAssembly_GetNumberOfPaths_0(int * return_value, vtkPropAssembly * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPropAssembly::GetNumberOfPaths]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfPaths();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void BuildPaths(vtkAssemblyPaths * paths, vtkAssemblyPath * path)
// void BuildPaths(vtkAssemblyPaths *paths, vtkAssemblyPath *path)
TESTDLLSORT_API bool vtkPropAssembly_BuildPaths_0(vtkPropAssembly * callingObject, vtkAssemblyPaths * paths, vtkAssemblyPath * path) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPropAssembly::BuildPaths]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->BuildPaths(paths, path);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
