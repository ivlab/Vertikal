
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkImageData.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkImageData* New()
// static vtkImageData *New()
TESTDLLSORT_API bool vtkImageData_New_0(vtkImageData ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkImageData::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkImageData_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkImageData::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkImageData_IsA_0(vtkTypeBool * return_value, vtkImageData * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::IsA]:[";
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

// static vtkImageData* SafeDownCast(vtkObjectBase * o)
// static vtkImageData* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkImageData_SafeDownCast_0(vtkImageData ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkImageData::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkImageData* NewInstance()
// vtkImageData *NewInstance()
TESTDLLSORT_API bool vtkImageData_NewInstance_0(vtkImageData ** return_value, vtkImageData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::NewInstance]:[";
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

// void CopyStructure(vtkDataSet * ds)
// void CopyStructure(vtkDataSet *ds)
TESTDLLSORT_API bool vtkImageData_CopyStructure_0(vtkImageData * callingObject, vtkDataSet * ds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::CopyStructure]:[";
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

// int GetDataObjectType()
// int GetDataObjectType()
TESTDLLSORT_API bool vtkImageData_GetDataObjectType_0(int * return_value, vtkImageData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetDataObjectType]:[";
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

// vtkIdType GetNumberOfCells()
// vtkIdType GetNumberOfCells()
TESTDLLSORT_API bool vtkImageData_GetNumberOfCells_0(vtkIdType * return_value, vtkImageData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetNumberOfCells]:[";
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

// vtkIdType GetNumberOfPoints()
// vtkIdType GetNumberOfPoints()
TESTDLLSORT_API bool vtkImageData_GetNumberOfPoints_0(vtkIdType * return_value, vtkImageData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetNumberOfPoints]:[";
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
TESTDLLSORT_API bool vtkImageData_GetPoint_0(double ** return_value, vtkImageData * callingObject, vtkIdType ptId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetPoint]:[";
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

// void GetPoint(vtkIdType id, double x[3])
// void GetPoint(vtkIdType id, double x[3])
TESTDLLSORT_API bool vtkImageData_GetPoint_1(vtkImageData * callingObject, vtkIdType id, double x[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetPoint(id, x);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkCell* GetCell(vtkIdType cellId)
// vtkCell *GetCell(vtkIdType cellId)
TESTDLLSORT_API bool vtkImageData_GetCell_0(vtkCell ** return_value, vtkImageData * callingObject, vtkIdType cellId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetCell]:[";
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
TESTDLLSORT_API bool vtkImageData_GetCell_1(vtkCell ** return_value, vtkImageData * callingObject, int i, int j, int k) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetCell]:[";
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
TESTDLLSORT_API bool vtkImageData_GetCell_2(vtkImageData * callingObject, vtkIdType cellId, vtkGenericCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetCell]:[";
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
TESTDLLSORT_API bool vtkImageData_GetCellBounds_0(vtkImageData * callingObject, vtkIdType cellId, double bounds[6]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetCellBounds]:[";
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

// virtual vtkIdType FindPoint(double x, double y, double z)
// virtual vtkIdType FindPoint(double x, double y, double z)
TESTDLLSORT_API bool vtkImageData_FindPoint_0(vtkIdType * return_value, vtkImageData * callingObject, double x, double y, double z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::FindPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->FindPoint(x, y, z);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType FindPoint(double x[3])
// vtkIdType FindPoint(double x[3])
TESTDLLSORT_API bool vtkImageData_FindPoint_1(vtkIdType * return_value, vtkImageData * callingObject, double x[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::FindPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->FindPoint(x);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType FindCell(double x[3], vtkCell * cell, vtkIdType cellId, double tol2, int & subId, double pcoords[3], double * weights)
// vtkIdType FindCell( double x[3], vtkCell *cell, vtkIdType cellId, double tol2, int& subId, double pcoords[3], double *weights)
TESTDLLSORT_API bool vtkImageData_FindCell_0(vtkIdType * return_value, vtkImageData * callingObject, double x[3], vtkCell * cell, vtkIdType cellId, double tol2, int * subId, double pcoords[3], double * weights) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::FindCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->FindCell(x, cell, cellId, tol2, *subId, pcoords, weights);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType FindCell(double x[3], vtkCell * cell, vtkGenericCell * gencell, vtkIdType cellId, double tol2, int & subId, double pcoords[3], double * weights)
// vtkIdType FindCell( double x[3], vtkCell *cell, vtkGenericCell *gencell, vtkIdType cellId, double tol2, int& subId, double pcoords[3], double *weights)
TESTDLLSORT_API bool vtkImageData_FindCell_1(vtkIdType * return_value, vtkImageData * callingObject, double x[3], vtkCell * cell, vtkGenericCell * gencell, vtkIdType cellId, double tol2, int * subId, double pcoords[3], double * weights) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::FindCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->FindCell(x, cell, gencell, cellId, tol2, *subId, pcoords, weights);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkCell* FindAndGetCell(double x[3], vtkCell * cell, vtkIdType cellId, double tol2, int & subId, double pcoords[3], double * weights)
// vtkCell *FindAndGetCell(double x[3], vtkCell *cell, vtkIdType cellId, double tol2, int& subId, double pcoords[3], double *weights)
TESTDLLSORT_API bool vtkImageData_FindAndGetCell_0(vtkCell ** return_value, vtkImageData * callingObject, double x[3], vtkCell * cell, vtkIdType cellId, double tol2, int * subId, double pcoords[3], double * weights) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::FindAndGetCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->FindAndGetCell(x, cell, cellId, tol2, *subId, pcoords, weights);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetCellType(vtkIdType cellId)
// int GetCellType(vtkIdType cellId)
TESTDLLSORT_API bool vtkImageData_GetCellType_0(int * return_value, vtkImageData * callingObject, vtkIdType cellId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetCellType]:[";
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

// void GetCellPoints(vtkIdType cellId, vtkIdList * ptIds)
// void GetCellPoints(vtkIdType cellId, vtkIdList *ptIds)
TESTDLLSORT_API bool vtkImageData_GetCellPoints_0(vtkImageData * callingObject, vtkIdType cellId, vtkIdList * ptIds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetCellPoints]:[";
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
TESTDLLSORT_API bool vtkImageData_GetPointCells_0(vtkImageData * callingObject, vtkIdType ptId, vtkIdList * cellIds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetPointCells]:[";
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

// void ComputeBounds()
// void ComputeBounds()
TESTDLLSORT_API bool vtkImageData_ComputeBounds_0(vtkImageData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::ComputeBounds]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ComputeBounds();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetMaxCellSize()
// int GetMaxCellSize()
TESTDLLSORT_API bool vtkImageData_GetMaxCellSize_0(int * return_value, vtkImageData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetMaxCellSize]:[";
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

// void Initialize()
// void Initialize()
TESTDLLSORT_API bool vtkImageData_Initialize_0(vtkImageData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::Initialize]:[";
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

// virtual void SetDimensions(int i, int j, int k)
// virtual void SetDimensions(int i, int j, int k)
TESTDLLSORT_API bool vtkImageData_SetDimensions_0(vtkImageData * callingObject, int i, int j, int k) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::SetDimensions]:[";
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

// virtual void SetDimensions(const int dims[3])
// virtual void SetDimensions(const int dims[3])
TESTDLLSORT_API bool vtkImageData_SetDimensions_1(vtkImageData * callingObject, const int dims[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::SetDimensions]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetDimensions(dims);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int* GetDimensions()
// virtual int *GetDimensions()
TESTDLLSORT_API bool vtkImageData_GetDimensions_0(int ** return_value, vtkImageData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetDimensions]:[";
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

// virtual void GetDimensions(int dims[3])
// virtual void GetDimensions(int dims[3])
TESTDLLSORT_API bool vtkImageData_GetDimensions_1(vtkImageData * callingObject, int dims[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetDimensions]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetDimensions(dims);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int ComputeStructuredCoordinates(const double x[3], int ijk[3], double pcoords[3])
// virtual int ComputeStructuredCoordinates( const double x[3], int ijk[3], double pcoords[3])
TESTDLLSORT_API bool vtkImageData_ComputeStructuredCoordinates_0(int * return_value, vtkImageData * callingObject, const double x[3], int ijk[3], double pcoords[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::ComputeStructuredCoordinates]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->ComputeStructuredCoordinates(x, ijk, pcoords);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static int ComputeStructuredCoordinates(const double x[3], int ijk[3], double pcoords[3], const int * extent, const double * spacing, const double * origin, const double * bounds)
// static int ComputeStructuredCoordinates( const double x[3], int ijk[3], double pcoords[3], const int* extent, const double* spacing, const double* origin, const double* bounds)
TESTDLLSORT_API bool vtkImageData_ComputeStructuredCoordinates_1(int * return_value, const double x[3], int ijk[3], double pcoords[3], const int * extent, const double * spacing, const double * origin, const double * bounds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::ComputeStructuredCoordinates]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkImageData::ComputeStructuredCoordinates(x, ijk, pcoords, extent, spacing, origin, bounds);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetVoxelGradient(int i, int j, int k, vtkDataArray * s, vtkDataArray * g)
// virtual void GetVoxelGradient( int i,int j,int k, vtkDataArray *s, vtkDataArray *g)
TESTDLLSORT_API bool vtkImageData_GetVoxelGradient_0(vtkImageData * callingObject, int i, int j, int k, vtkDataArray * s, vtkDataArray * g) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetVoxelGradient]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetVoxelGradient(i, j, k, s, g);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetPointGradient(int i, int j, int k, vtkDataArray * s, double g[3])
// virtual void GetPointGradient( int i, int j, int k, vtkDataArray *s, double g[3])
TESTDLLSORT_API bool vtkImageData_GetPointGradient_0(vtkImageData * callingObject, int i, int j, int k, vtkDataArray * s, double g[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetPointGradient]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetPointGradient(i, j, k, s, g);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetDataDimension()
// virtual int GetDataDimension()
TESTDLLSORT_API bool vtkImageData_GetDataDimension_0(int * return_value, vtkImageData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetDataDimension]:[";
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

// virtual vtkIdType ComputePointId(int ijk[3])
// virtual vtkIdType ComputePointId(int ijk[3])
TESTDLLSORT_API bool vtkImageData_ComputePointId_0(vtkIdType * return_value, vtkImageData * callingObject, int ijk[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::ComputePointId]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->ComputePointId(ijk);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkIdType ComputeCellId(int ijk[3])
// virtual vtkIdType ComputeCellId(int ijk[3])
TESTDLLSORT_API bool vtkImageData_ComputeCellId_0(vtkIdType * return_value, vtkImageData * callingObject, int ijk[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::ComputeCellId]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->ComputeCellId(ijk);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetAxisUpdateExtent(int axis, int min, int max, const int * updateExtent, int * axisUpdateExtent)
// virtual void SetAxisUpdateExtent(int axis, int min, int max, const int* updateExtent, int* axisUpdateExtent)
TESTDLLSORT_API bool vtkImageData_SetAxisUpdateExtent_0(vtkImageData * callingObject, int axis, int min, int max, const int * updateExtent, int * axisUpdateExtent) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::SetAxisUpdateExtent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAxisUpdateExtent(axis, min, max, updateExtent, axisUpdateExtent);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetAxisUpdateExtent(int axis, int & min, int & max, const int * updateExtent)
// virtual void GetAxisUpdateExtent(int axis, int &min, int &max, const int* updateExtent)
TESTDLLSORT_API bool vtkImageData_GetAxisUpdateExtent_0(vtkImageData * callingObject, int axis, int * min, int * max, const int * updateExtent) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetAxisUpdateExtent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetAxisUpdateExtent(axis, *min, *max, updateExtent);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetExtent(int extent[6])
// virtual void SetExtent(int extent[6])
TESTDLLSORT_API bool vtkImageData_SetExtent_0(vtkImageData * callingObject, int extent[6]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::SetExtent]:[";
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

// virtual void SetExtent(int x1, int x2, int y1, int y2, int z1, int z2)
// virtual void SetExtent(int x1, int x2, int y1, int y2, int z1, int z2)
TESTDLLSORT_API bool vtkImageData_SetExtent_1(vtkImageData * callingObject, int x1, int x2, int y1, int y2, int z1, int z2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::SetExtent]:[";
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
TESTDLLSORT_API bool vtkImageData_GetExtent_0(int ** return_value, vtkImageData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetExtent]:[";
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
TESTDLLSORT_API bool vtkImageData_GetExtent_1(vtkImageData * callingObject, int * _arg1, int * _arg2, int * _arg3, int * _arg4, int * _arg5, int * _arg6) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetExtent]:[";
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
TESTDLLSORT_API bool vtkImageData_GetExtent_2(vtkImageData * callingObject, int _arg[6]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetExtent]:[";
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

// virtual double GetScalarTypeMin(vtkInformation * meta_data)
// virtual double GetScalarTypeMin(vtkInformation* meta_data)
TESTDLLSORT_API bool vtkImageData_GetScalarTypeMin_0(double * return_value, vtkImageData * callingObject, vtkInformation * meta_data) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetScalarTypeMin]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarTypeMin(meta_data);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetScalarTypeMin()
// virtual double GetScalarTypeMin()
TESTDLLSORT_API bool vtkImageData_GetScalarTypeMin_1(double * return_value, vtkImageData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetScalarTypeMin]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarTypeMin();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetScalarTypeMax(vtkInformation * meta_data)
// virtual double GetScalarTypeMax(vtkInformation* meta_data)
TESTDLLSORT_API bool vtkImageData_GetScalarTypeMax_0(double * return_value, vtkImageData * callingObject, vtkInformation * meta_data) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetScalarTypeMax]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarTypeMax(meta_data);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetScalarTypeMax()
// virtual double GetScalarTypeMax()
TESTDLLSORT_API bool vtkImageData_GetScalarTypeMax_1(double * return_value, vtkImageData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetScalarTypeMax]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarTypeMax();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetScalarSize(vtkInformation * meta_data)
// virtual int GetScalarSize(vtkInformation* meta_data)
TESTDLLSORT_API bool vtkImageData_GetScalarSize_0(int * return_value, vtkImageData * callingObject, vtkInformation * meta_data) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetScalarSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarSize(meta_data);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetScalarSize()
// virtual int GetScalarSize()
TESTDLLSORT_API bool vtkImageData_GetScalarSize_1(int * return_value, vtkImageData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetScalarSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarSize();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkIdType* GetIncrements()
// virtual vtkIdType *GetIncrements()
TESTDLLSORT_API bool vtkImageData_GetIncrements_0(vtkIdType ** return_value, vtkImageData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetIncrements]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetIncrements();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetIncrements(vtkIdType & incX, vtkIdType & incY, vtkIdType & incZ)
// virtual void GetIncrements(vtkIdType &incX, vtkIdType &incY, vtkIdType &incZ)
TESTDLLSORT_API bool vtkImageData_GetIncrements_1(vtkImageData * callingObject, vtkIdType * incX, vtkIdType * incY, vtkIdType * incZ) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetIncrements]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetIncrements(*incX, *incY, *incZ);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetIncrements(vtkIdType inc[3])
// virtual void GetIncrements(vtkIdType inc[3])
TESTDLLSORT_API bool vtkImageData_GetIncrements_2(vtkImageData * callingObject, vtkIdType inc[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetIncrements]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetIncrements(inc);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkIdType* GetIncrements(vtkDataArray * scalars)
// virtual vtkIdType *GetIncrements(vtkDataArray *scalars)
TESTDLLSORT_API bool vtkImageData_GetIncrements_3(vtkIdType ** return_value, vtkImageData * callingObject, vtkDataArray * scalars) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetIncrements]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetIncrements(scalars);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetIncrements(vtkDataArray * scalars, vtkIdType & incX, vtkIdType & incY, vtkIdType & incZ)
// virtual void GetIncrements(vtkDataArray *scalars, vtkIdType &incX, vtkIdType &incY, vtkIdType &incZ)
TESTDLLSORT_API bool vtkImageData_GetIncrements_4(vtkImageData * callingObject, vtkDataArray * scalars, vtkIdType * incX, vtkIdType * incY, vtkIdType * incZ) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetIncrements]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetIncrements(scalars, *incX, *incY, *incZ);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetIncrements(vtkDataArray * scalars, vtkIdType inc[3])
// virtual void GetIncrements(vtkDataArray *scalars, vtkIdType inc[3])
TESTDLLSORT_API bool vtkImageData_GetIncrements_5(vtkImageData * callingObject, vtkDataArray * scalars, vtkIdType inc[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetIncrements]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetIncrements(scalars, inc);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetContinuousIncrements(int extent[6], vtkIdType & incX, vtkIdType & incY, vtkIdType & incZ)
// virtual void GetContinuousIncrements( int extent[6], vtkIdType &incX, vtkIdType &incY, vtkIdType &incZ)
TESTDLLSORT_API bool vtkImageData_GetContinuousIncrements_0(vtkImageData * callingObject, int extent[6], vtkIdType * incX, vtkIdType * incY, vtkIdType * incZ) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetContinuousIncrements]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetContinuousIncrements(extent, *incX, *incY, *incZ);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetContinuousIncrements(vtkDataArray * scalars, int extent[6], vtkIdType & incX, vtkIdType & incY, vtkIdType & incZ)
// virtual void GetContinuousIncrements(vtkDataArray *scalars, int extent[6], vtkIdType &incX, vtkIdType &incY, vtkIdType &incZ)
TESTDLLSORT_API bool vtkImageData_GetContinuousIncrements_1(vtkImageData * callingObject, vtkDataArray * scalars, int extent[6], vtkIdType * incX, vtkIdType * incY, vtkIdType * incZ) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetContinuousIncrements]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetContinuousIncrements(scalars, extent, *incX, *incY, *incZ);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void* GetScalarPointerForExtent(int extent[6])
// virtual void *GetScalarPointerForExtent(int extent[6])
TESTDLLSORT_API bool vtkImageData_GetScalarPointerForExtent_0(void ** return_value, vtkImageData * callingObject, int extent[6]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetScalarPointerForExtent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarPointerForExtent(extent);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void* GetScalarPointer(int coordinates[3])
// virtual void *GetScalarPointer(int coordinates[3])
TESTDLLSORT_API bool vtkImageData_GetScalarPointer_0(void ** return_value, vtkImageData * callingObject, int coordinates[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetScalarPointer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarPointer(coordinates);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void* GetScalarPointer(int x, int y, int z)
// virtual void *GetScalarPointer(int x, int y, int z)
TESTDLLSORT_API bool vtkImageData_GetScalarPointer_1(void ** return_value, vtkImageData * callingObject, int x, int y, int z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetScalarPointer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarPointer(x, y, z);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void* GetScalarPointer()
// virtual void *GetScalarPointer()
TESTDLLSORT_API bool vtkImageData_GetScalarPointer_2(void ** return_value, vtkImageData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetScalarPointer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarPointer();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual float GetScalarComponentAsFloat(int x, int y, int z, int component)
// virtual float GetScalarComponentAsFloat(int x, int y, int z, int component)
TESTDLLSORT_API bool vtkImageData_GetScalarComponentAsFloat_0(float * return_value, vtkImageData * callingObject, int x, int y, int z, int component) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetScalarComponentAsFloat]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarComponentAsFloat(x, y, z, component);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetScalarComponentFromFloat(int x, int y, int z, int component, float v)
// virtual void SetScalarComponentFromFloat( int x, int y, int z, int component, float v)
TESTDLLSORT_API bool vtkImageData_SetScalarComponentFromFloat_0(vtkImageData * callingObject, int x, int y, int z, int component, float v) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::SetScalarComponentFromFloat]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScalarComponentFromFloat(x, y, z, component, v);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetScalarComponentAsDouble(int x, int y, int z, int component)
// virtual double GetScalarComponentAsDouble(int x, int y, int z, int component)
TESTDLLSORT_API bool vtkImageData_GetScalarComponentAsDouble_0(double * return_value, vtkImageData * callingObject, int x, int y, int z, int component) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetScalarComponentAsDouble]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarComponentAsDouble(x, y, z, component);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetScalarComponentFromDouble(int x, int y, int z, int component, double v)
// virtual void SetScalarComponentFromDouble( int x, int y, int z, int component, double v)
TESTDLLSORT_API bool vtkImageData_SetScalarComponentFromDouble_0(vtkImageData * callingObject, int x, int y, int z, int component, double v) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::SetScalarComponentFromDouble]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScalarComponentFromDouble(x, y, z, component, v);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void AllocateScalars(int dataType, int numComponents)
// virtual void AllocateScalars(int dataType, int numComponents)
TESTDLLSORT_API bool vtkImageData_AllocateScalars_0(vtkImageData * callingObject, int dataType, int numComponents) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::AllocateScalars]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AllocateScalars(dataType, numComponents);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void AllocateScalars(vtkInformation * pipeline_info)
// virtual void AllocateScalars(vtkInformation* pipeline_info)
TESTDLLSORT_API bool vtkImageData_AllocateScalars_1(vtkImageData * callingObject, vtkInformation * pipeline_info) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::AllocateScalars]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AllocateScalars(pipeline_info);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CopyAndCastFrom(vtkImageData * inData, int extent[6])
// virtual void CopyAndCastFrom(vtkImageData *inData, int extent[6])
TESTDLLSORT_API bool vtkImageData_CopyAndCastFrom_0(vtkImageData * callingObject, vtkImageData * inData, int extent[6]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::CopyAndCastFrom]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyAndCastFrom(inData, extent);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CopyAndCastFrom(vtkImageData * inData, int x0, int x1, int y0, int y1, int z0, int z1)
// virtual void CopyAndCastFrom(vtkImageData *inData, int x0, int x1, int y0, int y1, int z0, int z1)
TESTDLLSORT_API bool vtkImageData_CopyAndCastFrom_1(vtkImageData * callingObject, vtkImageData * inData, int x0, int x1, int y0, int y1, int z0, int z1) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::CopyAndCastFrom]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyAndCastFrom(inData, x0, x1, y0, y1, z0, z1);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Crop(const int * updateExtent)
// void Crop(const int* updateExtent)
TESTDLLSORT_API bool vtkImageData_Crop_0(vtkImageData * callingObject, const int * updateExtent) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::Crop]:[";
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

// long GetActualMemorySize()
// unsigned long GetActualMemorySize()
TESTDLLSORT_API bool vtkImageData_GetActualMemorySize_0(unsigned long * return_value, vtkImageData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetActualMemorySize]:[";
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

// virtual void SetSpacing(double _arg1, double _arg2, double _arg3)
// virtual void SetSpacing (double _arg1, double _arg2, double _arg3)
TESTDLLSORT_API bool vtkImageData_SetSpacing_0(vtkImageData * callingObject, double _arg1, double _arg2, double _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::SetSpacing]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetSpacing(_arg1, _arg2, _arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetSpacing(double _arg[3])
// virtual void SetSpacing (double _arg[3])
TESTDLLSORT_API bool vtkImageData_SetSpacing_1(vtkImageData * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::SetSpacing]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetSpacing(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetSpacing()
// virtual double *GetSpacing ()
TESTDLLSORT_API bool vtkImageData_GetSpacing_0(double ** return_value, vtkImageData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetSpacing]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetSpacing();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetSpacing(double & _arg1, double & _arg2, double & _arg3)
// virtual void GetSpacing (double &_arg1, double &_arg2, double &_arg3)
TESTDLLSORT_API bool vtkImageData_GetSpacing_1(vtkImageData * callingObject, double * _arg1, double * _arg2, double * _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetSpacing]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetSpacing(*_arg1, *_arg2, *_arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetSpacing(double _arg[3])
// virtual void GetSpacing (double _arg[3])
TESTDLLSORT_API bool vtkImageData_GetSpacing_2(vtkImageData * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetSpacing]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetSpacing(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetOrigin(double _arg1, double _arg2, double _arg3)
// virtual void SetOrigin (double _arg1, double _arg2, double _arg3)
TESTDLLSORT_API bool vtkImageData_SetOrigin_0(vtkImageData * callingObject, double _arg1, double _arg2, double _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::SetOrigin]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetOrigin(_arg1, _arg2, _arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetOrigin(double _arg[3])
// virtual void SetOrigin (double _arg[3])
TESTDLLSORT_API bool vtkImageData_SetOrigin_1(vtkImageData * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::SetOrigin]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetOrigin(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetOrigin()
// virtual double *GetOrigin ()
TESTDLLSORT_API bool vtkImageData_GetOrigin_0(double ** return_value, vtkImageData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetOrigin]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetOrigin();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetOrigin(double & _arg1, double & _arg2, double & _arg3)
// virtual void GetOrigin (double &_arg1, double &_arg2, double &_arg3)
TESTDLLSORT_API bool vtkImageData_GetOrigin_1(vtkImageData * callingObject, double * _arg1, double * _arg2, double * _arg3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetOrigin]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetOrigin(*_arg1, *_arg2, *_arg3);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetOrigin(double _arg[3])
// virtual void GetOrigin (double _arg[3])
TESTDLLSORT_API bool vtkImageData_GetOrigin_2(vtkImageData * callingObject, double _arg[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetOrigin]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetOrigin(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void SetScalarType(int ARG_0, vtkInformation * meta_data)
// static void SetScalarType(int, vtkInformation* meta_data)
TESTDLLSORT_API bool vtkImageData_SetScalarType_0(int ARG_0, vtkInformation * meta_data) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::SetScalarType]:[";
#endif
	bool success = true;
	vtkImageData::SetScalarType(ARG_0, meta_data);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static int GetScalarType(vtkInformation * meta_data)
// static int GetScalarType(vtkInformation* meta_data)
TESTDLLSORT_API bool vtkImageData_GetScalarType_0(int * return_value, vtkInformation * meta_data) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetScalarType]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkImageData::GetScalarType(meta_data);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static bool HasScalarType(vtkInformation * meta_data)
// static bool HasScalarType(vtkInformation* meta_data)
TESTDLLSORT_API bool vtkImageData_HasScalarType_0(bool * return_value, vtkInformation * meta_data) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::HasScalarType]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkImageData::HasScalarType(meta_data);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetScalarType()
// int GetScalarType()
TESTDLLSORT_API bool vtkImageData_GetScalarType_1(int * return_value, vtkImageData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetScalarType]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarType();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char* GetScalarTypeAsString()
// const char* GetScalarTypeAsString()
TESTDLLSORT_API bool vtkImageData_GetScalarTypeAsString_0(const char ** return_value, vtkImageData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetScalarTypeAsString]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarTypeAsString();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void SetNumberOfScalarComponents(int n, vtkInformation * meta_data)
// static void SetNumberOfScalarComponents( int n, vtkInformation* meta_data)
TESTDLLSORT_API bool vtkImageData_SetNumberOfScalarComponents_0(int n, vtkInformation * meta_data) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::SetNumberOfScalarComponents]:[";
#endif
	bool success = true;
	vtkImageData::SetNumberOfScalarComponents(n, meta_data);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static int GetNumberOfScalarComponents(vtkInformation * meta_data)
// static int GetNumberOfScalarComponents(vtkInformation* meta_data)
TESTDLLSORT_API bool vtkImageData_GetNumberOfScalarComponents_0(int * return_value, vtkInformation * meta_data) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetNumberOfScalarComponents]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkImageData::GetNumberOfScalarComponents(meta_data);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static bool HasNumberOfScalarComponents(vtkInformation * meta_data)
// static bool HasNumberOfScalarComponents(vtkInformation* meta_data)
TESTDLLSORT_API bool vtkImageData_HasNumberOfScalarComponents_0(bool * return_value, vtkInformation * meta_data) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::HasNumberOfScalarComponents]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkImageData::HasNumberOfScalarComponents(meta_data);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetNumberOfScalarComponents()
// int GetNumberOfScalarComponents()
TESTDLLSORT_API bool vtkImageData_GetNumberOfScalarComponents_1(int * return_value, vtkImageData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetNumberOfScalarComponents]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfScalarComponents();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyInformationFromPipeline(vtkInformation * information)
// void CopyInformationFromPipeline(vtkInformation* information)
TESTDLLSORT_API bool vtkImageData_CopyInformationFromPipeline_0(vtkImageData * callingObject, vtkInformation * information) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::CopyInformationFromPipeline]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyInformationFromPipeline(information);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyInformationToPipeline(vtkInformation * information)
// void CopyInformationToPipeline(vtkInformation* information)
TESTDLLSORT_API bool vtkImageData_CopyInformationToPipeline_0(vtkImageData * callingObject, vtkInformation * information) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::CopyInformationToPipeline]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyInformationToPipeline(information);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void PrepareForNewData()
// void PrepareForNewData()
TESTDLLSORT_API bool vtkImageData_PrepareForNewData_0(vtkImageData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::PrepareForNewData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->PrepareForNewData();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ShallowCopy(vtkDataObject * src)
// void ShallowCopy(vtkDataObject *src)
TESTDLLSORT_API bool vtkImageData_ShallowCopy_0(vtkImageData * callingObject, vtkDataObject * src) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::ShallowCopy]:[";
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
TESTDLLSORT_API bool vtkImageData_DeepCopy_0(vtkImageData * callingObject, vtkDataObject * src) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::DeepCopy]:[";
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

// void* GetArrayPointerForExtent(vtkDataArray * array, int extent[6])
// void *GetArrayPointerForExtent(vtkDataArray* array, int extent[6])
TESTDLLSORT_API bool vtkImageData_GetArrayPointerForExtent_0(void ** return_value, vtkImageData * callingObject, vtkDataArray * array, int extent[6]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetArrayPointerForExtent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetArrayPointerForExtent(array, extent);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void* GetArrayPointer(vtkDataArray * array, int coordinates[3])
// void *GetArrayPointer(vtkDataArray* array, int coordinates[3])
TESTDLLSORT_API bool vtkImageData_GetArrayPointer_0(void ** return_value, vtkImageData * callingObject, vtkDataArray * array, int coordinates[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetArrayPointer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetArrayPointer(array, coordinates);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetArrayIncrements(vtkDataArray * array, vtkIdType increments[3])
// void GetArrayIncrements(vtkDataArray *array, vtkIdType increments[3])
TESTDLLSORT_API bool vtkImageData_GetArrayIncrements_0(vtkImageData * callingObject, vtkDataArray * array, vtkIdType increments[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetArrayIncrements]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetArrayIncrements(array, increments);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ComputeInternalExtent(int * intExt, int * tgtExt, int * bnds)
// void ComputeInternalExtent(int *intExt, int *tgtExt, int *bnds)
TESTDLLSORT_API bool vtkImageData_ComputeInternalExtent_0(vtkImageData * callingObject, int * intExt, int * tgtExt, int * bnds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::ComputeInternalExtent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ComputeInternalExtent(intExt, tgtExt, bnds);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetExtentType()
// int GetExtentType()
TESTDLLSORT_API bool vtkImageData_GetExtentType_0(int * return_value, vtkImageData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetExtentType]:[";
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

// static vtkImageData* GetData(vtkInformation * info)
// static vtkImageData* GetData(vtkInformation* info)
TESTDLLSORT_API bool vtkImageData_GetData_0(vtkImageData ** return_value, vtkInformation * info) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkImageData::GetData(info);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkImageData* GetData(vtkInformationVector * v, int i = 0)
// static vtkImageData* GetData(vtkInformationVector* v, int i=0)
TESTDLLSORT_API bool vtkImageData_GetData_1(vtkImageData ** return_value, vtkInformationVector * v, int i = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkImageData::GetData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkImageData::GetData(v, i);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
