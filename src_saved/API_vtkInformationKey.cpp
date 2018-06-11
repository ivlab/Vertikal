
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkInformationKey.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkInformationKey_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationKey::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkInformationKey::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkInformationKey_IsA_0(vtkTypeBool * return_value, vtkInformationKey * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationKey::IsA]:[";
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

// static vtkInformationKey* SafeDownCast(vtkObjectBase * o)
// static vtkInformationKey* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkInformationKey_SafeDownCast_0(vtkInformationKey ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationKey::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkInformationKey::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkInformationKey* NewInstance()
// vtkInformationKey *NewInstance()
TESTDLLSORT_API bool vtkInformationKey_NewInstance_0(vtkInformationKey ** return_value, vtkInformationKey * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationKey::NewInstance]:[";
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

// void Register(vtkObjectBase * ARG_0)
// void Register(vtkObjectBase*)
TESTDLLSORT_API bool vtkInformationKey_Register_0(vtkInformationKey * callingObject, vtkObjectBase * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationKey::Register]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Register(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void UnRegister(vtkObjectBase * ARG_0)
// void UnRegister(vtkObjectBase*)
TESTDLLSORT_API bool vtkInformationKey_UnRegister_0(vtkInformationKey * callingObject, vtkObjectBase * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationKey::UnRegister]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UnRegister(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char* GetName()
// const char* GetName()
TESTDLLSORT_API bool vtkInformationKey_GetName_0(const char ** return_value, vtkInformationKey * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationKey::GetName]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetName();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char* GetLocation()
// const char* GetLocation()
TESTDLLSORT_API bool vtkInformationKey_GetLocation_0(const char ** return_value, vtkInformationKey * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationKey::GetLocation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetLocation();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ShallowCopy(vtkInformation * from, vtkInformation * to)
// virtual void ShallowCopy(vtkInformation* from, vtkInformation* to)
TESTDLLSORT_API bool vtkInformationKey_ShallowCopy_0(vtkInformationKey * callingObject, vtkInformation * from, vtkInformation * to) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationKey::ShallowCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ShallowCopy(from, to);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void DeepCopy(vtkInformation * from, vtkInformation * to)
// virtual void DeepCopy(vtkInformation *from, vtkInformation *to)
TESTDLLSORT_API bool vtkInformationKey_DeepCopy_0(vtkInformationKey * callingObject, vtkInformation * from, vtkInformation * to) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationKey::DeepCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DeepCopy(from, to);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int Has(vtkInformation * info)
// virtual int Has(vtkInformation* info)
TESTDLLSORT_API bool vtkInformationKey_Has_0(int * return_value, vtkInformationKey * callingObject, vtkInformation * info) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationKey::Has]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Has(info);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void Remove(vtkInformation * info)
// virtual void Remove(vtkInformation* info)
TESTDLLSORT_API bool vtkInformationKey_Remove_0(vtkInformationKey * callingObject, vtkInformation * info) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationKey::Remove]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Remove(info);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void Report(vtkInformation * info, vtkGarbageCollector * collector)
// virtual void Report(vtkInformation* info, vtkGarbageCollector* collector)
TESTDLLSORT_API bool vtkInformationKey_Report_0(vtkInformationKey * callingObject, vtkInformation * info, vtkGarbageCollector * collector) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationKey::Report]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Report(info, collector);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Print(vtkInformation * info)
// void Print(vtkInformation* info)
TESTDLLSORT_API bool vtkInformationKey_Print_0(vtkInformationKey * callingObject, vtkInformation * info) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationKey::Print]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Print(info);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual bool NeedToExecute(vtkInformation * ARG_0, vtkInformation * ARG_1)
// virtual bool NeedToExecute(vtkInformation* , vtkInformation* )
TESTDLLSORT_API bool vtkInformationKey_NeedToExecute_0(bool * return_value, vtkInformationKey * callingObject, vtkInformation * ARG_0, vtkInformation * ARG_1) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationKey::NeedToExecute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->NeedToExecute(ARG_0, ARG_1);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void StoreMetaData(vtkInformation * ARG_0, vtkInformation * ARG_1, vtkInformation * ARG_2)
// virtual void StoreMetaData(vtkInformation* , vtkInformation* , vtkInformation* )
TESTDLLSORT_API bool vtkInformationKey_StoreMetaData_0(vtkInformationKey * callingObject, vtkInformation * ARG_0, vtkInformation * ARG_1, vtkInformation * ARG_2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationKey::StoreMetaData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->StoreMetaData(ARG_0, ARG_1, ARG_2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CopyDefaultInformation(vtkInformation * ARG_0, vtkInformation * ARG_1, vtkInformation * ARG_2)
// virtual void CopyDefaultInformation(vtkInformation* , vtkInformation* , vtkInformation* )
TESTDLLSORT_API bool vtkInformationKey_CopyDefaultInformation_0(vtkInformationKey * callingObject, vtkInformation * ARG_0, vtkInformation * ARG_1, vtkInformation * ARG_2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationKey::CopyDefaultInformation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyDefaultInformation(ARG_0, ARG_1, ARG_2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
