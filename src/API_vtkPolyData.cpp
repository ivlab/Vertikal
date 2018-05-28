
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkPolyData.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkPolyData* New()
// static vtkPolyData *New()
TESTDLLSORT_API bool vtkPolyData_New_0(vtkPolyData ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPolyData::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkPolyData_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPolyData::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkPolyData_IsA_0(vtkTypeBool * return_value, vtkPolyData * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::IsA]:[";
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

// static vtkPolyData* SafeDownCast(vtkObjectBase * o)
// static vtkPolyData* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkPolyData_SafeDownCast_0(vtkPolyData ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPolyData::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkPolyData* NewInstance()
// vtkPolyData *NewInstance()
TESTDLLSORT_API bool vtkPolyData_NewInstance_0(vtkPolyData ** return_value, vtkPolyData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::NewInstance]:[";
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
TESTDLLSORT_API bool vtkPolyData_GetDataObjectType_0(int * return_value, vtkPolyData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetDataObjectType]:[";
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
TESTDLLSORT_API bool vtkPolyData_CopyStructure_0(vtkPolyData * callingObject, vtkDataSet * ds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::CopyStructure]:[";
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
TESTDLLSORT_API bool vtkPolyData_GetNumberOfCells_0(vtkIdType * return_value, vtkPolyData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetNumberOfCells]:[";
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
TESTDLLSORT_API bool vtkPolyData_GetCell_0(vtkCell ** return_value, vtkPolyData * callingObject, vtkIdType cellId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetCell]:[";
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
TESTDLLSORT_API bool vtkPolyData_GetCell_1(vtkPolyData * callingObject, vtkIdType cellId, vtkGenericCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetCell]:[";
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

// int GetCellType(vtkIdType cellId)
// int GetCellType(vtkIdType cellId)
TESTDLLSORT_API bool vtkPolyData_GetCellType_0(int * return_value, vtkPolyData * callingObject, vtkIdType cellId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetCellType]:[";
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

// void GetCellBounds(vtkIdType cellId, double bounds[6])
// void GetCellBounds(vtkIdType cellId, double bounds[6])
TESTDLLSORT_API bool vtkPolyData_GetCellBounds_0(vtkPolyData * callingObject, vtkIdType cellId, double bounds[6]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetCellBounds]:[";
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

// void GetCellNeighbors(vtkIdType cellId, vtkIdList * ptIds, vtkIdList * cellIds)
// void GetCellNeighbors(vtkIdType cellId, vtkIdList *ptIds, vtkIdList *cellIds)
TESTDLLSORT_API bool vtkPolyData_GetCellNeighbors_0(vtkPolyData * callingObject, vtkIdType cellId, vtkIdList * ptIds, vtkIdList * cellIds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetCellNeighbors]:[";
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

// void GetCellPoints(vtkIdType cellId, vtkIdList * ptIds)
// void GetCellPoints(vtkIdType cellId, vtkIdList *ptIds)
TESTDLLSORT_API bool vtkPolyData_GetCellPoints_0(vtkPolyData * callingObject, vtkIdType cellId, vtkIdList * ptIds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetCellPoints]:[";
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
TESTDLLSORT_API bool vtkPolyData_GetPointCells_0(vtkPolyData * callingObject, vtkIdType ptId, vtkIdList * cellIds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetPointCells]:[";
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
TESTDLLSORT_API bool vtkPolyData_ComputeBounds_0(vtkPolyData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::ComputeBounds]:[";
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

// void Squeeze()
// void Squeeze()
TESTDLLSORT_API bool vtkPolyData_Squeeze_0(vtkPolyData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::Squeeze]:[";
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

// int GetMaxCellSize()
// int GetMaxCellSize()
TESTDLLSORT_API bool vtkPolyData_GetMaxCellSize_0(int * return_value, vtkPolyData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetMaxCellSize]:[";
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

// void SetVerts(vtkCellArray * v)
// void SetVerts (vtkCellArray* v)
TESTDLLSORT_API bool vtkPolyData_SetVerts_0(vtkPolyData * callingObject, vtkCellArray * v) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::SetVerts]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetVerts(v);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkCellArray* GetVerts()
// vtkCellArray *GetVerts()
TESTDLLSORT_API bool vtkPolyData_GetVerts_0(vtkCellArray ** return_value, vtkPolyData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetVerts]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetVerts();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetLines(vtkCellArray * l)
// void SetLines (vtkCellArray* l)
TESTDLLSORT_API bool vtkPolyData_SetLines_0(vtkPolyData * callingObject, vtkCellArray * l) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::SetLines]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetLines(l);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkCellArray* GetLines()
// vtkCellArray *GetLines()
TESTDLLSORT_API bool vtkPolyData_GetLines_0(vtkCellArray ** return_value, vtkPolyData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetLines]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetLines();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetPolys(vtkCellArray * p)
// void SetPolys (vtkCellArray* p)
TESTDLLSORT_API bool vtkPolyData_SetPolys_0(vtkPolyData * callingObject, vtkCellArray * p) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::SetPolys]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetPolys(p);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkCellArray* GetPolys()
// vtkCellArray *GetPolys()
TESTDLLSORT_API bool vtkPolyData_GetPolys_0(vtkCellArray ** return_value, vtkPolyData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetPolys]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPolys();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetStrips(vtkCellArray * s)
// void SetStrips (vtkCellArray* s)
TESTDLLSORT_API bool vtkPolyData_SetStrips_0(vtkPolyData * callingObject, vtkCellArray * s) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::SetStrips]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetStrips(s);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkCellArray* GetStrips()
// vtkCellArray *GetStrips()
TESTDLLSORT_API bool vtkPolyData_GetStrips_0(vtkCellArray ** return_value, vtkPolyData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetStrips]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetStrips();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType GetNumberOfVerts()
// vtkIdType GetNumberOfVerts()
TESTDLLSORT_API bool vtkPolyData_GetNumberOfVerts_0(vtkIdType * return_value, vtkPolyData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetNumberOfVerts]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfVerts();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType GetNumberOfLines()
// vtkIdType GetNumberOfLines()
TESTDLLSORT_API bool vtkPolyData_GetNumberOfLines_0(vtkIdType * return_value, vtkPolyData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetNumberOfLines]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfLines();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType GetNumberOfPolys()
// vtkIdType GetNumberOfPolys()
TESTDLLSORT_API bool vtkPolyData_GetNumberOfPolys_0(vtkIdType * return_value, vtkPolyData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetNumberOfPolys]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfPolys();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType GetNumberOfStrips()
// vtkIdType GetNumberOfStrips()
TESTDLLSORT_API bool vtkPolyData_GetNumberOfStrips_0(vtkIdType * return_value, vtkPolyData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetNumberOfStrips]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfStrips();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Allocate(vtkIdType numCells = 1000, int extSize = 1000)
// void Allocate(vtkIdType numCells=1000, int extSize=1000)
TESTDLLSORT_API bool vtkPolyData_Allocate_0(vtkPolyData * callingObject, vtkIdType numCells = 1000, int extSize = 1000) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::Allocate]:[";
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

// void Allocate(vtkPolyData * inPolyData, vtkIdType numCells = 1000, int extSize = 1000)
// void Allocate(vtkPolyData *inPolyData, vtkIdType numCells=1000, int extSize=1000)
TESTDLLSORT_API bool vtkPolyData_Allocate_1(vtkPolyData * callingObject, vtkPolyData * inPolyData, vtkIdType numCells = 1000, int extSize = 1000) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::Allocate]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Allocate(inPolyData, numCells, extSize);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType InsertNextCell(int type, int npts, vtkIdType * pts)
// vtkIdType InsertNextCell(int type, int npts, vtkIdType *pts)
TESTDLLSORT_API bool vtkPolyData_InsertNextCell_0(vtkIdType * return_value, vtkPolyData * callingObject, int type, int npts, vtkIdType * pts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::InsertNextCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InsertNextCell(type, npts, pts);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType InsertNextCell(int type, vtkIdList * pts)
// vtkIdType InsertNextCell(int type, vtkIdList *pts)
TESTDLLSORT_API bool vtkPolyData_InsertNextCell_1(vtkIdType * return_value, vtkPolyData * callingObject, int type, vtkIdList * pts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::InsertNextCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InsertNextCell(type, pts);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Reset()
// void Reset()
TESTDLLSORT_API bool vtkPolyData_Reset_0(vtkPolyData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::Reset]:[";
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

// void BuildCells()
// void BuildCells()
TESTDLLSORT_API bool vtkPolyData_BuildCells_0(vtkPolyData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::BuildCells]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->BuildCells();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// bool NeedToBuildCells()
// bool NeedToBuildCells()
TESTDLLSORT_API bool vtkPolyData_NeedToBuildCells_0(bool * return_value, vtkPolyData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::NeedToBuildCells]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->NeedToBuildCells();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void BuildLinks(int initialSize = 0)
// void BuildLinks(int initialSize=0)
TESTDLLSORT_API bool vtkPolyData_BuildLinks_0(vtkPolyData * callingObject, int initialSize = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::BuildLinks]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->BuildLinks(initialSize);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void DeleteCells()
// void DeleteCells()
TESTDLLSORT_API bool vtkPolyData_DeleteCells_0(vtkPolyData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::DeleteCells]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DeleteCells();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void DeleteLinks()
// void DeleteLinks()
TESTDLLSORT_API bool vtkPolyData_DeleteLinks_0(vtkPolyData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::DeleteLinks]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DeleteLinks();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetPointCells(vtkIdType ptId, unsigned short & ncells, vtkIdType *& cells)
// void GetPointCells(vtkIdType ptId, unsigned short& ncells, vtkIdType* &cells)
TESTDLLSORT_API bool vtkPolyData_GetPointCells_1(vtkPolyData * callingObject, vtkIdType ptId, unsigned short * ncells, vtkIdType ** cells) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetPointCells]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetPointCells(ptId, *ncells, *cells);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetCellEdgeNeighbors(vtkIdType cellId, vtkIdType p1, vtkIdType p2, vtkIdList * cellIds)
// void GetCellEdgeNeighbors(vtkIdType cellId, vtkIdType p1, vtkIdType p2, vtkIdList *cellIds)
TESTDLLSORT_API bool vtkPolyData_GetCellEdgeNeighbors_0(vtkPolyData * callingObject, vtkIdType cellId, vtkIdType p1, vtkIdType p2, vtkIdList * cellIds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetCellEdgeNeighbors]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetCellEdgeNeighbors(cellId, p1, p2, cellIds);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char GetCellPoints(vtkIdType cellId, vtkIdType & npts, vtkIdType *& pts)
// unsigned char GetCellPoints(vtkIdType cellId, vtkIdType& npts, vtkIdType* &pts)
TESTDLLSORT_API bool vtkPolyData_GetCellPoints_1(unsigned char * return_value, vtkPolyData * callingObject, vtkIdType cellId, vtkIdType * npts, vtkIdType ** pts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetCellPoints]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCellPoints(cellId, *npts, *pts);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char GetCell(vtkIdType cellId, vtkIdType *& pts)
// unsigned char GetCell(vtkIdType cellId, vtkIdType* &pts)
TESTDLLSORT_API bool vtkPolyData_GetCell_2(unsigned char * return_value, vtkPolyData * callingObject, vtkIdType cellId, vtkIdType ** pts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCell(cellId, *pts);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int IsTriangle(int v1, int v2, int v3)
// int IsTriangle(int v1, int v2, int v3)
TESTDLLSORT_API bool vtkPolyData_IsTriangle_0(int * return_value, vtkPolyData * callingObject, int v1, int v2, int v3) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::IsTriangle]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->IsTriangle(v1, v2, v3);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int IsEdge(vtkIdType p1, vtkIdType p2)
// int IsEdge(vtkIdType p1, vtkIdType p2)
TESTDLLSORT_API bool vtkPolyData_IsEdge_0(int * return_value, vtkPolyData * callingObject, vtkIdType p1, vtkIdType p2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::IsEdge]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->IsEdge(p1, p2);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int IsPointUsedByCell(vtkIdType ptId, vtkIdType cellId)
// int IsPointUsedByCell(vtkIdType ptId, vtkIdType cellId)
TESTDLLSORT_API bool vtkPolyData_IsPointUsedByCell_0(int * return_value, vtkPolyData * callingObject, vtkIdType ptId, vtkIdType cellId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::IsPointUsedByCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->IsPointUsedByCell(ptId, cellId);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ReplaceCell(vtkIdType cellId, int npts, vtkIdType * pts)
// void ReplaceCell(vtkIdType cellId, int npts, vtkIdType *pts)
TESTDLLSORT_API bool vtkPolyData_ReplaceCell_0(vtkPolyData * callingObject, vtkIdType cellId, int npts, vtkIdType * pts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::ReplaceCell]:[";
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

// void ReplaceCellPoint(vtkIdType cellId, vtkIdType oldPtId, vtkIdType newPtId)
// void ReplaceCellPoint(vtkIdType cellId, vtkIdType oldPtId, vtkIdType newPtId)
TESTDLLSORT_API bool vtkPolyData_ReplaceCellPoint_0(vtkPolyData * callingObject, vtkIdType cellId, vtkIdType oldPtId, vtkIdType newPtId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::ReplaceCellPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ReplaceCellPoint(cellId, oldPtId, newPtId);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ReverseCell(vtkIdType cellId)
// void ReverseCell(vtkIdType cellId)
TESTDLLSORT_API bool vtkPolyData_ReverseCell_0(vtkPolyData * callingObject, vtkIdType cellId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::ReverseCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ReverseCell(cellId);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void DeletePoint(vtkIdType ptId)
// void DeletePoint(vtkIdType ptId)
TESTDLLSORT_API bool vtkPolyData_DeletePoint_0(vtkPolyData * callingObject, vtkIdType ptId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::DeletePoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DeletePoint(ptId);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void DeleteCell(vtkIdType cellId)
// void DeleteCell(vtkIdType cellId)
TESTDLLSORT_API bool vtkPolyData_DeleteCell_0(vtkPolyData * callingObject, vtkIdType cellId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::DeleteCell]:[";
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

// void RemoveDeletedCells()
// void RemoveDeletedCells()
TESTDLLSORT_API bool vtkPolyData_RemoveDeletedCells_0(vtkPolyData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::RemoveDeletedCells]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveDeletedCells();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType InsertNextLinkedPoint(int numLinks)
// vtkIdType InsertNextLinkedPoint(int numLinks)
TESTDLLSORT_API bool vtkPolyData_InsertNextLinkedPoint_0(vtkIdType * return_value, vtkPolyData * callingObject, int numLinks) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::InsertNextLinkedPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InsertNextLinkedPoint(numLinks);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType InsertNextLinkedPoint(double x[3], int numLinks)
// vtkIdType InsertNextLinkedPoint(double x[3], int numLinks)
TESTDLLSORT_API bool vtkPolyData_InsertNextLinkedPoint_1(vtkIdType * return_value, vtkPolyData * callingObject, double x[3], int numLinks) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::InsertNextLinkedPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InsertNextLinkedPoint(x, numLinks);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType InsertNextLinkedCell(int type, int npts, vtkIdType * pts)
// vtkIdType InsertNextLinkedCell(int type, int npts, vtkIdType *pts)
TESTDLLSORT_API bool vtkPolyData_InsertNextLinkedCell_0(vtkIdType * return_value, vtkPolyData * callingObject, int type, int npts, vtkIdType * pts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::InsertNextLinkedCell]:[";
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

// void ReplaceLinkedCell(vtkIdType cellId, int npts, vtkIdType * pts)
// void ReplaceLinkedCell(vtkIdType cellId, int npts, vtkIdType *pts)
TESTDLLSORT_API bool vtkPolyData_ReplaceLinkedCell_0(vtkPolyData * callingObject, vtkIdType cellId, int npts, vtkIdType * pts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::ReplaceLinkedCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ReplaceLinkedCell(cellId, npts, pts);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void RemoveCellReference(vtkIdType cellId)
// void RemoveCellReference(vtkIdType cellId)
TESTDLLSORT_API bool vtkPolyData_RemoveCellReference_0(vtkPolyData * callingObject, vtkIdType cellId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::RemoveCellReference]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveCellReference(cellId);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AddCellReference(vtkIdType cellId)
// void AddCellReference(vtkIdType cellId)
TESTDLLSORT_API bool vtkPolyData_AddCellReference_0(vtkPolyData * callingObject, vtkIdType cellId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::AddCellReference]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AddCellReference(cellId);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void RemoveReferenceToCell(vtkIdType ptId, vtkIdType cellId)
// void RemoveReferenceToCell(vtkIdType ptId, vtkIdType cellId)
TESTDLLSORT_API bool vtkPolyData_RemoveReferenceToCell_0(vtkPolyData * callingObject, vtkIdType ptId, vtkIdType cellId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::RemoveReferenceToCell]:[";
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
TESTDLLSORT_API bool vtkPolyData_AddReferenceToCell_0(vtkPolyData * callingObject, vtkIdType ptId, vtkIdType cellId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::AddReferenceToCell]:[";
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
TESTDLLSORT_API bool vtkPolyData_ResizeCellList_0(vtkPolyData * callingObject, vtkIdType ptId, int size) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::ResizeCellList]:[";
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

// void Initialize()
// void Initialize()
TESTDLLSORT_API bool vtkPolyData_Initialize_0(vtkPolyData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::Initialize]:[";
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

// virtual int GetPiece()
// virtual int GetPiece()
TESTDLLSORT_API bool vtkPolyData_GetPiece_0(int * return_value, vtkPolyData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetPiece]:[";
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
TESTDLLSORT_API bool vtkPolyData_GetNumberOfPieces_0(int * return_value, vtkPolyData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetNumberOfPieces]:[";
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
TESTDLLSORT_API bool vtkPolyData_GetGhostLevel_0(int * return_value, vtkPolyData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetGhostLevel]:[";
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
TESTDLLSORT_API bool vtkPolyData_GetActualMemorySize_0(unsigned long * return_value, vtkPolyData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetActualMemorySize]:[";
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
TESTDLLSORT_API bool vtkPolyData_ShallowCopy_0(vtkPolyData * callingObject, vtkDataObject * src) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::ShallowCopy]:[";
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
TESTDLLSORT_API bool vtkPolyData_DeepCopy_0(vtkPolyData * callingObject, vtkDataObject * src) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::DeepCopy]:[";
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

// void RemoveGhostCells()
// void RemoveGhostCells()
TESTDLLSORT_API bool vtkPolyData_RemoveGhostCells_0(vtkPolyData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::RemoveGhostCells]:[";
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

// static vtkPolyData* GetData(vtkInformation * info)
// static vtkPolyData* GetData(vtkInformation* info)
TESTDLLSORT_API bool vtkPolyData_GetData_0(vtkPolyData ** return_value, vtkInformation * info) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPolyData::GetData(info);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkPolyData* GetData(vtkInformationVector * v, int i = 0)
// static vtkPolyData* GetData(vtkInformationVector* v, int i=0)
TESTDLLSORT_API bool vtkPolyData_GetData_1(vtkPolyData ** return_value, vtkInformationVector * v, int i = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPolyData::GetData(v, i);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetScalarFieldCriticalIndex(vtkIdType pointId, vtkDataArray * scalarField)
// int GetScalarFieldCriticalIndex (vtkIdType pointId, vtkDataArray *scalarField)
TESTDLLSORT_API bool vtkPolyData_GetScalarFieldCriticalIndex_0(int * return_value, vtkPolyData * callingObject, vtkIdType pointId, vtkDataArray * scalarField) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetScalarFieldCriticalIndex]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarFieldCriticalIndex(pointId, scalarField);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetScalarFieldCriticalIndex(vtkIdType pointId, int fieldId)
// int GetScalarFieldCriticalIndex (vtkIdType pointId, int fieldId)
TESTDLLSORT_API bool vtkPolyData_GetScalarFieldCriticalIndex_1(int * return_value, vtkPolyData * callingObject, vtkIdType pointId, int fieldId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetScalarFieldCriticalIndex]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarFieldCriticalIndex(pointId, fieldId);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetScalarFieldCriticalIndex(vtkIdType pointId, const char * fieldName)
// int GetScalarFieldCriticalIndex (vtkIdType pointId, const char* fieldName)
TESTDLLSORT_API bool vtkPolyData_GetScalarFieldCriticalIndex_2(int * return_value, vtkPolyData * callingObject, vtkIdType pointId, const char * fieldName) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetScalarFieldCriticalIndex]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarFieldCriticalIndex(pointId, fieldName);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkMTimeType GetMeshMTime()
// virtual vtkMTimeType GetMeshMTime()
TESTDLLSORT_API bool vtkPolyData_GetMeshMTime_0(vtkMTimeType * return_value, vtkPolyData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyData::GetMeshMTime]:[";
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

}
