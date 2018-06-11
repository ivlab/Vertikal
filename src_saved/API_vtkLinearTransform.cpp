
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkLinearTransform.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkLinearTransform_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkLinearTransform::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkLinearTransform_IsA_0(vtkTypeBool * return_value, vtkLinearTransform * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::IsA]:[";
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

// static vtkLinearTransform* SafeDownCast(vtkObjectBase * o)
// static vtkLinearTransform* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkLinearTransform_SafeDownCast_0(vtkLinearTransform ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkLinearTransform::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkLinearTransform* NewInstance()
// vtkLinearTransform *NewInstance()
TESTDLLSORT_API bool vtkLinearTransform_NewInstance_0(vtkLinearTransform ** return_value, vtkLinearTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::NewInstance]:[";
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

// void TransformNormal(const float in[3], float out[3])
// void TransformNormal(const float in[3], float out[3])
TESTDLLSORT_API bool vtkLinearTransform_TransformNormal_0(vtkLinearTransform * callingObject, const float in[3], float out[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::TransformNormal]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->TransformNormal(in, out);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void TransformNormal(const double in[3], double out[3])
// void TransformNormal(const double in[3], double out[3])
TESTDLLSORT_API bool vtkLinearTransform_TransformNormal_1(vtkLinearTransform * callingObject, const double in[3], double out[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::TransformNormal]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->TransformNormal(in, out);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* TransformNormal(double x, double y, double z)
// double *TransformNormal(double x, double y, double z)
TESTDLLSORT_API bool vtkLinearTransform_TransformNormal_2(double ** return_value, vtkLinearTransform * callingObject, double x, double y, double z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::TransformNormal]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->TransformNormal(x, y, z);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* TransformNormal(const double normal[3])
// double *TransformNormal(const double normal[3])
TESTDLLSORT_API bool vtkLinearTransform_TransformNormal_3(double ** return_value, vtkLinearTransform * callingObject, const double normal[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::TransformNormal]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->TransformNormal(normal);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// float* TransformFloatNormal(float x, float y, float z)
// float *TransformFloatNormal(float x, float y, float z)
TESTDLLSORT_API bool vtkLinearTransform_TransformFloatNormal_0(float ** return_value, vtkLinearTransform * callingObject, float x, float y, float z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::TransformFloatNormal]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->TransformFloatNormal(x, y, z);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// float* TransformFloatNormal(const float normal[3])
// float *TransformFloatNormal(const float normal[3])
TESTDLLSORT_API bool vtkLinearTransform_TransformFloatNormal_1(float ** return_value, vtkLinearTransform * callingObject, const float normal[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::TransformFloatNormal]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->TransformFloatNormal(normal);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* TransformDoubleNormal(double x, double y, double z)
// double *TransformDoubleNormal(double x, double y, double z)
TESTDLLSORT_API bool vtkLinearTransform_TransformDoubleNormal_0(double ** return_value, vtkLinearTransform * callingObject, double x, double y, double z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::TransformDoubleNormal]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->TransformDoubleNormal(x, y, z);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* TransformDoubleNormal(const double normal[3])
// double *TransformDoubleNormal(const double normal[3])
TESTDLLSORT_API bool vtkLinearTransform_TransformDoubleNormal_1(double ** return_value, vtkLinearTransform * callingObject, const double normal[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::TransformDoubleNormal]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->TransformDoubleNormal(normal);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* TransformVector(double x, double y, double z)
// double *TransformVector(double x, double y, double z)
TESTDLLSORT_API bool vtkLinearTransform_TransformVector_0(double ** return_value, vtkLinearTransform * callingObject, double x, double y, double z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::TransformVector]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->TransformVector(x, y, z);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* TransformVector(const double normal[3])
// double *TransformVector(const double normal[3])
TESTDLLSORT_API bool vtkLinearTransform_TransformVector_1(double ** return_value, vtkLinearTransform * callingObject, const double normal[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::TransformVector]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->TransformVector(normal);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void TransformVector(const float in[3], float out[3])
// void TransformVector(const float in[3], float out[3])
TESTDLLSORT_API bool vtkLinearTransform_TransformVector_2(vtkLinearTransform * callingObject, const float in[3], float out[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::TransformVector]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->TransformVector(in, out);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void TransformVector(const double in[3], double out[3])
// void TransformVector(const double in[3], double out[3])
TESTDLLSORT_API bool vtkLinearTransform_TransformVector_3(vtkLinearTransform * callingObject, const double in[3], double out[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::TransformVector]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->TransformVector(in, out);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// float* TransformFloatVector(float x, float y, float z)
// float *TransformFloatVector(float x, float y, float z)
TESTDLLSORT_API bool vtkLinearTransform_TransformFloatVector_0(float ** return_value, vtkLinearTransform * callingObject, float x, float y, float z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::TransformFloatVector]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->TransformFloatVector(x, y, z);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// float* TransformFloatVector(const float vec[3])
// float *TransformFloatVector(const float vec[3])
TESTDLLSORT_API bool vtkLinearTransform_TransformFloatVector_1(float ** return_value, vtkLinearTransform * callingObject, const float vec[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::TransformFloatVector]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->TransformFloatVector(vec);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* TransformDoubleVector(double x, double y, double z)
// double *TransformDoubleVector(double x, double y, double z)
TESTDLLSORT_API bool vtkLinearTransform_TransformDoubleVector_0(double ** return_value, vtkLinearTransform * callingObject, double x, double y, double z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::TransformDoubleVector]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->TransformDoubleVector(x, y, z);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* TransformDoubleVector(const double vec[3])
// double *TransformDoubleVector(const double vec[3])
TESTDLLSORT_API bool vtkLinearTransform_TransformDoubleVector_1(double ** return_value, vtkLinearTransform * callingObject, const double vec[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::TransformDoubleVector]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->TransformDoubleVector(vec);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void TransformPoints(vtkPoints * inPts, vtkPoints * outPts)
// void TransformPoints(vtkPoints *inPts, vtkPoints *outPts)
TESTDLLSORT_API bool vtkLinearTransform_TransformPoints_0(vtkLinearTransform * callingObject, vtkPoints * inPts, vtkPoints * outPts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::TransformPoints]:[";
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

// virtual void TransformNormals(vtkDataArray * inNms, vtkDataArray * outNms)
// virtual void TransformNormals(vtkDataArray *inNms, vtkDataArray *outNms)
TESTDLLSORT_API bool vtkLinearTransform_TransformNormals_0(vtkLinearTransform * callingObject, vtkDataArray * inNms, vtkDataArray * outNms) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::TransformNormals]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->TransformNormals(inNms, outNms);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void TransformVectors(vtkDataArray * inVrs, vtkDataArray * outVrs)
// virtual void TransformVectors(vtkDataArray *inVrs, vtkDataArray *outVrs)
TESTDLLSORT_API bool vtkLinearTransform_TransformVectors_0(vtkLinearTransform * callingObject, vtkDataArray * inVrs, vtkDataArray * outVrs) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::TransformVectors]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->TransformVectors(inVrs, outVrs);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void TransformPointsNormalsVectors(vtkPoints * inPts, vtkPoints * outPts, vtkDataArray * inNms, vtkDataArray * outNms, vtkDataArray * inVrs, vtkDataArray * outVrs)
// void TransformPointsNormalsVectors(vtkPoints *inPts, vtkPoints *outPts, vtkDataArray *inNms, vtkDataArray *outNms, vtkDataArray *inVrs, vtkDataArray *outVrs)
TESTDLLSORT_API bool vtkLinearTransform_TransformPointsNormalsVectors_0(vtkLinearTransform * callingObject, vtkPoints * inPts, vtkPoints * outPts, vtkDataArray * inNms, vtkDataArray * outNms, vtkDataArray * inVrs, vtkDataArray * outVrs) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::TransformPointsNormalsVectors]:[";
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

// vtkLinearTransform* GetLinearInverse()
// vtkLinearTransform *GetLinearInverse()
TESTDLLSORT_API bool vtkLinearTransform_GetLinearInverse_0(vtkLinearTransform ** return_value, vtkLinearTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::GetLinearInverse]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetLinearInverse();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InternalTransformPoint(const float in[3], float out[3])
// void InternalTransformPoint(const float in[3], float out[3])
TESTDLLSORT_API bool vtkLinearTransform_InternalTransformPoint_0(vtkLinearTransform * callingObject, const float in[3], float out[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::InternalTransformPoint]:[";
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
TESTDLLSORT_API bool vtkLinearTransform_InternalTransformPoint_1(vtkLinearTransform * callingObject, const double in[3], double out[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::InternalTransformPoint]:[";
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

// virtual void InternalTransformNormal(const float in[3], float out[3])
// virtual void InternalTransformNormal(const float in[3], float out[3])
TESTDLLSORT_API bool vtkLinearTransform_InternalTransformNormal_0(vtkLinearTransform * callingObject, const float in[3], float out[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::InternalTransformNormal]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InternalTransformNormal(in, out);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void InternalTransformNormal(const double in[3], double out[3])
// virtual void InternalTransformNormal(const double in[3], double out[3])
TESTDLLSORT_API bool vtkLinearTransform_InternalTransformNormal_1(vtkLinearTransform * callingObject, const double in[3], double out[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::InternalTransformNormal]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InternalTransformNormal(in, out);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void InternalTransformVector(const float in[3], float out[3])
// virtual void InternalTransformVector(const float in[3], float out[3])
TESTDLLSORT_API bool vtkLinearTransform_InternalTransformVector_0(vtkLinearTransform * callingObject, const float in[3], float out[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::InternalTransformVector]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InternalTransformVector(in, out);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void InternalTransformVector(const double in[3], double out[3])
// virtual void InternalTransformVector(const double in[3], double out[3])
TESTDLLSORT_API bool vtkLinearTransform_InternalTransformVector_1(vtkLinearTransform * callingObject, const double in[3], double out[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLinearTransform::InternalTransformVector]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InternalTransformVector(in, out);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
