
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkInformation.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkInformation* New()
// static vtkInformation *New()
TESTDLLSORT_API bool vtkInformation_New_0(vtkInformation ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkInformation::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkInformation_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkInformation::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkInformation_IsA_0(vtkTypeBool * return_value, vtkInformation * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::IsA]:[";
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

// static vtkInformation* SafeDownCast(vtkObjectBase * o)
// static vtkInformation* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkInformation_SafeDownCast_0(vtkInformation ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkInformation::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkInformation* NewInstance()
// vtkInformation *NewInstance()
TESTDLLSORT_API bool vtkInformation_NewInstance_0(vtkInformation ** return_value, vtkInformation * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::NewInstance]:[";
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

// void Modified()
// void Modified()
TESTDLLSORT_API bool vtkInformation_Modified_0(vtkInformation * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Modified]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Modified();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Modified(vtkInformationKey * key)
// void Modified(vtkInformationKey* key)
TESTDLLSORT_API bool vtkInformation_Modified_1(vtkInformation * callingObject, vtkInformationKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Modified]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Modified(key);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Clear()
// void Clear()
TESTDLLSORT_API bool vtkInformation_Clear_0(vtkInformation * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Clear]:[";
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

// int GetNumberOfKeys()
// int GetNumberOfKeys()
TESTDLLSORT_API bool vtkInformation_GetNumberOfKeys_0(int * return_value, vtkInformation * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::GetNumberOfKeys]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfKeys();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Copy(vtkInformation * from, int deep = 0)
// void Copy(vtkInformation* from, int deep=0)
TESTDLLSORT_API bool vtkInformation_Copy_0(vtkInformation * callingObject, vtkInformation * from, int deep = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Copy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Copy(from, deep);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Append(vtkInformation * from, int deep = 0)
// void Append(vtkInformation* from, int deep=0)
TESTDLLSORT_API bool vtkInformation_Append_0(vtkInformation * callingObject, vtkInformation * from, int deep = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Append]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Append(from, deep);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyEntry(vtkInformation * from, vtkInformationKey * key, int deep = 0)
// void CopyEntry(vtkInformation* from, vtkInformationKey* key, int deep=0)
TESTDLLSORT_API bool vtkInformation_CopyEntry_0(vtkInformation * callingObject, vtkInformation * from, vtkInformationKey * key, int deep = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::CopyEntry]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyEntry(from, key, deep);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyEntry(vtkInformation * from, vtkInformationDataObjectKey * key, int deep = 0)
// void CopyEntry(vtkInformation* from, vtkInformationDataObjectKey* key, int deep=0)
TESTDLLSORT_API bool vtkInformation_CopyEntry_1(vtkInformation * callingObject, vtkInformation * from, vtkInformationDataObjectKey * key, int deep = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::CopyEntry]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyEntry(from, key, deep);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyEntry(vtkInformation * from, vtkInformationDoubleVectorKey * key, int deep = 0)
// void CopyEntry(vtkInformation* from, vtkInformationDoubleVectorKey* key, int deep=0)
TESTDLLSORT_API bool vtkInformation_CopyEntry_2(vtkInformation * callingObject, vtkInformation * from, vtkInformationDoubleVectorKey * key, int deep = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::CopyEntry]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyEntry(from, key, deep);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyEntry(vtkInformation * from, vtkInformationVariantKey * key, int deep = 0)
// void CopyEntry(vtkInformation* from, vtkInformationVariantKey* key, int deep=0)
TESTDLLSORT_API bool vtkInformation_CopyEntry_3(vtkInformation * callingObject, vtkInformation * from, vtkInformationVariantKey * key, int deep = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::CopyEntry]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyEntry(from, key, deep);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyEntry(vtkInformation * from, vtkInformationVariantVectorKey * key, int deep = 0)
// void CopyEntry(vtkInformation* from, vtkInformationVariantVectorKey* key, int deep=0)
TESTDLLSORT_API bool vtkInformation_CopyEntry_4(vtkInformation * callingObject, vtkInformation * from, vtkInformationVariantVectorKey * key, int deep = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::CopyEntry]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyEntry(from, key, deep);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyEntry(vtkInformation * from, vtkInformationInformationKey * key, int deep = 0)
// void CopyEntry(vtkInformation* from, vtkInformationInformationKey* key, int deep=0)
TESTDLLSORT_API bool vtkInformation_CopyEntry_5(vtkInformation * callingObject, vtkInformation * from, vtkInformationInformationKey * key, int deep = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::CopyEntry]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyEntry(from, key, deep);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyEntry(vtkInformation * from, vtkInformationInformationVectorKey * key, int deep = 0)
// void CopyEntry(vtkInformation* from, vtkInformationInformationVectorKey* key, int deep=0)
TESTDLLSORT_API bool vtkInformation_CopyEntry_6(vtkInformation * callingObject, vtkInformation * from, vtkInformationInformationVectorKey * key, int deep = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::CopyEntry]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyEntry(from, key, deep);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyEntry(vtkInformation * from, vtkInformationIntegerKey * key, int deep = 0)
// void CopyEntry(vtkInformation* from, vtkInformationIntegerKey* key, int deep=0)
TESTDLLSORT_API bool vtkInformation_CopyEntry_7(vtkInformation * callingObject, vtkInformation * from, vtkInformationIntegerKey * key, int deep = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::CopyEntry]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyEntry(from, key, deep);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyEntry(vtkInformation * from, vtkInformationIntegerVectorKey * key, int deep = 0)
// void CopyEntry(vtkInformation* from, vtkInformationIntegerVectorKey* key, int deep=0)
TESTDLLSORT_API bool vtkInformation_CopyEntry_8(vtkInformation * callingObject, vtkInformation * from, vtkInformationIntegerVectorKey * key, int deep = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::CopyEntry]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyEntry(from, key, deep);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyEntry(vtkInformation * from, vtkInformationObjectBaseVectorKey * key, int deep = 0)
// void CopyEntry(vtkInformation* from, vtkInformationObjectBaseVectorKey* key, int deep=0)
TESTDLLSORT_API bool vtkInformation_CopyEntry_9(vtkInformation * callingObject, vtkInformation * from, vtkInformationObjectBaseVectorKey * key, int deep = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::CopyEntry]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyEntry(from, key, deep);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyEntry(vtkInformation * from, vtkInformationRequestKey * key, int deep = 0)
// void CopyEntry(vtkInformation* from, vtkInformationRequestKey* key, int deep=0)
TESTDLLSORT_API bool vtkInformation_CopyEntry_10(vtkInformation * callingObject, vtkInformation * from, vtkInformationRequestKey * key, int deep = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::CopyEntry]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyEntry(from, key, deep);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyEntry(vtkInformation * from, vtkInformationStringKey * key, int deep = 0)
// void CopyEntry(vtkInformation* from, vtkInformationStringKey* key, int deep=0)
TESTDLLSORT_API bool vtkInformation_CopyEntry_11(vtkInformation * callingObject, vtkInformation * from, vtkInformationStringKey * key, int deep = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::CopyEntry]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyEntry(from, key, deep);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyEntry(vtkInformation * from, vtkInformationStringVectorKey * key, int deep = 0)
// void CopyEntry(vtkInformation* from, vtkInformationStringVectorKey* key, int deep=0)
TESTDLLSORT_API bool vtkInformation_CopyEntry_12(vtkInformation * callingObject, vtkInformation * from, vtkInformationStringVectorKey * key, int deep = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::CopyEntry]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyEntry(from, key, deep);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyEntry(vtkInformation * from, vtkInformationUnsignedLongKey * key, int deep = 0)
// void CopyEntry(vtkInformation* from, vtkInformationUnsignedLongKey* key, int deep=0)
TESTDLLSORT_API bool vtkInformation_CopyEntry_13(vtkInformation * callingObject, vtkInformation * from, vtkInformationUnsignedLongKey * key, int deep = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::CopyEntry]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyEntry(from, key, deep);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyEntries(vtkInformation * from, vtkInformationKeyVectorKey * key, int deep = 0)
// void CopyEntries(vtkInformation* from, vtkInformationKeyVectorKey* key, int deep=0)
TESTDLLSORT_API bool vtkInformation_CopyEntries_0(vtkInformation * callingObject, vtkInformation * from, vtkInformationKeyVectorKey * key, int deep = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::CopyEntries]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyEntries(from, key, deep);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Has(vtkInformationKey * key)
// int Has(vtkInformationKey* key)
TESTDLLSORT_API bool vtkInformation_Has_0(int * return_value, vtkInformation * callingObject, vtkInformationKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Has]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Has(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Remove(vtkInformationKey * key)
// void Remove(vtkInformationKey* key)
TESTDLLSORT_API bool vtkInformation_Remove_0(vtkInformation * callingObject, vtkInformationKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Remove]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Remove(key);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Set(vtkInformationRequestKey * key)
// void Set(vtkInformationRequestKey* key)
TESTDLLSORT_API bool vtkInformation_Set_0(vtkInformation * callingObject, vtkInformationRequestKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Set]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Set(key);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Remove(vtkInformationRequestKey * key)
// void Remove(vtkInformationRequestKey* key)
TESTDLLSORT_API bool vtkInformation_Remove_1(vtkInformation * callingObject, vtkInformationRequestKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Remove]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Remove(key);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Has(vtkInformationRequestKey * key)
// int Has(vtkInformationRequestKey* key)
TESTDLLSORT_API bool vtkInformation_Has_1(int * return_value, vtkInformation * callingObject, vtkInformationRequestKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Has]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Has(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Set(vtkInformationIntegerKey * key, int value)
// void Set(vtkInformationIntegerKey* key, int value)
TESTDLLSORT_API bool vtkInformation_Set_1(vtkInformation * callingObject, vtkInformationIntegerKey * key, int value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Set]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Set(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Get(vtkInformationIntegerKey * key)
// int Get(vtkInformationIntegerKey* key)
TESTDLLSORT_API bool vtkInformation_Get_0(int * return_value, vtkInformation * callingObject, vtkInformationIntegerKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Get]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Get(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Remove(vtkInformationIntegerKey * key)
// void Remove(vtkInformationIntegerKey* key)
TESTDLLSORT_API bool vtkInformation_Remove_2(vtkInformation * callingObject, vtkInformationIntegerKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Remove]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Remove(key);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Has(vtkInformationIntegerKey * key)
// int Has(vtkInformationIntegerKey* key)
TESTDLLSORT_API bool vtkInformation_Has_2(int * return_value, vtkInformation * callingObject, vtkInformationIntegerKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Has]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Has(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Set(vtkInformationIdTypeKey * key, vtkIdType value)
// void Set(vtkInformationIdTypeKey* key, vtkIdType value)
TESTDLLSORT_API bool vtkInformation_Set_2(vtkInformation * callingObject, vtkInformationIdTypeKey * key, vtkIdType value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Set]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Set(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType Get(vtkInformationIdTypeKey * key)
// vtkIdType Get(vtkInformationIdTypeKey* key)
TESTDLLSORT_API bool vtkInformation_Get_1(vtkIdType * return_value, vtkInformation * callingObject, vtkInformationIdTypeKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Get]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Get(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Remove(vtkInformationIdTypeKey * key)
// void Remove(vtkInformationIdTypeKey* key)
TESTDLLSORT_API bool vtkInformation_Remove_3(vtkInformation * callingObject, vtkInformationIdTypeKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Remove]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Remove(key);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Has(vtkInformationIdTypeKey * key)
// int Has(vtkInformationIdTypeKey* key)
TESTDLLSORT_API bool vtkInformation_Has_3(int * return_value, vtkInformation * callingObject, vtkInformationIdTypeKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Has]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Has(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Set(vtkInformationDoubleKey * key, double value)
// void Set(vtkInformationDoubleKey* key, double value)
TESTDLLSORT_API bool vtkInformation_Set_3(vtkInformation * callingObject, vtkInformationDoubleKey * key, double value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Set]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Set(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double Get(vtkInformationDoubleKey * key)
// double Get(vtkInformationDoubleKey* key)
TESTDLLSORT_API bool vtkInformation_Get_2(double * return_value, vtkInformation * callingObject, vtkInformationDoubleKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Get]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Get(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Remove(vtkInformationDoubleKey * key)
// void Remove(vtkInformationDoubleKey* key)
TESTDLLSORT_API bool vtkInformation_Remove_4(vtkInformation * callingObject, vtkInformationDoubleKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Remove]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Remove(key);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Has(vtkInformationDoubleKey * key)
// int Has(vtkInformationDoubleKey* key)
TESTDLLSORT_API bool vtkInformation_Has_4(int * return_value, vtkInformation * callingObject, vtkInformationDoubleKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Has]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Has(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Remove(vtkInformationVariantKey * key)
// void Remove(vtkInformationVariantKey* key)
TESTDLLSORT_API bool vtkInformation_Remove_5(vtkInformation * callingObject, vtkInformationVariantKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Remove]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Remove(key);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Has(vtkInformationVariantKey * key)
// int Has(vtkInformationVariantKey* key)
TESTDLLSORT_API bool vtkInformation_Has_5(int * return_value, vtkInformation * callingObject, vtkInformationVariantKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Has]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Has(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Append(vtkInformationIntegerVectorKey * key, int value)
// void Append(vtkInformationIntegerVectorKey* key, int value)
TESTDLLSORT_API bool vtkInformation_Append_1(vtkInformation * callingObject, vtkInformationIntegerVectorKey * key, int value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Append]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Append(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Set(vtkInformationIntegerVectorKey * key, const int * value, int length)
// void Set(vtkInformationIntegerVectorKey* key, const int* value, int length)
TESTDLLSORT_API bool vtkInformation_Set_4(vtkInformation * callingObject, vtkInformationIntegerVectorKey * key, const int * value, int length) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Set]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Set(key, value, length);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Set(vtkInformationIntegerVectorKey * key, int value1, int value2, int value3)
// void Set(vtkInformationIntegerVectorKey* key, int value1, int value2, int value3)
TESTDLLSORT_API bool vtkInformation_Set_5(vtkInformation * callingObject, vtkInformationIntegerVectorKey * key, int value1, int value2, int value3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Set]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Set(key, value1, value2, value3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Set(vtkInformationIntegerVectorKey * key, int value1, int value2, int value3, int value4, int value5, int value6)
// void Set(vtkInformationIntegerVectorKey* key, int value1, int value2, int value3, int value4, int value5, int value6)
TESTDLLSORT_API bool vtkInformation_Set_6(vtkInformation * callingObject, vtkInformationIntegerVectorKey * key, int value1, int value2, int value3, int value4, int value5, int value6) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Set]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Set(key, value1, value2, value3, value4, value5, value6);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int* Get(vtkInformationIntegerVectorKey * key)
// int* Get(vtkInformationIntegerVectorKey* key)
TESTDLLSORT_API bool vtkInformation_Get_3(int ** return_value, vtkInformation * callingObject, vtkInformationIntegerVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Get]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Get(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Get(vtkInformationIntegerVectorKey * key, int idx)
// int Get(vtkInformationIntegerVectorKey* key, int idx)
TESTDLLSORT_API bool vtkInformation_Get_4(int * return_value, vtkInformation * callingObject, vtkInformationIntegerVectorKey * key, int idx) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Get]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Get(key, idx);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Get(vtkInformationIntegerVectorKey * key, int * value)
// void Get(vtkInformationIntegerVectorKey* key, int* value)
TESTDLLSORT_API bool vtkInformation_Get_5(vtkInformation * callingObject, vtkInformationIntegerVectorKey * key, int * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Get]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Get(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Length(vtkInformationIntegerVectorKey * key)
// int Length(vtkInformationIntegerVectorKey* key)
TESTDLLSORT_API bool vtkInformation_Length_0(int * return_value, vtkInformation * callingObject, vtkInformationIntegerVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Length]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Length(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Remove(vtkInformationIntegerVectorKey * key)
// void Remove(vtkInformationIntegerVectorKey* key)
TESTDLLSORT_API bool vtkInformation_Remove_6(vtkInformation * callingObject, vtkInformationIntegerVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Remove]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Remove(key);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Has(vtkInformationIntegerVectorKey * key)
// int Has(vtkInformationIntegerVectorKey* key)
TESTDLLSORT_API bool vtkInformation_Has_6(int * return_value, vtkInformation * callingObject, vtkInformationIntegerVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Has]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Has(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Append(vtkInformationStringVectorKey * key, const char * value)
// void Append(vtkInformationStringVectorKey* key, const char* value)
TESTDLLSORT_API bool vtkInformation_Append_2(vtkInformation * callingObject, vtkInformationStringVectorKey * key, const char * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Append]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Append(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Set(vtkInformationStringVectorKey * key, const char * value, int idx = 0)
// void Set(vtkInformationStringVectorKey* key, const char* value, int idx = 0)
TESTDLLSORT_API bool vtkInformation_Set_7(vtkInformation * callingObject, vtkInformationStringVectorKey * key, const char * value, int idx = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Set]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Set(key, value, idx);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char* Get(vtkInformationStringVectorKey * key, int idx = 0)
// const char* Get(vtkInformationStringVectorKey* key, int idx = 0)
TESTDLLSORT_API bool vtkInformation_Get_6(const char ** return_value, vtkInformation * callingObject, vtkInformationStringVectorKey * key, int idx = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Get]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Get(key, idx);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Length(vtkInformationStringVectorKey * key)
// int Length(vtkInformationStringVectorKey* key)
TESTDLLSORT_API bool vtkInformation_Length_1(int * return_value, vtkInformation * callingObject, vtkInformationStringVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Length]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Length(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Remove(vtkInformationStringVectorKey * key)
// void Remove(vtkInformationStringVectorKey* key)
TESTDLLSORT_API bool vtkInformation_Remove_7(vtkInformation * callingObject, vtkInformationStringVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Remove]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Remove(key);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Has(vtkInformationStringVectorKey * key)
// int Has(vtkInformationStringVectorKey* key)
TESTDLLSORT_API bool vtkInformation_Has_7(int * return_value, vtkInformation * callingObject, vtkInformationStringVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Has]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Has(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Set(vtkInformationIntegerPointerKey * key, int * value, int length)
// void Set(vtkInformationIntegerPointerKey* key, int* value, int length)
TESTDLLSORT_API bool vtkInformation_Set_8(vtkInformation * callingObject, vtkInformationIntegerPointerKey * key, int * value, int length) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Set]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Set(key, value, length);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int* Get(vtkInformationIntegerPointerKey * key)
// int* Get(vtkInformationIntegerPointerKey* key)
TESTDLLSORT_API bool vtkInformation_Get_7(int ** return_value, vtkInformation * callingObject, vtkInformationIntegerPointerKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Get]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Get(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Get(vtkInformationIntegerPointerKey * key, int * value)
// void Get(vtkInformationIntegerPointerKey* key, int* value)
TESTDLLSORT_API bool vtkInformation_Get_8(vtkInformation * callingObject, vtkInformationIntegerPointerKey * key, int * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Get]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Get(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Length(vtkInformationIntegerPointerKey * key)
// int Length(vtkInformationIntegerPointerKey* key)
TESTDLLSORT_API bool vtkInformation_Length_2(int * return_value, vtkInformation * callingObject, vtkInformationIntegerPointerKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Length]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Length(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Remove(vtkInformationIntegerPointerKey * key)
// void Remove(vtkInformationIntegerPointerKey* key)
TESTDLLSORT_API bool vtkInformation_Remove_8(vtkInformation * callingObject, vtkInformationIntegerPointerKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Remove]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Remove(key);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Has(vtkInformationIntegerPointerKey * key)
// int Has(vtkInformationIntegerPointerKey* key)
TESTDLLSORT_API bool vtkInformation_Has_8(int * return_value, vtkInformation * callingObject, vtkInformationIntegerPointerKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Has]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Has(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Set(vtkInformationUnsignedLongKey * key, unsigned long value)
// void Set(vtkInformationUnsignedLongKey* key, unsigned long value)
TESTDLLSORT_API bool vtkInformation_Set_9(vtkInformation * callingObject, vtkInformationUnsignedLongKey * key, unsigned long value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Set]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Set(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// long Get(vtkInformationUnsignedLongKey * key)
// unsigned long Get(vtkInformationUnsignedLongKey* key)
TESTDLLSORT_API bool vtkInformation_Get_9(unsigned long * return_value, vtkInformation * callingObject, vtkInformationUnsignedLongKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Get]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Get(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Remove(vtkInformationUnsignedLongKey * key)
// void Remove(vtkInformationUnsignedLongKey* key)
TESTDLLSORT_API bool vtkInformation_Remove_9(vtkInformation * callingObject, vtkInformationUnsignedLongKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Remove]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Remove(key);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Has(vtkInformationUnsignedLongKey * key)
// int Has(vtkInformationUnsignedLongKey* key)
TESTDLLSORT_API bool vtkInformation_Has_9(int * return_value, vtkInformation * callingObject, vtkInformationUnsignedLongKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Has]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Has(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Append(vtkInformationDoubleVectorKey * key, double value)
// void Append(vtkInformationDoubleVectorKey* key, double value)
TESTDLLSORT_API bool vtkInformation_Append_3(vtkInformation * callingObject, vtkInformationDoubleVectorKey * key, double value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Append]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Append(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Set(vtkInformationDoubleVectorKey * key, const double * value, int length)
// void Set(vtkInformationDoubleVectorKey* key, const double* value, int length)
TESTDLLSORT_API bool vtkInformation_Set_10(vtkInformation * callingObject, vtkInformationDoubleVectorKey * key, const double * value, int length) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Set]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Set(key, value, length);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Set(vtkInformationDoubleVectorKey * key, double value1, double value2, double value3)
// void Set(vtkInformationDoubleVectorKey* key, double value1, double value2, double value3)
TESTDLLSORT_API bool vtkInformation_Set_11(vtkInformation * callingObject, vtkInformationDoubleVectorKey * key, double value1, double value2, double value3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Set]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Set(key, value1, value2, value3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Set(vtkInformationDoubleVectorKey * key, double value1, double value2, double value3, double value4, double value5, double value6)
// void Set(vtkInformationDoubleVectorKey* key, double value1, double value2, double value3, double value4, double value5, double value6)
TESTDLLSORT_API bool vtkInformation_Set_12(vtkInformation * callingObject, vtkInformationDoubleVectorKey * key, double value1, double value2, double value3, double value4, double value5, double value6) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Set]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Set(key, value1, value2, value3, value4, value5, value6);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* Get(vtkInformationDoubleVectorKey * key)
// double* Get(vtkInformationDoubleVectorKey* key)
TESTDLLSORT_API bool vtkInformation_Get_10(double ** return_value, vtkInformation * callingObject, vtkInformationDoubleVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Get]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Get(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double Get(vtkInformationDoubleVectorKey * key, int idx)
// double Get(vtkInformationDoubleVectorKey* key, int idx)
TESTDLLSORT_API bool vtkInformation_Get_11(double * return_value, vtkInformation * callingObject, vtkInformationDoubleVectorKey * key, int idx) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Get]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Get(key, idx);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Get(vtkInformationDoubleVectorKey * key, double * value)
// void Get(vtkInformationDoubleVectorKey* key, double* value)
TESTDLLSORT_API bool vtkInformation_Get_12(vtkInformation * callingObject, vtkInformationDoubleVectorKey * key, double * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Get]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Get(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Length(vtkInformationDoubleVectorKey * key)
// int Length(vtkInformationDoubleVectorKey* key)
TESTDLLSORT_API bool vtkInformation_Length_3(int * return_value, vtkInformation * callingObject, vtkInformationDoubleVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Length]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Length(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Remove(vtkInformationDoubleVectorKey * key)
// void Remove(vtkInformationDoubleVectorKey* key)
TESTDLLSORT_API bool vtkInformation_Remove_10(vtkInformation * callingObject, vtkInformationDoubleVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Remove]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Remove(key);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Has(vtkInformationDoubleVectorKey * key)
// int Has(vtkInformationDoubleVectorKey* key)
TESTDLLSORT_API bool vtkInformation_Has_10(int * return_value, vtkInformation * callingObject, vtkInformationDoubleVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Has]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Has(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Length(vtkInformationVariantVectorKey * key)
// int Length(vtkInformationVariantVectorKey* key)
TESTDLLSORT_API bool vtkInformation_Length_4(int * return_value, vtkInformation * callingObject, vtkInformationVariantVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Length]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Length(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Remove(vtkInformationVariantVectorKey * key)
// void Remove(vtkInformationVariantVectorKey* key)
TESTDLLSORT_API bool vtkInformation_Remove_11(vtkInformation * callingObject, vtkInformationVariantVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Remove]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Remove(key);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Has(vtkInformationVariantVectorKey * key)
// int Has(vtkInformationVariantVectorKey* key)
TESTDLLSORT_API bool vtkInformation_Has_11(int * return_value, vtkInformation * callingObject, vtkInformationVariantVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Has]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Has(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Append(vtkInformationKeyVectorKey * key, vtkInformationKey * value)
// void Append(vtkInformationKeyVectorKey* key, vtkInformationKey* value)
TESTDLLSORT_API bool vtkInformation_Append_4(vtkInformation * callingObject, vtkInformationKeyVectorKey * key, vtkInformationKey * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Append]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Append(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AppendUnique(vtkInformationKeyVectorKey * key, vtkInformationKey * value)
// void AppendUnique(vtkInformationKeyVectorKey* key, vtkInformationKey* value)
TESTDLLSORT_API bool vtkInformation_AppendUnique_0(vtkInformation * callingObject, vtkInformationKeyVectorKey * key, vtkInformationKey * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::AppendUnique]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AppendUnique(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Set(vtkInformationKeyVectorKey * key, vtkInformationKey *const* value, int length)
// void Set(vtkInformationKeyVectorKey* key, vtkInformationKey*const * value, int length)
TESTDLLSORT_API bool vtkInformation_Set_13(vtkInformation * callingObject, vtkInformationKeyVectorKey * key, vtkInformationKey *const* value, int length) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Set]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Set(key, value, length);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Remove(vtkInformationKeyVectorKey * key, vtkInformationKey * value)
// void Remove(vtkInformationKeyVectorKey* key, vtkInformationKey* value)
TESTDLLSORT_API bool vtkInformation_Remove_12(vtkInformation * callingObject, vtkInformationKeyVectorKey * key, vtkInformationKey * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Remove]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Remove(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkInformationKey** Get(vtkInformationKeyVectorKey * key)
// vtkInformationKey** Get(vtkInformationKeyVectorKey* key)
TESTDLLSORT_API bool vtkInformation_Get_13(vtkInformationKey *** return_value, vtkInformation * callingObject, vtkInformationKeyVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Get]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Get(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkInformationKey* Get(vtkInformationKeyVectorKey * key, int idx)
// vtkInformationKey* Get(vtkInformationKeyVectorKey* key, int idx)
TESTDLLSORT_API bool vtkInformation_Get_14(vtkInformationKey ** return_value, vtkInformation * callingObject, vtkInformationKeyVectorKey * key, int idx) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Get]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Get(key, idx);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Get(vtkInformationKeyVectorKey * key, vtkInformationKey ** value)
// void Get(vtkInformationKeyVectorKey* key, vtkInformationKey** value)
TESTDLLSORT_API bool vtkInformation_Get_15(vtkInformation * callingObject, vtkInformationKeyVectorKey * key, vtkInformationKey ** value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Get]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Get(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Length(vtkInformationKeyVectorKey * key)
// int Length(vtkInformationKeyVectorKey* key)
TESTDLLSORT_API bool vtkInformation_Length_5(int * return_value, vtkInformation * callingObject, vtkInformationKeyVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Length]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Length(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Remove(vtkInformationKeyVectorKey * key)
// void Remove(vtkInformationKeyVectorKey* key)
TESTDLLSORT_API bool vtkInformation_Remove_13(vtkInformation * callingObject, vtkInformationKeyVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Remove]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Remove(key);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Has(vtkInformationKeyVectorKey * key)
// int Has(vtkInformationKeyVectorKey* key)
TESTDLLSORT_API bool vtkInformation_Has_12(int * return_value, vtkInformation * callingObject, vtkInformationKeyVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Has]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Has(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Append(vtkInformationKeyVectorKey * key, vtkInformationDataObjectKey * value)
// void Append(vtkInformationKeyVectorKey* key, vtkInformationDataObjectKey* value)
TESTDLLSORT_API bool vtkInformation_Append_5(vtkInformation * callingObject, vtkInformationKeyVectorKey * key, vtkInformationDataObjectKey * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Append]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Append(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Append(vtkInformationKeyVectorKey * key, vtkInformationDoubleKey * value)
// void Append(vtkInformationKeyVectorKey* key, vtkInformationDoubleKey* value)
TESTDLLSORT_API bool vtkInformation_Append_6(vtkInformation * callingObject, vtkInformationKeyVectorKey * key, vtkInformationDoubleKey * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Append]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Append(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Append(vtkInformationKeyVectorKey * key, vtkInformationDoubleVectorKey * value)
// void Append(vtkInformationKeyVectorKey* key, vtkInformationDoubleVectorKey* value)
TESTDLLSORT_API bool vtkInformation_Append_7(vtkInformation * callingObject, vtkInformationKeyVectorKey * key, vtkInformationDoubleVectorKey * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Append]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Append(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Append(vtkInformationKeyVectorKey * key, vtkInformationInformationKey * value)
// void Append(vtkInformationKeyVectorKey* key, vtkInformationInformationKey* value)
TESTDLLSORT_API bool vtkInformation_Append_8(vtkInformation * callingObject, vtkInformationKeyVectorKey * key, vtkInformationInformationKey * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Append]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Append(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Append(vtkInformationKeyVectorKey * key, vtkInformationInformationVectorKey * value)
// void Append(vtkInformationKeyVectorKey* key, vtkInformationInformationVectorKey* value)
TESTDLLSORT_API bool vtkInformation_Append_9(vtkInformation * callingObject, vtkInformationKeyVectorKey * key, vtkInformationInformationVectorKey * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Append]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Append(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Append(vtkInformationKeyVectorKey * key, vtkInformationIntegerKey * value)
// void Append(vtkInformationKeyVectorKey* key, vtkInformationIntegerKey* value)
TESTDLLSORT_API bool vtkInformation_Append_10(vtkInformation * callingObject, vtkInformationKeyVectorKey * key, vtkInformationIntegerKey * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Append]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Append(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Append(vtkInformationKeyVectorKey * key, vtkInformationIntegerVectorKey * value)
// void Append(vtkInformationKeyVectorKey* key, vtkInformationIntegerVectorKey* value)
TESTDLLSORT_API bool vtkInformation_Append_11(vtkInformation * callingObject, vtkInformationKeyVectorKey * key, vtkInformationIntegerVectorKey * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Append]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Append(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Append(vtkInformationKeyVectorKey * key, vtkInformationStringKey * value)
// void Append(vtkInformationKeyVectorKey* key, vtkInformationStringKey* value)
TESTDLLSORT_API bool vtkInformation_Append_12(vtkInformation * callingObject, vtkInformationKeyVectorKey * key, vtkInformationStringKey * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Append]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Append(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Append(vtkInformationKeyVectorKey * key, vtkInformationStringVectorKey * value)
// void Append(vtkInformationKeyVectorKey* key, vtkInformationStringVectorKey* value)
TESTDLLSORT_API bool vtkInformation_Append_13(vtkInformation * callingObject, vtkInformationKeyVectorKey * key, vtkInformationStringVectorKey * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Append]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Append(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Append(vtkInformationKeyVectorKey * key, vtkInformationObjectBaseKey * value)
// void Append(vtkInformationKeyVectorKey* key, vtkInformationObjectBaseKey* value)
TESTDLLSORT_API bool vtkInformation_Append_14(vtkInformation * callingObject, vtkInformationKeyVectorKey * key, vtkInformationObjectBaseKey * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Append]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Append(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Append(vtkInformationKeyVectorKey * key, vtkInformationUnsignedLongKey * value)
// void Append(vtkInformationKeyVectorKey* key, vtkInformationUnsignedLongKey* value)
TESTDLLSORT_API bool vtkInformation_Append_15(vtkInformation * callingObject, vtkInformationKeyVectorKey * key, vtkInformationUnsignedLongKey * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Append]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Append(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AppendUnique(vtkInformationKeyVectorKey * key, vtkInformationDataObjectKey * value)
// void AppendUnique(vtkInformationKeyVectorKey* key, vtkInformationDataObjectKey* value)
TESTDLLSORT_API bool vtkInformation_AppendUnique_1(vtkInformation * callingObject, vtkInformationKeyVectorKey * key, vtkInformationDataObjectKey * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::AppendUnique]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AppendUnique(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AppendUnique(vtkInformationKeyVectorKey * key, vtkInformationDoubleKey * value)
// void AppendUnique(vtkInformationKeyVectorKey* key, vtkInformationDoubleKey* value)
TESTDLLSORT_API bool vtkInformation_AppendUnique_2(vtkInformation * callingObject, vtkInformationKeyVectorKey * key, vtkInformationDoubleKey * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::AppendUnique]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AppendUnique(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AppendUnique(vtkInformationKeyVectorKey * key, vtkInformationDoubleVectorKey * value)
// void AppendUnique(vtkInformationKeyVectorKey* key, vtkInformationDoubleVectorKey* value)
TESTDLLSORT_API bool vtkInformation_AppendUnique_3(vtkInformation * callingObject, vtkInformationKeyVectorKey * key, vtkInformationDoubleVectorKey * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::AppendUnique]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AppendUnique(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AppendUnique(vtkInformationKeyVectorKey * key, vtkInformationInformationKey * value)
// void AppendUnique(vtkInformationKeyVectorKey* key, vtkInformationInformationKey* value)
TESTDLLSORT_API bool vtkInformation_AppendUnique_4(vtkInformation * callingObject, vtkInformationKeyVectorKey * key, vtkInformationInformationKey * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::AppendUnique]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AppendUnique(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AppendUnique(vtkInformationKeyVectorKey * key, vtkInformationInformationVectorKey * value)
// void AppendUnique(vtkInformationKeyVectorKey* key, vtkInformationInformationVectorKey* value)
TESTDLLSORT_API bool vtkInformation_AppendUnique_5(vtkInformation * callingObject, vtkInformationKeyVectorKey * key, vtkInformationInformationVectorKey * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::AppendUnique]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AppendUnique(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AppendUnique(vtkInformationKeyVectorKey * key, vtkInformationIntegerKey * value)
// void AppendUnique(vtkInformationKeyVectorKey* key, vtkInformationIntegerKey* value)
TESTDLLSORT_API bool vtkInformation_AppendUnique_6(vtkInformation * callingObject, vtkInformationKeyVectorKey * key, vtkInformationIntegerKey * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::AppendUnique]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AppendUnique(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AppendUnique(vtkInformationKeyVectorKey * key, vtkInformationIntegerVectorKey * value)
// void AppendUnique(vtkInformationKeyVectorKey* key, vtkInformationIntegerVectorKey* value)
TESTDLLSORT_API bool vtkInformation_AppendUnique_7(vtkInformation * callingObject, vtkInformationKeyVectorKey * key, vtkInformationIntegerVectorKey * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::AppendUnique]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AppendUnique(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AppendUnique(vtkInformationKeyVectorKey * key, vtkInformationStringKey * value)
// void AppendUnique(vtkInformationKeyVectorKey* key, vtkInformationStringKey* value)
TESTDLLSORT_API bool vtkInformation_AppendUnique_8(vtkInformation * callingObject, vtkInformationKeyVectorKey * key, vtkInformationStringKey * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::AppendUnique]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AppendUnique(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AppendUnique(vtkInformationKeyVectorKey * key, vtkInformationStringVectorKey * value)
// void AppendUnique(vtkInformationKeyVectorKey* key, vtkInformationStringVectorKey* value)
TESTDLLSORT_API bool vtkInformation_AppendUnique_9(vtkInformation * callingObject, vtkInformationKeyVectorKey * key, vtkInformationStringVectorKey * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::AppendUnique]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AppendUnique(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AppendUnique(vtkInformationKeyVectorKey * key, vtkInformationObjectBaseKey * value)
// void AppendUnique(vtkInformationKeyVectorKey* key, vtkInformationObjectBaseKey* value)
TESTDLLSORT_API bool vtkInformation_AppendUnique_10(vtkInformation * callingObject, vtkInformationKeyVectorKey * key, vtkInformationObjectBaseKey * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::AppendUnique]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AppendUnique(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AppendUnique(vtkInformationKeyVectorKey * key, vtkInformationUnsignedLongKey * value)
// void AppendUnique(vtkInformationKeyVectorKey* key, vtkInformationUnsignedLongKey* value)
TESTDLLSORT_API bool vtkInformation_AppendUnique_11(vtkInformation * callingObject, vtkInformationKeyVectorKey * key, vtkInformationUnsignedLongKey * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::AppendUnique]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AppendUnique(key, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Set(vtkInformationStringKey * key, const char * ARG_0)
// void Set(vtkInformationStringKey* key, const char*)
TESTDLLSORT_API bool vtkInformation_Set_14(vtkInformation * callingObject, vtkInformationStringKey * key, const char * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Set]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Set(key, ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char* Get(vtkInformationStringKey * key)
// const char* Get(vtkInformationStringKey* key)
TESTDLLSORT_API bool vtkInformation_Get_16(const char ** return_value, vtkInformation * callingObject, vtkInformationStringKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Get]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Get(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Remove(vtkInformationStringKey * key)
// void Remove(vtkInformationStringKey* key)
TESTDLLSORT_API bool vtkInformation_Remove_14(vtkInformation * callingObject, vtkInformationStringKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Remove]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Remove(key);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Has(vtkInformationStringKey * key)
// int Has(vtkInformationStringKey* key)
TESTDLLSORT_API bool vtkInformation_Has_13(int * return_value, vtkInformation * callingObject, vtkInformationStringKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Has]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Has(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Set(vtkInformationInformationKey * key, vtkInformation * ARG_0)
// void Set(vtkInformationInformationKey* key, vtkInformation*)
TESTDLLSORT_API bool vtkInformation_Set_15(vtkInformation * callingObject, vtkInformationInformationKey * key, vtkInformation * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Set]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Set(key, ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkInformation* Get(vtkInformationInformationKey * key)
// vtkInformation* Get(vtkInformationInformationKey* key)
TESTDLLSORT_API bool vtkInformation_Get_17(vtkInformation ** return_value, vtkInformation * callingObject, vtkInformationInformationKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Get]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Get(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Remove(vtkInformationInformationKey * key)
// void Remove(vtkInformationInformationKey* key)
TESTDLLSORT_API bool vtkInformation_Remove_15(vtkInformation * callingObject, vtkInformationInformationKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Remove]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Remove(key);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Has(vtkInformationInformationKey * key)
// int Has(vtkInformationInformationKey* key)
TESTDLLSORT_API bool vtkInformation_Has_14(int * return_value, vtkInformation * callingObject, vtkInformationInformationKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Has]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Has(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Set(vtkInformationInformationVectorKey * key, vtkInformationVector * ARG_0)
// void Set(vtkInformationInformationVectorKey* key, vtkInformationVector*)
TESTDLLSORT_API bool vtkInformation_Set_16(vtkInformation * callingObject, vtkInformationInformationVectorKey * key, vtkInformationVector * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Set]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Set(key, ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkInformationVector* Get(vtkInformationInformationVectorKey * key)
// vtkInformationVector* Get(vtkInformationInformationVectorKey* key)
TESTDLLSORT_API bool vtkInformation_Get_18(vtkInformationVector ** return_value, vtkInformation * callingObject, vtkInformationInformationVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Get]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Get(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Remove(vtkInformationInformationVectorKey * key)
// void Remove(vtkInformationInformationVectorKey* key)
TESTDLLSORT_API bool vtkInformation_Remove_16(vtkInformation * callingObject, vtkInformationInformationVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Remove]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Remove(key);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Has(vtkInformationInformationVectorKey * key)
// int Has(vtkInformationInformationVectorKey* key)
TESTDLLSORT_API bool vtkInformation_Has_15(int * return_value, vtkInformation * callingObject, vtkInformationInformationVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Has]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Has(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Set(vtkInformationObjectBaseKey * key, vtkObjectBase * ARG_0)
// void Set(vtkInformationObjectBaseKey* key, vtkObjectBase*)
TESTDLLSORT_API bool vtkInformation_Set_17(vtkInformation * callingObject, vtkInformationObjectBaseKey * key, vtkObjectBase * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Set]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Set(key, ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkObjectBase* Get(vtkInformationObjectBaseKey * key)
// vtkObjectBase* Get(vtkInformationObjectBaseKey* key)
TESTDLLSORT_API bool vtkInformation_Get_19(vtkObjectBase ** return_value, vtkInformation * callingObject, vtkInformationObjectBaseKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Get]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Get(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Remove(vtkInformationObjectBaseKey * key)
// void Remove(vtkInformationObjectBaseKey* key)
TESTDLLSORT_API bool vtkInformation_Remove_17(vtkInformation * callingObject, vtkInformationObjectBaseKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Remove]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Remove(key);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Has(vtkInformationObjectBaseKey * key)
// int Has(vtkInformationObjectBaseKey* key)
TESTDLLSORT_API bool vtkInformation_Has_16(int * return_value, vtkInformation * callingObject, vtkInformationObjectBaseKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Has]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Has(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Append(vtkInformationObjectBaseVectorKey * key, vtkObjectBase * data)
// void Append(vtkInformationObjectBaseVectorKey* key, vtkObjectBase *data)
TESTDLLSORT_API bool vtkInformation_Append_16(vtkInformation * callingObject, vtkInformationObjectBaseVectorKey * key, vtkObjectBase * data) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Append]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Append(key, data);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Set(vtkInformationObjectBaseVectorKey * key, vtkObjectBase * value, int idx = 0)
// void Set(vtkInformationObjectBaseVectorKey *key, vtkObjectBase* value, int idx = 0)
TESTDLLSORT_API bool vtkInformation_Set_18(vtkInformation * callingObject, vtkInformationObjectBaseVectorKey * key, vtkObjectBase * value, int idx = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Set]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Set(key, value, idx);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkObjectBase* Get(vtkInformationObjectBaseVectorKey * key, int idx = 0)
// vtkObjectBase* Get(vtkInformationObjectBaseVectorKey *key, int idx = 0)
TESTDLLSORT_API bool vtkInformation_Get_20(vtkObjectBase ** return_value, vtkInformation * callingObject, vtkInformationObjectBaseVectorKey * key, int idx = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Get]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Get(key, idx);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Length(vtkInformationObjectBaseVectorKey * key)
// int Length(vtkInformationObjectBaseVectorKey *key)
TESTDLLSORT_API bool vtkInformation_Length_6(int * return_value, vtkInformation * callingObject, vtkInformationObjectBaseVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Length]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Length(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Remove(vtkInformationObjectBaseVectorKey * key)
// void Remove(vtkInformationObjectBaseVectorKey *key)
TESTDLLSORT_API bool vtkInformation_Remove_18(vtkInformation * callingObject, vtkInformationObjectBaseVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Remove]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Remove(key);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Remove(vtkInformationObjectBaseVectorKey * key, vtkObjectBase * objectToRemove)
// void Remove(vtkInformationObjectBaseVectorKey *key, vtkObjectBase *objectToRemove)
TESTDLLSORT_API bool vtkInformation_Remove_19(vtkInformation * callingObject, vtkInformationObjectBaseVectorKey * key, vtkObjectBase * objectToRemove) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Remove]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Remove(key, objectToRemove);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Remove(vtkInformationObjectBaseVectorKey * key, int indexToRemove)
// void Remove(vtkInformationObjectBaseVectorKey *key, int indexToRemove)
TESTDLLSORT_API bool vtkInformation_Remove_20(vtkInformation * callingObject, vtkInformationObjectBaseVectorKey * key, int indexToRemove) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Remove]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Remove(key, indexToRemove);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Has(vtkInformationObjectBaseVectorKey * key)
// int Has(vtkInformationObjectBaseVectorKey *key)
TESTDLLSORT_API bool vtkInformation_Has_17(int * return_value, vtkInformation * callingObject, vtkInformationObjectBaseVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Has]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Has(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Set(vtkInformationDataObjectKey * key, vtkDataObject * ARG_0)
// void Set(vtkInformationDataObjectKey* key, vtkDataObject *)
TESTDLLSORT_API bool vtkInformation_Set_19(vtkInformation * callingObject, vtkInformationDataObjectKey * key, vtkDataObject * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Set]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Set(key, ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Remove(vtkInformationDataObjectKey * key)
// void Remove(vtkInformationDataObjectKey* key)
TESTDLLSORT_API bool vtkInformation_Remove_21(vtkInformation * callingObject, vtkInformationDataObjectKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Remove]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Remove(key);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Has(vtkInformationDataObjectKey * key)
// int Has(vtkInformationDataObjectKey* key)
TESTDLLSORT_API bool vtkInformation_Has_18(int * return_value, vtkInformation * callingObject, vtkInformationDataObjectKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Has]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Has(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationKey* GetKey(vtkInformationDataObjectKey * key)
// static vtkInformationKey* GetKey(vtkInformationDataObjectKey* key)
TESTDLLSORT_API bool vtkInformation_GetKey_0(vtkInformationKey ** return_value, vtkInformationDataObjectKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::GetKey]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkInformation::GetKey(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationKey* GetKey(vtkInformationDoubleKey * key)
// static vtkInformationKey* GetKey(vtkInformationDoubleKey* key)
TESTDLLSORT_API bool vtkInformation_GetKey_1(vtkInformationKey ** return_value, vtkInformationDoubleKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::GetKey]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkInformation::GetKey(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationKey* GetKey(vtkInformationDoubleVectorKey * key)
// static vtkInformationKey* GetKey(vtkInformationDoubleVectorKey* key)
TESTDLLSORT_API bool vtkInformation_GetKey_2(vtkInformationKey ** return_value, vtkInformationDoubleVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::GetKey]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkInformation::GetKey(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationKey* GetKey(vtkInformationInformationKey * key)
// static vtkInformationKey* GetKey(vtkInformationInformationKey* key)
TESTDLLSORT_API bool vtkInformation_GetKey_3(vtkInformationKey ** return_value, vtkInformationInformationKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::GetKey]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkInformation::GetKey(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationKey* GetKey(vtkInformationInformationVectorKey * key)
// static vtkInformationKey* GetKey(vtkInformationInformationVectorKey* key)
TESTDLLSORT_API bool vtkInformation_GetKey_4(vtkInformationKey ** return_value, vtkInformationInformationVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::GetKey]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkInformation::GetKey(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationKey* GetKey(vtkInformationIntegerKey * key)
// static vtkInformationKey* GetKey(vtkInformationIntegerKey* key)
TESTDLLSORT_API bool vtkInformation_GetKey_5(vtkInformationKey ** return_value, vtkInformationIntegerKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::GetKey]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkInformation::GetKey(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationKey* GetKey(vtkInformationIntegerVectorKey * key)
// static vtkInformationKey* GetKey(vtkInformationIntegerVectorKey* key)
TESTDLLSORT_API bool vtkInformation_GetKey_6(vtkInformationKey ** return_value, vtkInformationIntegerVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::GetKey]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkInformation::GetKey(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationKey* GetKey(vtkInformationRequestKey * key)
// static vtkInformationKey* GetKey(vtkInformationRequestKey* key)
TESTDLLSORT_API bool vtkInformation_GetKey_7(vtkInformationKey ** return_value, vtkInformationRequestKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::GetKey]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkInformation::GetKey(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationKey* GetKey(vtkInformationStringKey * key)
// static vtkInformationKey* GetKey(vtkInformationStringKey* key)
TESTDLLSORT_API bool vtkInformation_GetKey_8(vtkInformationKey ** return_value, vtkInformationStringKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::GetKey]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkInformation::GetKey(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationKey* GetKey(vtkInformationStringVectorKey * key)
// static vtkInformationKey* GetKey(vtkInformationStringVectorKey* key)
TESTDLLSORT_API bool vtkInformation_GetKey_9(vtkInformationKey ** return_value, vtkInformationStringVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::GetKey]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkInformation::GetKey(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationKey* GetKey(vtkInformationKey * key)
// static vtkInformationKey* GetKey(vtkInformationKey* key)
TESTDLLSORT_API bool vtkInformation_GetKey_10(vtkInformationKey ** return_value, vtkInformationKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::GetKey]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkInformation::GetKey(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationKey* GetKey(vtkInformationUnsignedLongKey * key)
// static vtkInformationKey* GetKey(vtkInformationUnsignedLongKey* key)
TESTDLLSORT_API bool vtkInformation_GetKey_11(vtkInformationKey ** return_value, vtkInformationUnsignedLongKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::GetKey]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkInformation::GetKey(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationKey* GetKey(vtkInformationVariantKey * key)
// static vtkInformationKey* GetKey(vtkInformationVariantKey* key)
TESTDLLSORT_API bool vtkInformation_GetKey_12(vtkInformationKey ** return_value, vtkInformationVariantKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::GetKey]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkInformation::GetKey(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationKey* GetKey(vtkInformationVariantVectorKey * key)
// static vtkInformationKey* GetKey(vtkInformationVariantVectorKey* key)
TESTDLLSORT_API bool vtkInformation_GetKey_13(vtkInformationKey ** return_value, vtkInformationVariantVectorKey * key) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::GetKey]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkInformation::GetKey(key);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Register(vtkObjectBase * o)
// void Register(vtkObjectBase* o)
TESTDLLSORT_API bool vtkInformation_Register_0(vtkInformation * callingObject, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::Register]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Register(o);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void UnRegister(vtkObjectBase * o)
// void UnRegister(vtkObjectBase* o)
TESTDLLSORT_API bool vtkInformation_UnRegister_0(vtkInformation * callingObject, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::UnRegister]:[";
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

// void SetRequest(vtkInformationRequestKey * request)
// void SetRequest(vtkInformationRequestKey* request)
TESTDLLSORT_API bool vtkInformation_SetRequest_0(vtkInformation * callingObject, vtkInformationRequestKey * request) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::SetRequest]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetRequest(request);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkInformationRequestKey* GetRequest()
// vtkInformationRequestKey* GetRequest()
TESTDLLSORT_API bool vtkInformation_GetRequest_0(vtkInformationRequestKey ** return_value, vtkInformation * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkInformation::GetRequest]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetRequest();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
