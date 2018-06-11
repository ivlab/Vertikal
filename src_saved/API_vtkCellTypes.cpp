
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkCellTypes.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkCellTypes* New()
// static vtkCellTypes *New()
TESTDLLSORT_API bool vtkCellTypes_New_0(vtkCellTypes ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellTypes::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkCellTypes::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkCellTypes_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellTypes::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkCellTypes::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkCellTypes_IsA_0(vtkTypeBool * return_value, vtkCellTypes * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellTypes::IsA]:[";
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

// static vtkCellTypes* SafeDownCast(vtkObjectBase * o)
// static vtkCellTypes* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkCellTypes_SafeDownCast_0(vtkCellTypes ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellTypes::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkCellTypes::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkCellTypes* NewInstance()
// vtkCellTypes *NewInstance()
TESTDLLSORT_API bool vtkCellTypes_NewInstance_0(vtkCellTypes ** return_value, vtkCellTypes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellTypes::NewInstance]:[";
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

// int Allocate(int sz = 512, int ext = 1000)
// int Allocate(int sz=512, int ext=1000)
TESTDLLSORT_API bool vtkCellTypes_Allocate_0(int * return_value, vtkCellTypes * callingObject, int sz = 512, int ext = 1000) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellTypes::Allocate]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Allocate(sz, ext);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InsertCell(vtkIdType id, unsigned char type, vtkIdType loc)
// void InsertCell(vtkIdType id, unsigned char type, vtkIdType loc)
TESTDLLSORT_API bool vtkCellTypes_InsertCell_0(vtkCellTypes * callingObject, vtkIdType id, unsigned char type, vtkIdType loc) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellTypes::InsertCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InsertCell(id, type, loc);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType InsertNextCell(unsigned char type, vtkIdType loc)
// vtkIdType InsertNextCell(unsigned char type, vtkIdType loc)
TESTDLLSORT_API bool vtkCellTypes_InsertNextCell_0(vtkIdType * return_value, vtkCellTypes * callingObject, unsigned char type, vtkIdType loc) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellTypes::InsertNextCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InsertNextCell(type, loc);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypes(vtkIdType ncells, vtkUnsignedCharArray * cellTypes, vtkIdTypeArray * cellLocations)
// void SetCellTypes(vtkIdType ncells, vtkUnsignedCharArray *cellTypes, vtkIdTypeArray *cellLocations)
TESTDLLSORT_API bool vtkCellTypes_SetCellTypes_0(vtkCellTypes * callingObject, vtkIdType ncells, vtkUnsignedCharArray * cellTypes, vtkIdTypeArray * cellLocations) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellTypes::SetCellTypes]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypes(ncells, cellTypes, cellLocations);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypes(vtkIdType ncells, vtkUnsignedCharArray * cellTypes, vtkIntArray * cellLocations)
// void SetCellTypes(vtkIdType ncells, vtkUnsignedCharArray *cellTypes, vtkIntArray *cellLocations)
TESTDLLSORT_API bool vtkCellTypes_SetCellTypes_1(vtkCellTypes * callingObject, vtkIdType ncells, vtkUnsignedCharArray * cellTypes, vtkIntArray * cellLocations) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellTypes::SetCellTypes]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypes(ncells, cellTypes, cellLocations);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType GetCellLocation(vtkIdType cellId)
// vtkIdType GetCellLocation(vtkIdType cellId)
TESTDLLSORT_API bool vtkCellTypes_GetCellLocation_0(vtkIdType * return_value, vtkCellTypes * callingObject, vtkIdType cellId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellTypes::GetCellLocation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCellLocation(cellId);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void DeleteCell(vtkIdType cellId)
// void DeleteCell(vtkIdType cellId)
TESTDLLSORT_API bool vtkCellTypes_DeleteCell_0(vtkCellTypes * callingObject, vtkIdType cellId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellTypes::DeleteCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DeleteCell(cellId);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType GetNumberOfTypes()
// vtkIdType GetNumberOfTypes()
TESTDLLSORT_API bool vtkCellTypes_GetNumberOfTypes_0(vtkIdType * return_value, vtkCellTypes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellTypes::GetNumberOfTypes]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfTypes();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int IsType(unsigned char type)
// int IsType(unsigned char type)
TESTDLLSORT_API bool vtkCellTypes_IsType_0(int * return_value, vtkCellTypes * callingObject, unsigned char type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellTypes::IsType]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->IsType(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType InsertNextType(unsigned char type)
// vtkIdType InsertNextType(unsigned char type)
TESTDLLSORT_API bool vtkCellTypes_InsertNextType_0(vtkIdType * return_value, vtkCellTypes * callingObject, unsigned char type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellTypes::InsertNextType]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InsertNextType(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char GetCellType(vtkIdType cellId)
// unsigned char GetCellType(vtkIdType cellId)
TESTDLLSORT_API bool vtkCellTypes_GetCellType_0(unsigned char * return_value, vtkCellTypes * callingObject, vtkIdType cellId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellTypes::GetCellType]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCellType(cellId);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Squeeze()
// void Squeeze()
TESTDLLSORT_API bool vtkCellTypes_Squeeze_0(vtkCellTypes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellTypes::Squeeze]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Squeeze();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Reset()
// void Reset()
TESTDLLSORT_API bool vtkCellTypes_Reset_0(vtkCellTypes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellTypes::Reset]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Reset();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// long GetActualMemorySize()
// unsigned long GetActualMemorySize()
TESTDLLSORT_API bool vtkCellTypes_GetActualMemorySize_0(unsigned long * return_value, vtkCellTypes * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellTypes::GetActualMemorySize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetActualMemorySize();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void DeepCopy(vtkCellTypes * src)
// void DeepCopy(vtkCellTypes *src)
TESTDLLSORT_API bool vtkCellTypes_DeepCopy_0(vtkCellTypes * callingObject, vtkCellTypes * src) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellTypes::DeepCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DeepCopy(src);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static char* GetClassNameFromTypeId(int typeId)
// static const char* GetClassNameFromTypeId(int typeId)
TESTDLLSORT_API bool vtkCellTypes_GetClassNameFromTypeId_0(const char ** return_value, int typeId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellTypes::GetClassNameFromTypeId]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkCellTypes::GetClassNameFromTypeId(typeId);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static int GetTypeIdFromClassName(const char * classname)
// static int GetTypeIdFromClassName(const char* classname)
TESTDLLSORT_API bool vtkCellTypes_GetTypeIdFromClassName_0(int * return_value, const char * classname) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellTypes::GetTypeIdFromClassName]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkCellTypes::GetTypeIdFromClassName(classname);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static int IsLinear(unsigned char type)
// static int IsLinear(unsigned char type)
TESTDLLSORT_API bool vtkCellTypes_IsLinear_0(int * return_value, unsigned char type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellTypes::IsLinear]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkCellTypes::IsLinear(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
