
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkCellArray.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkCellArray_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkCellArray::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkCellArray_IsA_0(vtkTypeBool * return_value, vtkCellArray * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::IsA]:[";
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

// static vtkCellArray* SafeDownCast(vtkObjectBase * o)
// static vtkCellArray* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkCellArray_SafeDownCast_0(vtkCellArray ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkCellArray::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkCellArray* NewInstance()
// vtkCellArray *NewInstance()
TESTDLLSORT_API bool vtkCellArray_NewInstance_0(vtkCellArray ** return_value, vtkCellArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::NewInstance]:[";
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

// static vtkCellArray* New()
// static vtkCellArray *New()
TESTDLLSORT_API bool vtkCellArray_New_0(vtkCellArray ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkCellArray::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Allocate(vtkIdType sz, vtkIdType ext = 1000)
// int Allocate(vtkIdType sz, vtkIdType ext=1000)
TESTDLLSORT_API bool vtkCellArray_Allocate_0(int * return_value, vtkCellArray * callingObject, vtkIdType sz, vtkIdType ext = 1000) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::Allocate]:[";
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

// void Initialize()
// void Initialize()
TESTDLLSORT_API bool vtkCellArray_Initialize_0(vtkCellArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::Initialize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Initialize();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkIdType GetNumberOfCells()
// virtual vtkIdType GetNumberOfCells ()
TESTDLLSORT_API bool vtkCellArray_GetNumberOfCells_0(vtkIdType * return_value, vtkCellArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::GetNumberOfCells]:[";
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

// virtual void SetNumberOfCells(vtkIdType _arg)
// virtual void SetNumberOfCells (vtkIdType _arg)
TESTDLLSORT_API bool vtkCellArray_SetNumberOfCells_0(vtkCellArray * callingObject, vtkIdType _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::SetNumberOfCells]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetNumberOfCells(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType EstimateSize(vtkIdType numCells, int maxPtsPerCell)
// vtkIdType EstimateSize(vtkIdType numCells, int maxPtsPerCell)
TESTDLLSORT_API bool vtkCellArray_EstimateSize_0(vtkIdType * return_value, vtkCellArray * callingObject, vtkIdType numCells, int maxPtsPerCell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::EstimateSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->EstimateSize(numCells, maxPtsPerCell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InitTraversal()
// void InitTraversal()
TESTDLLSORT_API bool vtkCellArray_InitTraversal_0(vtkCellArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::InitTraversal]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InitTraversal();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetNextCell(vtkIdType & npts, vtkIdType *& pts)
// int GetNextCell(vtkIdType& npts, vtkIdType* &pts)
TESTDLLSORT_API bool vtkCellArray_GetNextCell_0(int * return_value, vtkCellArray * callingObject, vtkIdType * npts, vtkIdType ** pts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::GetNextCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNextCell(*npts, *pts);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetNextCell(vtkIdList * pts)
// int GetNextCell(vtkIdList *pts)
TESTDLLSORT_API bool vtkCellArray_GetNextCell_1(int * return_value, vtkCellArray * callingObject, vtkIdList * pts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::GetNextCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNextCell(pts);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType GetSize()
// vtkIdType GetSize()
TESTDLLSORT_API bool vtkCellArray_GetSize_0(vtkIdType * return_value, vtkCellArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::GetSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetSize();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType GetNumberOfConnectivityEntries()
// vtkIdType GetNumberOfConnectivityEntries()
TESTDLLSORT_API bool vtkCellArray_GetNumberOfConnectivityEntries_0(vtkIdType * return_value, vtkCellArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::GetNumberOfConnectivityEntries]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfConnectivityEntries();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetCell(vtkIdType loc, vtkIdType & npts, vtkIdType *& pts)
// void GetCell(vtkIdType loc, vtkIdType &npts, vtkIdType* &pts)
TESTDLLSORT_API bool vtkCellArray_GetCell_0(vtkCellArray * callingObject, vtkIdType loc, vtkIdType * npts, vtkIdType ** pts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::GetCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetCell(loc, *npts, *pts);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetCell(vtkIdType loc, vtkIdList * pts)
// void GetCell(vtkIdType loc, vtkIdList* pts)
TESTDLLSORT_API bool vtkCellArray_GetCell_1(vtkCellArray * callingObject, vtkIdType loc, vtkIdList * pts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::GetCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetCell(loc, pts);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType InsertNextCell(vtkCell * cell)
// vtkIdType InsertNextCell(vtkCell *cell)
TESTDLLSORT_API bool vtkCellArray_InsertNextCell_0(vtkIdType * return_value, vtkCellArray * callingObject, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::InsertNextCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InsertNextCell(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType InsertNextCell(vtkIdType npts, const vtkIdType * pts)
// vtkIdType InsertNextCell(vtkIdType npts, const vtkIdType* pts)
TESTDLLSORT_API bool vtkCellArray_InsertNextCell_1(vtkIdType * return_value, vtkCellArray * callingObject, vtkIdType npts, const vtkIdType * pts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::InsertNextCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InsertNextCell(npts, pts);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType InsertNextCell(vtkIdList * pts)
// vtkIdType InsertNextCell(vtkIdList *pts)
TESTDLLSORT_API bool vtkCellArray_InsertNextCell_2(vtkIdType * return_value, vtkCellArray * callingObject, vtkIdList * pts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::InsertNextCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InsertNextCell(pts);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType InsertNextCell(int npts)
// vtkIdType InsertNextCell(int npts)
TESTDLLSORT_API bool vtkCellArray_InsertNextCell_3(vtkIdType * return_value, vtkCellArray * callingObject, int npts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::InsertNextCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InsertNextCell(npts);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InsertCellPoint(vtkIdType id)
// void InsertCellPoint(vtkIdType id)
TESTDLLSORT_API bool vtkCellArray_InsertCellPoint_0(vtkCellArray * callingObject, vtkIdType id) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::InsertCellPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InsertCellPoint(id);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void UpdateCellCount(int npts)
// void UpdateCellCount(int npts)
TESTDLLSORT_API bool vtkCellArray_UpdateCellCount_0(vtkCellArray * callingObject, int npts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::UpdateCellCount]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UpdateCellCount(npts);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType GetInsertLocation(int npts)
// vtkIdType GetInsertLocation(int npts)
TESTDLLSORT_API bool vtkCellArray_GetInsertLocation_0(vtkIdType * return_value, vtkCellArray * callingObject, int npts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::GetInsertLocation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInsertLocation(npts);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType GetTraversalLocation()
// vtkIdType GetTraversalLocation()
TESTDLLSORT_API bool vtkCellArray_GetTraversalLocation_0(vtkIdType * return_value, vtkCellArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::GetTraversalLocation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTraversalLocation();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTraversalLocation(vtkIdType loc)
// void SetTraversalLocation(vtkIdType loc)
TESTDLLSORT_API bool vtkCellArray_SetTraversalLocation_0(vtkCellArray * callingObject, vtkIdType loc) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::SetTraversalLocation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTraversalLocation(loc);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType GetTraversalLocation(vtkIdType npts)
// vtkIdType GetTraversalLocation(vtkIdType npts)
TESTDLLSORT_API bool vtkCellArray_GetTraversalLocation_1(vtkIdType * return_value, vtkCellArray * callingObject, vtkIdType npts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::GetTraversalLocation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTraversalLocation(npts);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ReverseCell(vtkIdType loc)
// void ReverseCell(vtkIdType loc)
TESTDLLSORT_API bool vtkCellArray_ReverseCell_0(vtkCellArray * callingObject, vtkIdType loc) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::ReverseCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ReverseCell(loc);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ReplaceCell(vtkIdType loc, int npts, const vtkIdType * pts)
// void ReplaceCell(vtkIdType loc, int npts, const vtkIdType *pts)
TESTDLLSORT_API bool vtkCellArray_ReplaceCell_0(vtkCellArray * callingObject, vtkIdType loc, int npts, const vtkIdType * pts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::ReplaceCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ReplaceCell(loc, npts, pts);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetMaxCellSize()
// int GetMaxCellSize()
TESTDLLSORT_API bool vtkCellArray_GetMaxCellSize_0(int * return_value, vtkCellArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::GetMaxCellSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetMaxCellSize();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType* GetPointer()
// vtkIdType *GetPointer()
TESTDLLSORT_API bool vtkCellArray_GetPointer_0(vtkIdType ** return_value, vtkCellArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::GetPointer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPointer();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType* WritePointer(const vtkIdType ncells, const vtkIdType size)
// vtkIdType *WritePointer(const vtkIdType ncells, const vtkIdType size)
TESTDLLSORT_API bool vtkCellArray_WritePointer_0(vtkIdType ** return_value, vtkCellArray * callingObject, const vtkIdType ncells, const vtkIdType size) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::WritePointer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->WritePointer(ncells, size);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCells(vtkIdType ncells, vtkIdTypeArray * cells)
// void SetCells(vtkIdType ncells, vtkIdTypeArray *cells)
TESTDLLSORT_API bool vtkCellArray_SetCells_0(vtkCellArray * callingObject, vtkIdType ncells, vtkIdTypeArray * cells) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::SetCells]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCells(ncells, cells);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void DeepCopy(vtkCellArray * ca)
// void DeepCopy(vtkCellArray *ca)
TESTDLLSORT_API bool vtkCellArray_DeepCopy_0(vtkCellArray * callingObject, vtkCellArray * ca) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::DeepCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DeepCopy(ca);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdTypeArray* GetData()
// vtkIdTypeArray* GetData()
TESTDLLSORT_API bool vtkCellArray_GetData_0(vtkIdTypeArray ** return_value, vtkCellArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::GetData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetData();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Reset()
// void Reset()
TESTDLLSORT_API bool vtkCellArray_Reset_0(vtkCellArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::Reset]:[";
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

// void Squeeze()
// void Squeeze()
TESTDLLSORT_API bool vtkCellArray_Squeeze_0(vtkCellArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::Squeeze]:[";
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

// long GetActualMemorySize()
// unsigned long GetActualMemorySize()
TESTDLLSORT_API bool vtkCellArray_GetActualMemorySize_0(unsigned long * return_value, vtkCellArray * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkCellArray::GetActualMemorySize]:[";
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

}
