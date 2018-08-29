
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkMeshQuality.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkMeshQuality_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkMeshQuality_IsA_0(vtkTypeBool * return_value, vtkMeshQuality * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::IsA]:[";
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

// static vtkMeshQuality* SafeDownCast(vtkObjectBase * o)
// static vtkMeshQuality* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkMeshQuality_SafeDownCast_0(vtkMeshQuality ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkMeshQuality* NewInstance()
// vtkMeshQuality *NewInstance()
TESTDLLSORT_API bool vtkMeshQuality_NewInstance_0(vtkMeshQuality ** return_value, vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::NewInstance]:[";
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

// static vtkMeshQuality* New()
// static vtkMeshQuality* New()
TESTDLLSORT_API bool vtkMeshQuality_New_0(vtkMeshQuality ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetSaveCellQuality(int _arg)
// virtual void SetSaveCellQuality (int _arg)
TESTDLLSORT_API bool vtkMeshQuality_SetSaveCellQuality_0(vtkMeshQuality * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetSaveCellQuality]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetSaveCellQuality(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetSaveCellQuality()
// virtual int GetSaveCellQuality ()
TESTDLLSORT_API bool vtkMeshQuality_GetSaveCellQuality_0(int * return_value, vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::GetSaveCellQuality]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetSaveCellQuality();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SaveCellQualityOn()
// virtual void SaveCellQualityOn ()
TESTDLLSORT_API bool vtkMeshQuality_SaveCellQualityOn_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SaveCellQualityOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SaveCellQualityOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SaveCellQualityOff()
// virtual void SaveCellQualityOff ()
TESTDLLSORT_API bool vtkMeshQuality_SaveCellQualityOff_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SaveCellQualityOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SaveCellQualityOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetTriangleQualityMeasure(int _arg)
// virtual void SetTriangleQualityMeasure (int _arg)
TESTDLLSORT_API bool vtkMeshQuality_SetTriangleQualityMeasure_0(vtkMeshQuality * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTriangleQualityMeasure]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTriangleQualityMeasure(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetTriangleQualityMeasure()
// virtual int GetTriangleQualityMeasure ()
TESTDLLSORT_API bool vtkMeshQuality_GetTriangleQualityMeasure_0(int * return_value, vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::GetTriangleQualityMeasure]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTriangleQualityMeasure();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTriangleQualityMeasureToArea()
// void SetTriangleQualityMeasureToArea()
TESTDLLSORT_API bool vtkMeshQuality_SetTriangleQualityMeasureToArea_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTriangleQualityMeasureToArea]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTriangleQualityMeasureToArea();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTriangleQualityMeasureToEdgeRatio()
// void SetTriangleQualityMeasureToEdgeRatio()
TESTDLLSORT_API bool vtkMeshQuality_SetTriangleQualityMeasureToEdgeRatio_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTriangleQualityMeasureToEdgeRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTriangleQualityMeasureToEdgeRatio();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTriangleQualityMeasureToAspectRatio()
// void SetTriangleQualityMeasureToAspectRatio()
TESTDLLSORT_API bool vtkMeshQuality_SetTriangleQualityMeasureToAspectRatio_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTriangleQualityMeasureToAspectRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTriangleQualityMeasureToAspectRatio();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTriangleQualityMeasureToRadiusRatio()
// void SetTriangleQualityMeasureToRadiusRatio()
TESTDLLSORT_API bool vtkMeshQuality_SetTriangleQualityMeasureToRadiusRatio_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTriangleQualityMeasureToRadiusRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTriangleQualityMeasureToRadiusRatio();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTriangleQualityMeasureToAspectFrobenius()
// void SetTriangleQualityMeasureToAspectFrobenius()
TESTDLLSORT_API bool vtkMeshQuality_SetTriangleQualityMeasureToAspectFrobenius_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTriangleQualityMeasureToAspectFrobenius]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTriangleQualityMeasureToAspectFrobenius();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTriangleQualityMeasureToMinAngle()
// void SetTriangleQualityMeasureToMinAngle()
TESTDLLSORT_API bool vtkMeshQuality_SetTriangleQualityMeasureToMinAngle_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTriangleQualityMeasureToMinAngle]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTriangleQualityMeasureToMinAngle();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTriangleQualityMeasureToMaxAngle()
// void SetTriangleQualityMeasureToMaxAngle()
TESTDLLSORT_API bool vtkMeshQuality_SetTriangleQualityMeasureToMaxAngle_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTriangleQualityMeasureToMaxAngle]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTriangleQualityMeasureToMaxAngle();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTriangleQualityMeasureToCondition()
// void SetTriangleQualityMeasureToCondition()
TESTDLLSORT_API bool vtkMeshQuality_SetTriangleQualityMeasureToCondition_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTriangleQualityMeasureToCondition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTriangleQualityMeasureToCondition();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTriangleQualityMeasureToScaledJacobian()
// void SetTriangleQualityMeasureToScaledJacobian()
TESTDLLSORT_API bool vtkMeshQuality_SetTriangleQualityMeasureToScaledJacobian_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTriangleQualityMeasureToScaledJacobian]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTriangleQualityMeasureToScaledJacobian();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTriangleQualityMeasureToRelativeSizeSquared()
// void SetTriangleQualityMeasureToRelativeSizeSquared()
TESTDLLSORT_API bool vtkMeshQuality_SetTriangleQualityMeasureToRelativeSizeSquared_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTriangleQualityMeasureToRelativeSizeSquared]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTriangleQualityMeasureToRelativeSizeSquared();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTriangleQualityMeasureToShape()
// void SetTriangleQualityMeasureToShape()
TESTDLLSORT_API bool vtkMeshQuality_SetTriangleQualityMeasureToShape_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTriangleQualityMeasureToShape]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTriangleQualityMeasureToShape();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTriangleQualityMeasureToShapeAndSize()
// void SetTriangleQualityMeasureToShapeAndSize()
TESTDLLSORT_API bool vtkMeshQuality_SetTriangleQualityMeasureToShapeAndSize_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTriangleQualityMeasureToShapeAndSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTriangleQualityMeasureToShapeAndSize();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTriangleQualityMeasureToDistortion()
// void SetTriangleQualityMeasureToDistortion()
TESTDLLSORT_API bool vtkMeshQuality_SetTriangleQualityMeasureToDistortion_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTriangleQualityMeasureToDistortion]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTriangleQualityMeasureToDistortion();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetQuadQualityMeasure(int _arg)
// virtual void SetQuadQualityMeasure (int _arg)
TESTDLLSORT_API bool vtkMeshQuality_SetQuadQualityMeasure_0(vtkMeshQuality * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetQuadQualityMeasure]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetQuadQualityMeasure(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetQuadQualityMeasure()
// virtual int GetQuadQualityMeasure ()
TESTDLLSORT_API bool vtkMeshQuality_GetQuadQualityMeasure_0(int * return_value, vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::GetQuadQualityMeasure]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetQuadQualityMeasure();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetQuadQualityMeasureToEdgeRatio()
// void SetQuadQualityMeasureToEdgeRatio()
TESTDLLSORT_API bool vtkMeshQuality_SetQuadQualityMeasureToEdgeRatio_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetQuadQualityMeasureToEdgeRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetQuadQualityMeasureToEdgeRatio();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetQuadQualityMeasureToAspectRatio()
// void SetQuadQualityMeasureToAspectRatio()
TESTDLLSORT_API bool vtkMeshQuality_SetQuadQualityMeasureToAspectRatio_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetQuadQualityMeasureToAspectRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetQuadQualityMeasureToAspectRatio();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetQuadQualityMeasureToRadiusRatio()
// void SetQuadQualityMeasureToRadiusRatio()
TESTDLLSORT_API bool vtkMeshQuality_SetQuadQualityMeasureToRadiusRatio_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetQuadQualityMeasureToRadiusRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetQuadQualityMeasureToRadiusRatio();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetQuadQualityMeasureToMedAspectFrobenius()
// void SetQuadQualityMeasureToMedAspectFrobenius()
TESTDLLSORT_API bool vtkMeshQuality_SetQuadQualityMeasureToMedAspectFrobenius_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetQuadQualityMeasureToMedAspectFrobenius]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetQuadQualityMeasureToMedAspectFrobenius();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetQuadQualityMeasureToMaxAspectFrobenius()
// void SetQuadQualityMeasureToMaxAspectFrobenius()
TESTDLLSORT_API bool vtkMeshQuality_SetQuadQualityMeasureToMaxAspectFrobenius_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetQuadQualityMeasureToMaxAspectFrobenius]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetQuadQualityMeasureToMaxAspectFrobenius();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetQuadQualityMeasureToMaxEdgeRatios()
// void SetQuadQualityMeasureToMaxEdgeRatios()
TESTDLLSORT_API bool vtkMeshQuality_SetQuadQualityMeasureToMaxEdgeRatios_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetQuadQualityMeasureToMaxEdgeRatios]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetQuadQualityMeasureToMaxEdgeRatios();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetQuadQualityMeasureToSkew()
// void SetQuadQualityMeasureToSkew()
TESTDLLSORT_API bool vtkMeshQuality_SetQuadQualityMeasureToSkew_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetQuadQualityMeasureToSkew]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetQuadQualityMeasureToSkew();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetQuadQualityMeasureToTaper()
// void SetQuadQualityMeasureToTaper()
TESTDLLSORT_API bool vtkMeshQuality_SetQuadQualityMeasureToTaper_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetQuadQualityMeasureToTaper]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetQuadQualityMeasureToTaper();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetQuadQualityMeasureToWarpage()
// void SetQuadQualityMeasureToWarpage()
TESTDLLSORT_API bool vtkMeshQuality_SetQuadQualityMeasureToWarpage_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetQuadQualityMeasureToWarpage]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetQuadQualityMeasureToWarpage();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetQuadQualityMeasureToArea()
// void SetQuadQualityMeasureToArea()
TESTDLLSORT_API bool vtkMeshQuality_SetQuadQualityMeasureToArea_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetQuadQualityMeasureToArea]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetQuadQualityMeasureToArea();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetQuadQualityMeasureToStretch()
// void SetQuadQualityMeasureToStretch()
TESTDLLSORT_API bool vtkMeshQuality_SetQuadQualityMeasureToStretch_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetQuadQualityMeasureToStretch]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetQuadQualityMeasureToStretch();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetQuadQualityMeasureToMinAngle()
// void SetQuadQualityMeasureToMinAngle()
TESTDLLSORT_API bool vtkMeshQuality_SetQuadQualityMeasureToMinAngle_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetQuadQualityMeasureToMinAngle]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetQuadQualityMeasureToMinAngle();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetQuadQualityMeasureToMaxAngle()
// void SetQuadQualityMeasureToMaxAngle()
TESTDLLSORT_API bool vtkMeshQuality_SetQuadQualityMeasureToMaxAngle_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetQuadQualityMeasureToMaxAngle]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetQuadQualityMeasureToMaxAngle();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetQuadQualityMeasureToOddy()
// void SetQuadQualityMeasureToOddy()
TESTDLLSORT_API bool vtkMeshQuality_SetQuadQualityMeasureToOddy_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetQuadQualityMeasureToOddy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetQuadQualityMeasureToOddy();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetQuadQualityMeasureToCondition()
// void SetQuadQualityMeasureToCondition()
TESTDLLSORT_API bool vtkMeshQuality_SetQuadQualityMeasureToCondition_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetQuadQualityMeasureToCondition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetQuadQualityMeasureToCondition();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetQuadQualityMeasureToJacobian()
// void SetQuadQualityMeasureToJacobian()
TESTDLLSORT_API bool vtkMeshQuality_SetQuadQualityMeasureToJacobian_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetQuadQualityMeasureToJacobian]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetQuadQualityMeasureToJacobian();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetQuadQualityMeasureToScaledJacobian()
// void SetQuadQualityMeasureToScaledJacobian()
TESTDLLSORT_API bool vtkMeshQuality_SetQuadQualityMeasureToScaledJacobian_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetQuadQualityMeasureToScaledJacobian]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetQuadQualityMeasureToScaledJacobian();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetQuadQualityMeasureToShear()
// void SetQuadQualityMeasureToShear()
TESTDLLSORT_API bool vtkMeshQuality_SetQuadQualityMeasureToShear_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetQuadQualityMeasureToShear]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetQuadQualityMeasureToShear();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetQuadQualityMeasureToShape()
// void SetQuadQualityMeasureToShape()
TESTDLLSORT_API bool vtkMeshQuality_SetQuadQualityMeasureToShape_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetQuadQualityMeasureToShape]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetQuadQualityMeasureToShape();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetQuadQualityMeasureToRelativeSizeSquared()
// void SetQuadQualityMeasureToRelativeSizeSquared()
TESTDLLSORT_API bool vtkMeshQuality_SetQuadQualityMeasureToRelativeSizeSquared_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetQuadQualityMeasureToRelativeSizeSquared]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetQuadQualityMeasureToRelativeSizeSquared();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetQuadQualityMeasureToShapeAndSize()
// void SetQuadQualityMeasureToShapeAndSize()
TESTDLLSORT_API bool vtkMeshQuality_SetQuadQualityMeasureToShapeAndSize_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetQuadQualityMeasureToShapeAndSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetQuadQualityMeasureToShapeAndSize();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetQuadQualityMeasureToShearAndSize()
// void SetQuadQualityMeasureToShearAndSize()
TESTDLLSORT_API bool vtkMeshQuality_SetQuadQualityMeasureToShearAndSize_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetQuadQualityMeasureToShearAndSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetQuadQualityMeasureToShearAndSize();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetQuadQualityMeasureToDistortion()
// void SetQuadQualityMeasureToDistortion()
TESTDLLSORT_API bool vtkMeshQuality_SetQuadQualityMeasureToDistortion_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetQuadQualityMeasureToDistortion]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetQuadQualityMeasureToDistortion();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetTetQualityMeasure(int _arg)
// virtual void SetTetQualityMeasure (int _arg)
TESTDLLSORT_API bool vtkMeshQuality_SetTetQualityMeasure_0(vtkMeshQuality * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTetQualityMeasure]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTetQualityMeasure(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetTetQualityMeasure()
// virtual int GetTetQualityMeasure ()
TESTDLLSORT_API bool vtkMeshQuality_GetTetQualityMeasure_0(int * return_value, vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::GetTetQualityMeasure]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTetQualityMeasure();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTetQualityMeasureToEdgeRatio()
// void SetTetQualityMeasureToEdgeRatio()
TESTDLLSORT_API bool vtkMeshQuality_SetTetQualityMeasureToEdgeRatio_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTetQualityMeasureToEdgeRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTetQualityMeasureToEdgeRatio();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTetQualityMeasureToAspectRatio()
// void SetTetQualityMeasureToAspectRatio()
TESTDLLSORT_API bool vtkMeshQuality_SetTetQualityMeasureToAspectRatio_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTetQualityMeasureToAspectRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTetQualityMeasureToAspectRatio();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTetQualityMeasureToRadiusRatio()
// void SetTetQualityMeasureToRadiusRatio()
TESTDLLSORT_API bool vtkMeshQuality_SetTetQualityMeasureToRadiusRatio_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTetQualityMeasureToRadiusRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTetQualityMeasureToRadiusRatio();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTetQualityMeasureToAspectFrobenius()
// void SetTetQualityMeasureToAspectFrobenius()
TESTDLLSORT_API bool vtkMeshQuality_SetTetQualityMeasureToAspectFrobenius_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTetQualityMeasureToAspectFrobenius]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTetQualityMeasureToAspectFrobenius();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTetQualityMeasureToMinAngle()
// void SetTetQualityMeasureToMinAngle()
TESTDLLSORT_API bool vtkMeshQuality_SetTetQualityMeasureToMinAngle_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTetQualityMeasureToMinAngle]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTetQualityMeasureToMinAngle();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTetQualityMeasureToCollapseRatio()
// void SetTetQualityMeasureToCollapseRatio()
TESTDLLSORT_API bool vtkMeshQuality_SetTetQualityMeasureToCollapseRatio_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTetQualityMeasureToCollapseRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTetQualityMeasureToCollapseRatio();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTetQualityMeasureToAspectBeta()
// void SetTetQualityMeasureToAspectBeta()
TESTDLLSORT_API bool vtkMeshQuality_SetTetQualityMeasureToAspectBeta_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTetQualityMeasureToAspectBeta]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTetQualityMeasureToAspectBeta();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTetQualityMeasureToAspectGamma()
// void SetTetQualityMeasureToAspectGamma()
TESTDLLSORT_API bool vtkMeshQuality_SetTetQualityMeasureToAspectGamma_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTetQualityMeasureToAspectGamma]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTetQualityMeasureToAspectGamma();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTetQualityMeasureToVolume()
// void SetTetQualityMeasureToVolume()
TESTDLLSORT_API bool vtkMeshQuality_SetTetQualityMeasureToVolume_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTetQualityMeasureToVolume]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTetQualityMeasureToVolume();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTetQualityMeasureToCondition()
// void SetTetQualityMeasureToCondition()
TESTDLLSORT_API bool vtkMeshQuality_SetTetQualityMeasureToCondition_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTetQualityMeasureToCondition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTetQualityMeasureToCondition();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTetQualityMeasureToJacobian()
// void SetTetQualityMeasureToJacobian()
TESTDLLSORT_API bool vtkMeshQuality_SetTetQualityMeasureToJacobian_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTetQualityMeasureToJacobian]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTetQualityMeasureToJacobian();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTetQualityMeasureToScaledJacobian()
// void SetTetQualityMeasureToScaledJacobian()
TESTDLLSORT_API bool vtkMeshQuality_SetTetQualityMeasureToScaledJacobian_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTetQualityMeasureToScaledJacobian]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTetQualityMeasureToScaledJacobian();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTetQualityMeasureToShape()
// void SetTetQualityMeasureToShape()
TESTDLLSORT_API bool vtkMeshQuality_SetTetQualityMeasureToShape_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTetQualityMeasureToShape]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTetQualityMeasureToShape();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTetQualityMeasureToRelativeSizeSquared()
// void SetTetQualityMeasureToRelativeSizeSquared()
TESTDLLSORT_API bool vtkMeshQuality_SetTetQualityMeasureToRelativeSizeSquared_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTetQualityMeasureToRelativeSizeSquared]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTetQualityMeasureToRelativeSizeSquared();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTetQualityMeasureToShapeAndSize()
// void SetTetQualityMeasureToShapeAndSize()
TESTDLLSORT_API bool vtkMeshQuality_SetTetQualityMeasureToShapeAndSize_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTetQualityMeasureToShapeAndSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTetQualityMeasureToShapeAndSize();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTetQualityMeasureToDistortion()
// void SetTetQualityMeasureToDistortion()
TESTDLLSORT_API bool vtkMeshQuality_SetTetQualityMeasureToDistortion_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetTetQualityMeasureToDistortion]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTetQualityMeasureToDistortion();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetHexQualityMeasure(int _arg)
// virtual void SetHexQualityMeasure (int _arg)
TESTDLLSORT_API bool vtkMeshQuality_SetHexQualityMeasure_0(vtkMeshQuality * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetHexQualityMeasure]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetHexQualityMeasure(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetHexQualityMeasure()
// virtual int GetHexQualityMeasure ()
TESTDLLSORT_API bool vtkMeshQuality_GetHexQualityMeasure_0(int * return_value, vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::GetHexQualityMeasure]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetHexQualityMeasure();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetHexQualityMeasureToEdgeRatio()
// void SetHexQualityMeasureToEdgeRatio()
TESTDLLSORT_API bool vtkMeshQuality_SetHexQualityMeasureToEdgeRatio_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetHexQualityMeasureToEdgeRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetHexQualityMeasureToEdgeRatio();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetHexQualityMeasureToMedAspectFrobenius()
// void SetHexQualityMeasureToMedAspectFrobenius()
TESTDLLSORT_API bool vtkMeshQuality_SetHexQualityMeasureToMedAspectFrobenius_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetHexQualityMeasureToMedAspectFrobenius]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetHexQualityMeasureToMedAspectFrobenius();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetHexQualityMeasureToMaxAspectFrobenius()
// void SetHexQualityMeasureToMaxAspectFrobenius()
TESTDLLSORT_API bool vtkMeshQuality_SetHexQualityMeasureToMaxAspectFrobenius_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetHexQualityMeasureToMaxAspectFrobenius]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetHexQualityMeasureToMaxAspectFrobenius();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetHexQualityMeasureToMaxEdgeRatios()
// void SetHexQualityMeasureToMaxEdgeRatios()
TESTDLLSORT_API bool vtkMeshQuality_SetHexQualityMeasureToMaxEdgeRatios_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetHexQualityMeasureToMaxEdgeRatios]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetHexQualityMeasureToMaxEdgeRatios();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetHexQualityMeasureToSkew()
// void SetHexQualityMeasureToSkew()
TESTDLLSORT_API bool vtkMeshQuality_SetHexQualityMeasureToSkew_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetHexQualityMeasureToSkew]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetHexQualityMeasureToSkew();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetHexQualityMeasureToTaper()
// void SetHexQualityMeasureToTaper()
TESTDLLSORT_API bool vtkMeshQuality_SetHexQualityMeasureToTaper_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetHexQualityMeasureToTaper]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetHexQualityMeasureToTaper();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetHexQualityMeasureToVolume()
// void SetHexQualityMeasureToVolume()
TESTDLLSORT_API bool vtkMeshQuality_SetHexQualityMeasureToVolume_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetHexQualityMeasureToVolume]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetHexQualityMeasureToVolume();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetHexQualityMeasureToStretch()
// void SetHexQualityMeasureToStretch()
TESTDLLSORT_API bool vtkMeshQuality_SetHexQualityMeasureToStretch_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetHexQualityMeasureToStretch]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetHexQualityMeasureToStretch();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetHexQualityMeasureToDiagonal()
// void SetHexQualityMeasureToDiagonal()
TESTDLLSORT_API bool vtkMeshQuality_SetHexQualityMeasureToDiagonal_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetHexQualityMeasureToDiagonal]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetHexQualityMeasureToDiagonal();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetHexQualityMeasureToDimension()
// void SetHexQualityMeasureToDimension()
TESTDLLSORT_API bool vtkMeshQuality_SetHexQualityMeasureToDimension_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetHexQualityMeasureToDimension]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetHexQualityMeasureToDimension();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetHexQualityMeasureToOddy()
// void SetHexQualityMeasureToOddy()
TESTDLLSORT_API bool vtkMeshQuality_SetHexQualityMeasureToOddy_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetHexQualityMeasureToOddy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetHexQualityMeasureToOddy();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetHexQualityMeasureToCondition()
// void SetHexQualityMeasureToCondition()
TESTDLLSORT_API bool vtkMeshQuality_SetHexQualityMeasureToCondition_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetHexQualityMeasureToCondition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetHexQualityMeasureToCondition();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetHexQualityMeasureToJacobian()
// void SetHexQualityMeasureToJacobian()
TESTDLLSORT_API bool vtkMeshQuality_SetHexQualityMeasureToJacobian_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetHexQualityMeasureToJacobian]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetHexQualityMeasureToJacobian();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetHexQualityMeasureToScaledJacobian()
// void SetHexQualityMeasureToScaledJacobian()
TESTDLLSORT_API bool vtkMeshQuality_SetHexQualityMeasureToScaledJacobian_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetHexQualityMeasureToScaledJacobian]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetHexQualityMeasureToScaledJacobian();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetHexQualityMeasureToShear()
// void SetHexQualityMeasureToShear()
TESTDLLSORT_API bool vtkMeshQuality_SetHexQualityMeasureToShear_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetHexQualityMeasureToShear]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetHexQualityMeasureToShear();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetHexQualityMeasureToShape()
// void SetHexQualityMeasureToShape()
TESTDLLSORT_API bool vtkMeshQuality_SetHexQualityMeasureToShape_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetHexQualityMeasureToShape]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetHexQualityMeasureToShape();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetHexQualityMeasureToRelativeSizeSquared()
// void SetHexQualityMeasureToRelativeSizeSquared()
TESTDLLSORT_API bool vtkMeshQuality_SetHexQualityMeasureToRelativeSizeSquared_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetHexQualityMeasureToRelativeSizeSquared]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetHexQualityMeasureToRelativeSizeSquared();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetHexQualityMeasureToShapeAndSize()
// void SetHexQualityMeasureToShapeAndSize()
TESTDLLSORT_API bool vtkMeshQuality_SetHexQualityMeasureToShapeAndSize_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetHexQualityMeasureToShapeAndSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetHexQualityMeasureToShapeAndSize();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetHexQualityMeasureToShearAndSize()
// void SetHexQualityMeasureToShearAndSize()
TESTDLLSORT_API bool vtkMeshQuality_SetHexQualityMeasureToShearAndSize_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetHexQualityMeasureToShearAndSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetHexQualityMeasureToShearAndSize();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetHexQualityMeasureToDistortion()
// void SetHexQualityMeasureToDistortion()
TESTDLLSORT_API bool vtkMeshQuality_SetHexQualityMeasureToDistortion_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetHexQualityMeasureToDistortion]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetHexQualityMeasureToDistortion();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TriangleArea(vtkCell * cell)
// static double TriangleArea( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TriangleArea_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TriangleArea]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TriangleArea(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TriangleEdgeRatio(vtkCell * cell)
// static double TriangleEdgeRatio( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TriangleEdgeRatio_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TriangleEdgeRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TriangleEdgeRatio(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TriangleAspectRatio(vtkCell * cell)
// static double TriangleAspectRatio( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TriangleAspectRatio_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TriangleAspectRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TriangleAspectRatio(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TriangleRadiusRatio(vtkCell * cell)
// static double TriangleRadiusRatio( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TriangleRadiusRatio_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TriangleRadiusRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TriangleRadiusRatio(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TriangleAspectFrobenius(vtkCell * cell)
// static double TriangleAspectFrobenius( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TriangleAspectFrobenius_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TriangleAspectFrobenius]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TriangleAspectFrobenius(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TriangleMinAngle(vtkCell * cell)
// static double TriangleMinAngle( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TriangleMinAngle_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TriangleMinAngle]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TriangleMinAngle(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TriangleMaxAngle(vtkCell * cell)
// static double TriangleMaxAngle( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TriangleMaxAngle_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TriangleMaxAngle]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TriangleMaxAngle(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TriangleCondition(vtkCell * cell)
// static double TriangleCondition( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TriangleCondition_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TriangleCondition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TriangleCondition(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TriangleScaledJacobian(vtkCell * cell)
// static double TriangleScaledJacobian( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TriangleScaledJacobian_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TriangleScaledJacobian]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TriangleScaledJacobian(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TriangleRelativeSizeSquared(vtkCell * cell)
// static double TriangleRelativeSizeSquared( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TriangleRelativeSizeSquared_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TriangleRelativeSizeSquared]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TriangleRelativeSizeSquared(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TriangleShape(vtkCell * cell)
// static double TriangleShape( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TriangleShape_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TriangleShape]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TriangleShape(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TriangleShapeAndSize(vtkCell * cell)
// static double TriangleShapeAndSize( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TriangleShapeAndSize_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TriangleShapeAndSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TriangleShapeAndSize(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TriangleDistortion(vtkCell * cell)
// static double TriangleDistortion( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TriangleDistortion_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TriangleDistortion]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TriangleDistortion(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double QuadEdgeRatio(vtkCell * cell)
// static double QuadEdgeRatio( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_QuadEdgeRatio_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::QuadEdgeRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::QuadEdgeRatio(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double QuadAspectRatio(vtkCell * cell)
// static double QuadAspectRatio( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_QuadAspectRatio_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::QuadAspectRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::QuadAspectRatio(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double QuadRadiusRatio(vtkCell * cell)
// static double QuadRadiusRatio( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_QuadRadiusRatio_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::QuadRadiusRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::QuadRadiusRatio(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double QuadMedAspectFrobenius(vtkCell * cell)
// static double QuadMedAspectFrobenius( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_QuadMedAspectFrobenius_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::QuadMedAspectFrobenius]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::QuadMedAspectFrobenius(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double QuadMaxAspectFrobenius(vtkCell * cell)
// static double QuadMaxAspectFrobenius( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_QuadMaxAspectFrobenius_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::QuadMaxAspectFrobenius]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::QuadMaxAspectFrobenius(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double QuadMinAngle(vtkCell * cell)
// static double QuadMinAngle( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_QuadMinAngle_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::QuadMinAngle]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::QuadMinAngle(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double QuadMaxEdgeRatios(vtkCell * cell)
// static double QuadMaxEdgeRatios( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_QuadMaxEdgeRatios_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::QuadMaxEdgeRatios]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::QuadMaxEdgeRatios(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double QuadSkew(vtkCell * cell)
// static double QuadSkew( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_QuadSkew_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::QuadSkew]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::QuadSkew(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double QuadTaper(vtkCell * cell)
// static double QuadTaper( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_QuadTaper_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::QuadTaper]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::QuadTaper(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double QuadWarpage(vtkCell * cell)
// static double QuadWarpage( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_QuadWarpage_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::QuadWarpage]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::QuadWarpage(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double QuadArea(vtkCell * cell)
// static double QuadArea( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_QuadArea_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::QuadArea]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::QuadArea(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double QuadStretch(vtkCell * cell)
// static double QuadStretch( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_QuadStretch_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::QuadStretch]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::QuadStretch(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double QuadMaxAngle(vtkCell * cell)
// static double QuadMaxAngle( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_QuadMaxAngle_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::QuadMaxAngle]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::QuadMaxAngle(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double QuadOddy(vtkCell * cell)
// static double QuadOddy( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_QuadOddy_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::QuadOddy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::QuadOddy(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double QuadCondition(vtkCell * cell)
// static double QuadCondition( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_QuadCondition_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::QuadCondition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::QuadCondition(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double QuadJacobian(vtkCell * cell)
// static double QuadJacobian( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_QuadJacobian_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::QuadJacobian]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::QuadJacobian(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double QuadScaledJacobian(vtkCell * cell)
// static double QuadScaledJacobian( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_QuadScaledJacobian_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::QuadScaledJacobian]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::QuadScaledJacobian(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double QuadShear(vtkCell * cell)
// static double QuadShear( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_QuadShear_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::QuadShear]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::QuadShear(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double QuadShape(vtkCell * cell)
// static double QuadShape( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_QuadShape_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::QuadShape]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::QuadShape(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double QuadRelativeSizeSquared(vtkCell * cell)
// static double QuadRelativeSizeSquared( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_QuadRelativeSizeSquared_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::QuadRelativeSizeSquared]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::QuadRelativeSizeSquared(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double QuadShapeAndSize(vtkCell * cell)
// static double QuadShapeAndSize( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_QuadShapeAndSize_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::QuadShapeAndSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::QuadShapeAndSize(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double QuadShearAndSize(vtkCell * cell)
// static double QuadShearAndSize( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_QuadShearAndSize_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::QuadShearAndSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::QuadShearAndSize(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double QuadDistortion(vtkCell * cell)
// static double QuadDistortion( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_QuadDistortion_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::QuadDistortion]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::QuadDistortion(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TetEdgeRatio(vtkCell * cell)
// static double TetEdgeRatio( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TetEdgeRatio_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TetEdgeRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TetEdgeRatio(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TetAspectRatio(vtkCell * cell)
// static double TetAspectRatio( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TetAspectRatio_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TetAspectRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TetAspectRatio(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TetRadiusRatio(vtkCell * cell)
// static double TetRadiusRatio( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TetRadiusRatio_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TetRadiusRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TetRadiusRatio(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TetAspectFrobenius(vtkCell * cell)
// static double TetAspectFrobenius( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TetAspectFrobenius_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TetAspectFrobenius]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TetAspectFrobenius(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TetMinAngle(vtkCell * cell)
// static double TetMinAngle( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TetMinAngle_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TetMinAngle]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TetMinAngle(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TetCollapseRatio(vtkCell * cell)
// static double TetCollapseRatio( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TetCollapseRatio_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TetCollapseRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TetCollapseRatio(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TetAspectBeta(vtkCell * cell)
// static double TetAspectBeta( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TetAspectBeta_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TetAspectBeta]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TetAspectBeta(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TetAspectGamma(vtkCell * cell)
// static double TetAspectGamma( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TetAspectGamma_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TetAspectGamma]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TetAspectGamma(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TetVolume(vtkCell * cell)
// static double TetVolume( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TetVolume_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TetVolume]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TetVolume(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TetCondition(vtkCell * cell)
// static double TetCondition( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TetCondition_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TetCondition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TetCondition(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TetJacobian(vtkCell * cell)
// static double TetJacobian( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TetJacobian_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TetJacobian]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TetJacobian(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TetScaledJacobian(vtkCell * cell)
// static double TetScaledJacobian( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TetScaledJacobian_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TetScaledJacobian]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TetScaledJacobian(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TetShape(vtkCell * cell)
// static double TetShape( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TetShape_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TetShape]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TetShape(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TetRelativeSizeSquared(vtkCell * cell)
// static double TetRelativeSizeSquared( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TetRelativeSizeSquared_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TetRelativeSizeSquared]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TetRelativeSizeSquared(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TetShapeandSize(vtkCell * cell)
// static double TetShapeandSize( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TetShapeandSize_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TetShapeandSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TetShapeandSize(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double TetDistortion(vtkCell * cell)
// static double TetDistortion( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_TetDistortion_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::TetDistortion]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::TetDistortion(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double HexEdgeRatio(vtkCell * cell)
// static double HexEdgeRatio( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_HexEdgeRatio_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::HexEdgeRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::HexEdgeRatio(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double HexMedAspectFrobenius(vtkCell * cell)
// static double HexMedAspectFrobenius( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_HexMedAspectFrobenius_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::HexMedAspectFrobenius]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::HexMedAspectFrobenius(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double HexMaxAspectFrobenius(vtkCell * cell)
// static double HexMaxAspectFrobenius( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_HexMaxAspectFrobenius_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::HexMaxAspectFrobenius]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::HexMaxAspectFrobenius(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double HexMaxEdgeRatio(vtkCell * cell)
// static double HexMaxEdgeRatio( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_HexMaxEdgeRatio_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::HexMaxEdgeRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::HexMaxEdgeRatio(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double HexSkew(vtkCell * cell)
// static double HexSkew( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_HexSkew_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::HexSkew]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::HexSkew(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double HexTaper(vtkCell * cell)
// static double HexTaper( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_HexTaper_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::HexTaper]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::HexTaper(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double HexVolume(vtkCell * cell)
// static double HexVolume( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_HexVolume_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::HexVolume]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::HexVolume(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double HexStretch(vtkCell * cell)
// static double HexStretch( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_HexStretch_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::HexStretch]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::HexStretch(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double HexDiagonal(vtkCell * cell)
// static double HexDiagonal( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_HexDiagonal_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::HexDiagonal]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::HexDiagonal(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double HexDimension(vtkCell * cell)
// static double HexDimension( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_HexDimension_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::HexDimension]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::HexDimension(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double HexOddy(vtkCell * cell)
// static double HexOddy( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_HexOddy_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::HexOddy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::HexOddy(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double HexCondition(vtkCell * cell)
// static double HexCondition( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_HexCondition_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::HexCondition]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::HexCondition(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double HexJacobian(vtkCell * cell)
// static double HexJacobian( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_HexJacobian_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::HexJacobian]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::HexJacobian(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double HexScaledJacobian(vtkCell * cell)
// static double HexScaledJacobian( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_HexScaledJacobian_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::HexScaledJacobian]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::HexScaledJacobian(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double HexShear(vtkCell * cell)
// static double HexShear( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_HexShear_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::HexShear]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::HexShear(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double HexShape(vtkCell * cell)
// static double HexShape( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_HexShape_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::HexShape]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::HexShape(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double HexRelativeSizeSquared(vtkCell * cell)
// static double HexRelativeSizeSquared( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_HexRelativeSizeSquared_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::HexRelativeSizeSquared]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::HexRelativeSizeSquared(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double HexShapeAndSize(vtkCell * cell)
// static double HexShapeAndSize( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_HexShapeAndSize_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::HexShapeAndSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::HexShapeAndSize(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double HexShearAndSize(vtkCell * cell)
// static double HexShearAndSize( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_HexShearAndSize_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::HexShearAndSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::HexShearAndSize(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double HexDistortion(vtkCell * cell)
// static double HexDistortion( vtkCell* cell )
TESTDLLSORT_API bool vtkMeshQuality_HexDistortion_0(double * return_value, vtkCell * cell) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::HexDistortion]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMeshQuality::HexDistortion(cell);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetRatio(int r)
// virtual void SetRatio( int r )
TESTDLLSORT_API bool vtkMeshQuality_SetRatio_0(vtkMeshQuality * callingObject, int r) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetRatio(r);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetRatio()
// int GetRatio()
TESTDLLSORT_API bool vtkMeshQuality_GetRatio_0(int * return_value, vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::GetRatio]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetRatio();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void RatioOn()
// virtual void RatioOn ()
TESTDLLSORT_API bool vtkMeshQuality_RatioOn_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::RatioOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RatioOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void RatioOff()
// virtual void RatioOff ()
TESTDLLSORT_API bool vtkMeshQuality_RatioOff_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::RatioOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RatioOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetVolume(int cv)
// virtual void SetVolume( int cv )
TESTDLLSORT_API bool vtkMeshQuality_SetVolume_0(vtkMeshQuality * callingObject, int cv) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetVolume]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetVolume(cv);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetVolume()
// int GetVolume()
TESTDLLSORT_API bool vtkMeshQuality_GetVolume_0(int * return_value, vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::GetVolume]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetVolume();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void VolumeOn()
// virtual void VolumeOn ()
TESTDLLSORT_API bool vtkMeshQuality_VolumeOn_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::VolumeOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->VolumeOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void VolumeOff()
// virtual void VolumeOff ()
TESTDLLSORT_API bool vtkMeshQuality_VolumeOff_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::VolumeOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->VolumeOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetCompatibilityMode(int cm)
// virtual void SetCompatibilityMode( int cm )
TESTDLLSORT_API bool vtkMeshQuality_SetCompatibilityMode_0(vtkMeshQuality * callingObject, int cm) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::SetCompatibilityMode]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCompatibilityMode(cm);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetCompatibilityMode()
// virtual int GetCompatibilityMode ()
TESTDLLSORT_API bool vtkMeshQuality_GetCompatibilityMode_0(int * return_value, vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::GetCompatibilityMode]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCompatibilityMode();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CompatibilityModeOn()
// virtual void CompatibilityModeOn ()
TESTDLLSORT_API bool vtkMeshQuality_CompatibilityModeOn_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::CompatibilityModeOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CompatibilityModeOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CompatibilityModeOff()
// virtual void CompatibilityModeOff ()
TESTDLLSORT_API bool vtkMeshQuality_CompatibilityModeOff_0(vtkMeshQuality * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMeshQuality::CompatibilityModeOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CompatibilityModeOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
