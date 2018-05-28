
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkInformationStringVectorKey.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkInformationStringVectorKey_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationStringVectorKey::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkInformationStringVectorKey::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkInformationStringVectorKey_IsA_0(vtkTypeBool * return_value, vtkInformationStringVectorKey * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationStringVectorKey::IsA]:[";
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

// static vtkInformationStringVectorKey* SafeDownCast(vtkObjectBase * o)
// static vtkInformationStringVectorKey* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkInformationStringVectorKey_SafeDownCast_0(vtkInformationStringVectorKey ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationStringVectorKey::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkInformationStringVectorKey::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkInformationStringVectorKey* NewInstance()
// vtkInformationStringVectorKey *NewInstance()
TESTDLLSORT_API bool vtkInformationStringVectorKey_NewInstance_0(vtkInformationStringVectorKey ** return_value, vtkInformationStringVectorKey * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationStringVectorKey::NewInstance]:[";
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

// void Append(vtkInformation * info, const char * value)
// void Append(vtkInformation* info, const char* value)
TESTDLLSORT_API bool vtkInformationStringVectorKey_Append_0(vtkInformationStringVectorKey * callingObject, vtkInformation * info, const char * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationStringVectorKey::Append]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Append(info, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Set(vtkInformation * info, const char * value, int idx = 0)
// void Set(vtkInformation* info, const char* value, int idx = 0)
TESTDLLSORT_API bool vtkInformationStringVectorKey_Set_0(vtkInformationStringVectorKey * callingObject, vtkInformation * info, const char * value, int idx = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationStringVectorKey::Set]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Set(info, value, idx);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char* Get(vtkInformation * info, int idx = 0)
// const char* Get(vtkInformation* info, int idx = 0)
TESTDLLSORT_API bool vtkInformationStringVectorKey_Get_0(const char ** return_value, vtkInformationStringVectorKey * callingObject, vtkInformation * info, int idx = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationStringVectorKey::Get]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Get(info, idx);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Length(vtkInformation * info)
// int Length(vtkInformation* info)
TESTDLLSORT_API bool vtkInformationStringVectorKey_Length_0(int * return_value, vtkInformationStringVectorKey * callingObject, vtkInformation * info) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationStringVectorKey::Length]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Length(info);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ShallowCopy(vtkInformation * from, vtkInformation * to)
// void ShallowCopy(vtkInformation* from, vtkInformation* to)
TESTDLLSORT_API bool vtkInformationStringVectorKey_ShallowCopy_0(vtkInformationStringVectorKey * callingObject, vtkInformation * from, vtkInformation * to) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationStringVectorKey::ShallowCopy]:[";
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

}
