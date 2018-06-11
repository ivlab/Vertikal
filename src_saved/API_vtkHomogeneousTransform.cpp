
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkHomogeneousTransform.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkHomogeneousTransform_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkHomogeneousTransform::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkHomogeneousTransform::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkHomogeneousTransform_IsA_0(vtkTypeBool * return_value, vtkHomogeneousTransform * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkHomogeneousTransform::IsA]:[";
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

// static vtkHomogeneousTransform* SafeDownCast(vtkObjectBase * o)
// static vtkHomogeneousTransform* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkHomogeneousTransform_SafeDownCast_0(vtkHomogeneousTransform ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkHomogeneousTransform::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkHomogeneousTransform::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkHomogeneousTransform* NewInstance()
// vtkHomogeneousTransform *NewInstance()
TESTDLLSORT_API bool vtkHomogeneousTransform_NewInstance_0(vtkHomogeneousTransform ** return_value, vtkHomogeneousTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkHomogeneousTransform::NewInstance]:[";
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

// void TransformPoints(vtkPoints * inPts, vtkPoints * outPts)
// void TransformPoints(vtkPoints *inPts, vtkPoints *outPts)
TESTDLLSORT_API bool vtkHomogeneousTransform_TransformPoints_0(vtkHomogeneousTransform * callingObject, vtkPoints * inPts, vtkPoints * outPts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkHomogeneousTransform::TransformPoints]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->TransformPoints(inPts, outPts);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void TransformPointsNormalsVectors(vtkPoints * inPts, vtkPoints * outPts, vtkDataArray * inNms, vtkDataArray * outNms, vtkDataArray * inVrs, vtkDataArray * outVrs)
// void TransformPointsNormalsVectors(vtkPoints *inPts, vtkPoints *outPts, vtkDataArray *inNms, vtkDataArray *outNms, vtkDataArray *inVrs, vtkDataArray *outVrs)
TESTDLLSORT_API bool vtkHomogeneousTransform_TransformPointsNormalsVectors_0(vtkHomogeneousTransform * callingObject, vtkPoints * inPts, vtkPoints * outPts, vtkDataArray * inNms, vtkDataArray * outNms, vtkDataArray * inVrs, vtkDataArray * outVrs) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkHomogeneousTransform::TransformPointsNormalsVectors]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->TransformPointsNormalsVectors(inPts, outPts, inNms, outNms, inVrs, outVrs);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetMatrix(vtkMatrix4x4 * m)
// void GetMatrix(vtkMatrix4x4 *m)
TESTDLLSORT_API bool vtkHomogeneousTransform_GetMatrix_0(vtkHomogeneousTransform * callingObject, vtkMatrix4x4 * m) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkHomogeneousTransform::GetMatrix]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetMatrix(m);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkMatrix4x4* GetMatrix()
// vtkMatrix4x4 *GetMatrix()
TESTDLLSORT_API bool vtkHomogeneousTransform_GetMatrix_1(vtkMatrix4x4 ** return_value, vtkHomogeneousTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkHomogeneousTransform::GetMatrix]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetMatrix();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkHomogeneousTransform* GetHomogeneousInverse()
// vtkHomogeneousTransform *GetHomogeneousInverse()
TESTDLLSORT_API bool vtkHomogeneousTransform_GetHomogeneousInverse_0(vtkHomogeneousTransform ** return_value, vtkHomogeneousTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkHomogeneousTransform::GetHomogeneousInverse]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetHomogeneousInverse();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InternalTransformPoint(const float in[3], float out[3])
// void InternalTransformPoint(const float in[3], float out[3])
TESTDLLSORT_API bool vtkHomogeneousTransform_InternalTransformPoint_0(vtkHomogeneousTransform * callingObject, const float in[3], float out[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkHomogeneousTransform::InternalTransformPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InternalTransformPoint(in, out);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InternalTransformPoint(const double in[3], double out[3])
// void InternalTransformPoint(const double in[3], double out[3])
TESTDLLSORT_API bool vtkHomogeneousTransform_InternalTransformPoint_1(vtkHomogeneousTransform * callingObject, const double in[3], double out[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkHomogeneousTransform::InternalTransformPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InternalTransformPoint(in, out);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
