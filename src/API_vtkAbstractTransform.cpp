
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkAbstractTransform.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkAbstractTransform_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkAbstractTransform::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkAbstractTransform_IsA_0(vtkTypeBool * return_value, vtkAbstractTransform * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::IsA]:[";
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

// static vtkAbstractTransform* SafeDownCast(vtkObjectBase * o)
// static vtkAbstractTransform* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkAbstractTransform_SafeDownCast_0(vtkAbstractTransform ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkAbstractTransform::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkAbstractTransform* NewInstance()
// vtkAbstractTransform *NewInstance()
TESTDLLSORT_API bool vtkAbstractTransform_NewInstance_0(vtkAbstractTransform ** return_value, vtkAbstractTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::NewInstance]:[";
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

// void TransformPoint(const float in[3], float out[3])
// void TransformPoint(const float in[3], float out[3])
TESTDLLSORT_API bool vtkAbstractTransform_TransformPoint_0(vtkAbstractTransform * callingObject, const float in[3], float out[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::TransformPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->TransformPoint(in, out);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void TransformPoint(const double in[3], double out[3])
// void TransformPoint(const double in[3], double out[3])
TESTDLLSORT_API bool vtkAbstractTransform_TransformPoint_1(vtkAbstractTransform * callingObject, const double in[3], double out[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::TransformPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->TransformPoint(in, out);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* TransformPoint(double x, double y, double z)
// double *TransformPoint(double x, double y, double z)
TESTDLLSORT_API bool vtkAbstractTransform_TransformPoint_2(double ** return_value, vtkAbstractTransform * callingObject, double x, double y, double z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::TransformPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->TransformPoint(x, y, z);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* TransformPoint(const double point[3])
// double *TransformPoint(const double point[3])
TESTDLLSORT_API bool vtkAbstractTransform_TransformPoint_3(double ** return_value, vtkAbstractTransform * callingObject, const double point[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::TransformPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->TransformPoint(point);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// float* TransformFloatPoint(float x, float y, float z)
// float *TransformFloatPoint(float x, float y, float z)
TESTDLLSORT_API bool vtkAbstractTransform_TransformFloatPoint_0(float ** return_value, vtkAbstractTransform * callingObject, float x, float y, float z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::TransformFloatPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->TransformFloatPoint(x, y, z);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// float* TransformFloatPoint(const float point[3])
// float *TransformFloatPoint(const float point[3])
TESTDLLSORT_API bool vtkAbstractTransform_TransformFloatPoint_1(float ** return_value, vtkAbstractTransform * callingObject, const float point[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::TransformFloatPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->TransformFloatPoint(point);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* TransformDoublePoint(double x, double y, double z)
// double *TransformDoublePoint(double x, double y, double z)
TESTDLLSORT_API bool vtkAbstractTransform_TransformDoublePoint_0(double ** return_value, vtkAbstractTransform * callingObject, double x, double y, double z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::TransformDoublePoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->TransformDoublePoint(x, y, z);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* TransformDoublePoint(const double point[3])
// double *TransformDoublePoint(const double point[3])
TESTDLLSORT_API bool vtkAbstractTransform_TransformDoublePoint_1(double ** return_value, vtkAbstractTransform * callingObject, const double point[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::TransformDoublePoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->TransformDoublePoint(point);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void TransformNormalAtPoint(const float point[3], const float in[3], float out[3])
// void TransformNormalAtPoint(const float point[3], const float in[3], float out[3])
TESTDLLSORT_API bool vtkAbstractTransform_TransformNormalAtPoint_0(vtkAbstractTransform * callingObject, const float point[3], const float in[3], float out[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::TransformNormalAtPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->TransformNormalAtPoint(point, in, out);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void TransformNormalAtPoint(const double point[3], const double in[3], double out[3])
// void TransformNormalAtPoint(const double point[3], const double in[3], double out[3])
TESTDLLSORT_API bool vtkAbstractTransform_TransformNormalAtPoint_1(vtkAbstractTransform * callingObject, const double point[3], const double in[3], double out[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::TransformNormalAtPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->TransformNormalAtPoint(point, in, out);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* TransformNormalAtPoint(const double point[3], const double normal[3])
// double *TransformNormalAtPoint(const double point[3], const double normal[3])
TESTDLLSORT_API bool vtkAbstractTransform_TransformNormalAtPoint_2(double ** return_value, vtkAbstractTransform * callingObject, const double point[3], const double normal[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::TransformNormalAtPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->TransformNormalAtPoint(point, normal);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* TransformDoubleNormalAtPoint(const double point[3], const double normal[3])
// double *TransformDoubleNormalAtPoint(const double point[3], const double normal[3])
TESTDLLSORT_API bool vtkAbstractTransform_TransformDoubleNormalAtPoint_0(double ** return_value, vtkAbstractTransform * callingObject, const double point[3], const double normal[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::TransformDoubleNormalAtPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->TransformDoubleNormalAtPoint(point, normal);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// float* TransformFloatNormalAtPoint(const float point[3], const float normal[3])
// float *TransformFloatNormalAtPoint(const float point[3], const float normal[3])
TESTDLLSORT_API bool vtkAbstractTransform_TransformFloatNormalAtPoint_0(float ** return_value, vtkAbstractTransform * callingObject, const float point[3], const float normal[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::TransformFloatNormalAtPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->TransformFloatNormalAtPoint(point, normal);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void TransformVectorAtPoint(const float point[3], const float in[3], float out[3])
// void TransformVectorAtPoint(const float point[3], const float in[3], float out[3])
TESTDLLSORT_API bool vtkAbstractTransform_TransformVectorAtPoint_0(vtkAbstractTransform * callingObject, const float point[3], const float in[3], float out[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::TransformVectorAtPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->TransformVectorAtPoint(point, in, out);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void TransformVectorAtPoint(const double point[3], const double in[3], double out[3])
// void TransformVectorAtPoint(const double point[3], const double in[3], double out[3])
TESTDLLSORT_API bool vtkAbstractTransform_TransformVectorAtPoint_1(vtkAbstractTransform * callingObject, const double point[3], const double in[3], double out[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::TransformVectorAtPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->TransformVectorAtPoint(point, in, out);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* TransformVectorAtPoint(const double point[3], const double vector[3])
// double *TransformVectorAtPoint(const double point[3], const double vector[3])
TESTDLLSORT_API bool vtkAbstractTransform_TransformVectorAtPoint_2(double ** return_value, vtkAbstractTransform * callingObject, const double point[3], const double vector[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::TransformVectorAtPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->TransformVectorAtPoint(point, vector);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* TransformDoubleVectorAtPoint(const double point[3], const double vector[3])
// double *TransformDoubleVectorAtPoint(const double point[3], const double vector[3])
TESTDLLSORT_API bool vtkAbstractTransform_TransformDoubleVectorAtPoint_0(double ** return_value, vtkAbstractTransform * callingObject, const double point[3], const double vector[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::TransformDoubleVectorAtPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->TransformDoubleVectorAtPoint(point, vector);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// float* TransformFloatVectorAtPoint(const float point[3], const float vector[3])
// float *TransformFloatVectorAtPoint(const float point[3], const float vector[3])
TESTDLLSORT_API bool vtkAbstractTransform_TransformFloatVectorAtPoint_0(float ** return_value, vtkAbstractTransform * callingObject, const float point[3], const float vector[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::TransformFloatVectorAtPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->TransformFloatVectorAtPoint(point, vector);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void TransformPoints(vtkPoints * inPts, vtkPoints * outPts)
// virtual void TransformPoints(vtkPoints *inPts, vtkPoints *outPts)
TESTDLLSORT_API bool vtkAbstractTransform_TransformPoints_0(vtkAbstractTransform * callingObject, vtkPoints * inPts, vtkPoints * outPts) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::TransformPoints]:[";
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

// virtual void TransformPointsNormalsVectors(vtkPoints * inPts, vtkPoints * outPts, vtkDataArray * inNms, vtkDataArray * outNms, vtkDataArray * inVrs, vtkDataArray * outVrs)
// virtual void TransformPointsNormalsVectors(vtkPoints *inPts, vtkPoints *outPts, vtkDataArray *inNms, vtkDataArray *outNms, vtkDataArray *inVrs, vtkDataArray *outVrs)
TESTDLLSORT_API bool vtkAbstractTransform_TransformPointsNormalsVectors_0(vtkAbstractTransform * callingObject, vtkPoints * inPts, vtkPoints * outPts, vtkDataArray * inNms, vtkDataArray * outNms, vtkDataArray * inVrs, vtkDataArray * outVrs) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::TransformPointsNormalsVectors]:[";
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

// vtkAbstractTransform* GetInverse()
// vtkAbstractTransform *GetInverse()
TESTDLLSORT_API bool vtkAbstractTransform_GetInverse_0(vtkAbstractTransform ** return_value, vtkAbstractTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::GetInverse]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInverse();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetInverse(vtkAbstractTransform * transform)
// void SetInverse(vtkAbstractTransform *transform)
TESTDLLSORT_API bool vtkAbstractTransform_SetInverse_0(vtkAbstractTransform * callingObject, vtkAbstractTransform * transform) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::SetInverse]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetInverse(transform);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void Inverse()
// virtual void Inverse()
TESTDLLSORT_API bool vtkAbstractTransform_Inverse_0(vtkAbstractTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::Inverse]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Inverse();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void DeepCopy(vtkAbstractTransform * ARG_0)
// void DeepCopy(vtkAbstractTransform *)
TESTDLLSORT_API bool vtkAbstractTransform_DeepCopy_0(vtkAbstractTransform * callingObject, vtkAbstractTransform * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::DeepCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DeepCopy(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Update()
// void Update()
TESTDLLSORT_API bool vtkAbstractTransform_Update_0(vtkAbstractTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::Update]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Update();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void InternalTransformPoint(const float in[3], float out[3])
// virtual void InternalTransformPoint(const float in[3], float out[3])
TESTDLLSORT_API bool vtkAbstractTransform_InternalTransformPoint_0(vtkAbstractTransform * callingObject, const float in[3], float out[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::InternalTransformPoint]:[";
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

// virtual void InternalTransformPoint(const double in[3], double out[3])
// virtual void InternalTransformPoint(const double in[3], double out[3])
TESTDLLSORT_API bool vtkAbstractTransform_InternalTransformPoint_1(vtkAbstractTransform * callingObject, const double in[3], double out[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::InternalTransformPoint]:[";
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

// virtual vtkAbstractTransform* MakeTransform()
// virtual vtkAbstractTransform *MakeTransform()
TESTDLLSORT_API bool vtkAbstractTransform_MakeTransform_0(vtkAbstractTransform ** return_value, vtkAbstractTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::MakeTransform]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->MakeTransform();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int CircuitCheck(vtkAbstractTransform * transform)
// virtual int CircuitCheck(vtkAbstractTransform *transform)
TESTDLLSORT_API bool vtkAbstractTransform_CircuitCheck_0(int * return_value, vtkAbstractTransform * callingObject, vtkAbstractTransform * transform) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::CircuitCheck]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->CircuitCheck(transform);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkMTimeType GetMTime()
// vtkMTimeType GetMTime()
TESTDLLSORT_API bool vtkAbstractTransform_GetMTime_0(vtkMTimeType * return_value, vtkAbstractTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::GetMTime]:[";
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

// void UnRegister(vtkObjectBase * O)
// void UnRegister(vtkObjectBase *O)
TESTDLLSORT_API bool vtkAbstractTransform_UnRegister_0(vtkAbstractTransform * callingObject, vtkObjectBase * O) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractTransform::UnRegister]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UnRegister(O);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
