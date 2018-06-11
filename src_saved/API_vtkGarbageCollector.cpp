
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkGarbageCollector.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkGarbageCollector_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGarbageCollector::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkGarbageCollector::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkGarbageCollector_IsA_0(vtkTypeBool * return_value, vtkGarbageCollector * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGarbageCollector::IsA]:[";
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

// static vtkGarbageCollector* SafeDownCast(vtkObjectBase * o)
// static vtkGarbageCollector* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkGarbageCollector_SafeDownCast_0(vtkGarbageCollector ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGarbageCollector::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkGarbageCollector::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkGarbageCollector* NewInstance()
// vtkGarbageCollector *NewInstance()
TESTDLLSORT_API bool vtkGarbageCollector_NewInstance_0(vtkGarbageCollector ** return_value, vtkGarbageCollector * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGarbageCollector::NewInstance]:[";
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

// static vtkGarbageCollector* New()
// static vtkGarbageCollector* New()
TESTDLLSORT_API bool vtkGarbageCollector_New_0(vtkGarbageCollector ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGarbageCollector::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkGarbageCollector::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void Collect()
// static void Collect()
TESTDLLSORT_API bool vtkGarbageCollector_Collect_0() {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGarbageCollector::Collect]:[";
#endif
	bool success = true;
	vtkGarbageCollector::Collect();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void Collect(vtkObjectBase * root)
// static void Collect(vtkObjectBase* root)
TESTDLLSORT_API bool vtkGarbageCollector_Collect_1(vtkObjectBase * root) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGarbageCollector::Collect]:[";
#endif
	bool success = true;
	vtkGarbageCollector::Collect(root);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void DeferredCollectionPush()
// static void DeferredCollectionPush()
TESTDLLSORT_API bool vtkGarbageCollector_DeferredCollectionPush_0() {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGarbageCollector::DeferredCollectionPush]:[";
#endif
	bool success = true;
	vtkGarbageCollector::DeferredCollectionPush();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void DeferredCollectionPop()
// static void DeferredCollectionPop()
TESTDLLSORT_API bool vtkGarbageCollector_DeferredCollectionPop_0() {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGarbageCollector::DeferredCollectionPop]:[";
#endif
	bool success = true;
	vtkGarbageCollector::DeferredCollectionPop();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void SetGlobalDebugFlag(bool flag)
// static void SetGlobalDebugFlag(bool flag)
TESTDLLSORT_API bool vtkGarbageCollector_SetGlobalDebugFlag_0(bool flag) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGarbageCollector::SetGlobalDebugFlag]:[";
#endif
	bool success = true;
	vtkGarbageCollector::SetGlobalDebugFlag(flag);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static bool GetGlobalDebugFlag()
// static bool GetGlobalDebugFlag()
TESTDLLSORT_API bool vtkGarbageCollector_GetGlobalDebugFlag_0(bool * return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGarbageCollector::GetGlobalDebugFlag]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkGarbageCollector::GetGlobalDebugFlag();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
