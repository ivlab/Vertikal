
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkDataSetAlgorithm.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkDataSetAlgorithm* New()
// static vtkDataSetAlgorithm *New()
TESTDLLSORT_API bool vtkDataSetAlgorithm_New_0(vtkDataSetAlgorithm ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAlgorithm::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataSetAlgorithm::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkDataSetAlgorithm_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAlgorithm::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataSetAlgorithm::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkDataSetAlgorithm_IsA_0(vtkTypeBool * return_value, vtkDataSetAlgorithm * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAlgorithm::IsA]:[";
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

// static vtkDataSetAlgorithm* SafeDownCast(vtkObjectBase * o)
// static vtkDataSetAlgorithm* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkDataSetAlgorithm_SafeDownCast_0(vtkDataSetAlgorithm ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAlgorithm::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataSetAlgorithm::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataSetAlgorithm* NewInstance()
// vtkDataSetAlgorithm *NewInstance()
TESTDLLSORT_API bool vtkDataSetAlgorithm_NewInstance_0(vtkDataSetAlgorithm ** return_value, vtkDataSetAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAlgorithm::NewInstance]:[";
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

// vtkDataSet* GetOutput()
// vtkDataSet* GetOutput()
TESTDLLSORT_API bool vtkDataSetAlgorithm_GetOutput_0(vtkDataSet ** return_value, vtkDataSetAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAlgorithm::GetOutput]:[";
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

// vtkDataSet* GetOutput(int ARG_0)
// vtkDataSet* GetOutput(int)
TESTDLLSORT_API bool vtkDataSetAlgorithm_GetOutput_1(vtkDataSet ** return_value, vtkDataSetAlgorithm * callingObject, int ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAlgorithm::GetOutput]:[";
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

// vtkDataObject* GetInput()
// vtkDataObject* GetInput()
TESTDLLSORT_API bool vtkDataSetAlgorithm_GetInput_0(vtkDataObject ** return_value, vtkDataSetAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAlgorithm::GetInput]:[";
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

// vtkPolyData* GetPolyDataOutput()
// vtkPolyData *GetPolyDataOutput()
TESTDLLSORT_API bool vtkDataSetAlgorithm_GetPolyDataOutput_0(vtkPolyData ** return_value, vtkDataSetAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAlgorithm::GetPolyDataOutput]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPolyDataOutput();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkStructuredPoints* GetStructuredPointsOutput()
// vtkStructuredPoints *GetStructuredPointsOutput()
TESTDLLSORT_API bool vtkDataSetAlgorithm_GetStructuredPointsOutput_0(vtkStructuredPoints ** return_value, vtkDataSetAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAlgorithm::GetStructuredPointsOutput]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetStructuredPointsOutput();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkImageData* GetImageDataOutput()
// vtkImageData *GetImageDataOutput()
TESTDLLSORT_API bool vtkDataSetAlgorithm_GetImageDataOutput_0(vtkImageData ** return_value, vtkDataSetAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAlgorithm::GetImageDataOutput]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetImageDataOutput();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkStructuredGrid* GetStructuredGridOutput()
// vtkStructuredGrid *GetStructuredGridOutput()
TESTDLLSORT_API bool vtkDataSetAlgorithm_GetStructuredGridOutput_0(vtkStructuredGrid ** return_value, vtkDataSetAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAlgorithm::GetStructuredGridOutput]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetStructuredGridOutput();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkUnstructuredGrid* GetUnstructuredGridOutput()
// vtkUnstructuredGrid *GetUnstructuredGridOutput()
TESTDLLSORT_API bool vtkDataSetAlgorithm_GetUnstructuredGridOutput_0(vtkUnstructuredGrid ** return_value, vtkDataSetAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAlgorithm::GetUnstructuredGridOutput]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUnstructuredGridOutput();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetInputData(vtkDataObject * ARG_0)
// void SetInputData(vtkDataObject*)
TESTDLLSORT_API bool vtkDataSetAlgorithm_SetInputData_0(vtkDataSetAlgorithm * callingObject, vtkDataObject * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAlgorithm::SetInputData]:[";
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
TESTDLLSORT_API bool vtkDataSetAlgorithm_SetInputData_1(vtkDataSetAlgorithm * callingObject, int ARG_0, vtkDataObject * ARG_1) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAlgorithm::SetInputData]:[";
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

// void SetInputData(vtkDataSet * ARG_0)
// void SetInputData(vtkDataSet*)
TESTDLLSORT_API bool vtkDataSetAlgorithm_SetInputData_2(vtkDataSetAlgorithm * callingObject, vtkDataSet * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAlgorithm::SetInputData]:[";
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

// void SetInputData(int ARG_0, vtkDataSet * ARG_1)
// void SetInputData(int, vtkDataSet*)
TESTDLLSORT_API bool vtkDataSetAlgorithm_SetInputData_3(vtkDataSetAlgorithm * callingObject, int ARG_0, vtkDataSet * ARG_1) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAlgorithm::SetInputData]:[";
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
TESTDLLSORT_API bool vtkDataSetAlgorithm_AddInputData_0(vtkDataSetAlgorithm * callingObject, vtkDataObject * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAlgorithm::AddInputData]:[";
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

// void AddInputData(vtkDataSet * ARG_0)
// void AddInputData(vtkDataSet*)
TESTDLLSORT_API bool vtkDataSetAlgorithm_AddInputData_1(vtkDataSetAlgorithm * callingObject, vtkDataSet * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAlgorithm::AddInputData]:[";
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

// void AddInputData(int ARG_0, vtkDataSet * ARG_1)
// void AddInputData(int, vtkDataSet*)
TESTDLLSORT_API bool vtkDataSetAlgorithm_AddInputData_2(vtkDataSetAlgorithm * callingObject, int ARG_0, vtkDataSet * ARG_1) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAlgorithm::AddInputData]:[";
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

// void AddInputData(int ARG_0, vtkDataObject * ARG_1)
// void AddInputData(int, vtkDataObject*)
TESTDLLSORT_API bool vtkDataSetAlgorithm_AddInputData_3(vtkDataSetAlgorithm * callingObject, int ARG_0, vtkDataObject * ARG_1) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAlgorithm::AddInputData]:[";
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

// int ProcessRequest(vtkInformation * request, vtkInformationVector ** inputVector, vtkInformationVector * outputVector)
// int ProcessRequest(vtkInformation* request, vtkInformationVector** inputVector, vtkInformationVector* outputVector)
TESTDLLSORT_API bool vtkDataSetAlgorithm_ProcessRequest_0(int * return_value, vtkDataSetAlgorithm * callingObject, vtkInformation * request, vtkInformationVector ** inputVector, vtkInformationVector * outputVector) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataSetAlgorithm::ProcessRequest]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->ProcessRequest(request, inputVector, outputVector);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
