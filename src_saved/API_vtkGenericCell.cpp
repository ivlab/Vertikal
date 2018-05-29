
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkGenericCell.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkGenericCell* New()
// static vtkGenericCell *New()
TESTDLLSORT_API bool vtkGenericCell_New_0(vtkGenericCell ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkGenericCell::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkGenericCell_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkGenericCell::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkGenericCell_IsA_0(vtkTypeBool * return_value, vtkGenericCell * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::IsA]:[";
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

// static vtkGenericCell* SafeDownCast(vtkObjectBase * o)
// static vtkGenericCell* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkGenericCell_SafeDownCast_0(vtkGenericCell ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkGenericCell::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkGenericCell* NewInstance()
// vtkGenericCell *NewInstance()
TESTDLLSORT_API bool vtkGenericCell_NewInstance_0(vtkGenericCell ** return_value, vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::NewInstance]:[";
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

// void SetPoints(vtkPoints * points)
// void SetPoints(vtkPoints *points)
TESTDLLSORT_API bool vtkGenericCell_SetPoints_0(vtkGenericCell * callingObject, vtkPoints * points) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetPoints]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetPoints(points);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetPointIds(vtkIdList * pointIds)
// void SetPointIds(vtkIdList *pointIds)
TESTDLLSORT_API bool vtkGenericCell_SetPointIds_0(vtkGenericCell * callingObject, vtkIdList * pointIds) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetPointIds]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetPointIds(pointIds);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ShallowCopy(vtkCell * c)
// void ShallowCopy(vtkCell *c)
TESTDLLSORT_API bool vtkGenericCell_ShallowCopy_0(vtkGenericCell * callingObject, vtkCell * c) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::ShallowCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ShallowCopy(c);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void DeepCopy(vtkCell * c)
// void DeepCopy(vtkCell *c)
TESTDLLSORT_API bool vtkGenericCell_DeepCopy_0(vtkGenericCell * callingObject, vtkCell * c) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::DeepCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DeepCopy(c);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetCellType()
// int GetCellType()
TESTDLLSORT_API bool vtkGenericCell_GetCellType_0(int * return_value, vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::GetCellType]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCellType();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetCellDimension()
// int GetCellDimension()
TESTDLLSORT_API bool vtkGenericCell_GetCellDimension_0(int * return_value, vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::GetCellDimension]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCellDimension();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int IsLinear()
// int IsLinear()
TESTDLLSORT_API bool vtkGenericCell_IsLinear_0(int * return_value, vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::IsLinear]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->IsLinear();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int RequiresInitialization()
// int RequiresInitialization()
TESTDLLSORT_API bool vtkGenericCell_RequiresInitialization_0(int * return_value, vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::RequiresInitialization]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->RequiresInitialization();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Initialize()
// void Initialize()
TESTDLLSORT_API bool vtkGenericCell_Initialize_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::Initialize]:[";
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

// int RequiresExplicitFaceRepresentation()
// int RequiresExplicitFaceRepresentation()
TESTDLLSORT_API bool vtkGenericCell_RequiresExplicitFaceRepresentation_0(int * return_value, vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::RequiresExplicitFaceRepresentation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->RequiresExplicitFaceRepresentation();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetFaces(vtkIdType * faces)
// void SetFaces(vtkIdType *faces)
TESTDLLSORT_API bool vtkGenericCell_SetFaces_0(vtkGenericCell * callingObject, vtkIdType * faces) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetFaces]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetFaces(faces);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType* GetFaces()
// vtkIdType *GetFaces()
TESTDLLSORT_API bool vtkGenericCell_GetFaces_0(vtkIdType ** return_value, vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::GetFaces]:[";
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

// int GetNumberOfEdges()
// int GetNumberOfEdges()
TESTDLLSORT_API bool vtkGenericCell_GetNumberOfEdges_0(int * return_value, vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::GetNumberOfEdges]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfEdges();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetNumberOfFaces()
// int GetNumberOfFaces()
TESTDLLSORT_API bool vtkGenericCell_GetNumberOfFaces_0(int * return_value, vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::GetNumberOfFaces]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfFaces();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkCell* GetEdge(int edgeId)
// vtkCell *GetEdge(int edgeId)
TESTDLLSORT_API bool vtkGenericCell_GetEdge_0(vtkCell ** return_value, vtkGenericCell * callingObject, int edgeId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::GetEdge]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetEdge(edgeId);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkCell* GetFace(int faceId)
// vtkCell *GetFace(int faceId)
TESTDLLSORT_API bool vtkGenericCell_GetFace_0(vtkCell ** return_value, vtkGenericCell * callingObject, int faceId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::GetFace]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetFace(faceId);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int CellBoundary(int subId, double pcoords[3], vtkIdList * pts)
// int CellBoundary(int subId, double pcoords[3], vtkIdList *pts)
TESTDLLSORT_API bool vtkGenericCell_CellBoundary_0(int * return_value, vtkGenericCell * callingObject, int subId, double pcoords[3], vtkIdList * pts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::CellBoundary]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->CellBoundary(subId, pcoords, pts);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int EvaluatePosition(double x[3], double * closestPoint, int & subId, double pcoords[3], double & dist2, double * weights)
// int EvaluatePosition(double x[3], double* closestPoint, int& subId, double pcoords[3], double& dist2, double *weights)
TESTDLLSORT_API bool vtkGenericCell_EvaluatePosition_0(int * return_value, vtkGenericCell * callingObject, double x[3], double * closestPoint, int * subId, double pcoords[3], double * dist2, double * weights) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::EvaluatePosition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->EvaluatePosition(x, closestPoint, *subId, pcoords, *dist2, weights);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void EvaluateLocation(int & subId, double pcoords[3], double x[3], double * weights)
// void EvaluateLocation(int& subId, double pcoords[3], double x[3], double *weights)
TESTDLLSORT_API bool vtkGenericCell_EvaluateLocation_0(vtkGenericCell * callingObject, int * subId, double pcoords[3], double x[3], double * weights) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::EvaluateLocation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->EvaluateLocation(*subId, pcoords, x, weights);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Contour(double value, vtkDataArray * cellScalars, vtkIncrementalPointLocator * locator, vtkCellArray * verts, vtkCellArray * lines, vtkCellArray * polys, vtkPointData * inPd, vtkPointData * outPd, vtkCellData * inCd, vtkIdType cellId, vtkCellData * outCd)
// void Contour(double value, vtkDataArray *cellScalars, vtkIncrementalPointLocator *locator, vtkCellArray *verts, vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd, vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId, vtkCellData *outCd)
TESTDLLSORT_API bool vtkGenericCell_Contour_0(vtkGenericCell * callingObject, double value, vtkDataArray * cellScalars, vtkIncrementalPointLocator * locator, vtkCellArray * verts, vtkCellArray * lines, vtkCellArray * polys, vtkPointData * inPd, vtkPointData * outPd, vtkCellData * inCd, vtkIdType cellId, vtkCellData * outCd) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::Contour]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Contour(value, cellScalars, locator, verts, lines, polys, inPd, outPd, inCd, cellId, outCd);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Clip(double value, vtkDataArray * cellScalars, vtkIncrementalPointLocator * locator, vtkCellArray * connectivity, vtkPointData * inPd, vtkPointData * outPd, vtkCellData * inCd, vtkIdType cellId, vtkCellData * outCd, int insideOut)
// void Clip(double value, vtkDataArray *cellScalars, vtkIncrementalPointLocator *locator, vtkCellArray *connectivity, vtkPointData *inPd, vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId, vtkCellData *outCd, int insideOut)
TESTDLLSORT_API bool vtkGenericCell_Clip_0(vtkGenericCell * callingObject, double value, vtkDataArray * cellScalars, vtkIncrementalPointLocator * locator, vtkCellArray * connectivity, vtkPointData * inPd, vtkPointData * outPd, vtkCellData * inCd, vtkIdType cellId, vtkCellData * outCd, int insideOut) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::Clip]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Clip(value, cellScalars, locator, connectivity, inPd, outPd, inCd, cellId, outCd, insideOut);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int IntersectWithLine(double p1[3], double p2[3], double tol, double & t, double x[3], double pcoords[3], int & subId)
// int IntersectWithLine(double p1[3], double p2[3], double tol, double& t, double x[3], double pcoords[3], int& subId)
TESTDLLSORT_API bool vtkGenericCell_IntersectWithLine_0(int * return_value, vtkGenericCell * callingObject, double p1[3], double p2[3], double tol, double * t, double x[3], double pcoords[3], int * subId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::IntersectWithLine]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->IntersectWithLine(p1, p2, tol, *t, x, pcoords, *subId);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Triangulate(int index, vtkIdList * ptIds, vtkPoints * pts)
// int Triangulate(int index, vtkIdList *ptIds, vtkPoints *pts)
TESTDLLSORT_API bool vtkGenericCell_Triangulate_0(int * return_value, vtkGenericCell * callingObject, int index, vtkIdList * ptIds, vtkPoints * pts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::Triangulate]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Triangulate(index, ptIds, pts);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Derivatives(int subId, double pcoords[3], double * values, int dim, double * derivs)
// void Derivatives(int subId, double pcoords[3], double *values, int dim, double *derivs)
TESTDLLSORT_API bool vtkGenericCell_Derivatives_0(vtkGenericCell * callingObject, int subId, double pcoords[3], double * values, int dim, double * derivs) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::Derivatives]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Derivatives(subId, pcoords, values, dim, derivs);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetParametricCenter(double pcoords[3])
// int GetParametricCenter(double pcoords[3])
TESTDLLSORT_API bool vtkGenericCell_GetParametricCenter_0(int * return_value, vtkGenericCell * callingObject, double pcoords[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::GetParametricCenter]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetParametricCenter(pcoords);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* GetParametricCoords()
// double *GetParametricCoords()
TESTDLLSORT_API bool vtkGenericCell_GetParametricCoords_0(double ** return_value, vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::GetParametricCoords]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetParametricCoords();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int IsPrimaryCell()
// int IsPrimaryCell()
TESTDLLSORT_API bool vtkGenericCell_IsPrimaryCell_0(int * return_value, vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::IsPrimaryCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->IsPrimaryCell();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InterpolateFunctions(double pcoords[3], double * weights)
// void InterpolateFunctions(double pcoords[3], double *weights)
TESTDLLSORT_API bool vtkGenericCell_InterpolateFunctions_0(vtkGenericCell * callingObject, double pcoords[3], double * weights) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::InterpolateFunctions]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InterpolateFunctions(pcoords, weights);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InterpolateDerivs(double pcoords[3], double * derivs)
// void InterpolateDerivs(double pcoords[3], double *derivs)
TESTDLLSORT_API bool vtkGenericCell_InterpolateDerivs_0(vtkGenericCell * callingObject, double pcoords[3], double * derivs) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::InterpolateDerivs]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InterpolateDerivs(pcoords, derivs);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellType(int cellType)
// void SetCellType(int cellType)
TESTDLLSORT_API bool vtkGenericCell_SetCellType_0(vtkGenericCell * callingObject, int cellType) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellType]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellType(cellType);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToEmptyCell()
// void SetCellTypeToEmptyCell()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToEmptyCell_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToEmptyCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToEmptyCell();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToVertex()
// void SetCellTypeToVertex()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToVertex_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToVertex]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToVertex();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToPolyVertex()
// void SetCellTypeToPolyVertex()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToPolyVertex_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToPolyVertex]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToPolyVertex();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToLine()
// void SetCellTypeToLine()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToLine_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToLine]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToLine();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToPolyLine()
// void SetCellTypeToPolyLine()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToPolyLine_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToPolyLine]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToPolyLine();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToTriangle()
// void SetCellTypeToTriangle()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToTriangle_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToTriangle]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToTriangle();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToTriangleStrip()
// void SetCellTypeToTriangleStrip()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToTriangleStrip_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToTriangleStrip]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToTriangleStrip();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToPolygon()
// void SetCellTypeToPolygon()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToPolygon_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToPolygon]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToPolygon();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToPixel()
// void SetCellTypeToPixel()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToPixel_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToPixel]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToPixel();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToQuad()
// void SetCellTypeToQuad()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToQuad_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToQuad]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToQuad();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToTetra()
// void SetCellTypeToTetra()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToTetra_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToTetra]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToTetra();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToVoxel()
// void SetCellTypeToVoxel()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToVoxel_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToVoxel]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToVoxel();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToHexahedron()
// void SetCellTypeToHexahedron()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToHexahedron_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToHexahedron]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToHexahedron();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToWedge()
// void SetCellTypeToWedge()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToWedge_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToWedge]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToWedge();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToPyramid()
// void SetCellTypeToPyramid()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToPyramid_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToPyramid]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToPyramid();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToPentagonalPrism()
// void SetCellTypeToPentagonalPrism()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToPentagonalPrism_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToPentagonalPrism]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToPentagonalPrism();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToHexagonalPrism()
// void SetCellTypeToHexagonalPrism()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToHexagonalPrism_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToHexagonalPrism]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToHexagonalPrism();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToPolyhedron()
// void SetCellTypeToPolyhedron()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToPolyhedron_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToPolyhedron]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToPolyhedron();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToConvexPointSet()
// void SetCellTypeToConvexPointSet()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToConvexPointSet_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToConvexPointSet]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToConvexPointSet();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToQuadraticEdge()
// void SetCellTypeToQuadraticEdge()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToQuadraticEdge_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToQuadraticEdge]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToQuadraticEdge();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToCubicLine()
// void SetCellTypeToCubicLine()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToCubicLine_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToCubicLine]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToCubicLine();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToQuadraticTriangle()
// void SetCellTypeToQuadraticTriangle()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToQuadraticTriangle_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToQuadraticTriangle]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToQuadraticTriangle();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToBiQuadraticTriangle()
// void SetCellTypeToBiQuadraticTriangle()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToBiQuadraticTriangle_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToBiQuadraticTriangle]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToBiQuadraticTriangle();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToQuadraticQuad()
// void SetCellTypeToQuadraticQuad()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToQuadraticQuad_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToQuadraticQuad]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToQuadraticQuad();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToQuadraticPolygon()
// void SetCellTypeToQuadraticPolygon()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToQuadraticPolygon_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToQuadraticPolygon]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToQuadraticPolygon();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToQuadraticTetra()
// void SetCellTypeToQuadraticTetra()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToQuadraticTetra_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToQuadraticTetra]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToQuadraticTetra();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToQuadraticHexahedron()
// void SetCellTypeToQuadraticHexahedron()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToQuadraticHexahedron_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToQuadraticHexahedron]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToQuadraticHexahedron();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToQuadraticWedge()
// void SetCellTypeToQuadraticWedge()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToQuadraticWedge_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToQuadraticWedge]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToQuadraticWedge();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToQuadraticPyramid()
// void SetCellTypeToQuadraticPyramid()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToQuadraticPyramid_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToQuadraticPyramid]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToQuadraticPyramid();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToQuadraticLinearQuad()
// void SetCellTypeToQuadraticLinearQuad()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToQuadraticLinearQuad_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToQuadraticLinearQuad]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToQuadraticLinearQuad();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToBiQuadraticQuad()
// void SetCellTypeToBiQuadraticQuad()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToBiQuadraticQuad_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToBiQuadraticQuad]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToBiQuadraticQuad();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToQuadraticLinearWedge()
// void SetCellTypeToQuadraticLinearWedge()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToQuadraticLinearWedge_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToQuadraticLinearWedge]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToQuadraticLinearWedge();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToBiQuadraticQuadraticWedge()
// void SetCellTypeToBiQuadraticQuadraticWedge()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToBiQuadraticQuadraticWedge_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToBiQuadraticQuadraticWedge]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToBiQuadraticQuadraticWedge();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToTriQuadraticHexahedron()
// void SetCellTypeToTriQuadraticHexahedron()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToTriQuadraticHexahedron_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToTriQuadraticHexahedron]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToTriQuadraticHexahedron();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToBiQuadraticQuadraticHexahedron()
// void SetCellTypeToBiQuadraticQuadraticHexahedron()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToBiQuadraticQuadraticHexahedron_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToBiQuadraticQuadraticHexahedron]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToBiQuadraticQuadraticHexahedron();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToLagrangeTriangle()
// void SetCellTypeToLagrangeTriangle()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToLagrangeTriangle_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToLagrangeTriangle]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToLagrangeTriangle();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToLagrangeTetra()
// void SetCellTypeToLagrangeTetra()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToLagrangeTetra_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToLagrangeTetra]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToLagrangeTetra();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToLagrangeCurve()
// void SetCellTypeToLagrangeCurve()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToLagrangeCurve_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToLagrangeCurve]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToLagrangeCurve();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToLagrangeQuadrilateral()
// void SetCellTypeToLagrangeQuadrilateral()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToLagrangeQuadrilateral_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToLagrangeQuadrilateral]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToLagrangeQuadrilateral();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToLagrangeHexahedron()
// void SetCellTypeToLagrangeHexahedron()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToLagrangeHexahedron_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToLagrangeHexahedron]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToLagrangeHexahedron();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCellTypeToLagrangeWedge()
// void SetCellTypeToLagrangeWedge()
TESTDLLSORT_API bool vtkGenericCell_SetCellTypeToLagrangeWedge_0(vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::SetCellTypeToLagrangeWedge]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCellTypeToLagrangeWedge();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkCell* InstantiateCell(int cellType)
// static vtkCell* InstantiateCell(int cellType)
TESTDLLSORT_API bool vtkGenericCell_InstantiateCell_0(vtkCell ** return_value, int cellType) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::InstantiateCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkGenericCell::InstantiateCell(cellType);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkCell* GetRepresentativeCell()
// vtkCell* GetRepresentativeCell()
TESTDLLSORT_API bool vtkGenericCell_GetRepresentativeCell_0(vtkCell ** return_value, vtkGenericCell * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkGenericCell::GetRepresentativeCell]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetRepresentativeCell();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
