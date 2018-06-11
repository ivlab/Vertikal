
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkDataSetAttributes.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkDataSetAttributes* New()
// static vtkDataSetAttributes *New()
TESTDLLSORT_API bool vtkDataSetAttributes_New_0(vtkDataSetAttributes ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataSetAttributes::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkDataSetAttributes_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataSetAttributes::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkDataSetAttributes_IsA_0(vtkTypeBool * return_value, vtkDataSetAttributes * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::IsA]:[";
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

// static vtkDataSetAttributes* SafeDownCast(vtkObjectBase * o)
// static vtkDataSetAttributes* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkDataSetAttributes_SafeDownCast_0(vtkDataSetAttributes ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataSetAttributes::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataSetAttributes* NewInstance()
// vtkDataSetAttributes *NewInstance()
TESTDLLSORT_API bool vtkDataSetAttributes_NewInstance_0(vtkDataSetAttributes ** return_value, vtkDataSetAttributes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::NewInstance]:[";
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

// void Initialize()
// void Initialize()
TESTDLLSORT_API bool vtkDataSetAttributes_Initialize_0(vtkDataSetAttributes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::Initialize]:[";
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

// virtual void Update()
// virtual void Update()
TESTDLLSORT_API bool vtkDataSetAttributes_Update_0(vtkDataSetAttributes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::Update]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Update();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void DeepCopy(vtkFieldData * pd)
// void DeepCopy(vtkFieldData *pd)
TESTDLLSORT_API bool vtkDataSetAttributes_DeepCopy_0(vtkDataSetAttributes * callingObject, vtkFieldData * pd) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::DeepCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DeepCopy(pd);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ShallowCopy(vtkFieldData * pd)
// void ShallowCopy(vtkFieldData *pd)
TESTDLLSORT_API bool vtkDataSetAttributes_ShallowCopy_0(vtkDataSetAttributes * callingObject, vtkFieldData * pd) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::ShallowCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ShallowCopy(pd);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static char* GhostArrayName()
// static const char* GhostArrayName()
TESTDLLSORT_API bool vtkDataSetAttributes_GhostArrayName_0(const char ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::GhostArrayName]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataSetAttributes::GhostArrayName();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int SetScalars(vtkDataArray * da)
// int SetScalars(vtkDataArray* da)
TESTDLLSORT_API bool vtkDataSetAttributes_SetScalars_0(int * return_value, vtkDataSetAttributes * callingObject, vtkDataArray * da) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::SetScalars]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetScalars(da);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int SetActiveScalars(const char * name)
// int SetActiveScalars(const char* name)
TESTDLLSORT_API bool vtkDataSetAttributes_SetActiveScalars_0(int * return_value, vtkDataSetAttributes * callingObject, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::SetActiveScalars]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetActiveScalars(name);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataArray* GetScalars()
// vtkDataArray* GetScalars()
TESTDLLSORT_API bool vtkDataSetAttributes_GetScalars_0(vtkDataArray ** return_value, vtkDataSetAttributes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::GetScalars]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalars();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int SetVectors(vtkDataArray * da)
// int SetVectors(vtkDataArray* da)
TESTDLLSORT_API bool vtkDataSetAttributes_SetVectors_0(int * return_value, vtkDataSetAttributes * callingObject, vtkDataArray * da) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::SetVectors]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetVectors(da);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int SetActiveVectors(const char * name)
// int SetActiveVectors(const char* name)
TESTDLLSORT_API bool vtkDataSetAttributes_SetActiveVectors_0(int * return_value, vtkDataSetAttributes * callingObject, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::SetActiveVectors]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetActiveVectors(name);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataArray* GetVectors()
// vtkDataArray* GetVectors()
TESTDLLSORT_API bool vtkDataSetAttributes_GetVectors_0(vtkDataArray ** return_value, vtkDataSetAttributes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::GetVectors]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetVectors();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int SetNormals(vtkDataArray * da)
// int SetNormals(vtkDataArray* da)
TESTDLLSORT_API bool vtkDataSetAttributes_SetNormals_0(int * return_value, vtkDataSetAttributes * callingObject, vtkDataArray * da) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::SetNormals]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetNormals(da);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int SetActiveNormals(const char * name)
// int SetActiveNormals(const char* name)
TESTDLLSORT_API bool vtkDataSetAttributes_SetActiveNormals_0(int * return_value, vtkDataSetAttributes * callingObject, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::SetActiveNormals]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetActiveNormals(name);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataArray* GetNormals()
// vtkDataArray* GetNormals()
TESTDLLSORT_API bool vtkDataSetAttributes_GetNormals_0(vtkDataArray ** return_value, vtkDataSetAttributes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::GetNormals]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNormals();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int SetTCoords(vtkDataArray * da)
// int SetTCoords(vtkDataArray* da)
TESTDLLSORT_API bool vtkDataSetAttributes_SetTCoords_0(int * return_value, vtkDataSetAttributes * callingObject, vtkDataArray * da) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::SetTCoords]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetTCoords(da);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int SetActiveTCoords(const char * name)
// int SetActiveTCoords(const char* name)
TESTDLLSORT_API bool vtkDataSetAttributes_SetActiveTCoords_0(int * return_value, vtkDataSetAttributes * callingObject, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::SetActiveTCoords]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetActiveTCoords(name);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataArray* GetTCoords()
// vtkDataArray* GetTCoords()
TESTDLLSORT_API bool vtkDataSetAttributes_GetTCoords_0(vtkDataArray ** return_value, vtkDataSetAttributes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::GetTCoords]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTCoords();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int SetTensors(vtkDataArray * da)
// int SetTensors(vtkDataArray* da)
TESTDLLSORT_API bool vtkDataSetAttributes_SetTensors_0(int * return_value, vtkDataSetAttributes * callingObject, vtkDataArray * da) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::SetTensors]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetTensors(da);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int SetActiveTensors(const char * name)
// int SetActiveTensors(const char* name)
TESTDLLSORT_API bool vtkDataSetAttributes_SetActiveTensors_0(int * return_value, vtkDataSetAttributes * callingObject, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::SetActiveTensors]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetActiveTensors(name);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataArray* GetTensors()
// vtkDataArray* GetTensors()
TESTDLLSORT_API bool vtkDataSetAttributes_GetTensors_0(vtkDataArray ** return_value, vtkDataSetAttributes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::GetTensors]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTensors();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int SetGlobalIds(vtkDataArray * da)
// int SetGlobalIds(vtkDataArray* da)
TESTDLLSORT_API bool vtkDataSetAttributes_SetGlobalIds_0(int * return_value, vtkDataSetAttributes * callingObject, vtkDataArray * da) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::SetGlobalIds]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetGlobalIds(da);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int SetActiveGlobalIds(const char * name)
// int SetActiveGlobalIds(const char* name)
TESTDLLSORT_API bool vtkDataSetAttributes_SetActiveGlobalIds_0(int * return_value, vtkDataSetAttributes * callingObject, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::SetActiveGlobalIds]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetActiveGlobalIds(name);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataArray* GetGlobalIds()
// vtkDataArray* GetGlobalIds()
TESTDLLSORT_API bool vtkDataSetAttributes_GetGlobalIds_0(vtkDataArray ** return_value, vtkDataSetAttributes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::GetGlobalIds]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetGlobalIds();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int SetPedigreeIds(vtkAbstractArray * da)
// int SetPedigreeIds(vtkAbstractArray* da)
TESTDLLSORT_API bool vtkDataSetAttributes_SetPedigreeIds_0(int * return_value, vtkDataSetAttributes * callingObject, vtkAbstractArray * da) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::SetPedigreeIds]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetPedigreeIds(da);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int SetActivePedigreeIds(const char * name)
// int SetActivePedigreeIds(const char* name)
TESTDLLSORT_API bool vtkDataSetAttributes_SetActivePedigreeIds_0(int * return_value, vtkDataSetAttributes * callingObject, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::SetActivePedigreeIds]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetActivePedigreeIds(name);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkAbstractArray* GetPedigreeIds()
// vtkAbstractArray* GetPedigreeIds()
TESTDLLSORT_API bool vtkDataSetAttributes_GetPedigreeIds_0(vtkAbstractArray ** return_value, vtkDataSetAttributes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::GetPedigreeIds]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPedigreeIds();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataArray* GetScalars(const char * name)
// vtkDataArray* GetScalars(const char* name)
TESTDLLSORT_API bool vtkDataSetAttributes_GetScalars_1(vtkDataArray ** return_value, vtkDataSetAttributes * callingObject, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::GetScalars]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalars(name);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataArray* GetVectors(const char * name)
// vtkDataArray* GetVectors(const char* name)
TESTDLLSORT_API bool vtkDataSetAttributes_GetVectors_1(vtkDataArray ** return_value, vtkDataSetAttributes * callingObject, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::GetVectors]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetVectors(name);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataArray* GetNormals(const char * name)
// vtkDataArray* GetNormals(const char* name)
TESTDLLSORT_API bool vtkDataSetAttributes_GetNormals_1(vtkDataArray ** return_value, vtkDataSetAttributes * callingObject, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::GetNormals]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNormals(name);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataArray* GetTCoords(const char * name)
// vtkDataArray* GetTCoords(const char* name)
TESTDLLSORT_API bool vtkDataSetAttributes_GetTCoords_1(vtkDataArray ** return_value, vtkDataSetAttributes * callingObject, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::GetTCoords]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTCoords(name);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataArray* GetTensors(const char * name)
// vtkDataArray* GetTensors(const char* name)
TESTDLLSORT_API bool vtkDataSetAttributes_GetTensors_1(vtkDataArray ** return_value, vtkDataSetAttributes * callingObject, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::GetTensors]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTensors(name);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataArray* GetGlobalIds(const char * name)
// vtkDataArray* GetGlobalIds(const char* name)
TESTDLLSORT_API bool vtkDataSetAttributes_GetGlobalIds_1(vtkDataArray ** return_value, vtkDataSetAttributes * callingObject, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::GetGlobalIds]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetGlobalIds(name);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkAbstractArray* GetPedigreeIds(const char * name)
// vtkAbstractArray* GetPedigreeIds(const char* name)
TESTDLLSORT_API bool vtkDataSetAttributes_GetPedigreeIds_1(vtkAbstractArray ** return_value, vtkDataSetAttributes * callingObject, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::GetPedigreeIds]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPedigreeIds(name);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int SetActiveAttribute(const char * name, int attributeType)
// int SetActiveAttribute(const char* name, int attributeType)
TESTDLLSORT_API bool vtkDataSetAttributes_SetActiveAttribute_0(int * return_value, vtkDataSetAttributes * callingObject, const char * name, int attributeType) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::SetActiveAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetActiveAttribute(name, attributeType);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int SetActiveAttribute(int index, int attributeType)
// int SetActiveAttribute(int index, int attributeType)
TESTDLLSORT_API bool vtkDataSetAttributes_SetActiveAttribute_1(int * return_value, vtkDataSetAttributes * callingObject, int index, int attributeType) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::SetActiveAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetActiveAttribute(index, attributeType);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetAttributeIndices(int * indexArray)
// void GetAttributeIndices(int* indexArray)
TESTDLLSORT_API bool vtkDataSetAttributes_GetAttributeIndices_0(vtkDataSetAttributes * callingObject, int * indexArray) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::GetAttributeIndices]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetAttributeIndices(indexArray);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int IsArrayAnAttribute(int idx)
// int IsArrayAnAttribute(int idx)
TESTDLLSORT_API bool vtkDataSetAttributes_IsArrayAnAttribute_0(int * return_value, vtkDataSetAttributes * callingObject, int idx) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::IsArrayAnAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->IsArrayAnAttribute(idx);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int SetAttribute(vtkAbstractArray * aa, int attributeType)
// int SetAttribute(vtkAbstractArray* aa, int attributeType)
TESTDLLSORT_API bool vtkDataSetAttributes_SetAttribute_0(int * return_value, vtkDataSetAttributes * callingObject, vtkAbstractArray * aa, int attributeType) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::SetAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetAttribute(aa, attributeType);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataArray* GetAttribute(int attributeType)
// vtkDataArray* GetAttribute(int attributeType)
TESTDLLSORT_API bool vtkDataSetAttributes_GetAttribute_0(vtkDataArray ** return_value, vtkDataSetAttributes * callingObject, int attributeType) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::GetAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAttribute(attributeType);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkAbstractArray* GetAbstractAttribute(int attributeType)
// vtkAbstractArray* GetAbstractAttribute(int attributeType)
TESTDLLSORT_API bool vtkDataSetAttributes_GetAbstractAttribute_0(vtkAbstractArray ** return_value, vtkDataSetAttributes * callingObject, int attributeType) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::GetAbstractAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAbstractAttribute(attributeType);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void RemoveArray(int index)
// void RemoveArray(int index)
TESTDLLSORT_API bool vtkDataSetAttributes_RemoveArray_0(vtkDataSetAttributes * callingObject, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::RemoveArray]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveArray(index);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static char* GetAttributeTypeAsString(int attributeType)
// static const char* GetAttributeTypeAsString(int attributeType)
TESTDLLSORT_API bool vtkDataSetAttributes_GetAttributeTypeAsString_0(const char ** return_value, int attributeType) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::GetAttributeTypeAsString]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataSetAttributes::GetAttributeTypeAsString(attributeType);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static char* GetLongAttributeTypeAsString(int attributeType)
// static const char* GetLongAttributeTypeAsString(int attributeType)
TESTDLLSORT_API bool vtkDataSetAttributes_GetLongAttributeTypeAsString_0(const char ** return_value, int attributeType) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::GetLongAttributeTypeAsString]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataSetAttributes::GetLongAttributeTypeAsString(attributeType);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetCopyAttribute(int index, int ctype)
// int GetCopyAttribute (int index, int ctype)
TESTDLLSORT_API bool vtkDataSetAttributes_GetCopyAttribute_0(int * return_value, vtkDataSetAttributes * callingObject, int index, int ctype) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::GetCopyAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCopyAttribute(index, ctype);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CopyScalarsOn()
// virtual void CopyScalarsOn ()
TESTDLLSORT_API bool vtkDataSetAttributes_CopyScalarsOn_0(vtkDataSetAttributes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::CopyScalarsOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyScalarsOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CopyScalarsOff()
// virtual void CopyScalarsOff ()
TESTDLLSORT_API bool vtkDataSetAttributes_CopyScalarsOff_0(vtkDataSetAttributes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::CopyScalarsOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyScalarsOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CopyVectorsOn()
// virtual void CopyVectorsOn ()
TESTDLLSORT_API bool vtkDataSetAttributes_CopyVectorsOn_0(vtkDataSetAttributes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::CopyVectorsOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyVectorsOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CopyVectorsOff()
// virtual void CopyVectorsOff ()
TESTDLLSORT_API bool vtkDataSetAttributes_CopyVectorsOff_0(vtkDataSetAttributes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::CopyVectorsOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyVectorsOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CopyNormalsOn()
// virtual void CopyNormalsOn ()
TESTDLLSORT_API bool vtkDataSetAttributes_CopyNormalsOn_0(vtkDataSetAttributes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::CopyNormalsOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyNormalsOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CopyNormalsOff()
// virtual void CopyNormalsOff ()
TESTDLLSORT_API bool vtkDataSetAttributes_CopyNormalsOff_0(vtkDataSetAttributes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::CopyNormalsOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyNormalsOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CopyTCoordsOn()
// virtual void CopyTCoordsOn ()
TESTDLLSORT_API bool vtkDataSetAttributes_CopyTCoordsOn_0(vtkDataSetAttributes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::CopyTCoordsOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyTCoordsOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CopyTCoordsOff()
// virtual void CopyTCoordsOff ()
TESTDLLSORT_API bool vtkDataSetAttributes_CopyTCoordsOff_0(vtkDataSetAttributes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::CopyTCoordsOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyTCoordsOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CopyTensorsOn()
// virtual void CopyTensorsOn ()
TESTDLLSORT_API bool vtkDataSetAttributes_CopyTensorsOn_0(vtkDataSetAttributes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::CopyTensorsOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyTensorsOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CopyTensorsOff()
// virtual void CopyTensorsOff ()
TESTDLLSORT_API bool vtkDataSetAttributes_CopyTensorsOff_0(vtkDataSetAttributes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::CopyTensorsOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyTensorsOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CopyGlobalIdsOn()
// virtual void CopyGlobalIdsOn ()
TESTDLLSORT_API bool vtkDataSetAttributes_CopyGlobalIdsOn_0(vtkDataSetAttributes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::CopyGlobalIdsOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyGlobalIdsOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CopyGlobalIdsOff()
// virtual void CopyGlobalIdsOff ()
TESTDLLSORT_API bool vtkDataSetAttributes_CopyGlobalIdsOff_0(vtkDataSetAttributes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::CopyGlobalIdsOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyGlobalIdsOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CopyPedigreeIdsOn()
// virtual void CopyPedigreeIdsOn ()
TESTDLLSORT_API bool vtkDataSetAttributes_CopyPedigreeIdsOn_0(vtkDataSetAttributes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::CopyPedigreeIdsOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyPedigreeIdsOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CopyPedigreeIdsOff()
// virtual void CopyPedigreeIdsOff ()
TESTDLLSORT_API bool vtkDataSetAttributes_CopyPedigreeIdsOff_0(vtkDataSetAttributes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::CopyPedigreeIdsOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyPedigreeIdsOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void PassData(vtkFieldData * fd)
// void PassData(vtkFieldData* fd)
TESTDLLSORT_API bool vtkDataSetAttributes_PassData_0(vtkDataSetAttributes * callingObject, vtkFieldData * fd) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::PassData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->PassData(fd);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyAllocate(vtkDataSetAttributes * pd, vtkIdType sze = 0, vtkIdType ext = 1000)
// void CopyAllocate(vtkDataSetAttributes* pd, vtkIdType sze=0, vtkIdType ext=1000)
TESTDLLSORT_API bool vtkDataSetAttributes_CopyAllocate_0(vtkDataSetAttributes * callingObject, vtkDataSetAttributes * pd, vtkIdType sze = 0, vtkIdType ext = 1000) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::CopyAllocate]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyAllocate(pd, sze, ext);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyAllocate(vtkDataSetAttributes * pd, vtkIdType sze, vtkIdType ext, int shallowCopyArrays)
// void CopyAllocate(vtkDataSetAttributes* pd, vtkIdType sze, vtkIdType ext, int shallowCopyArrays)
TESTDLLSORT_API bool vtkDataSetAttributes_CopyAllocate_1(vtkDataSetAttributes * callingObject, vtkDataSetAttributes * pd, vtkIdType sze, vtkIdType ext, int shallowCopyArrays) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::CopyAllocate]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyAllocate(pd, sze, ext, shallowCopyArrays);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetupForCopy(vtkDataSetAttributes * pd)
// void SetupForCopy(vtkDataSetAttributes* pd)
TESTDLLSORT_API bool vtkDataSetAttributes_SetupForCopy_0(vtkDataSetAttributes * callingObject, vtkDataSetAttributes * pd) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::SetupForCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetupForCopy(pd);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyStructuredData(vtkDataSetAttributes * inDsa, const int * inExt, const int * outExt, bool setSize = true)
// void CopyStructuredData(vtkDataSetAttributes *inDsa, const int *inExt, const int *outExt, bool setSize = true)
TESTDLLSORT_API bool vtkDataSetAttributes_CopyStructuredData_0(vtkDataSetAttributes * callingObject, vtkDataSetAttributes * inDsa, const int * inExt, const int * outExt, bool setSize = true) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::CopyStructuredData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyStructuredData(inDsa, inExt, outExt, setSize);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyData(vtkDataSetAttributes * fromPd, vtkIdType fromId, vtkIdType toId)
// void CopyData(vtkDataSetAttributes *fromPd, vtkIdType fromId, vtkIdType toId)
TESTDLLSORT_API bool vtkDataSetAttributes_CopyData_0(vtkDataSetAttributes * callingObject, vtkDataSetAttributes * fromPd, vtkIdType fromId, vtkIdType toId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::CopyData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyData(fromPd, fromId, toId);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyData(vtkDataSetAttributes * fromPd, vtkIdList * fromIds, vtkIdList * toIds)
// void CopyData(vtkDataSetAttributes *fromPd, vtkIdList *fromIds, vtkIdList *toIds)
TESTDLLSORT_API bool vtkDataSetAttributes_CopyData_1(vtkDataSetAttributes * callingObject, vtkDataSetAttributes * fromPd, vtkIdList * fromIds, vtkIdList * toIds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::CopyData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyData(fromPd, fromIds, toIds);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyData(vtkDataSetAttributes * fromPd, vtkIdType dstStart, vtkIdType n, vtkIdType srcStart)
// void CopyData(vtkDataSetAttributes *fromPd, vtkIdType dstStart, vtkIdType n, vtkIdType srcStart)
TESTDLLSORT_API bool vtkDataSetAttributes_CopyData_2(vtkDataSetAttributes * callingObject, vtkDataSetAttributes * fromPd, vtkIdType dstStart, vtkIdType n, vtkIdType srcStart) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::CopyData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyData(fromPd, dstStart, n, srcStart);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyTuple(vtkAbstractArray * fromData, vtkAbstractArray * toData, vtkIdType fromId, vtkIdType toId)
// void CopyTuple(vtkAbstractArray *fromData, vtkAbstractArray *toData, vtkIdType fromId, vtkIdType toId)
TESTDLLSORT_API bool vtkDataSetAttributes_CopyTuple_0(vtkDataSetAttributes * callingObject, vtkAbstractArray * fromData, vtkAbstractArray * toData, vtkIdType fromId, vtkIdType toId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::CopyTuple]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyTuple(fromData, toData, fromId, toId);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyTuples(vtkAbstractArray * fromData, vtkAbstractArray * toData, vtkIdList * fromIds, vtkIdList * toIds)
// void CopyTuples(vtkAbstractArray *fromData, vtkAbstractArray *toData, vtkIdList *fromIds, vtkIdList *toIds)
TESTDLLSORT_API bool vtkDataSetAttributes_CopyTuples_0(vtkDataSetAttributes * callingObject, vtkAbstractArray * fromData, vtkAbstractArray * toData, vtkIdList * fromIds, vtkIdList * toIds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::CopyTuples]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyTuples(fromData, toData, fromIds, toIds);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyTuples(vtkAbstractArray * fromData, vtkAbstractArray * toData, vtkIdType dstStart, vtkIdType n, vtkIdType srcStart)
// void CopyTuples(vtkAbstractArray *fromData, vtkAbstractArray *toData, vtkIdType dstStart, vtkIdType n, vtkIdType srcStart)
TESTDLLSORT_API bool vtkDataSetAttributes_CopyTuples_1(vtkDataSetAttributes * callingObject, vtkAbstractArray * fromData, vtkAbstractArray * toData, vtkIdType dstStart, vtkIdType n, vtkIdType srcStart) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::CopyTuples]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyTuples(fromData, toData, dstStart, n, srcStart);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InterpolateAllocate(vtkDataSetAttributes * pd, vtkIdType sze = 0, vtkIdType ext = 1000)
// void InterpolateAllocate(vtkDataSetAttributes* pd, vtkIdType sze=0, vtkIdType ext=1000)
TESTDLLSORT_API bool vtkDataSetAttributes_InterpolateAllocate_0(vtkDataSetAttributes * callingObject, vtkDataSetAttributes * pd, vtkIdType sze = 0, vtkIdType ext = 1000) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::InterpolateAllocate]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InterpolateAllocate(pd, sze, ext);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InterpolateAllocate(vtkDataSetAttributes * pd, vtkIdType sze, vtkIdType ext, int shallowCopyArrays)
// void InterpolateAllocate(vtkDataSetAttributes* pd, vtkIdType sze, vtkIdType ext, int shallowCopyArrays)
TESTDLLSORT_API bool vtkDataSetAttributes_InterpolateAllocate_1(vtkDataSetAttributes * callingObject, vtkDataSetAttributes * pd, vtkIdType sze, vtkIdType ext, int shallowCopyArrays) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::InterpolateAllocate]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InterpolateAllocate(pd, sze, ext, shallowCopyArrays);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InterpolatePoint(vtkDataSetAttributes * fromPd, vtkIdType toId, vtkIdList * ids, double * weights)
// void InterpolatePoint(vtkDataSetAttributes *fromPd, vtkIdType toId, vtkIdList *ids, double *weights)
TESTDLLSORT_API bool vtkDataSetAttributes_InterpolatePoint_0(vtkDataSetAttributes * callingObject, vtkDataSetAttributes * fromPd, vtkIdType toId, vtkIdList * ids, double * weights) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::InterpolatePoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InterpolatePoint(fromPd, toId, ids, weights);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InterpolateEdge(vtkDataSetAttributes * fromPd, vtkIdType toId, vtkIdType p1, vtkIdType p2, double t)
// void InterpolateEdge(vtkDataSetAttributes *fromPd, vtkIdType toId, vtkIdType p1, vtkIdType p2, double t)
TESTDLLSORT_API bool vtkDataSetAttributes_InterpolateEdge_0(vtkDataSetAttributes * callingObject, vtkDataSetAttributes * fromPd, vtkIdType toId, vtkIdType p1, vtkIdType p2, double t) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::InterpolateEdge]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InterpolateEdge(fromPd, toId, p1, p2, t);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InterpolateTime(vtkDataSetAttributes * from1, vtkDataSetAttributes * from2, vtkIdType id, double t)
// void InterpolateTime(vtkDataSetAttributes *from1, vtkDataSetAttributes *from2, vtkIdType id, double t)
TESTDLLSORT_API bool vtkDataSetAttributes_InterpolateTime_0(vtkDataSetAttributes * callingObject, vtkDataSetAttributes * from1, vtkDataSetAttributes * from2, vtkIdType id, double t) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAttributes::InterpolateTime]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InterpolateTime(from1, from2, id, t);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
