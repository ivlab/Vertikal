
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkInformationObjectBaseVectorKey.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkInformationObjectBaseVectorKey_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationObjectBaseVectorKey::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkInformationObjectBaseVectorKey::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkInformationObjectBaseVectorKey_IsA_0(vtkTypeBool * return_value, vtkInformationObjectBaseVectorKey * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationObjectBaseVectorKey::IsA]:[";
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

// static vtkInformationObjectBaseVectorKey* SafeDownCast(vtkObjectBase * o)
// static vtkInformationObjectBaseVectorKey* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkInformationObjectBaseVectorKey_SafeDownCast_0(vtkInformationObjectBaseVectorKey ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationObjectBaseVectorKey::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkInformationObjectBaseVectorKey::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkInformationObjectBaseVectorKey* NewInstance()
// vtkInformationObjectBaseVectorKey *NewInstance()
TESTDLLSORT_API bool vtkInformationObjectBaseVectorKey_NewInstance_0(vtkInformationObjectBaseVectorKey ** return_value, vtkInformationObjectBaseVectorKey * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationObjectBaseVectorKey::NewInstance]:[";
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

// void Clear(vtkInformation * info)
// void Clear(vtkInformation* info)
TESTDLLSORT_API bool vtkInformationObjectBaseVectorKey_Clear_0(vtkInformationObjectBaseVectorKey * callingObject, vtkInformation * info) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationObjectBaseVectorKey::Clear]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Clear(info);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Resize(vtkInformation * info, int n)
// void Resize(vtkInformation* info, int n)
TESTDLLSORT_API bool vtkInformationObjectBaseVectorKey_Resize_0(vtkInformationObjectBaseVectorKey * callingObject, vtkInformation * info, int n) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationObjectBaseVectorKey::Resize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Resize(info, n);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Size(vtkInformation * info)
// int Size(vtkInformation* info)
TESTDLLSORT_API bool vtkInformationObjectBaseVectorKey_Size_0(int * return_value, vtkInformationObjectBaseVectorKey * callingObject, vtkInformation * info) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationObjectBaseVectorKey::Size]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Size(info);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Length(vtkInformation * info)
// int Length(vtkInformation* info)
TESTDLLSORT_API bool vtkInformationObjectBaseVectorKey_Length_0(int * return_value, vtkInformationObjectBaseVectorKey * callingObject, vtkInformation * info) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationObjectBaseVectorKey::Length]:[";
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

// void Append(vtkInformation * info, vtkObjectBase * value)
// void Append(vtkInformation* info, vtkObjectBase *value)
TESTDLLSORT_API bool vtkInformationObjectBaseVectorKey_Append_0(vtkInformationObjectBaseVectorKey * callingObject, vtkInformation * info, vtkObjectBase * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationObjectBaseVectorKey::Append]:[";
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

// void Set(vtkInformation * info, vtkObjectBase * value, int i)
// void Set(vtkInformation* info, vtkObjectBase *value, int i)
TESTDLLSORT_API bool vtkInformationObjectBaseVectorKey_Set_0(vtkInformationObjectBaseVectorKey * callingObject, vtkInformation * info, vtkObjectBase * value, int i) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationObjectBaseVectorKey::Set]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Set(info, value, i);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Remove(vtkInformation * info, vtkObjectBase * val)
// void Remove(vtkInformation *info, vtkObjectBase *val)
TESTDLLSORT_API bool vtkInformationObjectBaseVectorKey_Remove_0(vtkInformationObjectBaseVectorKey * callingObject, vtkInformation * info, vtkObjectBase * val) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationObjectBaseVectorKey::Remove]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Remove(info, val);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Remove(vtkInformation * info, int idx)
// void Remove(vtkInformation *info, int idx)
TESTDLLSORT_API bool vtkInformationObjectBaseVectorKey_Remove_1(vtkInformationObjectBaseVectorKey * callingObject, vtkInformation * info, int idx) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationObjectBaseVectorKey::Remove]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Remove(info, idx);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetRange(vtkInformation * info, vtkObjectBase ** source, int from, int to, int n)
// void SetRange(vtkInformation* info, vtkObjectBase **source, int from, int to, int n)
TESTDLLSORT_API bool vtkInformationObjectBaseVectorKey_SetRange_0(vtkInformationObjectBaseVectorKey * callingObject, vtkInformation * info, vtkObjectBase ** source, int from, int to, int n) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationObjectBaseVectorKey::SetRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetRange(info, source, from, to, n);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetRange(vtkInformation * info, vtkObjectBase ** dest, int from, int to, int n)
// void GetRange(vtkInformation *info, vtkObjectBase **dest, int from, int to, int n)
TESTDLLSORT_API bool vtkInformationObjectBaseVectorKey_GetRange_0(vtkInformationObjectBaseVectorKey * callingObject, vtkInformation * info, vtkObjectBase ** dest, int from, int to, int n) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationObjectBaseVectorKey::GetRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetRange(info, dest, from, to, n);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkObjectBase* Get(vtkInformation * info, int idx)
// vtkObjectBase *Get(vtkInformation* info, int idx)
TESTDLLSORT_API bool vtkInformationObjectBaseVectorKey_Get_0(vtkObjectBase ** return_value, vtkInformationObjectBaseVectorKey * callingObject, vtkInformation * info, int idx) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationObjectBaseVectorKey::Get]:[";
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

// void ShallowCopy(vtkInformation * from, vtkInformation * to)
// void ShallowCopy(vtkInformation* from, vtkInformation* to)
TESTDLLSORT_API bool vtkInformationObjectBaseVectorKey_ShallowCopy_0(vtkInformationObjectBaseVectorKey * callingObject, vtkInformation * from, vtkInformation * to) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformationObjectBaseVectorKey::ShallowCopy]:[";
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
