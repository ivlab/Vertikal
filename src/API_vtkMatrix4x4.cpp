
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkMatrix4x4.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkMatrix4x4* New()
// static vtkMatrix4x4 *New()
TESTDLLSORT_API bool vtkMatrix4x4_New_0(vtkMatrix4x4 ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMatrix4x4::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkMatrix4x4_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMatrix4x4::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkMatrix4x4_IsA_0(vtkTypeBool * return_value, vtkMatrix4x4 * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::IsA]:[";
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

// static vtkMatrix4x4* SafeDownCast(vtkObjectBase * o)
// static vtkMatrix4x4* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkMatrix4x4_SafeDownCast_0(vtkMatrix4x4 ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMatrix4x4::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkMatrix4x4* NewInstance()
// vtkMatrix4x4 *NewInstance()
TESTDLLSORT_API bool vtkMatrix4x4_NewInstance_0(vtkMatrix4x4 ** return_value, vtkMatrix4x4 * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::NewInstance]:[";
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

// void DeepCopy(const vtkMatrix4x4 * source)
// void DeepCopy(const vtkMatrix4x4 *source)
TESTDLLSORT_API bool vtkMatrix4x4_DeepCopy_0(vtkMatrix4x4 * callingObject, const vtkMatrix4x4 * source) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::DeepCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DeepCopy(source);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void DeepCopy(double destination[16], const vtkMatrix4x4 * source)
// static void DeepCopy(double destination[16], const vtkMatrix4x4 *source)
TESTDLLSORT_API bool vtkMatrix4x4_DeepCopy_1(double destination[16], const vtkMatrix4x4 * source) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::DeepCopy]:[";
#endif
	bool success = true;
	vtkMatrix4x4::DeepCopy(destination, source);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void DeepCopy(double destination[16], const double source[16])
// static void DeepCopy(double destination[16], const double source[16])
TESTDLLSORT_API bool vtkMatrix4x4_DeepCopy_2(double destination[16], const double source[16]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::DeepCopy]:[";
#endif
	bool success = true;
	vtkMatrix4x4::DeepCopy(destination, source);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void DeepCopy(const double elements[16])
// void DeepCopy(const double elements[16])
TESTDLLSORT_API bool vtkMatrix4x4_DeepCopy_3(vtkMatrix4x4 * callingObject, const double elements[16]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::DeepCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DeepCopy(elements);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Zero()
// void Zero()
TESTDLLSORT_API bool vtkMatrix4x4_Zero_0(vtkMatrix4x4 * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::Zero]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Zero();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void Zero(double elements[16])
// static void Zero(double elements[16])
TESTDLLSORT_API bool vtkMatrix4x4_Zero_1(double elements[16]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::Zero]:[";
#endif
	bool success = true;
	vtkMatrix4x4::Zero(elements);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Identity()
// void Identity()
TESTDLLSORT_API bool vtkMatrix4x4_Identity_0(vtkMatrix4x4 * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::Identity]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Identity();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void Identity(double elements[16])
// static void Identity(double elements[16])
TESTDLLSORT_API bool vtkMatrix4x4_Identity_1(double elements[16]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::Identity]:[";
#endif
	bool success = true;
	vtkMatrix4x4::Identity(elements);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void Invert(const vtkMatrix4x4 * in, vtkMatrix4x4 * out)
// static void Invert(const vtkMatrix4x4 *in, vtkMatrix4x4 *out)
TESTDLLSORT_API bool vtkMatrix4x4_Invert_0(const vtkMatrix4x4 * in, vtkMatrix4x4 * out) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::Invert]:[";
#endif
	bool success = true;
	vtkMatrix4x4::Invert(in, out);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Invert()
// void Invert()
TESTDLLSORT_API bool vtkMatrix4x4_Invert_1(vtkMatrix4x4 * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::Invert]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Invert();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void Invert(const double inElements[16], double outElements[16])
// static void Invert(const double inElements[16], double outElements[16])
TESTDLLSORT_API bool vtkMatrix4x4_Invert_2(const double inElements[16], double outElements[16]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::Invert]:[";
#endif
	bool success = true;
	vtkMatrix4x4::Invert(inElements, outElements);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void Transpose(const vtkMatrix4x4 * in, vtkMatrix4x4 * out)
// static void Transpose(const vtkMatrix4x4 *in, vtkMatrix4x4 *out)
TESTDLLSORT_API bool vtkMatrix4x4_Transpose_0(const vtkMatrix4x4 * in, vtkMatrix4x4 * out) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::Transpose]:[";
#endif
	bool success = true;
	vtkMatrix4x4::Transpose(in, out);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Transpose()
// void Transpose()
TESTDLLSORT_API bool vtkMatrix4x4_Transpose_1(vtkMatrix4x4 * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::Transpose]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Transpose();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void Transpose(const double inElements[16], double outElements[16])
// static void Transpose(const double inElements[16], double outElements[16])
TESTDLLSORT_API bool vtkMatrix4x4_Transpose_2(const double inElements[16], double outElements[16]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::Transpose]:[";
#endif
	bool success = true;
	vtkMatrix4x4::Transpose(inElements, outElements);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void MultiplyPoint(const float in[4], float out[4])
// void MultiplyPoint(const float in[4], float out[4])
TESTDLLSORT_API bool vtkMatrix4x4_MultiplyPoint_0(vtkMatrix4x4 * callingObject, const float in[4], float out[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::MultiplyPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->MultiplyPoint(in, out);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void MultiplyPoint(const double in[4], double out[4])
// void MultiplyPoint(const double in[4], double out[4])
TESTDLLSORT_API bool vtkMatrix4x4_MultiplyPoint_1(vtkMatrix4x4 * callingObject, const double in[4], double out[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::MultiplyPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->MultiplyPoint(in, out);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void MultiplyPoint(const double elements[16], const float in[4], float out[4])
// static void MultiplyPoint(const double elements[16], const float in[4], float out[4])
TESTDLLSORT_API bool vtkMatrix4x4_MultiplyPoint_2(const double elements[16], const float in[4], float out[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::MultiplyPoint]:[";
#endif
	bool success = true;
	vtkMatrix4x4::MultiplyPoint(elements, in, out);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void MultiplyPoint(const double elements[16], const double in[4], double out[4])
// static void MultiplyPoint(const double elements[16], const double in[4], double out[4])
TESTDLLSORT_API bool vtkMatrix4x4_MultiplyPoint_3(const double elements[16], const double in[4], double out[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::MultiplyPoint]:[";
#endif
	bool success = true;
	vtkMatrix4x4::MultiplyPoint(elements, in, out);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// float* MultiplyPoint(const float in[4])
// float *MultiplyPoint(const float in[4])
TESTDLLSORT_API bool vtkMatrix4x4_MultiplyPoint_4(float ** return_value, vtkMatrix4x4 * callingObject, const float in[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::MultiplyPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->MultiplyPoint(in);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// float* MultiplyFloatPoint(const float in[4])
// float *MultiplyFloatPoint(const float in[4])
TESTDLLSORT_API bool vtkMatrix4x4_MultiplyFloatPoint_0(float ** return_value, vtkMatrix4x4 * callingObject, const float in[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::MultiplyFloatPoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->MultiplyFloatPoint(in);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* MultiplyDoublePoint(const double in[4])
// double *MultiplyDoublePoint(const double in[4])
TESTDLLSORT_API bool vtkMatrix4x4_MultiplyDoublePoint_0(double ** return_value, vtkMatrix4x4 * callingObject, const double in[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::MultiplyDoublePoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->MultiplyDoublePoint(in);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void Multiply4x4(const vtkMatrix4x4 * a, const vtkMatrix4x4 * b, vtkMatrix4x4 * c)
// static void Multiply4x4(const vtkMatrix4x4 *a, const vtkMatrix4x4 *b, vtkMatrix4x4 *c)
TESTDLLSORT_API bool vtkMatrix4x4_Multiply4x4_0(const vtkMatrix4x4 * a, const vtkMatrix4x4 * b, vtkMatrix4x4 * c) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::Multiply4x4]:[";
#endif
	bool success = true;
	vtkMatrix4x4::Multiply4x4(a, b, c);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void Multiply4x4(const double a[16], const double b[16], double c[16])
// static void Multiply4x4(const double a[16], const double b[16], double c[16])
TESTDLLSORT_API bool vtkMatrix4x4_Multiply4x4_1(const double a[16], const double b[16], double c[16]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::Multiply4x4]:[";
#endif
	bool success = true;
	vtkMatrix4x4::Multiply4x4(a, b, c);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Adjoint(const vtkMatrix4x4 * in, vtkMatrix4x4 * out)
// void Adjoint(const vtkMatrix4x4 *in, vtkMatrix4x4 *out)
TESTDLLSORT_API bool vtkMatrix4x4_Adjoint_0(vtkMatrix4x4 * callingObject, const vtkMatrix4x4 * in, vtkMatrix4x4 * out) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::Adjoint]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Adjoint(in, out);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void Adjoint(const double inElements[16], double outElements[16])
// static void Adjoint(const double inElements[16], double outElements[16])
TESTDLLSORT_API bool vtkMatrix4x4_Adjoint_1(const double inElements[16], double outElements[16]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::Adjoint]:[";
#endif
	bool success = true;
	vtkMatrix4x4::Adjoint(inElements, outElements);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double Determinant()
// double Determinant()
TESTDLLSORT_API bool vtkMatrix4x4_Determinant_0(double * return_value, vtkMatrix4x4 * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::Determinant]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Determinant();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double Determinant(const double elements[16])
// static double Determinant(const double elements[16])
TESTDLLSORT_API bool vtkMatrix4x4_Determinant_1(double * return_value, const double elements[16]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::Determinant]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMatrix4x4::Determinant(elements);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetElement(int i, int j, double value)
// void SetElement(int i, int j, double value)
TESTDLLSORT_API bool vtkMatrix4x4_SetElement_0(vtkMatrix4x4 * callingObject, int i, int j, double value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::SetElement]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetElement(i, j, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetElement(int i, int j)
// double GetElement(int i, int j)
TESTDLLSORT_API bool vtkMatrix4x4_GetElement_0(double * return_value, vtkMatrix4x4 * callingObject, int i, int j) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::GetElement]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetElement(i, j);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* GetData()
// double *GetData()
TESTDLLSORT_API bool vtkMatrix4x4_GetData_0(double ** return_value, vtkMatrix4x4 * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMatrix4x4::GetData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetData();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
