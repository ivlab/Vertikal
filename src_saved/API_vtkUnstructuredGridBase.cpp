
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkUnstructuredGridBase.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkUnstructuredGridBase_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridBase::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkUnstructuredGridBase::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkUnstructuredGridBase_IsA_0(vtkTypeBool * return_value, vtkUnstructuredGridBase * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridBase::IsA]:[";
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

// static vtkUnstructuredGridBase* SafeDownCast(vtkObjectBase * o)
// static vtkUnstructuredGridBase* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkUnstructuredGridBase_SafeDownCast_0(vtkUnstructuredGridBase ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridBase::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkUnstructuredGridBase::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkUnstructuredGridBase* NewInstance()
// vtkUnstructuredGridBase *NewInstance()
TESTDLLSORT_API bool vtkUnstructuredGridBase_NewInstance_0(vtkUnstructuredGridBase ** return_value, vtkUnstructuredGridBase * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridBase::NewInstance]:[";
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

// int GetDataObjectType()
// int GetDataObjectType()
TESTDLLSORT_API bool vtkUnstructuredGridBase_GetDataObjectType_0(int * return_value, vtkUnstructuredGridBase * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridBase::GetDataObjectType]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDataObjectType();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void Allocate(vtkIdType numCells = 1000, int extSize = 1000)
// virtual void Allocate(vtkIdType numCells=1000, int extSize=1000)
TESTDLLSORT_API bool vtkUnstructuredGridBase_Allocate_0(vtkUnstructuredGridBase * callingObject, vtkIdType numCells = 1000, int extSize = 1000) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridBase::Allocate]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Allocate(numCells, extSize);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void DeepCopy(vtkDataObject * src)
// void DeepCopy(vtkDataObject *src)
TESTDLLSORT_API bool vtkUnstructuredGridBase_DeepCopy_0(vtkUnstructuredGridBase * callingObject, vtkDataObject * src) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridBase::DeepCopy]:[";
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

// virtual vtkIdType InsertNextCell(int type, vtkIdType npts, vtkIdType * ptIds)
// virtual vtkIdType InsertNextCell(int type, vtkIdType npts, vtkIdType *ptIds)
TESTDLLSORT_API bool vtkUnstructuredGridBase_InsertNextCell_0(vtkIdType * return_value, vtkUnstructuredGridBase * callingObject, int type, vtkIdType npts, vtkIdType * ptIds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridBase::InsertNextCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InsertNextCell(type, npts, ptIds);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkIdType InsertNextCell(int type, vtkIdList * ptIds)
// virtual vtkIdType InsertNextCell(int type, vtkIdList *ptIds)
TESTDLLSORT_API bool vtkUnstructuredGridBase_InsertNextCell_1(vtkIdType * return_value, vtkUnstructuredGridBase * callingObject, int type, vtkIdList * ptIds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridBase::InsertNextCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InsertNextCell(type, ptIds);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkIdType InsertNextCell(int type, vtkIdType npts, vtkIdType * ptIds, vtkIdType nfaces, vtkIdType * faces)
// virtual vtkIdType InsertNextCell(int type, vtkIdType npts, vtkIdType *ptIds, vtkIdType nfaces, vtkIdType *faces)
TESTDLLSORT_API bool vtkUnstructuredGridBase_InsertNextCell_2(vtkIdType * return_value, vtkUnstructuredGridBase * callingObject, int type, vtkIdType npts, vtkIdType * ptIds, vtkIdType nfaces, vtkIdType * faces) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridBase::InsertNextCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InsertNextCell(type, npts, ptIds, nfaces, faces);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ReplaceCell(vtkIdType cellId, int npts, vtkIdType * pts)
// virtual void ReplaceCell(vtkIdType cellId, int npts, vtkIdType *pts)
TESTDLLSORT_API bool vtkUnstructuredGridBase_ReplaceCell_0(vtkUnstructuredGridBase * callingObject, vtkIdType cellId, int npts, vtkIdType * pts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridBase::ReplaceCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ReplaceCell(cellId, npts, pts);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetIdsOfCellsOfType(int type, vtkIdTypeArray * array)
// virtual void GetIdsOfCellsOfType(int type, vtkIdTypeArray *array)
TESTDLLSORT_API bool vtkUnstructuredGridBase_GetIdsOfCellsOfType_0(vtkUnstructuredGridBase * callingObject, int type, vtkIdTypeArray * array) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridBase::GetIdsOfCellsOfType]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetIdsOfCellsOfType(type, array);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int IsHomogeneous()
// virtual int IsHomogeneous()
TESTDLLSORT_API bool vtkUnstructuredGridBase_IsHomogeneous_0(int * return_value, vtkUnstructuredGridBase * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridBase::IsHomogeneous]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->IsHomogeneous();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkUnstructuredGridBase* GetData(vtkInformation * info)
// static vtkUnstructuredGridBase* GetData(vtkInformation* info)
TESTDLLSORT_API bool vtkUnstructuredGridBase_GetData_0(vtkUnstructuredGridBase ** return_value, vtkInformation * info) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridBase::GetData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkUnstructuredGridBase::GetData(info);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkUnstructuredGridBase* GetData(vtkInformationVector * v, int i = 0)
// static vtkUnstructuredGridBase* GetData(vtkInformationVector* v, int i=0)
TESTDLLSORT_API bool vtkUnstructuredGridBase_GetData_1(vtkUnstructuredGridBase ** return_value, vtkInformationVector * v, int i = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridBase::GetData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkUnstructuredGridBase::GetData(v, i);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetDataObjectType()
// int GetDataObjectType()
TESTDLLSORT_API bool vtkUnstructuredGridBase_GetDataObjectType_1(int * return_value, vtkUnstructuredGridBase * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridBase::GetDataObjectType]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDataObjectType();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void Allocate(vtkIdType numCells = 1000, int extSize = 1000)
// virtual void Allocate(vtkIdType numCells=1000, int extSize=1000)
TESTDLLSORT_API bool vtkUnstructuredGridBase_Allocate_1(vtkUnstructuredGridBase * callingObject, vtkIdType numCells = 1000, int extSize = 1000) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridBase::Allocate]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Allocate(numCells, extSize);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void DeepCopy(vtkDataObject * src)
// void DeepCopy(vtkDataObject *src)
TESTDLLSORT_API bool vtkUnstructuredGridBase_DeepCopy_1(vtkUnstructuredGridBase * callingObject, vtkDataObject * src) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridBase::DeepCopy]:[";
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

// virtual vtkIdType InsertNextCell(int type, vtkIdType npts, vtkIdType * ptIds)
// virtual vtkIdType InsertNextCell(int type, vtkIdType npts, vtkIdType *ptIds)
TESTDLLSORT_API bool vtkUnstructuredGridBase_InsertNextCell_3(vtkIdType * return_value, vtkUnstructuredGridBase * callingObject, int type, vtkIdType npts, vtkIdType * ptIds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridBase::InsertNextCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InsertNextCell(type, npts, ptIds);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkIdType InsertNextCell(int type, vtkIdList * ptIds)
// virtual vtkIdType InsertNextCell(int type, vtkIdList *ptIds)
TESTDLLSORT_API bool vtkUnstructuredGridBase_InsertNextCell_4(vtkIdType * return_value, vtkUnstructuredGridBase * callingObject, int type, vtkIdList * ptIds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridBase::InsertNextCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InsertNextCell(type, ptIds);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkIdType InsertNextCell(int type, vtkIdType npts, vtkIdType * ptIds, vtkIdType nfaces, vtkIdType * faces)
// virtual vtkIdType InsertNextCell(int type, vtkIdType npts, vtkIdType *ptIds, vtkIdType nfaces, vtkIdType *faces)
TESTDLLSORT_API bool vtkUnstructuredGridBase_InsertNextCell_5(vtkIdType * return_value, vtkUnstructuredGridBase * callingObject, int type, vtkIdType npts, vtkIdType * ptIds, vtkIdType nfaces, vtkIdType * faces) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridBase::InsertNextCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InsertNextCell(type, npts, ptIds, nfaces, faces);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ReplaceCell(vtkIdType cellId, int npts, vtkIdType * pts)
// virtual void ReplaceCell(vtkIdType cellId, int npts, vtkIdType *pts)
TESTDLLSORT_API bool vtkUnstructuredGridBase_ReplaceCell_1(vtkUnstructuredGridBase * callingObject, vtkIdType cellId, int npts, vtkIdType * pts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridBase::ReplaceCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ReplaceCell(cellId, npts, pts);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetIdsOfCellsOfType(int type, vtkIdTypeArray * array)
// virtual void GetIdsOfCellsOfType(int type, vtkIdTypeArray *array)
TESTDLLSORT_API bool vtkUnstructuredGridBase_GetIdsOfCellsOfType_1(vtkUnstructuredGridBase * callingObject, int type, vtkIdTypeArray * array) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridBase::GetIdsOfCellsOfType]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetIdsOfCellsOfType(type, array);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int IsHomogeneous()
// virtual int IsHomogeneous()
TESTDLLSORT_API bool vtkUnstructuredGridBase_IsHomogeneous_1(int * return_value, vtkUnstructuredGridBase * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridBase::IsHomogeneous]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->IsHomogeneous();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkUnstructuredGridBase* GetData(vtkInformation * info)
// static vtkUnstructuredGridBase* GetData(vtkInformation* info)
TESTDLLSORT_API bool vtkUnstructuredGridBase_GetData_2(vtkUnstructuredGridBase ** return_value, vtkInformation * info) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridBase::GetData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkUnstructuredGridBase::GetData(info);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkUnstructuredGridBase* GetData(vtkInformationVector * v, int i = 0)
// static vtkUnstructuredGridBase* GetData(vtkInformationVector* v, int i=0)
TESTDLLSORT_API bool vtkUnstructuredGridBase_GetData_3(vtkUnstructuredGridBase ** return_value, vtkInformationVector * v, int i = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGridBase::GetData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkUnstructuredGridBase::GetData(v, i);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
