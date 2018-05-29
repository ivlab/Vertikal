
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkAlgorithm.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkAlgorithm* New()
// static vtkAlgorithm *New()
TESTDLLSORT_API bool vtkAlgorithm_New_0(vtkAlgorithm ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkAlgorithm::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkAlgorithm_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkAlgorithm::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkAlgorithm_IsA_0(vtkTypeBool * return_value, vtkAlgorithm * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::IsA]:[";
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

// static vtkAlgorithm* SafeDownCast(vtkObjectBase * o)
// static vtkAlgorithm* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkAlgorithm_SafeDownCast_0(vtkAlgorithm ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkAlgorithm::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkAlgorithm* NewInstance()
// vtkAlgorithm *NewInstance()
TESTDLLSORT_API bool vtkAlgorithm_NewInstance_0(vtkAlgorithm ** return_value, vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::NewInstance]:[";
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

// int HasExecutive()
// int HasExecutive()
TESTDLLSORT_API bool vtkAlgorithm_HasExecutive_0(int * return_value, vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::HasExecutive]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->HasExecutive();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int ProcessRequest(vtkInformation * request, vtkInformationVector ** inInfo, vtkInformationVector * outInfo)
// virtual int ProcessRequest(vtkInformation* request, vtkInformationVector** inInfo, vtkInformationVector* outInfo)
TESTDLLSORT_API bool vtkAlgorithm_ProcessRequest_0(int * return_value, vtkAlgorithm * callingObject, vtkInformation * request, vtkInformationVector ** inInfo, vtkInformationVector * outInfo) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::ProcessRequest]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->ProcessRequest(request, inInfo, outInfo);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int ProcessRequest(vtkInformation * request, vtkCollection * inInfo, vtkInformationVector * outInfo)
// int ProcessRequest(vtkInformation* request, vtkCollection* inInfo, vtkInformationVector* outInfo)
TESTDLLSORT_API bool vtkAlgorithm_ProcessRequest_1(int * return_value, vtkAlgorithm * callingObject, vtkInformation * request, vtkCollection * inInfo, vtkInformationVector * outInfo) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::ProcessRequest]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->ProcessRequest(request, inInfo, outInfo);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int ComputePipelineMTime(vtkInformation * request, vtkInformationVector ** inInfoVec, vtkInformationVector * outInfoVec, int requestFromOutputPort, vtkMTimeType * mtime)
// virtual int ComputePipelineMTime(vtkInformation* request, vtkInformationVector** inInfoVec, vtkInformationVector* outInfoVec, int requestFromOutputPort, vtkMTimeType* mtime)
TESTDLLSORT_API bool vtkAlgorithm_ComputePipelineMTime_0(int * return_value, vtkAlgorithm * callingObject, vtkInformation * request, vtkInformationVector ** inInfoVec, vtkInformationVector * outInfoVec, int requestFromOutputPort, vtkMTimeType * mtime) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::ComputePipelineMTime]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->ComputePipelineMTime(request, inInfoVec, outInfoVec, requestFromOutputPort, mtime);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int ModifyRequest(vtkInformation * request, int when)
// virtual int ModifyRequest(vtkInformation* request, int when)
TESTDLLSORT_API bool vtkAlgorithm_ModifyRequest_0(int * return_value, vtkAlgorithm * callingObject, vtkInformation * request, int when) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::ModifyRequest]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->ModifyRequest(request, when);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkInformation* GetInputPortInformation(int port)
// vtkInformation* GetInputPortInformation(int port)
TESTDLLSORT_API bool vtkAlgorithm_GetInputPortInformation_0(vtkInformation ** return_value, vtkAlgorithm * callingObject, int port) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetInputPortInformation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInputPortInformation(port);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkInformation* GetOutputPortInformation(int port)
// vtkInformation* GetOutputPortInformation(int port)
TESTDLLSORT_API bool vtkAlgorithm_GetOutputPortInformation_0(vtkInformation ** return_value, vtkAlgorithm * callingObject, int port) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetOutputPortInformation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetOutputPortInformation(port);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkInformation* GetInformation()
// virtual vtkInformation *GetInformation ()
TESTDLLSORT_API bool vtkAlgorithm_GetInformation_0(vtkInformation ** return_value, vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetInformation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInformation();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetInformation(vtkInformation * ARG_0)
// virtual void SetInformation(vtkInformation*)
TESTDLLSORT_API bool vtkAlgorithm_SetInformation_0(vtkAlgorithm * callingObject, vtkInformation * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::SetInformation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetInformation(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetNumberOfInputPorts()
// int GetNumberOfInputPorts()
TESTDLLSORT_API bool vtkAlgorithm_GetNumberOfInputPorts_0(int * return_value, vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetNumberOfInputPorts]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfInputPorts();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetNumberOfOutputPorts()
// int GetNumberOfOutputPorts()
TESTDLLSORT_API bool vtkAlgorithm_GetNumberOfOutputPorts_0(int * return_value, vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetNumberOfOutputPorts]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfOutputPorts();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Register(vtkObjectBase * o)
// void Register(vtkObjectBase* o)
TESTDLLSORT_API bool vtkAlgorithm_Register_0(vtkAlgorithm * callingObject, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::Register]:[";
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
TESTDLLSORT_API bool vtkAlgorithm_UnRegister_0(vtkAlgorithm * callingObject, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::UnRegister]:[";
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

// virtual void SetAbortExecute(int _arg)
// virtual void SetAbortExecute (int _arg)
TESTDLLSORT_API bool vtkAlgorithm_SetAbortExecute_0(vtkAlgorithm * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::SetAbortExecute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAbortExecute(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetAbortExecute()
// virtual int GetAbortExecute ()
TESTDLLSORT_API bool vtkAlgorithm_GetAbortExecute_0(int * return_value, vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetAbortExecute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAbortExecute();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void AbortExecuteOn()
// virtual void AbortExecuteOn ()
TESTDLLSORT_API bool vtkAlgorithm_AbortExecuteOn_0(vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::AbortExecuteOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AbortExecuteOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void AbortExecuteOff()
// virtual void AbortExecuteOff ()
TESTDLLSORT_API bool vtkAlgorithm_AbortExecuteOff_0(vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::AbortExecuteOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AbortExecuteOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetProgress(double _arg)
// virtual void SetProgress (double _arg)
TESTDLLSORT_API bool vtkAlgorithm_SetProgress_0(vtkAlgorithm * callingObject, double _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::SetProgress]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetProgress(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetProgressMinValue()
// virtual double GetProgressMinValue ()
TESTDLLSORT_API bool vtkAlgorithm_GetProgressMinValue_0(double * return_value, vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetProgressMinValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetProgressMinValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetProgressMaxValue()
// virtual double GetProgressMaxValue ()
TESTDLLSORT_API bool vtkAlgorithm_GetProgressMaxValue_0(double * return_value, vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetProgressMaxValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetProgressMaxValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetProgress()
// virtual double GetProgress ()
TESTDLLSORT_API bool vtkAlgorithm_GetProgress_0(double * return_value, vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetProgress]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetProgress();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void UpdateProgress(double amount)
// void UpdateProgress(double amount)
TESTDLLSORT_API bool vtkAlgorithm_UpdateProgress_0(vtkAlgorithm * callingObject, double amount) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::UpdateProgress]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UpdateProgress(amount);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetProgressText(const char * ptext)
// void SetProgressText(const char* ptext)
TESTDLLSORT_API bool vtkAlgorithm_SetProgressText_0(vtkAlgorithm * callingObject, const char * ptext) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::SetProgressText]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetProgressText(ptext);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual char* GetProgressText()
// virtual char* GetProgressText ()
TESTDLLSORT_API bool vtkAlgorithm_GetProgressText_0(char ** return_value, vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetProgressText]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetProgressText();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual long GetErrorCode()
// virtual unsigned long GetErrorCode ()
TESTDLLSORT_API bool vtkAlgorithm_GetErrorCode_0(unsigned long * return_value, vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetErrorCode]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetErrorCode();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationIntegerKey* INPUT_IS_OPTIONAL()
// static vtkInformationIntegerKey* INPUT_IS_OPTIONAL()
TESTDLLSORT_API bool vtkAlgorithm_INPUT_IS_OPTIONAL_0(vtkInformationIntegerKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::INPUT_IS_OPTIONAL]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkAlgorithm::INPUT_IS_OPTIONAL();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationIntegerKey* INPUT_IS_REPEATABLE()
// static vtkInformationIntegerKey* INPUT_IS_REPEATABLE()
TESTDLLSORT_API bool vtkAlgorithm_INPUT_IS_REPEATABLE_0(vtkInformationIntegerKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::INPUT_IS_REPEATABLE]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkAlgorithm::INPUT_IS_REPEATABLE();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationInformationVectorKey* INPUT_REQUIRED_FIELDS()
// static vtkInformationInformationVectorKey* INPUT_REQUIRED_FIELDS()
TESTDLLSORT_API bool vtkAlgorithm_INPUT_REQUIRED_FIELDS_0(vtkInformationInformationVectorKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::INPUT_REQUIRED_FIELDS]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkAlgorithm::INPUT_REQUIRED_FIELDS();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationStringVectorKey* INPUT_REQUIRED_DATA_TYPE()
// static vtkInformationStringVectorKey* INPUT_REQUIRED_DATA_TYPE()
TESTDLLSORT_API bool vtkAlgorithm_INPUT_REQUIRED_DATA_TYPE_0(vtkInformationStringVectorKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::INPUT_REQUIRED_DATA_TYPE]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkAlgorithm::INPUT_REQUIRED_DATA_TYPE();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationInformationVectorKey* INPUT_ARRAYS_TO_PROCESS()
// static vtkInformationInformationVectorKey* INPUT_ARRAYS_TO_PROCESS()
TESTDLLSORT_API bool vtkAlgorithm_INPUT_ARRAYS_TO_PROCESS_0(vtkInformationInformationVectorKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::INPUT_ARRAYS_TO_PROCESS]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkAlgorithm::INPUT_ARRAYS_TO_PROCESS();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationIntegerKey* INPUT_PORT()
// static vtkInformationIntegerKey* INPUT_PORT()
TESTDLLSORT_API bool vtkAlgorithm_INPUT_PORT_0(vtkInformationIntegerKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::INPUT_PORT]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkAlgorithm::INPUT_PORT();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationIntegerKey* INPUT_CONNECTION()
// static vtkInformationIntegerKey* INPUT_CONNECTION()
TESTDLLSORT_API bool vtkAlgorithm_INPUT_CONNECTION_0(vtkInformationIntegerKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::INPUT_CONNECTION]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkAlgorithm::INPUT_CONNECTION();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationIntegerKey* CAN_PRODUCE_SUB_EXTENT()
// static vtkInformationIntegerKey* CAN_PRODUCE_SUB_EXTENT()
TESTDLLSORT_API bool vtkAlgorithm_CAN_PRODUCE_SUB_EXTENT_0(vtkInformationIntegerKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::CAN_PRODUCE_SUB_EXTENT]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkAlgorithm::CAN_PRODUCE_SUB_EXTENT();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationIntegerKey* CAN_HANDLE_PIECE_REQUEST()
// static vtkInformationIntegerKey* CAN_HANDLE_PIECE_REQUEST()
TESTDLLSORT_API bool vtkAlgorithm_CAN_HANDLE_PIECE_REQUEST_0(vtkInformationIntegerKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::CAN_HANDLE_PIECE_REQUEST]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkAlgorithm::CAN_HANDLE_PIECE_REQUEST();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetInputArrayToProcess(int idx, int port, int connection, int fieldAssociation, const char * name)
// virtual void SetInputArrayToProcess(int idx, int port, int connection, int fieldAssociation, const char *name)
TESTDLLSORT_API bool vtkAlgorithm_SetInputArrayToProcess_0(vtkAlgorithm * callingObject, int idx, int port, int connection, int fieldAssociation, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::SetInputArrayToProcess]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetInputArrayToProcess(idx, port, connection, fieldAssociation, name);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetInputArrayToProcess(int idx, int port, int connection, int fieldAssociation, int fieldAttributeType)
// virtual void SetInputArrayToProcess(int idx, int port, int connection, int fieldAssociation, int fieldAttributeType)
TESTDLLSORT_API bool vtkAlgorithm_SetInputArrayToProcess_1(vtkAlgorithm * callingObject, int idx, int port, int connection, int fieldAssociation, int fieldAttributeType) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::SetInputArrayToProcess]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetInputArrayToProcess(idx, port, connection, fieldAssociation, fieldAttributeType);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetInputArrayToProcess(int idx, vtkInformation * info)
// virtual void SetInputArrayToProcess(int idx, vtkInformation *info)
TESTDLLSORT_API bool vtkAlgorithm_SetInputArrayToProcess_2(vtkAlgorithm * callingObject, int idx, vtkInformation * info) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::SetInputArrayToProcess]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetInputArrayToProcess(idx, info);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetInputArrayToProcess(int idx, int port, int connection, const char * fieldAssociation, const char * attributeTypeorName)
// virtual void SetInputArrayToProcess(int idx, int port, int connection, const char* fieldAssociation, const char* attributeTypeorName)
TESTDLLSORT_API bool vtkAlgorithm_SetInputArrayToProcess_3(vtkAlgorithm * callingObject, int idx, int port, int connection, const char * fieldAssociation, const char * attributeTypeorName) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::SetInputArrayToProcess]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetInputArrayToProcess(idx, port, connection, fieldAssociation, attributeTypeorName);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkInformation* GetInputArrayInformation(int idx)
// vtkInformation *GetInputArrayInformation(int idx)
TESTDLLSORT_API bool vtkAlgorithm_GetInputArrayInformation_0(vtkInformation ** return_value, vtkAlgorithm * callingObject, int idx) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetInputArrayInformation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInputArrayInformation(idx);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void RemoveAllInputs()
// void RemoveAllInputs()
TESTDLLSORT_API bool vtkAlgorithm_RemoveAllInputs_0(vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::RemoveAllInputs]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveAllInputs();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataObject* GetOutputDataObject(int port)
// vtkDataObject* GetOutputDataObject(int port)
TESTDLLSORT_API bool vtkAlgorithm_GetOutputDataObject_0(vtkDataObject ** return_value, vtkAlgorithm * callingObject, int port) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetOutputDataObject]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetOutputDataObject(port);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataObject* GetInputDataObject(int port, int connection)
// vtkDataObject *GetInputDataObject(int port, int connection)
TESTDLLSORT_API bool vtkAlgorithm_GetInputDataObject_0(vtkDataObject ** return_value, vtkAlgorithm * callingObject, int port, int connection) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetInputDataObject]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInputDataObject(port, connection);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetInputConnection(int port, vtkAlgorithmOutput * input)
// virtual void SetInputConnection(int port, vtkAlgorithmOutput* input)
TESTDLLSORT_API bool vtkAlgorithm_SetInputConnection_0(vtkAlgorithm * callingObject, int port, vtkAlgorithmOutput * input) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::SetInputConnection]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetInputConnection(port, input);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetInputConnection(vtkAlgorithmOutput * input)
// virtual void SetInputConnection(vtkAlgorithmOutput* input)
TESTDLLSORT_API bool vtkAlgorithm_SetInputConnection_1(vtkAlgorithm * callingObject, vtkAlgorithmOutput * input) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::SetInputConnection]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetInputConnection(input);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void AddInputConnection(int port, vtkAlgorithmOutput * input)
// virtual void AddInputConnection(int port, vtkAlgorithmOutput* input)
TESTDLLSORT_API bool vtkAlgorithm_AddInputConnection_0(vtkAlgorithm * callingObject, int port, vtkAlgorithmOutput * input) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::AddInputConnection]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AddInputConnection(port, input);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void AddInputConnection(vtkAlgorithmOutput * input)
// virtual void AddInputConnection(vtkAlgorithmOutput* input)
TESTDLLSORT_API bool vtkAlgorithm_AddInputConnection_1(vtkAlgorithm * callingObject, vtkAlgorithmOutput * input) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::AddInputConnection]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AddInputConnection(input);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void RemoveInputConnection(int port, vtkAlgorithmOutput * input)
// virtual void RemoveInputConnection(int port, vtkAlgorithmOutput* input)
TESTDLLSORT_API bool vtkAlgorithm_RemoveInputConnection_0(vtkAlgorithm * callingObject, int port, vtkAlgorithmOutput * input) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::RemoveInputConnection]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveInputConnection(port, input);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void RemoveInputConnection(int port, int idx)
// virtual void RemoveInputConnection(int port, int idx)
TESTDLLSORT_API bool vtkAlgorithm_RemoveInputConnection_1(vtkAlgorithm * callingObject, int port, int idx) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::RemoveInputConnection]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveInputConnection(port, idx);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void RemoveAllInputConnections(int port)
// virtual void RemoveAllInputConnections(int port)
TESTDLLSORT_API bool vtkAlgorithm_RemoveAllInputConnections_0(vtkAlgorithm * callingObject, int port) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::RemoveAllInputConnections]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveAllInputConnections(port);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetInputDataObject(int port, vtkDataObject * data)
// virtual void SetInputDataObject(int port, vtkDataObject* data)
TESTDLLSORT_API bool vtkAlgorithm_SetInputDataObject_0(vtkAlgorithm * callingObject, int port, vtkDataObject * data) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::SetInputDataObject]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetInputDataObject(port, data);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetInputDataObject(vtkDataObject * data)
// virtual void SetInputDataObject(vtkDataObject* data)
TESTDLLSORT_API bool vtkAlgorithm_SetInputDataObject_1(vtkAlgorithm * callingObject, vtkDataObject * data) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::SetInputDataObject]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetInputDataObject(data);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void AddInputDataObject(int port, vtkDataObject * data)
// virtual void AddInputDataObject(int port, vtkDataObject* data)
TESTDLLSORT_API bool vtkAlgorithm_AddInputDataObject_0(vtkAlgorithm * callingObject, int port, vtkDataObject * data) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::AddInputDataObject]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AddInputDataObject(port, data);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void AddInputDataObject(vtkDataObject * data)
// virtual void AddInputDataObject(vtkDataObject* data)
TESTDLLSORT_API bool vtkAlgorithm_AddInputDataObject_1(vtkAlgorithm * callingObject, vtkDataObject * data) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::AddInputDataObject]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AddInputDataObject(data);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkAlgorithmOutput* GetOutputPort(int index)
// vtkAlgorithmOutput* GetOutputPort(int index)
TESTDLLSORT_API bool vtkAlgorithm_GetOutputPort_0(vtkAlgorithmOutput ** return_value, vtkAlgorithm * callingObject, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetOutputPort]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetOutputPort(index);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkAlgorithmOutput* GetOutputPort()
// vtkAlgorithmOutput* GetOutputPort()
TESTDLLSORT_API bool vtkAlgorithm_GetOutputPort_1(vtkAlgorithmOutput ** return_value, vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetOutputPort]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetOutputPort();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetNumberOfInputConnections(int port)
// int GetNumberOfInputConnections(int port)
TESTDLLSORT_API bool vtkAlgorithm_GetNumberOfInputConnections_0(int * return_value, vtkAlgorithm * callingObject, int port) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetNumberOfInputConnections]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfInputConnections(port);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetTotalNumberOfInputConnections()
// int GetTotalNumberOfInputConnections()
TESTDLLSORT_API bool vtkAlgorithm_GetTotalNumberOfInputConnections_0(int * return_value, vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetTotalNumberOfInputConnections]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTotalNumberOfInputConnections();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkAlgorithmOutput* GetInputConnection(int port, int index)
// vtkAlgorithmOutput* GetInputConnection(int port, int index)
TESTDLLSORT_API bool vtkAlgorithm_GetInputConnection_0(vtkAlgorithmOutput ** return_value, vtkAlgorithm * callingObject, int port, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetInputConnection]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInputConnection(port, index);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkAlgorithm* GetInputAlgorithm(int port, int index, int & algPort)
// vtkAlgorithm* GetInputAlgorithm(int port, int index, int& algPort)
TESTDLLSORT_API bool vtkAlgorithm_GetInputAlgorithm_0(vtkAlgorithm ** return_value, vtkAlgorithm * callingObject, int port, int index, int * algPort) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetInputAlgorithm]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInputAlgorithm(port, index, *algPort);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkAlgorithm* GetInputAlgorithm(int port, int index)
// vtkAlgorithm* GetInputAlgorithm(int port, int index)
TESTDLLSORT_API bool vtkAlgorithm_GetInputAlgorithm_1(vtkAlgorithm ** return_value, vtkAlgorithm * callingObject, int port, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetInputAlgorithm]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInputAlgorithm(port, index);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkAlgorithm* GetInputAlgorithm()
// vtkAlgorithm* GetInputAlgorithm()
TESTDLLSORT_API bool vtkAlgorithm_GetInputAlgorithm_2(vtkAlgorithm ** return_value, vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetInputAlgorithm]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInputAlgorithm();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkInformation* GetInputInformation(int port, int index)
// vtkInformation* GetInputInformation(int port, int index)
TESTDLLSORT_API bool vtkAlgorithm_GetInputInformation_0(vtkInformation ** return_value, vtkAlgorithm * callingObject, int port, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetInputInformation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInputInformation(port, index);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkInformation* GetInputInformation()
// vtkInformation* GetInputInformation()
TESTDLLSORT_API bool vtkAlgorithm_GetInputInformation_1(vtkInformation ** return_value, vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetInputInformation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInputInformation();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkInformation* GetOutputInformation(int port)
// vtkInformation* GetOutputInformation(int port)
TESTDLLSORT_API bool vtkAlgorithm_GetOutputInformation_0(vtkInformation ** return_value, vtkAlgorithm * callingObject, int port) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetOutputInformation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetOutputInformation(port);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void Update(int port)
// virtual void Update(int port)
TESTDLLSORT_API bool vtkAlgorithm_Update_0(vtkAlgorithm * callingObject, int port) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::Update]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Update(port);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void Update()
// virtual void Update()
TESTDLLSORT_API bool vtkAlgorithm_Update_1(vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::Update]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Update();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int Update(int port, vtkInformationVector * requests)
// virtual int Update(int port, vtkInformationVector* requests)
TESTDLLSORT_API bool vtkAlgorithm_Update_2(int * return_value, vtkAlgorithm * callingObject, int port, vtkInformationVector * requests) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::Update]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Update(port, requests);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int Update(vtkInformation * requests)
// virtual int Update(vtkInformation* requests)
TESTDLLSORT_API bool vtkAlgorithm_Update_3(int * return_value, vtkAlgorithm * callingObject, vtkInformation * requests) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::Update]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Update(requests);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int UpdateExtent(const int extents[6])
// virtual int UpdateExtent(const int extents[6])
TESTDLLSORT_API bool vtkAlgorithm_UpdateExtent_0(int * return_value, vtkAlgorithm * callingObject, const int extents[6]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::UpdateExtent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->UpdateExtent(extents);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UpdateInformation()
// virtual void UpdateInformation()
TESTDLLSORT_API bool vtkAlgorithm_UpdateInformation_0(vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::UpdateInformation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UpdateInformation();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UpdateDataObject()
// virtual void UpdateDataObject()
TESTDLLSORT_API bool vtkAlgorithm_UpdateDataObject_0(vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::UpdateDataObject]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UpdateDataObject();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void PropagateUpdateExtent()
// virtual void PropagateUpdateExtent()
TESTDLLSORT_API bool vtkAlgorithm_PropagateUpdateExtent_0(vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::PropagateUpdateExtent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->PropagateUpdateExtent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UpdateWholeExtent()
// virtual void UpdateWholeExtent()
TESTDLLSORT_API bool vtkAlgorithm_UpdateWholeExtent_0(vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::UpdateWholeExtent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UpdateWholeExtent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ConvertTotalInputToPortConnection(int ind, int & port, int & conn)
// void ConvertTotalInputToPortConnection(int ind, int& port, int& conn)
TESTDLLSORT_API bool vtkAlgorithm_ConvertTotalInputToPortConnection_0(vtkAlgorithm * callingObject, int ind, int * port, int * conn) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::ConvertTotalInputToPortConnection]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ConvertTotalInputToPortConnection(ind, *port, *conn);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetReleaseDataFlag(int ARG_0)
// virtual void SetReleaseDataFlag(int)
TESTDLLSORT_API bool vtkAlgorithm_SetReleaseDataFlag_0(vtkAlgorithm * callingObject, int ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::SetReleaseDataFlag]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetReleaseDataFlag(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetReleaseDataFlag()
// virtual int GetReleaseDataFlag()
TESTDLLSORT_API bool vtkAlgorithm_GetReleaseDataFlag_0(int * return_value, vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetReleaseDataFlag]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetReleaseDataFlag();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ReleaseDataFlagOn()
// void ReleaseDataFlagOn()
TESTDLLSORT_API bool vtkAlgorithm_ReleaseDataFlagOn_0(vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::ReleaseDataFlagOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ReleaseDataFlagOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ReleaseDataFlagOff()
// void ReleaseDataFlagOff()
TESTDLLSORT_API bool vtkAlgorithm_ReleaseDataFlagOff_0(vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::ReleaseDataFlagOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ReleaseDataFlagOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int UpdateExtentIsEmpty(vtkInformation * pinfo, vtkDataObject * output)
// int UpdateExtentIsEmpty(vtkInformation *pinfo, vtkDataObject *output)
TESTDLLSORT_API bool vtkAlgorithm_UpdateExtentIsEmpty_0(int * return_value, vtkAlgorithm * callingObject, vtkInformation * pinfo, vtkDataObject * output) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::UpdateExtentIsEmpty]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->UpdateExtentIsEmpty(pinfo, output);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int UpdateExtentIsEmpty(vtkInformation * pinfo, int extentType)
// int UpdateExtentIsEmpty(vtkInformation *pinfo, int extentType)
TESTDLLSORT_API bool vtkAlgorithm_UpdateExtentIsEmpty_1(int * return_value, vtkAlgorithm * callingObject, vtkInformation * pinfo, int extentType) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::UpdateExtentIsEmpty]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->UpdateExtentIsEmpty(pinfo, extentType);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int* GetUpdateExtent()
// int* GetUpdateExtent()
TESTDLLSORT_API bool vtkAlgorithm_GetUpdateExtent_0(int ** return_value, vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetUpdateExtent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUpdateExtent();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int* GetUpdateExtent(int port)
// int* GetUpdateExtent(int port)
TESTDLLSORT_API bool vtkAlgorithm_GetUpdateExtent_1(int ** return_value, vtkAlgorithm * callingObject, int port) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetUpdateExtent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUpdateExtent(port);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetUpdateExtent(int & x0, int & x1, int & y0, int & y1, int & z0, int & z1)
// void GetUpdateExtent(int& x0, int& x1, int& y0, int& y1, int& z0, int& z1)
TESTDLLSORT_API bool vtkAlgorithm_GetUpdateExtent_2(vtkAlgorithm * callingObject, int * x0, int * x1, int * y0, int * y1, int * z0, int * z1) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetUpdateExtent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetUpdateExtent(*x0, *x1, *y0, *y1, *z0, *z1);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetUpdateExtent(int port, int & x0, int & x1, int & y0, int & y1, int & z0, int & z1)
// void GetUpdateExtent(int port, int& x0, int& x1, int& y0, int& y1, int& z0, int& z1)
TESTDLLSORT_API bool vtkAlgorithm_GetUpdateExtent_3(vtkAlgorithm * callingObject, int port, int * x0, int * x1, int * y0, int * y1, int * z0, int * z1) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetUpdateExtent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetUpdateExtent(port, *x0, *x1, *y0, *y1, *z0, *z1);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetUpdateExtent(int extent[6])
// void GetUpdateExtent(int extent[6])
TESTDLLSORT_API bool vtkAlgorithm_GetUpdateExtent_4(vtkAlgorithm * callingObject, int extent[6]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetUpdateExtent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetUpdateExtent(extent);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetUpdateExtent(int port, int extent[6])
// void GetUpdateExtent(int port, int extent[6])
TESTDLLSORT_API bool vtkAlgorithm_GetUpdateExtent_5(vtkAlgorithm * callingObject, int port, int extent[6]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetUpdateExtent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetUpdateExtent(port, extent);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetUpdatePiece()
// int GetUpdatePiece()
TESTDLLSORT_API bool vtkAlgorithm_GetUpdatePiece_0(int * return_value, vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetUpdatePiece]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUpdatePiece();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetUpdatePiece(int port)
// int GetUpdatePiece(int port)
TESTDLLSORT_API bool vtkAlgorithm_GetUpdatePiece_1(int * return_value, vtkAlgorithm * callingObject, int port) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetUpdatePiece]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUpdatePiece(port);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetUpdateNumberOfPieces()
// int GetUpdateNumberOfPieces()
TESTDLLSORT_API bool vtkAlgorithm_GetUpdateNumberOfPieces_0(int * return_value, vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetUpdateNumberOfPieces]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUpdateNumberOfPieces();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetUpdateNumberOfPieces(int port)
// int GetUpdateNumberOfPieces(int port)
TESTDLLSORT_API bool vtkAlgorithm_GetUpdateNumberOfPieces_1(int * return_value, vtkAlgorithm * callingObject, int port) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetUpdateNumberOfPieces]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUpdateNumberOfPieces(port);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetUpdateGhostLevel()
// int GetUpdateGhostLevel()
TESTDLLSORT_API bool vtkAlgorithm_GetUpdateGhostLevel_0(int * return_value, vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetUpdateGhostLevel]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUpdateGhostLevel();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetUpdateGhostLevel(int port)
// int GetUpdateGhostLevel(int port)
TESTDLLSORT_API bool vtkAlgorithm_GetUpdateGhostLevel_1(int * return_value, vtkAlgorithm * callingObject, int port) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetUpdateGhostLevel]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUpdateGhostLevel(port);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetProgressObserver(vtkProgressObserver * ARG_0)
// void SetProgressObserver(vtkProgressObserver*)
TESTDLLSORT_API bool vtkAlgorithm_SetProgressObserver_0(vtkAlgorithm * callingObject, vtkProgressObserver * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::SetProgressObserver]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetProgressObserver(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkProgressObserver* GetProgressObserver()
// virtual vtkProgressObserver *GetProgressObserver ()
TESTDLLSORT_API bool vtkAlgorithm_GetProgressObserver_0(vtkProgressObserver ** return_value, vtkAlgorithm * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAlgorithm::GetProgressObserver]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetProgressObserver();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
