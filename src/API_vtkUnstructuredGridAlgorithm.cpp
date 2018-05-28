
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkUnstructuredGridAlgorithm.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkUnstructuredGridAlgorithm* New()
// static vtkUnstructuredGridAlgorithm *New()
TESTDLLSORT_API bool vtkUnstructuredGridAlgorithm_New_0(vtkUnstructuredGridAlgorithm ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridAlgorithm::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkUnstructuredGridAlgorithm::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkUnstructuredGridAlgorithm_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridAlgorithm::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkUnstructuredGridAlgorithm::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkUnstructuredGridAlgorithm_IsA_0(vtkTypeBool * return_value, vtkUnstructuredGridAlgorithm * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridAlgorithm::IsA]:[";
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

// static vtkUnstructuredGridAlgorithm* SafeDownCast(vtkObjectBase * o)
// static vtkUnstructuredGridAlgorithm* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkUnstructuredGridAlgorithm_SafeDownCast_0(vtkUnstructuredGridAlgorithm ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridAlgorithm::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkUnstructuredGridAlgorithm::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkUnstructuredGridAlgorithm* NewInstance()
// vtkUnstructuredGridAlgorithm *NewInstance()
TESTDLLSORT_API bool vtkUnstructuredGridAlgorithm_NewInstance_0(vtkUnstructuredGridAlgorithm ** return_value, vtkUnstructuredGridAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridAlgorithm::NewInstance]:[";
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

// vtkUnstructuredGrid* GetOutput()
// vtkUnstructuredGrid* GetOutput()
TESTDLLSORT_API bool vtkUnstructuredGridAlgorithm_GetOutput_0(vtkUnstructuredGrid ** return_value, vtkUnstructuredGridAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridAlgorithm::GetOutput]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetOutput();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkUnstructuredGrid* GetOutput(int ARG_0)
// vtkUnstructuredGrid* GetOutput(int)
TESTDLLSORT_API bool vtkUnstructuredGridAlgorithm_GetOutput_1(vtkUnstructuredGrid ** return_value, vtkUnstructuredGridAlgorithm * callingObject, int ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridAlgorithm::GetOutput]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetOutput(ARG_0);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetOutput(vtkDataObject * d)
// virtual void SetOutput(vtkDataObject* d)
TESTDLLSORT_API bool vtkUnstructuredGridAlgorithm_SetOutput_0(vtkUnstructuredGridAlgorithm * callingObject, vtkDataObject * d) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridAlgorithm::SetOutput]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetOutput(d);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int ProcessRequest(vtkInformation * ARG_0, vtkInformationVector ** ARG_1, vtkInformationVector * ARG_2)
// int ProcessRequest(vtkInformation*, vtkInformationVector**, vtkInformationVector*)
TESTDLLSORT_API bool vtkUnstructuredGridAlgorithm_ProcessRequest_0(int * return_value, vtkUnstructuredGridAlgorithm * callingObject, vtkInformation * ARG_0, vtkInformationVector ** ARG_1, vtkInformationVector * ARG_2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridAlgorithm::ProcessRequest]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->ProcessRequest(ARG_0, ARG_1, ARG_2);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataObject* GetInput(int port)
// vtkDataObject *GetInput(int port)
TESTDLLSORT_API bool vtkUnstructuredGridAlgorithm_GetInput_0(vtkDataObject ** return_value, vtkUnstructuredGridAlgorithm * callingObject, int port) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridAlgorithm::GetInput]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInput(port);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataObject* GetInput()
// vtkDataObject *GetInput()
TESTDLLSORT_API bool vtkUnstructuredGridAlgorithm_GetInput_1(vtkDataObject ** return_value, vtkUnstructuredGridAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridAlgorithm::GetInput]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInput();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkUnstructuredGrid* GetUnstructuredGridInput(int port)
// vtkUnstructuredGrid *GetUnstructuredGridInput(int port)
TESTDLLSORT_API bool vtkUnstructuredGridAlgorithm_GetUnstructuredGridInput_0(vtkUnstructuredGrid ** return_value, vtkUnstructuredGridAlgorithm * callingObject, int port) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridAlgorithm::GetUnstructuredGridInput]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUnstructuredGridInput(port);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetInputData(vtkDataObject * ARG_0)
// void SetInputData(vtkDataObject *)
TESTDLLSORT_API bool vtkUnstructuredGridAlgorithm_SetInputData_0(vtkUnstructuredGridAlgorithm * callingObject, vtkDataObject * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridAlgorithm::SetInputData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetInputData(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetInputData(int ARG_0, vtkDataObject * ARG_1)
// void SetInputData(int, vtkDataObject*)
TESTDLLSORT_API bool vtkUnstructuredGridAlgorithm_SetInputData_1(vtkUnstructuredGridAlgorithm * callingObject, int ARG_0, vtkDataObject * ARG_1) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridAlgorithm::SetInputData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetInputData(ARG_0, ARG_1);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AddInputData(vtkDataObject * ARG_0)
// void AddInputData(vtkDataObject *)
TESTDLLSORT_API bool vtkUnstructuredGridAlgorithm_AddInputData_0(vtkUnstructuredGridAlgorithm * callingObject, vtkDataObject * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridAlgorithm::AddInputData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AddInputData(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AddInputData(int ARG_0, vtkDataObject * ARG_1)
// void AddInputData(int, vtkDataObject*)
TESTDLLSORT_API bool vtkUnstructuredGridAlgorithm_AddInputData_1(vtkUnstructuredGridAlgorithm * callingObject, int ARG_0, vtkDataObject * ARG_1) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridAlgorithm::AddInputData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AddInputData(ARG_0, ARG_1);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
