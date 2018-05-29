
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkTransform.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTransform* New()
// static vtkTransform *New()
TESTDLLSORT_API bool vtkTransform_New_0(vtkTransform ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkTransform::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkTransform_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkTransform::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkTransform_IsA_0(vtkTypeBool * return_value, vtkTransform * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::IsA]:[";
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

// static vtkTransform* SafeDownCast(vtkObjectBase * o)
// static vtkTransform* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkTransform_SafeDownCast_0(vtkTransform ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkTransform::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTransform* NewInstance()
// vtkTransform *NewInstance()
TESTDLLSORT_API bool vtkTransform_NewInstance_0(vtkTransform ** return_value, vtkTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::NewInstance]:[";
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

// void Identity()
// void Identity()
TESTDLLSORT_API bool vtkTransform_Identity_0(vtkTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::Identity]:[";
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

// void Inverse()
// void Inverse()
TESTDLLSORT_API bool vtkTransform_Inverse_0(vtkTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::Inverse]:[";
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

// void Translate(double x, double y, double z)
// void Translate(double x, double y, double z)
TESTDLLSORT_API bool vtkTransform_Translate_0(vtkTransform * callingObject, double x, double y, double z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::Translate]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Translate(x, y, z);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Translate(const double x[3])
// void Translate(const double x[3])
TESTDLLSORT_API bool vtkTransform_Translate_1(vtkTransform * callingObject, const double x[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::Translate]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Translate(x);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Translate(const float x[3])
// void Translate(const float x[3])
TESTDLLSORT_API bool vtkTransform_Translate_2(vtkTransform * callingObject, const float x[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::Translate]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Translate(x);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void RotateWXYZ(double angle, double x, double y, double z)
// void RotateWXYZ(double angle, double x, double y, double z)
TESTDLLSORT_API bool vtkTransform_RotateWXYZ_0(vtkTransform * callingObject, double angle, double x, double y, double z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::RotateWXYZ]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RotateWXYZ(angle, x, y, z);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void RotateWXYZ(double angle, const double axis[3])
// void RotateWXYZ(double angle, const double axis[3])
TESTDLLSORT_API bool vtkTransform_RotateWXYZ_1(vtkTransform * callingObject, double angle, const double axis[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::RotateWXYZ]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RotateWXYZ(angle, axis);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void RotateWXYZ(double angle, const float axis[3])
// void RotateWXYZ(double angle, const float axis[3])
TESTDLLSORT_API bool vtkTransform_RotateWXYZ_2(vtkTransform * callingObject, double angle, const float axis[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::RotateWXYZ]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RotateWXYZ(angle, axis);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void RotateX(double angle)
// void RotateX(double angle)
TESTDLLSORT_API bool vtkTransform_RotateX_0(vtkTransform * callingObject, double angle) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::RotateX]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RotateX(angle);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void RotateY(double angle)
// void RotateY(double angle)
TESTDLLSORT_API bool vtkTransform_RotateY_0(vtkTransform * callingObject, double angle) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::RotateY]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RotateY(angle);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void RotateZ(double angle)
// void RotateZ(double angle)
TESTDLLSORT_API bool vtkTransform_RotateZ_0(vtkTransform * callingObject, double angle) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::RotateZ]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RotateZ(angle);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Scale(double x, double y, double z)
// void Scale(double x, double y, double z)
TESTDLLSORT_API bool vtkTransform_Scale_0(vtkTransform * callingObject, double x, double y, double z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::Scale]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Scale(x, y, z);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Scale(const double s[3])
// void Scale(const double s[3])
TESTDLLSORT_API bool vtkTransform_Scale_1(vtkTransform * callingObject, const double s[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::Scale]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Scale(s);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Scale(const float s[3])
// void Scale(const float s[3])
TESTDLLSORT_API bool vtkTransform_Scale_2(vtkTransform * callingObject, const float s[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::Scale]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Scale(s);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetMatrix(vtkMatrix4x4 * matrix)
// void SetMatrix(vtkMatrix4x4 *matrix)
TESTDLLSORT_API bool vtkTransform_SetMatrix_0(vtkTransform * callingObject, vtkMatrix4x4 * matrix) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::SetMatrix]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetMatrix(matrix);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetMatrix(const double elements[16])
// void SetMatrix(const double elements[16])
TESTDLLSORT_API bool vtkTransform_SetMatrix_1(vtkTransform * callingObject, const double elements[16]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::SetMatrix]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetMatrix(elements);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Concatenate(vtkMatrix4x4 * matrix)
// void Concatenate(vtkMatrix4x4 *matrix)
TESTDLLSORT_API bool vtkTransform_Concatenate_0(vtkTransform * callingObject, vtkMatrix4x4 * matrix) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::Concatenate]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Concatenate(matrix);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Concatenate(const double elements[16])
// void Concatenate(const double elements[16])
TESTDLLSORT_API bool vtkTransform_Concatenate_1(vtkTransform * callingObject, const double elements[16]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::Concatenate]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Concatenate(elements);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Concatenate(vtkLinearTransform * transform)
// void Concatenate(vtkLinearTransform *transform)
TESTDLLSORT_API bool vtkTransform_Concatenate_2(vtkTransform * callingObject, vtkLinearTransform * transform) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::Concatenate]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Concatenate(transform);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void PreMultiply()
// void PreMultiply()
TESTDLLSORT_API bool vtkTransform_PreMultiply_0(vtkTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::PreMultiply]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->PreMultiply();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void PostMultiply()
// void PostMultiply()
TESTDLLSORT_API bool vtkTransform_PostMultiply_0(vtkTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::PostMultiply]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->PostMultiply();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetNumberOfConcatenatedTransforms()
// int GetNumberOfConcatenatedTransforms()
TESTDLLSORT_API bool vtkTransform_GetNumberOfConcatenatedTransforms_0(int * return_value, vtkTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::GetNumberOfConcatenatedTransforms]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfConcatenatedTransforms();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkLinearTransform* GetConcatenatedTransform(int i)
// vtkLinearTransform *GetConcatenatedTransform(int i)
TESTDLLSORT_API bool vtkTransform_GetConcatenatedTransform_0(vtkLinearTransform ** return_value, vtkTransform * callingObject, int i) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::GetConcatenatedTransform]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetConcatenatedTransform(i);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetOrientation(double orient[3])
// void GetOrientation(double orient[3])
TESTDLLSORT_API bool vtkTransform_GetOrientation_0(vtkTransform * callingObject, double orient[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::GetOrientation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetOrientation(orient);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetOrientation(float orient[3])
// void GetOrientation(float orient[3])
TESTDLLSORT_API bool vtkTransform_GetOrientation_1(vtkTransform * callingObject, float orient[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::GetOrientation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetOrientation(orient);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* GetOrientation()
// double *GetOrientation()
TESTDLLSORT_API bool vtkTransform_GetOrientation_2(double ** return_value, vtkTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::GetOrientation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetOrientation();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void GetOrientation(double orient[3], vtkMatrix4x4 * matrix)
// static void GetOrientation(double orient[3], vtkMatrix4x4 *matrix)
TESTDLLSORT_API bool vtkTransform_GetOrientation_3(double orient[3], vtkMatrix4x4 * matrix) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::GetOrientation]:[";
#endif
	bool success = true;
	vtkTransform::GetOrientation(orient, matrix);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetOrientationWXYZ(double wxyz[4])
// void GetOrientationWXYZ(double wxyz[4])
TESTDLLSORT_API bool vtkTransform_GetOrientationWXYZ_0(vtkTransform * callingObject, double wxyz[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::GetOrientationWXYZ]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetOrientationWXYZ(wxyz);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetOrientationWXYZ(float wxyz[4])
// void GetOrientationWXYZ(float wxyz[4])
TESTDLLSORT_API bool vtkTransform_GetOrientationWXYZ_1(vtkTransform * callingObject, float wxyz[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::GetOrientationWXYZ]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetOrientationWXYZ(wxyz);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* GetOrientationWXYZ()
// double *GetOrientationWXYZ()
TESTDLLSORT_API bool vtkTransform_GetOrientationWXYZ_2(double ** return_value, vtkTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::GetOrientationWXYZ]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetOrientationWXYZ();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetPosition(double pos[3])
// void GetPosition(double pos[3])
TESTDLLSORT_API bool vtkTransform_GetPosition_0(vtkTransform * callingObject, double pos[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::GetPosition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetPosition(pos);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetPosition(float pos[3])
// void GetPosition(float pos[3])
TESTDLLSORT_API bool vtkTransform_GetPosition_1(vtkTransform * callingObject, float pos[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::GetPosition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetPosition(pos);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* GetPosition()
// double *GetPosition()
TESTDLLSORT_API bool vtkTransform_GetPosition_2(double ** return_value, vtkTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::GetPosition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPosition();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetScale(double scale[3])
// void GetScale(double scale[3])
TESTDLLSORT_API bool vtkTransform_GetScale_0(vtkTransform * callingObject, double scale[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::GetScale]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetScale(scale);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetScale(float scale[3])
// void GetScale(float scale[3])
TESTDLLSORT_API bool vtkTransform_GetScale_1(vtkTransform * callingObject, float scale[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::GetScale]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetScale(scale);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* GetScale()
// double *GetScale()
TESTDLLSORT_API bool vtkTransform_GetScale_2(double ** return_value, vtkTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::GetScale]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScale();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetInverse(vtkMatrix4x4 * inverse)
// void GetInverse(vtkMatrix4x4 *inverse)
TESTDLLSORT_API bool vtkTransform_GetInverse_0(vtkTransform * callingObject, vtkMatrix4x4 * inverse) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::GetInverse]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetInverse(inverse);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetTranspose(vtkMatrix4x4 * transpose)
// void GetTranspose(vtkMatrix4x4 *transpose)
TESTDLLSORT_API bool vtkTransform_GetTranspose_0(vtkTransform * callingObject, vtkMatrix4x4 * transpose) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::GetTranspose]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetTranspose(transpose);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetInput(vtkLinearTransform * input)
// void SetInput(vtkLinearTransform *input)
TESTDLLSORT_API bool vtkTransform_SetInput_0(vtkTransform * callingObject, vtkLinearTransform * input) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::SetInput]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetInput(input);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkLinearTransform* GetInput()
// vtkLinearTransform *GetInput()
TESTDLLSORT_API bool vtkTransform_GetInput_0(vtkLinearTransform ** return_value, vtkTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::GetInput]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInput();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetInverseFlag()
// int GetInverseFlag()
TESTDLLSORT_API bool vtkTransform_GetInverseFlag_0(int * return_value, vtkTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::GetInverseFlag]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInverseFlag();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Push()
// void Push()
TESTDLLSORT_API bool vtkTransform_Push_0(vtkTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::Push]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Push();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Pop()
// void Pop()
TESTDLLSORT_API bool vtkTransform_Pop_0(vtkTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::Pop]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Pop();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int CircuitCheck(vtkAbstractTransform * transform)
// int CircuitCheck(vtkAbstractTransform *transform)
TESTDLLSORT_API bool vtkTransform_CircuitCheck_0(int * return_value, vtkTransform * callingObject, vtkAbstractTransform * transform) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::CircuitCheck]:[";
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

// vtkAbstractTransform* GetInverse()
// vtkAbstractTransform *GetInverse()
TESTDLLSORT_API bool vtkTransform_GetInverse_1(vtkAbstractTransform ** return_value, vtkTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::GetInverse]:[";
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

// vtkAbstractTransform* MakeTransform()
// vtkAbstractTransform *MakeTransform()
TESTDLLSORT_API bool vtkTransform_MakeTransform_0(vtkAbstractTransform ** return_value, vtkTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::MakeTransform]:[";
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

// vtkMTimeType GetMTime()
// vtkMTimeType GetMTime()
TESTDLLSORT_API bool vtkTransform_GetMTime_0(vtkMTimeType * return_value, vtkTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::GetMTime]:[";
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

// void MultiplyPoint(const float in[4], float out[4])
// void MultiplyPoint(const float in[4], float out[4])
TESTDLLSORT_API bool vtkTransform_MultiplyPoint_0(vtkTransform * callingObject, const float in[4], float out[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::MultiplyPoint]:[";
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
TESTDLLSORT_API bool vtkTransform_MultiplyPoint_1(vtkTransform * callingObject, const double in[4], double out[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkTransform::MultiplyPoint]:[";
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

}
