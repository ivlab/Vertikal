
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkStructuredGrid.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkStructuredGrid* New()
// static vtkStructuredGrid *New()
TESTDLLSORT_API bool vtkStructuredGrid_New_0(vtkStructuredGrid ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkStructuredGrid::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkStructuredGrid_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkStructuredGrid::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkStructuredGrid_IsA_0(vtkTypeBool * return_value, vtkStructuredGrid * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::IsA]:[";
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

// static vtkStructuredGrid* SafeDownCast(vtkObjectBase * o)
// static vtkStructuredGrid* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkStructuredGrid_SafeDownCast_0(vtkStructuredGrid ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkStructuredGrid::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkStructuredGrid* NewInstance()
// vtkStructuredGrid *NewInstance()
TESTDLLSORT_API bool vtkStructuredGrid_NewInstance_0(vtkStructuredGrid ** return_value, vtkStructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::NewInstance]:[";
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
TESTDLLSORT_API bool vtkStructuredGrid_GetDataObjectType_0(int * return_value, vtkStructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::GetDataObjectType]:[";
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

// void CopyStructure(vtkDataSet * ds)
// void CopyStructure(vtkDataSet *ds)
TESTDLLSORT_API bool vtkStructuredGrid_CopyStructure_0(vtkStructuredGrid * callingObject, vtkDataSet * ds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::CopyStructure]:[";
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

// vtkIdType GetNumberOfPoints()
// vtkIdType GetNumberOfPoints()
TESTDLLSORT_API bool vtkStructuredGrid_GetNumberOfPoints_0(vtkIdType * return_value, vtkStructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::GetNumberOfPoints]:[";
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

// double* GetPoint(vtkIdType ptId)
// double *GetPoint(vtkIdType ptId)
TESTDLLSORT_API bool vtkStructuredGrid_GetPoint_0(double ** return_value, vtkStructuredGrid * callingObject, vtkIdType ptId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::GetPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPoint(ptId);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetPoint(vtkIdType ptId, double p[3])
// void GetPoint(vtkIdType ptId, double p[3])
TESTDLLSORT_API bool vtkStructuredGrid_GetPoint_1(vtkStructuredGrid * callingObject, vtkIdType ptId, double p[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::GetPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetPoint(ptId, p);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkCell* GetCell(vtkIdType cellId)
// vtkCell *GetCell(vtkIdType cellId)
TESTDLLSORT_API bool vtkStructuredGrid_GetCell_0(vtkCell ** return_value, vtkStructuredGrid * callingObject, vtkIdType cellId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::GetCell]:[";
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

// vtkCell* GetCell(int i, int j, int k)
// vtkCell *GetCell(int i, int j, int k)
TESTDLLSORT_API bool vtkStructuredGrid_GetCell_1(vtkCell ** return_value, vtkStructuredGrid * callingObject, int i, int j, int k) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::GetCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCell(i, j, k);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetCell(vtkIdType cellId, vtkGenericCell * cell)
// void GetCell(vtkIdType cellId, vtkGenericCell *cell)
TESTDLLSORT_API bool vtkStructuredGrid_GetCell_2(vtkStructuredGrid * callingObject, vtkIdType cellId, vtkGenericCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::GetCell]:[";
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
TESTDLLSORT_API bool vtkStructuredGrid_GetCellBounds_0(vtkStructuredGrid * callingObject, vtkIdType cellId, double bounds[6]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::GetCellBounds]:[";
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

// int GetCellType(vtkIdType cellId)
// int GetCellType(vtkIdType cellId)
TESTDLLSORT_API bool vtkStructuredGrid_GetCellType_0(int * return_value, vtkStructuredGrid * callingObject, vtkIdType cellId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::GetCellType]:[";
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

// vtkIdType GetNumberOfCells()
// vtkIdType GetNumberOfCells()
TESTDLLSORT_API bool vtkStructuredGrid_GetNumberOfCells_0(vtkIdType * return_value, vtkStructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::GetNumberOfCells]:[";
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

// void GetCellPoints(vtkIdType cellId, vtkIdList * ptIds)
// void GetCellPoints(vtkIdType cellId, vtkIdList *ptIds)
TESTDLLSORT_API bool vtkStructuredGrid_GetCellPoints_0(vtkStructuredGrid * callingObject, vtkIdType cellId, vtkIdList * ptIds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::GetCellPoints]:[";
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
TESTDLLSORT_API bool vtkStructuredGrid_GetPointCells_0(vtkStructuredGrid * callingObject, vtkIdType ptId, vtkIdList * cellIds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::GetPointCells]:[";
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

// void Initialize()
// void Initialize()
TESTDLLSORT_API bool vtkStructuredGrid_Initialize_0(vtkStructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::Initialize]:[";
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
TESTDLLSORT_API bool vtkStructuredGrid_GetMaxCellSize_0(int * return_value, vtkStructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::GetMaxCellSize]:[";
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

// void GetCellNeighbors(vtkIdType cellId, vtkIdList * ptIds, vtkIdList * cellIds)
// void GetCellNeighbors(vtkIdType cellId, vtkIdList *ptIds, vtkIdList *cellIds)
TESTDLLSORT_API bool vtkStructuredGrid_GetCellNeighbors_0(vtkStructuredGrid * callingObject, vtkIdType cellId, vtkIdList * ptIds, vtkIdList * cellIds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::GetCellNeighbors]:[";
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

// void GetCellNeighbors(vtkIdType cellId, vtkIdList * ptIds, vtkIdList * cellIds, int * seedLoc)
// void GetCellNeighbors(vtkIdType cellId, vtkIdList *ptIds, vtkIdList *cellIds, int *seedLoc)
TESTDLLSORT_API bool vtkStructuredGrid_GetCellNeighbors_1(vtkStructuredGrid * callingObject, vtkIdType cellId, vtkIdList * ptIds, vtkIdList * cellIds, int * seedLoc) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::GetCellNeighbors]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetCellNeighbors(cellId, ptIds, cellIds, seedLoc);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetDimensions(int i, int j, int k)
// void SetDimensions(int i, int j, int k)
TESTDLLSORT_API bool vtkStructuredGrid_SetDimensions_0(vtkStructuredGrid * callingObject, int i, int j, int k) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::SetDimensions]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetDimensions(i, j, k);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetDimensions(int dim[3])
// void SetDimensions(int dim[3])
TESTDLLSORT_API bool vtkStructuredGrid_SetDimensions_1(vtkStructuredGrid * callingObject, int dim[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::SetDimensions]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetDimensions(dim);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int* GetDimensions()
// virtual int *GetDimensions ()
TESTDLLSORT_API bool vtkStructuredGrid_GetDimensions_0(int ** return_value, vtkStructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::GetDimensions]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDimensions();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetDimensions(int dim[3])
// virtual void GetDimensions (int dim[3])
TESTDLLSORT_API bool vtkStructuredGrid_GetDimensions_1(vtkStructuredGrid * callingObject, int dim[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::GetDimensions]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetDimensions(dim);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetDataDimension()
// int GetDataDimension()
TESTDLLSORT_API bool vtkStructuredGrid_GetDataDimension_0(int * return_value, vtkStructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::GetDataDimension]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDataDimension();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetExtent(int extent[6])
// void SetExtent(int extent[6])
TESTDLLSORT_API bool vtkStructuredGrid_SetExtent_0(vtkStructuredGrid * callingObject, int extent[6]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::SetExtent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetExtent(extent);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetExtent(int x1, int x2, int y1, int y2, int z1, int z2)
// void SetExtent(int x1, int x2, int y1, int y2, int z1, int z2)
TESTDLLSORT_API bool vtkStructuredGrid_SetExtent_1(vtkStructuredGrid * callingObject, int x1, int x2, int y1, int y2, int z1, int z2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::SetExtent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetExtent(x1, x2, y1, y2, z1, z2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int* GetExtent()
// virtual int *GetExtent ()
TESTDLLSORT_API bool vtkStructuredGrid_GetExtent_0(int ** return_value, vtkStructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::GetExtent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetExtent();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetExtent(int & _arg1, int & _arg2, int & _arg3, int & _arg4, int & _arg5, int & _arg6)
// virtual void GetExtent (int &_arg1, int &_arg2, int &_arg3, int &_arg4, int &_arg5, int &_arg6)
TESTDLLSORT_API bool vtkStructuredGrid_GetExtent_1(vtkStructuredGrid * callingObject, int * _arg1, int * _arg2, int * _arg3, int * _arg4, int * _arg5, int * _arg6) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::GetExtent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetExtent(*_arg1, *_arg2, *_arg3, *_arg4, *_arg5, *_arg6);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetExtent(int _arg[6])
// virtual void GetExtent (int _arg[6])
TESTDLLSORT_API bool vtkStructuredGrid_GetExtent_2(vtkStructuredGrid * callingObject, int _arg[6]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::GetExtent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetExtent(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// long GetActualMemorySize()
// unsigned long GetActualMemorySize()
TESTDLLSORT_API bool vtkStructuredGrid_GetActualMemorySize_0(unsigned long * return_value, vtkStructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::GetActualMemorySize]:[";
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
TESTDLLSORT_API bool vtkStructuredGrid_ShallowCopy_0(vtkStructuredGrid * callingObject, vtkDataObject * src) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::ShallowCopy]:[";
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
TESTDLLSORT_API bool vtkStructuredGrid_DeepCopy_0(vtkStructuredGrid * callingObject, vtkDataObject * src) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::DeepCopy]:[";
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

// int GetExtentType()
// int GetExtentType()
TESTDLLSORT_API bool vtkStructuredGrid_GetExtentType_0(int * return_value, vtkStructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::GetExtentType]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetExtentType();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void BlankPoint(vtkIdType ptId)
// void BlankPoint(vtkIdType ptId)
TESTDLLSORT_API bool vtkStructuredGrid_BlankPoint_0(vtkStructuredGrid * callingObject, vtkIdType ptId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::BlankPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->BlankPoint(ptId);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void UnBlankPoint(vtkIdType ptId)
// void UnBlankPoint(vtkIdType ptId)
TESTDLLSORT_API bool vtkStructuredGrid_UnBlankPoint_0(vtkStructuredGrid * callingObject, vtkIdType ptId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::UnBlankPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UnBlankPoint(ptId);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void BlankCell(vtkIdType ptId)
// void BlankCell(vtkIdType ptId)
TESTDLLSORT_API bool vtkStructuredGrid_BlankCell_0(vtkStructuredGrid * callingObject, vtkIdType ptId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::BlankCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->BlankCell(ptId);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void UnBlankCell(vtkIdType ptId)
// void UnBlankCell(vtkIdType ptId)
TESTDLLSORT_API bool vtkStructuredGrid_UnBlankCell_0(vtkStructuredGrid * callingObject, vtkIdType ptId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::UnBlankCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UnBlankCell(ptId);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char IsPointVisible(vtkIdType ptId)
// unsigned char IsPointVisible(vtkIdType ptId)
TESTDLLSORT_API bool vtkStructuredGrid_IsPointVisible_0(unsigned char * return_value, vtkStructuredGrid * callingObject, vtkIdType ptId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::IsPointVisible]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->IsPointVisible(ptId);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char IsCellVisible(vtkIdType cellId)
// unsigned char IsCellVisible(vtkIdType cellId)
TESTDLLSORT_API bool vtkStructuredGrid_IsCellVisible_0(unsigned char * return_value, vtkStructuredGrid * callingObject, vtkIdType cellId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::IsCellVisible]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->IsCellVisible(cellId);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// bool HasAnyBlankPoints()
// bool HasAnyBlankPoints()
TESTDLLSORT_API bool vtkStructuredGrid_HasAnyBlankPoints_0(bool * return_value, vtkStructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::HasAnyBlankPoints]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->HasAnyBlankPoints();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// bool HasAnyBlankCells()
// bool HasAnyBlankCells()
TESTDLLSORT_API bool vtkStructuredGrid_HasAnyBlankCells_0(bool * return_value, vtkStructuredGrid * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::HasAnyBlankCells]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->HasAnyBlankCells();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetCellDims(int cellDims[3])
// void GetCellDims( int cellDims[3] )
TESTDLLSORT_API bool vtkStructuredGrid_GetCellDims_0(vtkStructuredGrid * callingObject, int cellDims[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::GetCellDims]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetCellDims(cellDims);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Crop(const int * updateExtent)
// void Crop(const int* updateExtent)
TESTDLLSORT_API bool vtkStructuredGrid_Crop_0(vtkStructuredGrid * callingObject, const int * updateExtent) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::Crop]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Crop(updateExtent);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkStructuredGrid* GetData(vtkInformation * info)
// static vtkStructuredGrid* GetData(vtkInformation* info)
TESTDLLSORT_API bool vtkStructuredGrid_GetData_0(vtkStructuredGrid ** return_value, vtkInformation * info) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::GetData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkStructuredGrid::GetData(info);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkStructuredGrid* GetData(vtkInformationVector * v, int i = 0)
// static vtkStructuredGrid* GetData(vtkInformationVector* v, int i=0)
TESTDLLSORT_API bool vtkStructuredGrid_GetData_1(vtkStructuredGrid ** return_value, vtkInformationVector * v, int i = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::GetData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkStructuredGrid::GetData(v, i);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetPoint(int i, int j, int k, double p[3], bool adjustForExtent = true)
// void GetPoint(int i, int j, int k, double p[3], bool adjustForExtent = true)
TESTDLLSORT_API bool vtkStructuredGrid_GetPoint_2(vtkStructuredGrid * callingObject, int i, int j, int k, double p[3], bool adjustForExtent = true) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkStructuredGrid::GetPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetPoint(i, j, k, p, adjustForExtent);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
