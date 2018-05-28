
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkXMLReader.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkXMLReader_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkXMLReader::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkXMLReader_IsA_0(vtkTypeBool * return_value, vtkXMLReader * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::IsA]:[";
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

// static vtkXMLReader* SafeDownCast(vtkObjectBase * o)
// static vtkXMLReader* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkXMLReader_SafeDownCast_0(vtkXMLReader ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkXMLReader::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkXMLReader* NewInstance()
// vtkXMLReader *NewInstance()
TESTDLLSORT_API bool vtkXMLReader_NewInstance_0(vtkXMLReader ** return_value, vtkXMLReader * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::NewInstance]:[";
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

// virtual void SetFileName(const char * _arg)
// virtual void SetFileName (const char* _arg)
TESTDLLSORT_API bool vtkXMLReader_SetFileName_0(vtkXMLReader * callingObject, const char * _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::SetFileName]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetFileName(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual char* GetFileName()
// virtual char* GetFileName ()
TESTDLLSORT_API bool vtkXMLReader_GetFileName_0(char ** return_value, vtkXMLReader * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::GetFileName]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetFileName();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetReadFromInputString(int _arg)
// virtual void SetReadFromInputString (int _arg)
TESTDLLSORT_API bool vtkXMLReader_SetReadFromInputString_0(vtkXMLReader * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::SetReadFromInputString]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetReadFromInputString(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetReadFromInputString()
// virtual int GetReadFromInputString ()
TESTDLLSORT_API bool vtkXMLReader_GetReadFromInputString_0(int * return_value, vtkXMLReader * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::GetReadFromInputString]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetReadFromInputString();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ReadFromInputStringOn()
// virtual void ReadFromInputStringOn ()
TESTDLLSORT_API bool vtkXMLReader_ReadFromInputStringOn_0(vtkXMLReader * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::ReadFromInputStringOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ReadFromInputStringOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ReadFromInputStringOff()
// virtual void ReadFromInputStringOff ()
TESTDLLSORT_API bool vtkXMLReader_ReadFromInputStringOff_0(vtkXMLReader * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::ReadFromInputStringOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ReadFromInputStringOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int CanReadFile(const char * name)
// virtual int CanReadFile(const char* name)
TESTDLLSORT_API bool vtkXMLReader_CanReadFile_0(int * return_value, vtkXMLReader * callingObject, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::CanReadFile]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->CanReadFile(name);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataSet* GetOutputAsDataSet()
// vtkDataSet* GetOutputAsDataSet()
TESTDLLSORT_API bool vtkXMLReader_GetOutputAsDataSet_0(vtkDataSet ** return_value, vtkXMLReader * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::GetOutputAsDataSet]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetOutputAsDataSet();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataSet* GetOutputAsDataSet(int index)
// vtkDataSet* GetOutputAsDataSet(int index)
TESTDLLSORT_API bool vtkXMLReader_GetOutputAsDataSet_1(vtkDataSet ** return_value, vtkXMLReader * callingObject, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::GetOutputAsDataSet]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetOutputAsDataSet(index);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkDataArraySelection* GetPointDataArraySelection()
// virtual vtkDataArraySelection *GetPointDataArraySelection ()
TESTDLLSORT_API bool vtkXMLReader_GetPointDataArraySelection_0(vtkDataArraySelection ** return_value, vtkXMLReader * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::GetPointDataArraySelection]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPointDataArraySelection();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkDataArraySelection* GetCellDataArraySelection()
// virtual vtkDataArraySelection *GetCellDataArraySelection ()
TESTDLLSORT_API bool vtkXMLReader_GetCellDataArraySelection_0(vtkDataArraySelection ** return_value, vtkXMLReader * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::GetCellDataArraySelection]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCellDataArraySelection();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkDataArraySelection* GetColumnArraySelection()
// virtual vtkDataArraySelection *GetColumnArraySelection ()
TESTDLLSORT_API bool vtkXMLReader_GetColumnArraySelection_0(vtkDataArraySelection ** return_value, vtkXMLReader * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::GetColumnArraySelection]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetColumnArraySelection();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetNumberOfPointArrays()
// int GetNumberOfPointArrays()
TESTDLLSORT_API bool vtkXMLReader_GetNumberOfPointArrays_0(int * return_value, vtkXMLReader * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::GetNumberOfPointArrays]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfPointArrays();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetNumberOfCellArrays()
// int GetNumberOfCellArrays()
TESTDLLSORT_API bool vtkXMLReader_GetNumberOfCellArrays_0(int * return_value, vtkXMLReader * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::GetNumberOfCellArrays]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfCellArrays();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetNumberOfColumnArrays()
// int GetNumberOfColumnArrays()
TESTDLLSORT_API bool vtkXMLReader_GetNumberOfColumnArrays_0(int * return_value, vtkXMLReader * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::GetNumberOfColumnArrays]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfColumnArrays();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char* GetPointArrayName(int index)
// const char* GetPointArrayName(int index)
TESTDLLSORT_API bool vtkXMLReader_GetPointArrayName_0(const char ** return_value, vtkXMLReader * callingObject, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::GetPointArrayName]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPointArrayName(index);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char* GetCellArrayName(int index)
// const char* GetCellArrayName(int index)
TESTDLLSORT_API bool vtkXMLReader_GetCellArrayName_0(const char ** return_value, vtkXMLReader * callingObject, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::GetCellArrayName]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCellArrayName(index);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char* GetColumnArrayName(int index)
// const char* GetColumnArrayName(int index)
TESTDLLSORT_API bool vtkXMLReader_GetColumnArrayName_0(const char ** return_value, vtkXMLReader * callingObject, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::GetColumnArrayName]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetColumnArrayName(index);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetPointArrayStatus(const char * name)
// int GetPointArrayStatus(const char* name)
TESTDLLSORT_API bool vtkXMLReader_GetPointArrayStatus_0(int * return_value, vtkXMLReader * callingObject, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::GetPointArrayStatus]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPointArrayStatus(name);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetCellArrayStatus(const char * name)
// int GetCellArrayStatus(const char* name)
TESTDLLSORT_API bool vtkXMLReader_GetCellArrayStatus_0(int * return_value, vtkXMLReader * callingObject, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::GetCellArrayStatus]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCellArrayStatus(name);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetPointArrayStatus(const char * name, int status)
// void SetPointArrayStatus(const char* name, int status)
TESTDLLSORT_API bool vtkXMLReader_SetPointArrayStatus_0(vtkXMLReader * callingObject, const char * name, int status) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::SetPointArrayStatus]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetPointArrayStatus(name, status);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellArrayStatus(const char * name, int status)
// void SetCellArrayStatus(const char* name, int status)
TESTDLLSORT_API bool vtkXMLReader_SetCellArrayStatus_0(vtkXMLReader * callingObject, const char * name, int status) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::SetCellArrayStatus]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellArrayStatus(name, status);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetColumnArrayStatus(const char * name)
// int GetColumnArrayStatus(const char* name)
TESTDLLSORT_API bool vtkXMLReader_GetColumnArrayStatus_0(int * return_value, vtkXMLReader * callingObject, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::GetColumnArrayStatus]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetColumnArrayStatus(name);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetColumnArrayStatus(const char * name, int status)
// void SetColumnArrayStatus(const char* name, int status)
TESTDLLSORT_API bool vtkXMLReader_SetColumnArrayStatus_0(vtkXMLReader * callingObject, const char * name, int status) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::SetColumnArrayStatus]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetColumnArrayStatus(name, status);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CopyOutputInformation(vtkInformation * ARG_0, int ARG_1)
// virtual void CopyOutputInformation(vtkInformation *, int )
TESTDLLSORT_API bool vtkXMLReader_CopyOutputInformation_0(vtkXMLReader * callingObject, vtkInformation * ARG_0, int ARG_1) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::CopyOutputInformation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyOutputInformation(ARG_0, ARG_1);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetTimeStep(int _arg)
// virtual void SetTimeStep (int _arg)
TESTDLLSORT_API bool vtkXMLReader_SetTimeStep_0(vtkXMLReader * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::SetTimeStep]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTimeStep(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetTimeStep()
// virtual int GetTimeStep ()
TESTDLLSORT_API bool vtkXMLReader_GetTimeStep_0(int * return_value, vtkXMLReader * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::GetTimeStep]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTimeStep();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetNumberOfTimeSteps()
// virtual int GetNumberOfTimeSteps ()
TESTDLLSORT_API bool vtkXMLReader_GetNumberOfTimeSteps_0(int * return_value, vtkXMLReader * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::GetNumberOfTimeSteps]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfTimeSteps();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int* GetTimeStepRange()
// virtual int *GetTimeStepRange ()
TESTDLLSORT_API bool vtkXMLReader_GetTimeStepRange_0(int ** return_value, vtkXMLReader * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::GetTimeStepRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTimeStepRange();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetTimeStepRange(int & _arg1, int & _arg2)
// virtual void GetTimeStepRange (int &_arg1, int &_arg2)
TESTDLLSORT_API bool vtkXMLReader_GetTimeStepRange_1(vtkXMLReader * callingObject, int * _arg1, int * _arg2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::GetTimeStepRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetTimeStepRange(*_arg1, *_arg2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetTimeStepRange(int _arg[2])
// virtual void GetTimeStepRange (int _arg[2])
TESTDLLSORT_API bool vtkXMLReader_GetTimeStepRange_2(vtkXMLReader * callingObject, int _arg[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::GetTimeStepRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetTimeStepRange(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetTimeStepRange(int _arg1, int _arg2)
// virtual void SetTimeStepRange (int _arg1, int _arg2)
TESTDLLSORT_API bool vtkXMLReader_SetTimeStepRange_0(vtkXMLReader * callingObject, int _arg1, int _arg2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::SetTimeStepRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTimeStepRange(_arg1, _arg2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTimeStepRange(int _arg[2])
// void SetTimeStepRange (int _arg[2])
TESTDLLSORT_API bool vtkXMLReader_SetTimeStepRange_1(vtkXMLReader * callingObject, int _arg[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::SetTimeStepRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTimeStepRange(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkXMLDataParser* GetXMLParser()
// vtkXMLDataParser* GetXMLParser()
TESTDLLSORT_API bool vtkXMLReader_GetXMLParser_0(vtkXMLDataParser ** return_value, vtkXMLReader * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::GetXMLParser]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetXMLParser();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int ProcessRequest(vtkInformation * request, vtkInformationVector ** inputVector, vtkInformationVector * outputVector)
// int ProcessRequest(vtkInformation *request, vtkInformationVector **inputVector, vtkInformationVector *outputVector)
TESTDLLSORT_API bool vtkXMLReader_ProcessRequest_0(int * return_value, vtkXMLReader * callingObject, vtkInformation * request, vtkInformationVector ** inputVector, vtkInformationVector * outputVector) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::ProcessRequest]:[";
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

// void SetReaderErrorObserver(vtkCommand * ARG_0)
// void SetReaderErrorObserver(vtkCommand *)
TESTDLLSORT_API bool vtkXMLReader_SetReaderErrorObserver_0(vtkXMLReader * callingObject, vtkCommand * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::SetReaderErrorObserver]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetReaderErrorObserver(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkCommand* GetReaderErrorObserver()
// virtual vtkCommand *GetReaderErrorObserver ()
TESTDLLSORT_API bool vtkXMLReader_GetReaderErrorObserver_0(vtkCommand ** return_value, vtkXMLReader * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::GetReaderErrorObserver]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetReaderErrorObserver();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetParserErrorObserver(vtkCommand * ARG_0)
// void SetParserErrorObserver(vtkCommand *)
TESTDLLSORT_API bool vtkXMLReader_SetParserErrorObserver_0(vtkXMLReader * callingObject, vtkCommand * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::SetParserErrorObserver]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetParserErrorObserver(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkCommand* GetParserErrorObserver()
// virtual vtkCommand *GetParserErrorObserver ()
TESTDLLSORT_API bool vtkXMLReader_GetParserErrorObserver_0(vtkCommand ** return_value, vtkXMLReader * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLReader::GetParserErrorObserver]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetParserErrorObserver();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
