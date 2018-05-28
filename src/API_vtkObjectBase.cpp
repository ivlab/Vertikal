
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkObjectBase.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// char* GetClassName()
// const char* GetClassName()
TESTDLLSORT_API bool vtkObjectBase_GetClassName_0(const char ** return_value, vtkObjectBase * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkObjectBase::GetClassName]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetClassName();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkTypeBool IsTypeOf(const char * name)
// static vtkTypeBool IsTypeOf(const char *name)
TESTDLLSORT_API bool vtkObjectBase_IsTypeOf_0(vtkTypeBool * return_value, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkObjectBase::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkObjectBase::IsTypeOf(name);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkTypeBool IsA(const char * name)
// virtual vtkTypeBool IsA(const char *name)
TESTDLLSORT_API bool vtkObjectBase_IsA_0(vtkTypeBool * return_value, vtkObjectBase * callingObject, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkObjectBase::IsA]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->IsA(name);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void Delete()
// virtual void Delete()
TESTDLLSORT_API bool vtkObjectBase_Delete_0(vtkObjectBase * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkObjectBase::Delete]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Delete();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void FastDelete()
// virtual void FastDelete()
TESTDLLSORT_API bool vtkObjectBase_FastDelete_0(vtkObjectBase * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkObjectBase::FastDelete]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->FastDelete();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkObjectBase* New()
// static vtkObjectBase *New()
TESTDLLSORT_API bool vtkObjectBase_New_0(vtkObjectBase ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkObjectBase::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkObjectBase::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InitializeObjectBase()
// void InitializeObjectBase()
TESTDLLSORT_API bool vtkObjectBase_InitializeObjectBase_0(vtkObjectBase * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkObjectBase::InitializeObjectBase]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InitializeObjectBase();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void Register(vtkObjectBase * o)
// virtual void Register(vtkObjectBase* o)
TESTDLLSORT_API bool vtkObjectBase_Register_0(vtkObjectBase * callingObject, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkObjectBase::Register]:[";
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

// virtual void UnRegister(vtkObjectBase * o)
// virtual void UnRegister(vtkObjectBase* o)
TESTDLLSORT_API bool vtkObjectBase_UnRegister_0(vtkObjectBase * callingObject, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkObjectBase::UnRegister]:[";
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

// int GetReferenceCount()
// int GetReferenceCount()
TESTDLLSORT_API bool vtkObjectBase_GetReferenceCount_0(int * return_value, vtkObjectBase * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkObjectBase::GetReferenceCount]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetReferenceCount();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetReferenceCount(int ARG_0)
// void SetReferenceCount(int)
TESTDLLSORT_API bool vtkObjectBase_SetReferenceCount_0(vtkObjectBase * callingObject, int ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkObjectBase::SetReferenceCount]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetReferenceCount(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
