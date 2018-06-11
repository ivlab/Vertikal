
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkXMLStructuredDataReader.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkXMLStructuredDataReader_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLStructuredDataReader::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkXMLStructuredDataReader::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkXMLStructuredDataReader_IsA_0(vtkTypeBool * return_value, vtkXMLStructuredDataReader * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLStructuredDataReader::IsA]:[";
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

// static vtkXMLStructuredDataReader* SafeDownCast(vtkObjectBase * o)
// static vtkXMLStructuredDataReader* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkXMLStructuredDataReader_SafeDownCast_0(vtkXMLStructuredDataReader ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLStructuredDataReader::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkXMLStructuredDataReader::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkXMLStructuredDataReader* NewInstance()
// vtkXMLStructuredDataReader *NewInstance()
TESTDLLSORT_API bool vtkXMLStructuredDataReader_NewInstance_0(vtkXMLStructuredDataReader ** return_value, vtkXMLStructuredDataReader * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLStructuredDataReader::NewInstance]:[";
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

// vtkIdType GetNumberOfPoints()
// vtkIdType GetNumberOfPoints()
TESTDLLSORT_API bool vtkXMLStructuredDataReader_GetNumberOfPoints_0(vtkIdType * return_value, vtkXMLStructuredDataReader * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLStructuredDataReader::GetNumberOfPoints]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfPoints();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType GetNumberOfCells()
// vtkIdType GetNumberOfCells()
TESTDLLSORT_API bool vtkXMLStructuredDataReader_GetNumberOfCells_0(vtkIdType * return_value, vtkXMLStructuredDataReader * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLStructuredDataReader::GetNumberOfCells]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfCells();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetWholeSlices(int _arg)
// virtual void SetWholeSlices (int _arg)
TESTDLLSORT_API bool vtkXMLStructuredDataReader_SetWholeSlices_0(vtkXMLStructuredDataReader * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLStructuredDataReader::SetWholeSlices]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetWholeSlices(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetWholeSlices()
// virtual int GetWholeSlices ()
TESTDLLSORT_API bool vtkXMLStructuredDataReader_GetWholeSlices_0(int * return_value, vtkXMLStructuredDataReader * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLStructuredDataReader::GetWholeSlices]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetWholeSlices();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void WholeSlicesOn()
// virtual void WholeSlicesOn ()
TESTDLLSORT_API bool vtkXMLStructuredDataReader_WholeSlicesOn_0(vtkXMLStructuredDataReader * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLStructuredDataReader::WholeSlicesOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->WholeSlicesOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void WholeSlicesOff()
// virtual void WholeSlicesOff ()
TESTDLLSORT_API bool vtkXMLStructuredDataReader_WholeSlicesOff_0(vtkXMLStructuredDataReader * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLStructuredDataReader::WholeSlicesOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->WholeSlicesOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyOutputInformation(vtkInformation * outInfo, int port)
// void CopyOutputInformation(vtkInformation *outInfo, int port)
TESTDLLSORT_API bool vtkXMLStructuredDataReader_CopyOutputInformation_0(vtkXMLStructuredDataReader * callingObject, vtkInformation * outInfo, int port) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLStructuredDataReader::CopyOutputInformation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyOutputInformation(outInfo, port);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
