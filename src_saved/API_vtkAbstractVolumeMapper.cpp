
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkAbstractVolumeMapper.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkAbstractVolumeMapper_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkAbstractVolumeMapper::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkAbstractVolumeMapper_IsA_0(vtkTypeBool * return_value, vtkAbstractVolumeMapper * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::IsA]:[";
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

// static vtkAbstractVolumeMapper* SafeDownCast(vtkObjectBase * o)
// static vtkAbstractVolumeMapper* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkAbstractVolumeMapper_SafeDownCast_0(vtkAbstractVolumeMapper ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkAbstractVolumeMapper::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkAbstractVolumeMapper* NewInstance()
// vtkAbstractVolumeMapper *NewInstance()
TESTDLLSORT_API bool vtkAbstractVolumeMapper_NewInstance_0(vtkAbstractVolumeMapper ** return_value, vtkAbstractVolumeMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::NewInstance]:[";
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

// vtkDataSet* GetDataSetInput()
// vtkDataSet *GetDataSetInput()
TESTDLLSORT_API bool vtkAbstractVolumeMapper_GetDataSetInput_0(vtkDataSet ** return_value, vtkAbstractVolumeMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::GetDataSetInput]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDataSetInput();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataObject* GetDataObjectInput()
// vtkDataObject *GetDataObjectInput()
TESTDLLSORT_API bool vtkAbstractVolumeMapper_GetDataObjectInput_0(vtkDataObject ** return_value, vtkAbstractVolumeMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::GetDataObjectInput]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDataObjectInput();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* GetBounds()
// double *GetBounds()
TESTDLLSORT_API bool vtkAbstractVolumeMapper_GetBounds_0(double ** return_value, vtkAbstractVolumeMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::GetBounds]:[";
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

// void GetBounds(double bounds[6])
// void GetBounds(double bounds[6])
TESTDLLSORT_API bool vtkAbstractVolumeMapper_GetBounds_1(vtkAbstractVolumeMapper * callingObject, double bounds[6]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::GetBounds]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetBounds(bounds);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetScalarMode(int _arg)
// virtual void SetScalarMode (int _arg)
TESTDLLSORT_API bool vtkAbstractVolumeMapper_SetScalarMode_0(vtkAbstractVolumeMapper * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::SetScalarMode]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScalarMode(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetScalarMode()
// virtual int GetScalarMode ()
TESTDLLSORT_API bool vtkAbstractVolumeMapper_GetScalarMode_0(int * return_value, vtkAbstractVolumeMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::GetScalarMode]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarMode();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetArrayAccessMode(int _arg)
// virtual void SetArrayAccessMode (int _arg)
TESTDLLSORT_API bool vtkAbstractVolumeMapper_SetArrayAccessMode_0(vtkAbstractVolumeMapper * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::SetArrayAccessMode]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetArrayAccessMode(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetScalarModeToDefault()
// void SetScalarModeToDefault()
TESTDLLSORT_API bool vtkAbstractVolumeMapper_SetScalarModeToDefault_0(vtkAbstractVolumeMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::SetScalarModeToDefault]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScalarModeToDefault();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetScalarModeToUsePointData()
// void SetScalarModeToUsePointData()
TESTDLLSORT_API bool vtkAbstractVolumeMapper_SetScalarModeToUsePointData_0(vtkAbstractVolumeMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::SetScalarModeToUsePointData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScalarModeToUsePointData();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetScalarModeToUseCellData()
// void SetScalarModeToUseCellData()
TESTDLLSORT_API bool vtkAbstractVolumeMapper_SetScalarModeToUseCellData_0(vtkAbstractVolumeMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::SetScalarModeToUseCellData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScalarModeToUseCellData();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetScalarModeToUsePointFieldData()
// void SetScalarModeToUsePointFieldData()
TESTDLLSORT_API bool vtkAbstractVolumeMapper_SetScalarModeToUsePointFieldData_0(vtkAbstractVolumeMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::SetScalarModeToUsePointFieldData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScalarModeToUsePointFieldData();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetScalarModeToUseCellFieldData()
// void SetScalarModeToUseCellFieldData()
TESTDLLSORT_API bool vtkAbstractVolumeMapper_SetScalarModeToUseCellFieldData_0(vtkAbstractVolumeMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::SetScalarModeToUseCellFieldData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScalarModeToUseCellFieldData();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SelectScalarArray(int arrayNum)
// virtual void SelectScalarArray(int arrayNum)
TESTDLLSORT_API bool vtkAbstractVolumeMapper_SelectScalarArray_0(vtkAbstractVolumeMapper * callingObject, int arrayNum) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::SelectScalarArray]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SelectScalarArray(arrayNum);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SelectScalarArray(const char * arrayName)
// virtual void SelectScalarArray(const char* arrayName)
TESTDLLSORT_API bool vtkAbstractVolumeMapper_SelectScalarArray_1(vtkAbstractVolumeMapper * callingObject, const char * arrayName) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::SelectScalarArray]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SelectScalarArray(arrayName);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual char* GetArrayName()
// virtual char* GetArrayName()
TESTDLLSORT_API bool vtkAbstractVolumeMapper_GetArrayName_0(char ** return_value, vtkAbstractVolumeMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::GetArrayName]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetArrayName();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetArrayId()
// virtual int GetArrayId()
TESTDLLSORT_API bool vtkAbstractVolumeMapper_GetArrayId_0(int * return_value, vtkAbstractVolumeMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::GetArrayId]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetArrayId();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetArrayAccessMode()
// virtual int GetArrayAccessMode()
TESTDLLSORT_API bool vtkAbstractVolumeMapper_GetArrayAccessMode_0(int * return_value, vtkAbstractVolumeMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::GetArrayAccessMode]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetArrayAccessMode();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char* GetScalarModeAsString()
// const char *GetScalarModeAsString()
TESTDLLSORT_API bool vtkAbstractVolumeMapper_GetScalarModeAsString_0(const char ** return_value, vtkAbstractVolumeMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::GetScalarModeAsString]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarModeAsString();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual float GetGradientMagnitudeScale()
// virtual float GetGradientMagnitudeScale()
TESTDLLSORT_API bool vtkAbstractVolumeMapper_GetGradientMagnitudeScale_0(float * return_value, vtkAbstractVolumeMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::GetGradientMagnitudeScale]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetGradientMagnitudeScale();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual float GetGradientMagnitudeBias()
// virtual float GetGradientMagnitudeBias()
TESTDLLSORT_API bool vtkAbstractVolumeMapper_GetGradientMagnitudeBias_0(float * return_value, vtkAbstractVolumeMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::GetGradientMagnitudeBias]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetGradientMagnitudeBias();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual float GetGradientMagnitudeScale(int ARG_0)
// virtual float GetGradientMagnitudeScale(int)
TESTDLLSORT_API bool vtkAbstractVolumeMapper_GetGradientMagnitudeScale_1(float * return_value, vtkAbstractVolumeMapper * callingObject, int ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::GetGradientMagnitudeScale]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetGradientMagnitudeScale(ARG_0);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual float GetGradientMagnitudeBias(int ARG_0)
// virtual float GetGradientMagnitudeBias(int)
TESTDLLSORT_API bool vtkAbstractVolumeMapper_GetGradientMagnitudeBias_1(float * return_value, vtkAbstractVolumeMapper * callingObject, int ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::GetGradientMagnitudeBias]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetGradientMagnitudeBias(ARG_0);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void Render(vtkRenderer * ren, vtkVolume * vol)
// virtual void Render(vtkRenderer *ren, vtkVolume *vol)
TESTDLLSORT_API bool vtkAbstractVolumeMapper_Render_0(vtkAbstractVolumeMapper * callingObject, vtkRenderer * ren, vtkVolume * vol) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::Render]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Render(ren, vol);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ReleaseGraphicsResources(vtkWindow * ARG_0)
// void ReleaseGraphicsResources(vtkWindow *)
TESTDLLSORT_API bool vtkAbstractVolumeMapper_ReleaseGraphicsResources_0(vtkAbstractVolumeMapper * callingObject, vtkWindow * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkAbstractVolumeMapper::ReleaseGraphicsResources]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ReleaseGraphicsResources(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
