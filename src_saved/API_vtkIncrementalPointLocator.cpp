
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkIncrementalPointLocator.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkIncrementalPointLocator_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkIncrementalPointLocator::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkIncrementalPointLocator::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkIncrementalPointLocator_IsA_0(vtkTypeBool * return_value, vtkIncrementalPointLocator * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkIncrementalPointLocator::IsA]:[";
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

// static vtkIncrementalPointLocator* SafeDownCast(vtkObjectBase * o)
// static vtkIncrementalPointLocator* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkIncrementalPointLocator_SafeDownCast_0(vtkIncrementalPointLocator ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkIncrementalPointLocator::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkIncrementalPointLocator::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIncrementalPointLocator* NewInstance()
// vtkIncrementalPointLocator *NewInstance()
TESTDLLSORT_API bool vtkIncrementalPointLocator_NewInstance_0(vtkIncrementalPointLocator ** return_value, vtkIncrementalPointLocator * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkIncrementalPointLocator::NewInstance]:[";
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

// virtual vtkIdType FindClosestInsertedPoint(const double x[3])
// virtual vtkIdType FindClosestInsertedPoint( const double x[3] )
TESTDLLSORT_API bool vtkIncrementalPointLocator_FindClosestInsertedPoint_0(vtkIdType * return_value, vtkIncrementalPointLocator * callingObject, const double x[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkIncrementalPointLocator::FindClosestInsertedPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->FindClosestInsertedPoint(x);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int InitPointInsertion(vtkPoints * newPts, const double bounds[6])
// virtual int InitPointInsertion( vtkPoints * newPts, const double bounds[6] )
TESTDLLSORT_API bool vtkIncrementalPointLocator_InitPointInsertion_0(int * return_value, vtkIncrementalPointLocator * callingObject, vtkPoints * newPts, const double bounds[6]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkIncrementalPointLocator::InitPointInsertion]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InitPointInsertion(newPts, bounds);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int InitPointInsertion(vtkPoints * newPts, const double bounds[6], vtkIdType estSize)
// virtual int InitPointInsertion( vtkPoints * newPts, const double bounds[6], vtkIdType estSize )
TESTDLLSORT_API bool vtkIncrementalPointLocator_InitPointInsertion_1(int * return_value, vtkIncrementalPointLocator * callingObject, vtkPoints * newPts, const double bounds[6], vtkIdType estSize) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkIncrementalPointLocator::InitPointInsertion]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InitPointInsertion(newPts, bounds, estSize);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkIdType IsInsertedPoint(double x, double y, double z)
// virtual vtkIdType IsInsertedPoint( double x, double y, double z )
TESTDLLSORT_API bool vtkIncrementalPointLocator_IsInsertedPoint_0(vtkIdType * return_value, vtkIncrementalPointLocator * callingObject, double x, double y, double z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkIncrementalPointLocator::IsInsertedPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->IsInsertedPoint(x, y, z);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkIdType IsInsertedPoint(const double x[3])
// virtual vtkIdType IsInsertedPoint( const double x[3] )
TESTDLLSORT_API bool vtkIncrementalPointLocator_IsInsertedPoint_1(vtkIdType * return_value, vtkIncrementalPointLocator * callingObject, const double x[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkIncrementalPointLocator::IsInsertedPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->IsInsertedPoint(x);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int InsertUniquePoint(const double x[3], vtkIdType & ptId)
// virtual int InsertUniquePoint( const double x[3], vtkIdType & ptId )
TESTDLLSORT_API bool vtkIncrementalPointLocator_InsertUniquePoint_0(int * return_value, vtkIncrementalPointLocator * callingObject, const double x[3], vtkIdType * ptId) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkIncrementalPointLocator::InsertUniquePoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InsertUniquePoint(x, *ptId);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void InsertPoint(vtkIdType ptId, const double x[3])
// virtual void InsertPoint( vtkIdType ptId, const double x[3] )
TESTDLLSORT_API bool vtkIncrementalPointLocator_InsertPoint_0(vtkIncrementalPointLocator * callingObject, vtkIdType ptId, const double x[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkIncrementalPointLocator::InsertPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InsertPoint(ptId, x);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkIdType InsertNextPoint(const double x[3])
// virtual vtkIdType InsertNextPoint( const double x[3] )
TESTDLLSORT_API bool vtkIncrementalPointLocator_InsertNextPoint_0(vtkIdType * return_value, vtkIncrementalPointLocator * callingObject, const double x[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkIncrementalPointLocator::InsertNextPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InsertNextPoint(x);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
