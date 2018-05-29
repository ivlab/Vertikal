
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkUnstructuredGrid.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkUnstructuredGrid* New()
// static vtkUnstructuredGrid *New()
TESTDLLSORT_API bool vtkUnstructuredGrid_New_0(vtkUnstructuredGrid ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkUnstructuredGrid::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkUnstructuredGrid_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkUnstructuredGrid::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkUnstructuredGrid_IsA_0(vtkTypeBool * return_value, vtkUnstructuredGrid * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::IsA]:[";
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

// static vtkUnstructuredGrid* SafeDownCast(vtkObjectBase * o)
// static vtkUnstructuredGrid* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkUnstructuredGrid_SafeDownCast_0(vtkUnstructuredGrid ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkUnstructuredGrid::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkUnstructuredGrid* NewInstance()
// vtkUnstructuredGrid *NewInstance()
TESTDLLSORT_API bool vtkUnstructuredGrid_NewInstance_0(vtkUnstructuredGrid ** return_value, vtkUnstructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::NewInstance]:[";
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
TESTDLLSORT_API bool vtkUnstructuredGrid_GetDataObjectType_0(int * return_value, vtkUnstructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetDataObjectType]:[";
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

// void Allocate(vtkIdType numCells = 1000, int extSize = 1000)
// void Allocate(vtkIdType numCells=1000, int extSize=1000)
TESTDLLSORT_API bool vtkUnstructuredGrid_Allocate_0(vtkUnstructuredGrid * callingObject, vtkIdType numCells = 1000, int extSize = 1000) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::Allocate]:[";
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

// vtkIdType InsertNextCell(int type, vtkIdType npts, vtkIdType * ptIds)
// vtkIdType InsertNextCell(int type, vtkIdType npts, vtkIdType *ptIds)
TESTDLLSORT_API bool vtkUnstructuredGrid_InsertNextCell_0(vtkIdType * return_value, vtkUnstructuredGrid * callingObject, int type, vtkIdType npts, vtkIdType * ptIds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::InsertNextCell]:[";
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

// vtkIdType InsertNextCell(int type, vtkIdList * ptIds)
// vtkIdType InsertNextCell(int type, vtkIdList *ptIds)
TESTDLLSORT_API bool vtkUnstructuredGrid_InsertNextCell_1(vtkIdType * return_value, vtkUnstructuredGrid * callingObject, int type, vtkIdList * ptIds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::InsertNextCell]:[";
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

// vtkIdType InsertNextCell(int type, vtkIdType npts, vtkIdType * ptIds, vtkIdType nfaces, vtkIdType * faces)
// vtkIdType InsertNextCell(int type, vtkIdType npts, vtkIdType *ptIds, vtkIdType nfaces, vtkIdType *faces)
TESTDLLSORT_API bool vtkUnstructuredGrid_InsertNextCell_2(vtkIdType * return_value, vtkUnstructuredGrid * callingObject, int type, vtkIdType npts, vtkIdType * ptIds, vtkIdType nfaces, vtkIdType * faces) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::InsertNextCell]:[";
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

// void Reset()
// void Reset()
TESTDLLSORT_API bool vtkUnstructuredGrid_Reset_0(vtkUnstructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::Reset]:[";
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

// void CopyStructure(vtkDataSet * ds)
// void CopyStructure(vtkDataSet *ds)
TESTDLLSORT_API bool vtkUnstructuredGrid_CopyStructure_0(vtkUnstructuredGrid * callingObject, vtkDataSet * ds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::CopyStructure]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyStructure(ds);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType GetNumberOfCells()
// vtkIdType GetNumberOfCells()
TESTDLLSORT_API bool vtkUnstructuredGrid_GetNumberOfCells_0(vtkIdType * return_value, vtkUnstructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetNumberOfCells]:[";
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

// vtkCell* GetCell(vtkIdType cellId)
// vtkCell *GetCell(vtkIdType cellId)
TESTDLLSORT_API bool vtkUnstructuredGrid_GetCell_0(vtkCell ** return_value, vtkUnstructuredGrid * callingObject, vtkIdType cellId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCell(cellId);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetCell(vtkIdType cellId, vtkGenericCell * cell)
// void GetCell(vtkIdType cellId, vtkGenericCell *cell)
TESTDLLSORT_API bool vtkUnstructuredGrid_GetCell_1(vtkUnstructuredGrid * callingObject, vtkIdType cellId, vtkGenericCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetCell(cellId, cell);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetCellBounds(vtkIdType cellId, double bounds[6])
// void GetCellBounds(vtkIdType cellId, double bounds[6])
TESTDLLSORT_API bool vtkUnstructuredGrid_GetCellBounds_0(vtkUnstructuredGrid * callingObject, vtkIdType cellId, double bounds[6]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetCellBounds]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetCellBounds(cellId, bounds);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetCellPoints(vtkIdType cellId, vtkIdList * ptIds)
// void GetCellPoints(vtkIdType cellId, vtkIdList *ptIds)
TESTDLLSORT_API bool vtkUnstructuredGrid_GetCellPoints_0(vtkUnstructuredGrid * callingObject, vtkIdType cellId, vtkIdList * ptIds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetCellPoints]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetCellPoints(cellId, ptIds);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetPointCells(vtkIdType ptId, vtkIdList * cellIds)
// void GetPointCells(vtkIdType ptId, vtkIdList *cellIds)
TESTDLLSORT_API bool vtkUnstructuredGrid_GetPointCells_0(vtkUnstructuredGrid * callingObject, vtkIdType ptId, vtkIdList * cellIds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetPointCells]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetPointCells(ptId, cellIds);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkCellIterator* NewCellIterator()
// vtkCellIterator* NewCellIterator()
TESTDLLSORT_API bool vtkUnstructuredGrid_NewCellIterator_0(vtkCellIterator ** return_value, vtkUnstructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::NewCellIterator]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->NewCellIterator();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetCellType(vtkIdType cellId)
// int GetCellType(vtkIdType cellId)
TESTDLLSORT_API bool vtkUnstructuredGrid_GetCellType_0(int * return_value, vtkUnstructuredGrid * callingObject, vtkIdType cellId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetCellType]:[";
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

// vtkUnsignedCharArray* GetCellTypesArray()
// vtkUnsignedCharArray* GetCellTypesArray()
TESTDLLSORT_API bool vtkUnstructuredGrid_GetCellTypesArray_0(vtkUnsignedCharArray ** return_value, vtkUnstructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetCellTypesArray]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCellTypesArray();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdTypeArray* GetCellLocationsArray()
// vtkIdTypeArray* GetCellLocationsArray()
TESTDLLSORT_API bool vtkUnstructuredGrid_GetCellLocationsArray_0(vtkIdTypeArray ** return_value, vtkUnstructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetCellLocationsArray]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCellLocationsArray();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Squeeze()
// void Squeeze()
TESTDLLSORT_API bool vtkUnstructuredGrid_Squeeze_0(vtkUnstructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::Squeeze]:[";
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

// void Initialize()
// void Initialize()
TESTDLLSORT_API bool vtkUnstructuredGrid_Initialize_0(vtkUnstructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::Initialize]:[";
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

// int GetMaxCellSize()
// int GetMaxCellSize()
TESTDLLSORT_API bool vtkUnstructuredGrid_GetMaxCellSize_0(int * return_value, vtkUnstructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetMaxCellSize]:[";
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

// void BuildLinks()
// void BuildLinks()
TESTDLLSORT_API bool vtkUnstructuredGrid_BuildLinks_0(vtkUnstructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::BuildLinks]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->BuildLinks();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkCellLinks* GetCellLinks()
// vtkCellLinks *GetCellLinks()
TESTDLLSORT_API bool vtkUnstructuredGrid_GetCellLinks_0(vtkCellLinks ** return_value, vtkUnstructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetCellLinks]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCellLinks();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetCellPoints(vtkIdType cellId, vtkIdType & npts, vtkIdType *& pts)
// virtual void GetCellPoints(vtkIdType cellId, vtkIdType& npts, vtkIdType* &pts)
TESTDLLSORT_API bool vtkUnstructuredGrid_GetCellPoints_1(vtkUnstructuredGrid * callingObject, vtkIdType cellId, vtkIdType * npts, vtkIdType ** pts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetCellPoints]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetCellPoints(cellId, *npts, *pts);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetFaceStream(vtkIdType cellId, vtkIdList * ptIds)
// void GetFaceStream(vtkIdType cellId, vtkIdList *ptIds)
TESTDLLSORT_API bool vtkUnstructuredGrid_GetFaceStream_0(vtkUnstructuredGrid * callingObject, vtkIdType cellId, vtkIdList * ptIds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetFaceStream]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetFaceStream(cellId, ptIds);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetFaceStream(vtkIdType cellId, vtkIdType & nfaces, vtkIdType *& ptIds)
// void GetFaceStream(vtkIdType cellId, vtkIdType& nfaces, vtkIdType* &ptIds)
TESTDLLSORT_API bool vtkUnstructuredGrid_GetFaceStream_1(vtkUnstructuredGrid * callingObject, vtkIdType cellId, vtkIdType * nfaces, vtkIdType ** ptIds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetFaceStream]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetFaceStream(cellId, *nfaces, *ptIds);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCells(int type, vtkCellArray * cells)
// void SetCells(int type, vtkCellArray *cells)
TESTDLLSORT_API bool vtkUnstructuredGrid_SetCells_0(vtkUnstructuredGrid * callingObject, int type, vtkCellArray * cells) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::SetCells]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCells(type, cells);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCells(int * types, vtkCellArray * cells)
// void SetCells(int *types, vtkCellArray *cells)
TESTDLLSORT_API bool vtkUnstructuredGrid_SetCells_1(vtkUnstructuredGrid * callingObject, int * types, vtkCellArray * cells) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::SetCells]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCells(types, cells);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCells(vtkUnsignedCharArray * cellTypes, vtkIdTypeArray * cellLocations, vtkCellArray * cells)
// void SetCells(vtkUnsignedCharArray *cellTypes, vtkIdTypeArray *cellLocations, vtkCellArray *cells)
TESTDLLSORT_API bool vtkUnstructuredGrid_SetCells_2(vtkUnstructuredGrid * callingObject, vtkUnsignedCharArray * cellTypes, vtkIdTypeArray * cellLocations, vtkCellArray * cells) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::SetCells]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCells(cellTypes, cellLocations, cells);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCells(vtkUnsignedCharArray * cellTypes, vtkIdTypeArray * cellLocations, vtkCellArray * cells, vtkIdTypeArray * faceLocations, vtkIdTypeArray * faces)
// void SetCells(vtkUnsignedCharArray *cellTypes, vtkIdTypeArray *cellLocations, vtkCellArray *cells, vtkIdTypeArray *faceLocations, vtkIdTypeArray *faces)
TESTDLLSORT_API bool vtkUnstructuredGrid_SetCells_3(vtkUnstructuredGrid * callingObject, vtkUnsignedCharArray * cellTypes, vtkIdTypeArray * cellLocations, vtkCellArray * cells, vtkIdTypeArray * faceLocations, vtkIdTypeArray * faces) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::SetCells]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCells(cellTypes, cellLocations, cells, faceLocations, faces);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkCellArray* GetCells()
// vtkCellArray *GetCells()
TESTDLLSORT_API bool vtkUnstructuredGrid_GetCells_0(vtkCellArray ** return_value, vtkUnstructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetCells]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCells();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ReplaceCell(vtkIdType cellId, int npts, vtkIdType * pts)
// void ReplaceCell(vtkIdType cellId, int npts, vtkIdType *pts)
TESTDLLSORT_API bool vtkUnstructuredGrid_ReplaceCell_0(vtkUnstructuredGrid * callingObject, vtkIdType cellId, int npts, vtkIdType * pts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::ReplaceCell]:[";
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

// vtkIdType InsertNextLinkedCell(int type, int npts, vtkIdType * pts)
// vtkIdType InsertNextLinkedCell(int type, int npts, vtkIdType *pts)
TESTDLLSORT_API bool vtkUnstructuredGrid_InsertNextLinkedCell_0(vtkIdType * return_value, vtkUnstructuredGrid * callingObject, int type, int npts, vtkIdType * pts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::InsertNextLinkedCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InsertNextLinkedCell(type, npts, pts);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void RemoveReferenceToCell(vtkIdType ptId, vtkIdType cellId)
// void RemoveReferenceToCell(vtkIdType ptId, vtkIdType cellId)
TESTDLLSORT_API bool vtkUnstructuredGrid_RemoveReferenceToCell_0(vtkUnstructuredGrid * callingObject, vtkIdType ptId, vtkIdType cellId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::RemoveReferenceToCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveReferenceToCell(ptId, cellId);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AddReferenceToCell(vtkIdType ptId, vtkIdType cellId)
// void AddReferenceToCell(vtkIdType ptId, vtkIdType cellId)
TESTDLLSORT_API bool vtkUnstructuredGrid_AddReferenceToCell_0(vtkUnstructuredGrid * callingObject, vtkIdType ptId, vtkIdType cellId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::AddReferenceToCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AddReferenceToCell(ptId, cellId);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ResizeCellList(vtkIdType ptId, int size)
// void ResizeCellList(vtkIdType ptId, int size)
TESTDLLSORT_API bool vtkUnstructuredGrid_ResizeCellList_0(vtkUnstructuredGrid * callingObject, vtkIdType ptId, int size) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::ResizeCellList]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ResizeCellList(ptId, size);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetCellNeighbors(vtkIdType cellId, vtkIdList * ptIds, vtkIdList * cellIds)
// void GetCellNeighbors(vtkIdType cellId, vtkIdList *ptIds, vtkIdList *cellIds)
TESTDLLSORT_API bool vtkUnstructuredGrid_GetCellNeighbors_0(vtkUnstructuredGrid * callingObject, vtkIdType cellId, vtkIdList * ptIds, vtkIdList * cellIds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetCellNeighbors]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetCellNeighbors(cellId, ptIds, cellIds);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetPiece()
// virtual int GetPiece()
TESTDLLSORT_API bool vtkUnstructuredGrid_GetPiece_0(int * return_value, vtkUnstructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetPiece]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPiece();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetNumberOfPieces()
// virtual int GetNumberOfPieces()
TESTDLLSORT_API bool vtkUnstructuredGrid_GetNumberOfPieces_0(int * return_value, vtkUnstructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetNumberOfPieces]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfPieces();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetGhostLevel()
// virtual int GetGhostLevel()
TESTDLLSORT_API bool vtkUnstructuredGrid_GetGhostLevel_0(int * return_value, vtkUnstructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetGhostLevel]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetGhostLevel();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// long GetActualMemorySize()
// unsigned long GetActualMemorySize()
TESTDLLSORT_API bool vtkUnstructuredGrid_GetActualMemorySize_0(unsigned long * return_value, vtkUnstructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetActualMemorySize]:[";
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

// void ShallowCopy(vtkDataObject * src)
// void ShallowCopy(vtkDataObject *src)
TESTDLLSORT_API bool vtkUnstructuredGrid_ShallowCopy_0(vtkUnstructuredGrid * callingObject, vtkDataObject * src) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::ShallowCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ShallowCopy(src);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void DeepCopy(vtkDataObject * src)
// void DeepCopy(vtkDataObject *src)
TESTDLLSORT_API bool vtkUnstructuredGrid_DeepCopy_0(vtkUnstructuredGrid * callingObject, vtkDataObject * src) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::DeepCopy]:[";
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

// void GetIdsOfCellsOfType(int type, vtkIdTypeArray * array)
// void GetIdsOfCellsOfType(int type, vtkIdTypeArray *array)
TESTDLLSORT_API bool vtkUnstructuredGrid_GetIdsOfCellsOfType_0(vtkUnstructuredGrid * callingObject, int type, vtkIdTypeArray * array) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetIdsOfCellsOfType]:[";
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

// int IsHomogeneous()
// int IsHomogeneous()
TESTDLLSORT_API bool vtkUnstructuredGrid_IsHomogeneous_0(int * return_value, vtkUnstructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::IsHomogeneous]:[";
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

// void RemoveGhostCells()
// void RemoveGhostCells()
TESTDLLSORT_API bool vtkUnstructuredGrid_RemoveGhostCells_0(vtkUnstructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::RemoveGhostCells]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveGhostCells();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkUnstructuredGrid* GetData(vtkInformation * info)
// static vtkUnstructuredGrid* GetData(vtkInformation* info)
TESTDLLSORT_API bool vtkUnstructuredGrid_GetData_0(vtkUnstructuredGrid ** return_value, vtkInformation * info) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkUnstructuredGrid::GetData(info);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkUnstructuredGrid* GetData(vtkInformationVector * v, int i = 0)
// static vtkUnstructuredGrid* GetData(vtkInformationVector* v, int i=0)
TESTDLLSORT_API bool vtkUnstructuredGrid_GetData_1(vtkUnstructuredGrid ** return_value, vtkInformationVector * v, int i = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkUnstructuredGrid::GetData(v, i);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType* GetFaces(vtkIdType cellId)
// vtkIdType *GetFaces(vtkIdType cellId)
TESTDLLSORT_API bool vtkUnstructuredGrid_GetFaces_0(vtkIdType ** return_value, vtkUnstructuredGrid * callingObject, vtkIdType cellId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetFaces]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetFaces(cellId);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdTypeArray* GetFaces()
// vtkIdTypeArray* GetFaces()
TESTDLLSORT_API bool vtkUnstructuredGrid_GetFaces_1(vtkIdTypeArray ** return_value, vtkUnstructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetFaces]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetFaces();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdTypeArray* GetFaceLocations()
// vtkIdTypeArray* GetFaceLocations()
TESTDLLSORT_API bool vtkUnstructuredGrid_GetFaceLocations_0(vtkIdTypeArray ** return_value, vtkUnstructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetFaceLocations]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetFaceLocations();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int InitializeFacesRepresentation(vtkIdType numPrevCells)
// int InitializeFacesRepresentation(vtkIdType numPrevCells)
TESTDLLSORT_API bool vtkUnstructuredGrid_InitializeFacesRepresentation_0(int * return_value, vtkUnstructuredGrid * callingObject, vtkIdType numPrevCells) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::InitializeFacesRepresentation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InitializeFacesRepresentation(numPrevCells);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkMTimeType GetMeshMTime()
// virtual vtkMTimeType GetMeshMTime()
TESTDLLSORT_API bool vtkUnstructuredGrid_GetMeshMTime_0(vtkMTimeType * return_value, vtkUnstructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::GetMeshMTime]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetMeshMTime();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void DecomposeAPolyhedronCell(vtkCellArray * polyhedronCellArray, vtkIdType & nCellpts, vtkIdType & nCellfaces, vtkCellArray * cellArray, vtkIdTypeArray * faces)
// static void DecomposeAPolyhedronCell(vtkCellArray *polyhedronCellArray, vtkIdType & nCellpts, vtkIdType & nCellfaces, vtkCellArray *cellArray, vtkIdTypeArray *faces)
TESTDLLSORT_API bool vtkUnstructuredGrid_DecomposeAPolyhedronCell_0(vtkCellArray * polyhedronCellArray, vtkIdType * nCellpts, vtkIdType * nCellfaces, vtkCellArray * cellArray, vtkIdTypeArray * faces) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::DecomposeAPolyhedronCell]:[";
#endif
	bool success = true;
	vtkUnstructuredGrid::DecomposeAPolyhedronCell(polyhedronCellArray, *nCellpts, *nCellfaces, cellArray, faces);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void DecomposeAPolyhedronCell(vtkIdType * polyhedronCellStream, vtkIdType & nCellpts, vtkIdType & nCellfaces, vtkCellArray * cellArray, vtkIdTypeArray * faces)
// static void DecomposeAPolyhedronCell(vtkIdType * polyhedronCellStream, vtkIdType & nCellpts, vtkIdType & nCellfaces, vtkCellArray *cellArray, vtkIdTypeArray *faces)
TESTDLLSORT_API bool vtkUnstructuredGrid_DecomposeAPolyhedronCell_1(vtkIdType * polyhedronCellStream, vtkIdType * nCellpts, vtkIdType * nCellfaces, vtkCellArray * cellArray, vtkIdTypeArray * faces) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::DecomposeAPolyhedronCell]:[";
#endif
	bool success = true;
	vtkUnstructuredGrid::DecomposeAPolyhedronCell(polyhedronCellStream, *nCellpts, *nCellfaces, cellArray, faces);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void DecomposeAPolyhedronCell(vtkIdType nCellFaces, vtkIdType * inFaceStream, vtkIdType & nCellpts, vtkCellArray * cellArray, vtkIdTypeArray * faces)
// static void DecomposeAPolyhedronCell(vtkIdType nCellFaces, vtkIdType * inFaceStream, vtkIdType & nCellpts, vtkCellArray * cellArray, vtkIdTypeArray * faces)
TESTDLLSORT_API bool vtkUnstructuredGrid_DecomposeAPolyhedronCell_2(vtkIdType nCellFaces, vtkIdType * inFaceStream, vtkIdType * nCellpts, vtkCellArray * cellArray, vtkIdTypeArray * faces) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::DecomposeAPolyhedronCell]:[";
#endif
	bool success = true;
	vtkUnstructuredGrid::DecomposeAPolyhedronCell(nCellFaces, inFaceStream, *nCellpts, cellArray, faces);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void ConvertFaceStreamPointIds(vtkIdList * faceStream, vtkIdType * idMap)
// static void ConvertFaceStreamPointIds(vtkIdList * faceStream, vtkIdType * idMap)
TESTDLLSORT_API bool vtkUnstructuredGrid_ConvertFaceStreamPointIds_0(vtkIdList * faceStream, vtkIdType * idMap) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::ConvertFaceStreamPointIds]:[";
#endif
	bool success = true;
	vtkUnstructuredGrid::ConvertFaceStreamPointIds(faceStream, idMap);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void ConvertFaceStreamPointIds(vtkIdType nfaces, vtkIdType * faceStream, vtkIdType * idMap)
// static void ConvertFaceStreamPointIds(vtkIdType nfaces, vtkIdType * faceStream, vtkIdType * idMap)
TESTDLLSORT_API bool vtkUnstructuredGrid_ConvertFaceStreamPointIds_1(vtkIdType nfaces, vtkIdType * faceStream, vtkIdType * idMap) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkUnstructuredGrid::ConvertFaceStreamPointIds]:[";
#endif
	bool success = true;
	vtkUnstructuredGrid::ConvertFaceStreamPointIds(nfaces, faceStream, idMap);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
