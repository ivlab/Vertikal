
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkPointSet.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkPointSet_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPointSet::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPointSet::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkPointSet_IsA_0(vtkTypeBool * return_value, vtkPointSet * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPointSet::IsA]:[";
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

// static vtkPointSet* SafeDownCast(vtkObjectBase * o)
// static vtkPointSet* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkPointSet_SafeDownCast_0(vtkPointSet ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPointSet::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPointSet::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkPointSet* NewInstance()
// vtkPointSet *NewInstance()
TESTDLLSORT_API bool vtkPointSet_NewInstance_0(vtkPointSet ** return_value, vtkPointSet * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPointSet::NewInstance]:[";
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

// void Initialize()
// void Initialize()
TESTDLLSORT_API bool vtkPointSet_Initialize_0(vtkPointSet * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPointSet::Initialize]:[";
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

// void CopyStructure(vtkDataSet * pd)
// void CopyStructure(vtkDataSet *pd)
TESTDLLSORT_API bool vtkPointSet_CopyStructure_0(vtkPointSet * callingObject, vtkDataSet * pd) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPointSet::CopyStructure]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyStructure(pd);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType GetNumberOfPoints()
// vtkIdType GetNumberOfPoints()
TESTDLLSORT_API bool vtkPointSet_GetNumberOfPoints_0(vtkIdType * return_value, vtkPointSet * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPointSet::GetNumberOfPoints]:[";
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

// void GetPoint(vtkIdType ptId, double x[3])
// void GetPoint(vtkIdType ptId, double x[3])
TESTDLLSORT_API bool vtkPointSet_GetPoint_0(vtkPointSet * callingObject, vtkIdType ptId, double x[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPointSet::GetPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetPoint(ptId, x);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType FindPoint(double x[3])
// vtkIdType FindPoint(double x[3])
TESTDLLSORT_API bool vtkPointSet_FindPoint_0(vtkIdType * return_value, vtkPointSet * callingObject, double x[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPointSet::FindPoint]:[";
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

// vtkIdType FindPoint(double x, double y, double z)
// vtkIdType FindPoint(double x, double y, double z)
TESTDLLSORT_API bool vtkPointSet_FindPoint_1(vtkIdType * return_value, vtkPointSet * callingObject, double x, double y, double z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPointSet::FindPoint]:[";
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

// vtkIdType FindCell(double x[3], vtkCell * cell, vtkIdType cellId, double tol2, int & subId, double pcoords[3], double * weights)
// vtkIdType FindCell(double x[3], vtkCell *cell, vtkIdType cellId, double tol2, int& subId, double pcoords[3], double *weights)
TESTDLLSORT_API bool vtkPointSet_FindCell_0(vtkIdType * return_value, vtkPointSet * callingObject, double x[3], vtkCell * cell, vtkIdType cellId, double tol2, int * subId, double pcoords[3], double * weights) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPointSet::FindCell]:[";
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
// vtkIdType FindCell(double x[3], vtkCell *cell, vtkGenericCell *gencell, vtkIdType cellId, double tol2, int& subId, double pcoords[3], double *weights)
TESTDLLSORT_API bool vtkPointSet_FindCell_1(vtkIdType * return_value, vtkPointSet * callingObject, double x[3], vtkCell * cell, vtkGenericCell * gencell, vtkIdType cellId, double tol2, int * subId, double pcoords[3], double * weights) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPointSet::FindCell]:[";
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

// double* GetPoint(vtkIdType ptId)
// double *GetPoint(vtkIdType ptId)
TESTDLLSORT_API bool vtkPointSet_GetPoint_1(double ** return_value, vtkPointSet * callingObject, vtkIdType ptId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPointSet::GetPoint]:[";
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

// vtkCellIterator* NewCellIterator()
// vtkCellIterator* NewCellIterator()
TESTDLLSORT_API bool vtkPointSet_NewCellIterator_0(vtkCellIterator ** return_value, vtkPointSet * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPointSet::NewCellIterator]:[";
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

// vtkMTimeType GetMTime()
// vtkMTimeType GetMTime()
TESTDLLSORT_API bool vtkPointSet_GetMTime_0(vtkMTimeType * return_value, vtkPointSet * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPointSet::GetMTime]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetMTime();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ComputeBounds()
// void ComputeBounds()
TESTDLLSORT_API bool vtkPointSet_ComputeBounds_0(vtkPointSet * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPointSet::ComputeBounds]:[";
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
TESTDLLSORT_API bool vtkPointSet_Squeeze_0(vtkPointSet * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPointSet::Squeeze]:[";
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

// virtual void SetPoints(vtkPoints * ARG_0)
// virtual void SetPoints(vtkPoints*)
TESTDLLSORT_API bool vtkPointSet_SetPoints_0(vtkPointSet * callingObject, vtkPoints * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPointSet::SetPoints]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetPoints(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkPoints* GetPoints()
// virtual vtkPoints *GetPoints ()
TESTDLLSORT_API bool vtkPointSet_GetPoints_0(vtkPoints ** return_value, vtkPointSet * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPointSet::GetPoints]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPoints();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// long GetActualMemorySize()
// unsigned long GetActualMemorySize()
TESTDLLSORT_API bool vtkPointSet_GetActualMemorySize_0(unsigned long * return_value, vtkPointSet * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPointSet::GetActualMemorySize]:[";
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
TESTDLLSORT_API bool vtkPointSet_ShallowCopy_0(vtkPointSet * callingObject, vtkDataObject * src) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPointSet::ShallowCopy]:[";
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
TESTDLLSORT_API bool vtkPointSet_DeepCopy_0(vtkPointSet * callingObject, vtkDataObject * src) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPointSet::DeepCopy]:[";
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

// void Register(vtkObjectBase * o)
// void Register(vtkObjectBase* o)
TESTDLLSORT_API bool vtkPointSet_Register_0(vtkPointSet * callingObject, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPointSet::Register]:[";
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
TESTDLLSORT_API bool vtkPointSet_UnRegister_0(vtkPointSet * callingObject, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPointSet::UnRegister]:[";
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

// static vtkPointSet* GetData(vtkInformation * info)
// static vtkPointSet* GetData(vtkInformation* info)
TESTDLLSORT_API bool vtkPointSet_GetData_0(vtkPointSet ** return_value, vtkInformation * info) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPointSet::GetData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPointSet::GetData(info);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkPointSet* GetData(vtkInformationVector * v, int i = 0)
// static vtkPointSet* GetData(vtkInformationVector* v, int i=0)
TESTDLLSORT_API bool vtkPointSet_GetData_1(vtkPointSet ** return_value, vtkInformationVector * v, int i = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPointSet::GetData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPointSet::GetData(v, i);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
