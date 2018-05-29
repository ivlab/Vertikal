
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkShaderDeviceAdapter2.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkShaderDeviceAdapter2_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkShaderDeviceAdapter2::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkShaderDeviceAdapter2::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkShaderDeviceAdapter2_IsA_0(vtkTypeBool * return_value, vtkShaderDeviceAdapter2 * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkShaderDeviceAdapter2::IsA]:[";
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

// static vtkShaderDeviceAdapter2* SafeDownCast(vtkObjectBase * o)
// static vtkShaderDeviceAdapter2* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkShaderDeviceAdapter2_SafeDownCast_0(vtkShaderDeviceAdapter2 ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkShaderDeviceAdapter2::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkShaderDeviceAdapter2::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkShaderDeviceAdapter2* NewInstance()
// vtkShaderDeviceAdapter2 *NewInstance()
TESTDLLSORT_API bool vtkShaderDeviceAdapter2_NewInstance_0(vtkShaderDeviceAdapter2 ** return_value, vtkShaderDeviceAdapter2 * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkShaderDeviceAdapter2::NewInstance]:[";
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

// virtual void SendAttribute(const char * attrname, int components, int type, const void * attribute, unsigned long offset = 0)
// virtual void SendAttribute(const char* attrname, int components, int type, const void* attribute, unsigned long offset = 0)
TESTDLLSORT_API bool vtkShaderDeviceAdapter2_SendAttribute_0(vtkShaderDeviceAdapter2 * callingObject, const char * attrname, int components, int type, const void * attribute, unsigned long offset = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkShaderDeviceAdapter2::SendAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SendAttribute(attrname, components, type, attribute, offset);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void PrepareForRender()
// virtual void PrepareForRender()
TESTDLLSORT_API bool vtkShaderDeviceAdapter2_PrepareForRender_0(vtkShaderDeviceAdapter2 * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkShaderDeviceAdapter2::PrepareForRender]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->PrepareForRender();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
