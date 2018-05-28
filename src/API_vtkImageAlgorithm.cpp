
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkImageAlgorithm.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkImageAlgorithm_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageAlgorithm::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkImageAlgorithm::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkImageAlgorithm_IsA_0(vtkTypeBool * return_value, vtkImageAlgorithm * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageAlgorithm::IsA]:[";
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

// static vtkImageAlgorithm* SafeDownCast(vtkObjectBase * o)
// static vtkImageAlgorithm* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkImageAlgorithm_SafeDownCast_0(vtkImageAlgorithm ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageAlgorithm::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkImageAlgorithm::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkImageAlgorithm* NewInstance()
// vtkImageAlgorithm *NewInstance()
TESTDLLSORT_API bool vtkImageAlgorithm_NewInstance_0(vtkImageAlgorithm ** return_value, vtkImageAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageAlgorithm::NewInstance]:[";
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

// vtkImageData* GetOutput()
// vtkImageData* GetOutput()
TESTDLLSORT_API bool vtkImageAlgorithm_GetOutput_0(vtkImageData ** return_value, vtkImageAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageAlgorithm::GetOutput]:[";
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

// vtkImageData* GetOutput(int ARG_0)
// vtkImageData* GetOutput(int)
TESTDLLSORT_API bool vtkImageAlgorithm_GetOutput_1(vtkImageData ** return_value, vtkImageAlgorithm * callingObject, int ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageAlgorithm::GetOutput]:[";
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
TESTDLLSORT_API bool vtkImageAlgorithm_SetOutput_0(vtkImageAlgorithm * callingObject, vtkDataObject * d) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageAlgorithm::SetOutput]:[";
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
TESTDLLSORT_API bool vtkImageAlgorithm_ProcessRequest_0(int * return_value, vtkImageAlgorithm * callingObject, vtkInformation * ARG_0, vtkInformationVector ** ARG_1, vtkInformationVector * ARG_2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageAlgorithm::ProcessRequest]:[";
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

// void SetInputData(vtkDataObject * ARG_0)
// void SetInputData(vtkDataObject *)
TESTDLLSORT_API bool vtkImageAlgorithm_SetInputData_0(vtkImageAlgorithm * callingObject, vtkDataObject * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageAlgorithm::SetInputData]:[";
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
TESTDLLSORT_API bool vtkImageAlgorithm_SetInputData_1(vtkImageAlgorithm * callingObject, int ARG_0, vtkDataObject * ARG_1) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageAlgorithm::SetInputData]:[";
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

// vtkDataObject* GetInput(int port)
// vtkDataObject *GetInput(int port)
TESTDLLSORT_API bool vtkImageAlgorithm_GetInput_0(vtkDataObject ** return_value, vtkImageAlgorithm * callingObject, int port) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageAlgorithm::GetInput]:[";
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
TESTDLLSORT_API bool vtkImageAlgorithm_GetInput_1(vtkDataObject ** return_value, vtkImageAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageAlgorithm::GetInput]:[";
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

// vtkImageData* GetImageDataInput(int port)
// vtkImageData *GetImageDataInput(int port)
TESTDLLSORT_API bool vtkImageAlgorithm_GetImageDataInput_0(vtkImageData ** return_value, vtkImageAlgorithm * callingObject, int port) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageAlgorithm::GetImageDataInput]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetImageDataInput(port);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void AddInputData(vtkDataObject * ARG_0)
// virtual void AddInputData(vtkDataObject *)
TESTDLLSORT_API bool vtkImageAlgorithm_AddInputData_0(vtkImageAlgorithm * callingObject, vtkDataObject * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageAlgorithm::AddInputData]:[";
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

// virtual void AddInputData(int ARG_0, vtkDataObject * ARG_1)
// virtual void AddInputData(int, vtkDataObject*)
TESTDLLSORT_API bool vtkImageAlgorithm_AddInputData_1(vtkImageAlgorithm * callingObject, int ARG_0, vtkDataObject * ARG_1) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageAlgorithm::AddInputData]:[";
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
