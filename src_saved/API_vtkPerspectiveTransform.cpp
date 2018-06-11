
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkPerspectiveTransform.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkPerspectiveTransform* New()
// static vtkPerspectiveTransform *New()
TESTDLLSORT_API bool vtkPerspectiveTransform_New_0(vtkPerspectiveTransform ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPerspectiveTransform::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkPerspectiveTransform_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPerspectiveTransform::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkPerspectiveTransform_IsA_0(vtkTypeBool * return_value, vtkPerspectiveTransform * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::IsA]:[";
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

// static vtkPerspectiveTransform* SafeDownCast(vtkObjectBase * o)
// static vtkPerspectiveTransform* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkPerspectiveTransform_SafeDownCast_0(vtkPerspectiveTransform ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPerspectiveTransform::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkPerspectiveTransform* NewInstance()
// vtkPerspectiveTransform *NewInstance()
TESTDLLSORT_API bool vtkPerspectiveTransform_NewInstance_0(vtkPerspectiveTransform ** return_value, vtkPerspectiveTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::NewInstance]:[";
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
TESTDLLSORT_API bool vtkPerspectiveTransform_Identity_0(vtkPerspectiveTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::Identity]:[";
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
TESTDLLSORT_API bool vtkPerspectiveTransform_Inverse_0(vtkPerspectiveTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::Inverse]:[";
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

// void AdjustViewport(double oldXMin, double oldXMax, double oldYMin, double oldYMax, double newXMin, double newXMax, double newYMin, double newYMax)
// void AdjustViewport(double oldXMin, double oldXMax, double oldYMin, double oldYMax, double newXMin, double newXMax, double newYMin, double newYMax)
TESTDLLSORT_API bool vtkPerspectiveTransform_AdjustViewport_0(vtkPerspectiveTransform * callingObject, double oldXMin, double oldXMax, double oldYMin, double oldYMax, double newXMin, double newXMax, double newYMin, double newYMax) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::AdjustViewport]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AdjustViewport(oldXMin, oldXMax, oldYMin, oldYMax, newXMin, newXMax, newYMin, newYMax);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AdjustZBuffer(double oldNearZ, double oldFarZ, double newNearZ, double newFarZ)
// void AdjustZBuffer(double oldNearZ, double oldFarZ, double newNearZ, double newFarZ)
TESTDLLSORT_API bool vtkPerspectiveTransform_AdjustZBuffer_0(vtkPerspectiveTransform * callingObject, double oldNearZ, double oldFarZ, double newNearZ, double newFarZ) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::AdjustZBuffer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AdjustZBuffer(oldNearZ, oldFarZ, newNearZ, newFarZ);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Ortho(double xmin, double xmax, double ymin, double ymax, double znear, double zfar)
// void Ortho(double xmin, double xmax, double ymin, double ymax, double znear, double zfar)
TESTDLLSORT_API bool vtkPerspectiveTransform_Ortho_0(vtkPerspectiveTransform * callingObject, double xmin, double xmax, double ymin, double ymax, double znear, double zfar) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::Ortho]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Ortho(xmin, xmax, ymin, ymax, znear, zfar);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Frustum(double xmin, double xmax, double ymin, double ymax, double znear, double zfar)
// void Frustum(double xmin, double xmax, double ymin, double ymax, double znear, double zfar)
TESTDLLSORT_API bool vtkPerspectiveTransform_Frustum_0(vtkPerspectiveTransform * callingObject, double xmin, double xmax, double ymin, double ymax, double znear, double zfar) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::Frustum]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Frustum(xmin, xmax, ymin, ymax, znear, zfar);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Perspective(double angle, double aspect, double znear, double zfar)
// void Perspective(double angle, double aspect, double znear, double zfar)
TESTDLLSORT_API bool vtkPerspectiveTransform_Perspective_0(vtkPerspectiveTransform * callingObject, double angle, double aspect, double znear, double zfar) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::Perspective]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Perspective(angle, aspect, znear, zfar);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Shear(double dxdz, double dydz, double zplane)
// void Shear(double dxdz, double dydz, double zplane)
TESTDLLSORT_API bool vtkPerspectiveTransform_Shear_0(vtkPerspectiveTransform * callingObject, double dxdz, double dydz, double zplane) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::Shear]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Shear(dxdz, dydz, zplane);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Stereo(double angle, double focaldistance)
// void Stereo(double angle, double focaldistance)
TESTDLLSORT_API bool vtkPerspectiveTransform_Stereo_0(vtkPerspectiveTransform * callingObject, double angle, double focaldistance) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::Stereo]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Stereo(angle, focaldistance);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetupCamera(const double position[3], const double focalpoint[3], const double viewup[3])
// void SetupCamera(const double position[3], const double focalpoint[3], const double viewup[3])
TESTDLLSORT_API bool vtkPerspectiveTransform_SetupCamera_0(vtkPerspectiveTransform * callingObject, const double position[3], const double focalpoint[3], const double viewup[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::SetupCamera]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetupCamera(position, focalpoint, viewup);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetupCamera(double p0, double p1, double p2, double fp0, double fp1, double fp2, double vup0, double vup1, double vup2)
// void SetupCamera(double p0, double p1, double p2, double fp0, double fp1, double fp2, double vup0, double vup1, double vup2)
TESTDLLSORT_API bool vtkPerspectiveTransform_SetupCamera_1(vtkPerspectiveTransform * callingObject, double p0, double p1, double p2, double fp0, double fp1, double fp2, double vup0, double vup1, double vup2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::SetupCamera]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetupCamera(p0, p1, p2, fp0, fp1, fp2, vup0, vup1, vup2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Translate(double x, double y, double z)
// void Translate(double x, double y, double z)
TESTDLLSORT_API bool vtkPerspectiveTransform_Translate_0(vtkPerspectiveTransform * callingObject, double x, double y, double z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::Translate]:[";
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
TESTDLLSORT_API bool vtkPerspectiveTransform_Translate_1(vtkPerspectiveTransform * callingObject, const double x[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::Translate]:[";
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
TESTDLLSORT_API bool vtkPerspectiveTransform_Translate_2(vtkPerspectiveTransform * callingObject, const float x[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::Translate]:[";
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
TESTDLLSORT_API bool vtkPerspectiveTransform_RotateWXYZ_0(vtkPerspectiveTransform * callingObject, double angle, double x, double y, double z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::RotateWXYZ]:[";
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
TESTDLLSORT_API bool vtkPerspectiveTransform_RotateWXYZ_1(vtkPerspectiveTransform * callingObject, double angle, const double axis[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::RotateWXYZ]:[";
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
TESTDLLSORT_API bool vtkPerspectiveTransform_RotateWXYZ_2(vtkPerspectiveTransform * callingObject, double angle, const float axis[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::RotateWXYZ]:[";
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
TESTDLLSORT_API bool vtkPerspectiveTransform_RotateX_0(vtkPerspectiveTransform * callingObject, double angle) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::RotateX]:[";
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
TESTDLLSORT_API bool vtkPerspectiveTransform_RotateY_0(vtkPerspectiveTransform * callingObject, double angle) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::RotateY]:[";
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
TESTDLLSORT_API bool vtkPerspectiveTransform_RotateZ_0(vtkPerspectiveTransform * callingObject, double angle) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::RotateZ]:[";
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
TESTDLLSORT_API bool vtkPerspectiveTransform_Scale_0(vtkPerspectiveTransform * callingObject, double x, double y, double z) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::Scale]:[";
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
TESTDLLSORT_API bool vtkPerspectiveTransform_Scale_1(vtkPerspectiveTransform * callingObject, const double s[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::Scale]:[";
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
TESTDLLSORT_API bool vtkPerspectiveTransform_Scale_2(vtkPerspectiveTransform * callingObject, const float s[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::Scale]:[";
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
TESTDLLSORT_API bool vtkPerspectiveTransform_SetMatrix_0(vtkPerspectiveTransform * callingObject, vtkMatrix4x4 * matrix) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::SetMatrix]:[";
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
TESTDLLSORT_API bool vtkPerspectiveTransform_SetMatrix_1(vtkPerspectiveTransform * callingObject, const double elements[16]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::SetMatrix]:[";
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
TESTDLLSORT_API bool vtkPerspectiveTransform_Concatenate_0(vtkPerspectiveTransform * callingObject, vtkMatrix4x4 * matrix) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::Concatenate]:[";
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
TESTDLLSORT_API bool vtkPerspectiveTransform_Concatenate_1(vtkPerspectiveTransform * callingObject, const double elements[16]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::Concatenate]:[";
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

// void Concatenate(vtkHomogeneousTransform * transform)
// void Concatenate(vtkHomogeneousTransform *transform)
TESTDLLSORT_API bool vtkPerspectiveTransform_Concatenate_2(vtkPerspectiveTransform * callingObject, vtkHomogeneousTransform * transform) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::Concatenate]:[";
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
TESTDLLSORT_API bool vtkPerspectiveTransform_PreMultiply_0(vtkPerspectiveTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::PreMultiply]:[";
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
TESTDLLSORT_API bool vtkPerspectiveTransform_PostMultiply_0(vtkPerspectiveTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::PostMultiply]:[";
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
TESTDLLSORT_API bool vtkPerspectiveTransform_GetNumberOfConcatenatedTransforms_0(int * return_value, vtkPerspectiveTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::GetNumberOfConcatenatedTransforms]:[";
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

// vtkHomogeneousTransform* GetConcatenatedTransform(int i)
// vtkHomogeneousTransform *GetConcatenatedTransform(int i)
TESTDLLSORT_API bool vtkPerspectiveTransform_GetConcatenatedTransform_0(vtkHomogeneousTransform ** return_value, vtkPerspectiveTransform * callingObject, int i) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::GetConcatenatedTransform]:[";
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

// void SetInput(vtkHomogeneousTransform * input)
// void SetInput(vtkHomogeneousTransform *input)
TESTDLLSORT_API bool vtkPerspectiveTransform_SetInput_0(vtkPerspectiveTransform * callingObject, vtkHomogeneousTransform * input) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::SetInput]:[";
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

// vtkHomogeneousTransform* GetInput()
// vtkHomogeneousTransform *GetInput()
TESTDLLSORT_API bool vtkPerspectiveTransform_GetInput_0(vtkHomogeneousTransform ** return_value, vtkPerspectiveTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::GetInput]:[";
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
TESTDLLSORT_API bool vtkPerspectiveTransform_GetInverseFlag_0(int * return_value, vtkPerspectiveTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::GetInverseFlag]:[";
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
TESTDLLSORT_API bool vtkPerspectiveTransform_Push_0(vtkPerspectiveTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::Push]:[";
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
TESTDLLSORT_API bool vtkPerspectiveTransform_Pop_0(vtkPerspectiveTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::Pop]:[";
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

// vtkAbstractTransform* MakeTransform()
// vtkAbstractTransform *MakeTransform()
TESTDLLSORT_API bool vtkPerspectiveTransform_MakeTransform_0(vtkAbstractTransform ** return_value, vtkPerspectiveTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::MakeTransform]:[";
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

// int CircuitCheck(vtkAbstractTransform * transform)
// int CircuitCheck(vtkAbstractTransform *transform)
TESTDLLSORT_API bool vtkPerspectiveTransform_CircuitCheck_0(int * return_value, vtkPerspectiveTransform * callingObject, vtkAbstractTransform * transform) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::CircuitCheck]:[";
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
TESTDLLSORT_API bool vtkPerspectiveTransform_GetMTime_0(vtkMTimeType * return_value, vtkPerspectiveTransform * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPerspectiveTransform::GetMTime]:[";
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

}
