
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkInformationIntegerPointerKey.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkInformationIntegerPointerKey_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationIntegerPointerKey::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkInformationIntegerPointerKey::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkInformationIntegerPointerKey_IsA_0(vtkTypeBool * return_value, vtkInformationIntegerPointerKey * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationIntegerPointerKey::IsA]:[";
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

// static vtkInformationIntegerPointerKey* SafeDownCast(vtkObjectBase * o)
// static vtkInformationIntegerPointerKey* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkInformationIntegerPointerKey_SafeDownCast_0(vtkInformationIntegerPointerKey ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationIntegerPointerKey::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkInformationIntegerPointerKey::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkInformationIntegerPointerKey* NewInstance()
// vtkInformationIntegerPointerKey *NewInstance()
TESTDLLSORT_API bool vtkInformationIntegerPointerKey_NewInstance_0(vtkInformationIntegerPointerKey ** return_value, vtkInformationIntegerPointerKey * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationIntegerPointerKey::NewInstance]:[";
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

// void Set(vtkInformation * info, int * value, int length)
// void Set(vtkInformation* info, int* value, int length)
TESTDLLSORT_API bool vtkInformationIntegerPointerKey_Set_0(vtkInformationIntegerPointerKey * callingObject, vtkInformation * info, int * value, int length) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationIntegerPointerKey::Set]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Set(info, value, length);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int* Get(vtkInformation * info)
// int* Get(vtkInformation* info)
TESTDLLSORT_API bool vtkInformationIntegerPointerKey_Get_0(int ** return_value, vtkInformationIntegerPointerKey * callingObject, vtkInformation * info) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationIntegerPointerKey::Get]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Get(info);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Get(vtkInformation * info, int * value)
// void Get(vtkInformation* info, int* value)
TESTDLLSORT_API bool vtkInformationIntegerPointerKey_Get_1(vtkInformationIntegerPointerKey * callingObject, vtkInformation * info, int * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationIntegerPointerKey::Get]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Get(info, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Length(vtkInformation * info)
// int Length(vtkInformation* info)
TESTDLLSORT_API bool vtkInformationIntegerPointerKey_Length_0(int * return_value, vtkInformationIntegerPointerKey * callingObject, vtkInformation * info) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationIntegerPointerKey::Length]:[";
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
TESTDLLSORT_API bool vtkInformationIntegerPointerKey_ShallowCopy_0(vtkInformationIntegerPointerKey * callingObject, vtkInformation * from, vtkInformation * to) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationIntegerPointerKey::ShallowCopy]:[";
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
