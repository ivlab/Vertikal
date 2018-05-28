
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkAbstractPointLocator.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkAbstractPointLocator_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractPointLocator::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkAbstractPointLocator::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkAbstractPointLocator_IsA_0(vtkTypeBool * return_value, vtkAbstractPointLocator * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractPointLocator::IsA]:[";
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

// static vtkAbstractPointLocator* SafeDownCast(vtkObjectBase * o)
// static vtkAbstractPointLocator* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkAbstractPointLocator_SafeDownCast_0(vtkAbstractPointLocator ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractPointLocator::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkAbstractPointLocator::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkAbstractPointLocator* NewInstance()
// vtkAbstractPointLocator *NewInstance()
TESTDLLSORT_API bool vtkAbstractPointLocator_NewInstance_0(vtkAbstractPointLocator ** return_value, vtkAbstractPointLocator * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractPointLocator::NewInstance]:[";
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

// virtual vtkIdType FindClosestPoint(const double x[3])
// virtual vtkIdType FindClosestPoint(const double x[3])
TESTDLLSORT_API bool vtkAbstractPointLocator_FindClosestPoint_0(vtkIdType * return_value, vtkAbstractPointLocator * callingObject, const double x[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractPointLocator::FindClosestPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->FindClosestPoint(x);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType FindClosestPoint(double x, double y, double z)
// vtkIdType FindClosestPoint(double x, double y, double z)
TESTDLLSORT_API bool vtkAbstractPointLocator_FindClosestPoint_1(vtkIdType * return_value, vtkAbstractPointLocator * callingObject, double x, double y, double z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractPointLocator::FindClosestPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->FindClosestPoint(x, y, z);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkIdType FindClosestPointWithinRadius(double radius, const double x[3], double & dist2)
// virtual vtkIdType FindClosestPointWithinRadius( double radius, const double x[3], double& dist2)
TESTDLLSORT_API bool vtkAbstractPointLocator_FindClosestPointWithinRadius_0(vtkIdType * return_value, vtkAbstractPointLocator * callingObject, double radius, const double x[3], double * dist2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractPointLocator::FindClosestPointWithinRadius]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->FindClosestPointWithinRadius(radius, x, *dist2);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void FindClosestNPoints(int N, const double x[3], vtkIdList * result)
// virtual void FindClosestNPoints( int N, const double x[3], vtkIdList *result)
TESTDLLSORT_API bool vtkAbstractPointLocator_FindClosestNPoints_0(vtkAbstractPointLocator * callingObject, int N, const double x[3], vtkIdList * result) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractPointLocator::FindClosestNPoints]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->FindClosestNPoints(N, x, result);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void FindClosestNPoints(int N, double x, double y, double z, vtkIdList * result)
// void FindClosestNPoints(int N, double x, double y, double z, vtkIdList *result)
TESTDLLSORT_API bool vtkAbstractPointLocator_FindClosestNPoints_1(vtkAbstractPointLocator * callingObject, int N, double x, double y, double z, vtkIdList * result) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractPointLocator::FindClosestNPoints]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->FindClosestNPoints(N, x, y, z, result);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void FindPointsWithinRadius(double R, const double x[3], vtkIdList * result)
// virtual void FindPointsWithinRadius(double R, const double x[3], vtkIdList *result)
TESTDLLSORT_API bool vtkAbstractPointLocator_FindPointsWithinRadius_0(vtkAbstractPointLocator * callingObject, double R, const double x[3], vtkIdList * result) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractPointLocator::FindPointsWithinRadius]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->FindPointsWithinRadius(R, x, result);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void FindPointsWithinRadius(double R, double x, double y, double z, vtkIdList * result)
// void FindPointsWithinRadius(double R, double x, double y, double z, vtkIdList *result)
TESTDLLSORT_API bool vtkAbstractPointLocator_FindPointsWithinRadius_1(vtkAbstractPointLocator * callingObject, double R, double x, double y, double z, vtkIdList * result) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractPointLocator::FindPointsWithinRadius]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->FindPointsWithinRadius(R, x, y, z, result);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetBounds()
// virtual double *GetBounds()
TESTDLLSORT_API bool vtkAbstractPointLocator_GetBounds_0(double ** return_value, vtkAbstractPointLocator * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractPointLocator::GetBounds]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetBounds();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetBounds(double * ARG_0)
// virtual void GetBounds(double*)
TESTDLLSORT_API bool vtkAbstractPointLocator_GetBounds_1(vtkAbstractPointLocator * callingObject, double * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractPointLocator::GetBounds]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetBounds(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkIdType GetNumberOfBuckets()
// virtual vtkIdType GetNumberOfBuckets ()
TESTDLLSORT_API bool vtkAbstractPointLocator_GetNumberOfBuckets_0(vtkIdType * return_value, vtkAbstractPointLocator * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractPointLocator::GetNumberOfBuckets]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfBuckets();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
