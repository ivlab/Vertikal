
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkMapper.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkMapper_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMapper::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkMapper_IsA_0(vtkTypeBool * return_value, vtkMapper * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::IsA]:[";
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

// static vtkMapper* SafeDownCast(vtkObjectBase * o)
// static vtkMapper* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkMapper_SafeDownCast_0(vtkMapper ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMapper::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkMapper* NewInstance()
// vtkMapper *NewInstance()
TESTDLLSORT_API bool vtkMapper_NewInstance_0(vtkMapper ** return_value, vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::NewInstance]:[";
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

// void ShallowCopy(vtkAbstractMapper * m)
// void ShallowCopy(vtkAbstractMapper *m)
TESTDLLSORT_API bool vtkMapper_ShallowCopy_0(vtkMapper * callingObject, vtkAbstractMapper * m) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::ShallowCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ShallowCopy(m);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkMTimeType GetMTime()
// vtkMTimeType GetMTime()
TESTDLLSORT_API bool vtkMapper_GetMTime_0(vtkMTimeType * return_value, vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetMTime]:[";
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

// virtual void Render(vtkRenderer * ren, vtkActor * a)
// virtual void Render(vtkRenderer *ren, vtkActor *a)
TESTDLLSORT_API bool vtkMapper_Render_0(vtkMapper * callingObject, vtkRenderer * ren, vtkActor * a) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::Render]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Render(ren, a);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ReleaseGraphicsResources(vtkWindow * ARG_0)
// void ReleaseGraphicsResources(vtkWindow *)
TESTDLLSORT_API bool vtkMapper_ReleaseGraphicsResources_0(vtkMapper * callingObject, vtkWindow * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::ReleaseGraphicsResources]:[";
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

// void SetLookupTable(vtkScalarsToColors * lut)
// void SetLookupTable(vtkScalarsToColors *lut)
TESTDLLSORT_API bool vtkMapper_SetLookupTable_0(vtkMapper * callingObject, vtkScalarsToColors * lut) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetLookupTable]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetLookupTable(lut);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkScalarsToColors* GetLookupTable()
// vtkScalarsToColors *GetLookupTable()
TESTDLLSORT_API bool vtkMapper_GetLookupTable_0(vtkScalarsToColors ** return_value, vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetLookupTable]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetLookupTable();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CreateDefaultLookupTable()
// virtual void CreateDefaultLookupTable()
TESTDLLSORT_API bool vtkMapper_CreateDefaultLookupTable_0(vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::CreateDefaultLookupTable]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CreateDefaultLookupTable();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetScalarVisibility(int _arg)
// virtual void SetScalarVisibility (int _arg)
TESTDLLSORT_API bool vtkMapper_SetScalarVisibility_0(vtkMapper * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetScalarVisibility]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScalarVisibility(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetScalarVisibility()
// virtual int GetScalarVisibility ()
TESTDLLSORT_API bool vtkMapper_GetScalarVisibility_0(int * return_value, vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetScalarVisibility]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarVisibility();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ScalarVisibilityOn()
// virtual void ScalarVisibilityOn ()
TESTDLLSORT_API bool vtkMapper_ScalarVisibilityOn_0(vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::ScalarVisibilityOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ScalarVisibilityOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ScalarVisibilityOff()
// virtual void ScalarVisibilityOff ()
TESTDLLSORT_API bool vtkMapper_ScalarVisibilityOff_0(vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::ScalarVisibilityOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ScalarVisibilityOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetStatic(int _arg)
// virtual void SetStatic (int _arg)
TESTDLLSORT_API bool vtkMapper_SetStatic_0(vtkMapper * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetStatic]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetStatic(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetStatic()
// virtual int GetStatic ()
TESTDLLSORT_API bool vtkMapper_GetStatic_0(int * return_value, vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetStatic]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetStatic();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void StaticOn()
// virtual void StaticOn ()
TESTDLLSORT_API bool vtkMapper_StaticOn_0(vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::StaticOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->StaticOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void StaticOff()
// virtual void StaticOff ()
TESTDLLSORT_API bool vtkMapper_StaticOff_0(vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::StaticOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->StaticOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetColorMode(int _arg)
// virtual void SetColorMode (int _arg)
TESTDLLSORT_API bool vtkMapper_SetColorMode_0(vtkMapper * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetColorMode]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetColorMode(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetColorMode()
// virtual int GetColorMode ()
TESTDLLSORT_API bool vtkMapper_GetColorMode_0(int * return_value, vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetColorMode]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetColorMode();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetColorModeToDefault()
// void SetColorModeToDefault()
TESTDLLSORT_API bool vtkMapper_SetColorModeToDefault_0(vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetColorModeToDefault]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetColorModeToDefault();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetColorModeToMapScalars()
// void SetColorModeToMapScalars()
TESTDLLSORT_API bool vtkMapper_SetColorModeToMapScalars_0(vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetColorModeToMapScalars]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetColorModeToMapScalars();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetColorModeToDirectScalars()
// void SetColorModeToDirectScalars()
TESTDLLSORT_API bool vtkMapper_SetColorModeToDirectScalars_0(vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetColorModeToDirectScalars]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetColorModeToDirectScalars();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char* GetColorModeAsString()
// const char *GetColorModeAsString()
TESTDLLSORT_API bool vtkMapper_GetColorModeAsString_0(const char ** return_value, vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetColorModeAsString]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetColorModeAsString();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetInterpolateScalarsBeforeMapping(int _arg)
// virtual void SetInterpolateScalarsBeforeMapping (int _arg)
TESTDLLSORT_API bool vtkMapper_SetInterpolateScalarsBeforeMapping_0(vtkMapper * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetInterpolateScalarsBeforeMapping]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetInterpolateScalarsBeforeMapping(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetInterpolateScalarsBeforeMapping()
// virtual int GetInterpolateScalarsBeforeMapping ()
TESTDLLSORT_API bool vtkMapper_GetInterpolateScalarsBeforeMapping_0(int * return_value, vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetInterpolateScalarsBeforeMapping]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInterpolateScalarsBeforeMapping();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void InterpolateScalarsBeforeMappingOn()
// virtual void InterpolateScalarsBeforeMappingOn ()
TESTDLLSORT_API bool vtkMapper_InterpolateScalarsBeforeMappingOn_0(vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::InterpolateScalarsBeforeMappingOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InterpolateScalarsBeforeMappingOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void InterpolateScalarsBeforeMappingOff()
// virtual void InterpolateScalarsBeforeMappingOff ()
TESTDLLSORT_API bool vtkMapper_InterpolateScalarsBeforeMappingOff_0(vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::InterpolateScalarsBeforeMappingOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InterpolateScalarsBeforeMappingOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetUseLookupTableScalarRange(int _arg)
// virtual void SetUseLookupTableScalarRange (int _arg)
TESTDLLSORT_API bool vtkMapper_SetUseLookupTableScalarRange_0(vtkMapper * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetUseLookupTableScalarRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetUseLookupTableScalarRange(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetUseLookupTableScalarRange()
// virtual int GetUseLookupTableScalarRange ()
TESTDLLSORT_API bool vtkMapper_GetUseLookupTableScalarRange_0(int * return_value, vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetUseLookupTableScalarRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUseLookupTableScalarRange();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseLookupTableScalarRangeOn()
// virtual void UseLookupTableScalarRangeOn ()
TESTDLLSORT_API bool vtkMapper_UseLookupTableScalarRangeOn_0(vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::UseLookupTableScalarRangeOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseLookupTableScalarRangeOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseLookupTableScalarRangeOff()
// virtual void UseLookupTableScalarRangeOff ()
TESTDLLSORT_API bool vtkMapper_UseLookupTableScalarRangeOff_0(vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::UseLookupTableScalarRangeOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseLookupTableScalarRangeOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetScalarRange(double _arg1, double _arg2)
// virtual void SetScalarRange (double _arg1, double _arg2)
TESTDLLSORT_API bool vtkMapper_SetScalarRange_0(vtkMapper * callingObject, double _arg1, double _arg2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetScalarRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScalarRange(_arg1, _arg2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetScalarRange(double _arg[2])
// void SetScalarRange (double _arg[2])
TESTDLLSORT_API bool vtkMapper_SetScalarRange_1(vtkMapper * callingObject, double _arg[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetScalarRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScalarRange(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetScalarRange()
// virtual double *GetScalarRange ()
TESTDLLSORT_API bool vtkMapper_GetScalarRange_0(double ** return_value, vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetScalarRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarRange();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetScalarRange(double data[2])
// virtual void GetScalarRange (double data[2])
TESTDLLSORT_API bool vtkMapper_GetScalarRange_1(vtkMapper * callingObject, double data[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetScalarRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetScalarRange(data);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetScalarMode(int _arg)
// virtual void SetScalarMode (int _arg)
TESTDLLSORT_API bool vtkMapper_SetScalarMode_0(vtkMapper * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetScalarMode]:[";
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
TESTDLLSORT_API bool vtkMapper_GetScalarMode_0(int * return_value, vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetScalarMode]:[";
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

// void SetScalarModeToDefault()
// void SetScalarModeToDefault()
TESTDLLSORT_API bool vtkMapper_SetScalarModeToDefault_0(vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetScalarModeToDefault]:[";
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
TESTDLLSORT_API bool vtkMapper_SetScalarModeToUsePointData_0(vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetScalarModeToUsePointData]:[";
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
TESTDLLSORT_API bool vtkMapper_SetScalarModeToUseCellData_0(vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetScalarModeToUseCellData]:[";
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
TESTDLLSORT_API bool vtkMapper_SetScalarModeToUsePointFieldData_0(vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetScalarModeToUsePointFieldData]:[";
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
TESTDLLSORT_API bool vtkMapper_SetScalarModeToUseCellFieldData_0(vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetScalarModeToUseCellFieldData]:[";
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

// void SetScalarModeToUseFieldData()
// void SetScalarModeToUseFieldData()
TESTDLLSORT_API bool vtkMapper_SetScalarModeToUseFieldData_0(vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetScalarModeToUseFieldData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScalarModeToUseFieldData();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SelectColorArray(int arrayNum)
// void SelectColorArray(int arrayNum)
TESTDLLSORT_API bool vtkMapper_SelectColorArray_0(vtkMapper * callingObject, int arrayNum) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SelectColorArray]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SelectColorArray(arrayNum);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SelectColorArray(const char * arrayName)
// void SelectColorArray(const char* arrayName)
TESTDLLSORT_API bool vtkMapper_SelectColorArray_1(vtkMapper * callingObject, const char * arrayName) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SelectColorArray]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SelectColorArray(arrayName);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetFieldDataTupleId(vtkIdType _arg)
// virtual void SetFieldDataTupleId (vtkIdType _arg)
TESTDLLSORT_API bool vtkMapper_SetFieldDataTupleId_0(vtkMapper * callingObject, vtkIdType _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetFieldDataTupleId]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetFieldDataTupleId(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkIdType GetFieldDataTupleId()
// virtual vtkIdType GetFieldDataTupleId ()
TESTDLLSORT_API bool vtkMapper_GetFieldDataTupleId_0(vtkIdType * return_value, vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetFieldDataTupleId]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetFieldDataTupleId();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ColorByArrayComponent(int arrayNum, int component)
// void ColorByArrayComponent(int arrayNum, int component)
TESTDLLSORT_API bool vtkMapper_ColorByArrayComponent_0(vtkMapper * callingObject, int arrayNum, int component) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::ColorByArrayComponent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ColorByArrayComponent(arrayNum, component);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ColorByArrayComponent(const char * arrayName, int component)
// void ColorByArrayComponent(const char* arrayName, int component)
TESTDLLSORT_API bool vtkMapper_ColorByArrayComponent_1(vtkMapper * callingObject, const char * arrayName, int component) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::ColorByArrayComponent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ColorByArrayComponent(arrayName, component);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual char* GetArrayName()
// virtual char* GetArrayName ()
TESTDLLSORT_API bool vtkMapper_GetArrayName_0(char ** return_value, vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetArrayName]:[";
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

// virtual void SetArrayName(const char * _arg)
// virtual void SetArrayName (const char* _arg)
TESTDLLSORT_API bool vtkMapper_SetArrayName_0(vtkMapper * callingObject, const char * _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetArrayName]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetArrayName(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetArrayId()
// virtual int GetArrayId ()
TESTDLLSORT_API bool vtkMapper_GetArrayId_0(int * return_value, vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetArrayId]:[";
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

// virtual void SetArrayId(int _arg)
// virtual void SetArrayId (int _arg)
TESTDLLSORT_API bool vtkMapper_SetArrayId_0(vtkMapper * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetArrayId]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetArrayId(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetArrayAccessMode()
// virtual int GetArrayAccessMode ()
TESTDLLSORT_API bool vtkMapper_GetArrayAccessMode_0(int * return_value, vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetArrayAccessMode]:[";
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

// virtual void SetArrayAccessMode(int _arg)
// virtual void SetArrayAccessMode (int _arg)
TESTDLLSORT_API bool vtkMapper_SetArrayAccessMode_0(vtkMapper * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetArrayAccessMode]:[";
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

// virtual int GetArrayComponent()
// virtual int GetArrayComponent ()
TESTDLLSORT_API bool vtkMapper_GetArrayComponent_0(int * return_value, vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetArrayComponent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetArrayComponent();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetArrayComponent(int _arg)
// virtual void SetArrayComponent (int _arg)
TESTDLLSORT_API bool vtkMapper_SetArrayComponent_0(vtkMapper * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetArrayComponent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetArrayComponent(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char* GetScalarModeAsString()
// const char *GetScalarModeAsString()
TESTDLLSORT_API bool vtkMapper_GetScalarModeAsString_0(const char ** return_value, vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetScalarModeAsString]:[";
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

// static void SetResolveCoincidentTopology(int val)
// static void SetResolveCoincidentTopology(int val)
TESTDLLSORT_API bool vtkMapper_SetResolveCoincidentTopology_0(int val) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetResolveCoincidentTopology]:[";
#endif
	bool success = true;
	vtkMapper::SetResolveCoincidentTopology(val);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static int GetResolveCoincidentTopology()
// static int GetResolveCoincidentTopology()
TESTDLLSORT_API bool vtkMapper_GetResolveCoincidentTopology_0(int * return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetResolveCoincidentTopology]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMapper::GetResolveCoincidentTopology();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void SetResolveCoincidentTopologyToDefault()
// static void SetResolveCoincidentTopologyToDefault()
TESTDLLSORT_API bool vtkMapper_SetResolveCoincidentTopologyToDefault_0() {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetResolveCoincidentTopologyToDefault]:[";
#endif
	bool success = true;
	vtkMapper::SetResolveCoincidentTopologyToDefault();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void SetResolveCoincidentTopologyToOff()
// static void SetResolveCoincidentTopologyToOff()
TESTDLLSORT_API bool vtkMapper_SetResolveCoincidentTopologyToOff_0() {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetResolveCoincidentTopologyToOff]:[";
#endif
	bool success = true;
	vtkMapper::SetResolveCoincidentTopologyToOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void SetResolveCoincidentTopologyToPolygonOffset()
// static void SetResolveCoincidentTopologyToPolygonOffset()
TESTDLLSORT_API bool vtkMapper_SetResolveCoincidentTopologyToPolygonOffset_0() {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetResolveCoincidentTopologyToPolygonOffset]:[";
#endif
	bool success = true;
	vtkMapper::SetResolveCoincidentTopologyToPolygonOffset();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void SetResolveCoincidentTopologyToShiftZBuffer()
// static void SetResolveCoincidentTopologyToShiftZBuffer()
TESTDLLSORT_API bool vtkMapper_SetResolveCoincidentTopologyToShiftZBuffer_0() {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetResolveCoincidentTopologyToShiftZBuffer]:[";
#endif
	bool success = true;
	vtkMapper::SetResolveCoincidentTopologyToShiftZBuffer();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void SetResolveCoincidentTopologyPolygonOffsetParameters(double factor, double units)
// static void SetResolveCoincidentTopologyPolygonOffsetParameters( double factor, double units)
TESTDLLSORT_API bool vtkMapper_SetResolveCoincidentTopologyPolygonOffsetParameters_0(double factor, double units) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetResolveCoincidentTopologyPolygonOffsetParameters]:[";
#endif
	bool success = true;
	vtkMapper::SetResolveCoincidentTopologyPolygonOffsetParameters(factor, units);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void GetResolveCoincidentTopologyPolygonOffsetParameters(double & factor, double & units)
// static void GetResolveCoincidentTopologyPolygonOffsetParameters( double& factor, double& units)
TESTDLLSORT_API bool vtkMapper_GetResolveCoincidentTopologyPolygonOffsetParameters_0(double * factor, double * units) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetResolveCoincidentTopologyPolygonOffsetParameters]:[";
#endif
	bool success = true;
	vtkMapper::GetResolveCoincidentTopologyPolygonOffsetParameters(*factor, *units);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetRelativeCoincidentTopologyPolygonOffsetParameters(double factor, double units)
// void SetRelativeCoincidentTopologyPolygonOffsetParameters( double factor, double units)
TESTDLLSORT_API bool vtkMapper_SetRelativeCoincidentTopologyPolygonOffsetParameters_0(vtkMapper * callingObject, double factor, double units) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetRelativeCoincidentTopologyPolygonOffsetParameters]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetRelativeCoincidentTopologyPolygonOffsetParameters(factor, units);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetRelativeCoincidentTopologyPolygonOffsetParameters(double & factor, double & units)
// void GetRelativeCoincidentTopologyPolygonOffsetParameters( double& factor, double& units)
TESTDLLSORT_API bool vtkMapper_GetRelativeCoincidentTopologyPolygonOffsetParameters_0(vtkMapper * callingObject, double * factor, double * units) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetRelativeCoincidentTopologyPolygonOffsetParameters]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetRelativeCoincidentTopologyPolygonOffsetParameters(*factor, *units);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void SetResolveCoincidentTopologyLineOffsetParameters(double factor, double units)
// static void SetResolveCoincidentTopologyLineOffsetParameters( double factor, double units)
TESTDLLSORT_API bool vtkMapper_SetResolveCoincidentTopologyLineOffsetParameters_0(double factor, double units) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetResolveCoincidentTopologyLineOffsetParameters]:[";
#endif
	bool success = true;
	vtkMapper::SetResolveCoincidentTopologyLineOffsetParameters(factor, units);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void GetResolveCoincidentTopologyLineOffsetParameters(double & factor, double & units)
// static void GetResolveCoincidentTopologyLineOffsetParameters( double& factor, double& units)
TESTDLLSORT_API bool vtkMapper_GetResolveCoincidentTopologyLineOffsetParameters_0(double * factor, double * units) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetResolveCoincidentTopologyLineOffsetParameters]:[";
#endif
	bool success = true;
	vtkMapper::GetResolveCoincidentTopologyLineOffsetParameters(*factor, *units);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetRelativeCoincidentTopologyLineOffsetParameters(double factor, double units)
// void SetRelativeCoincidentTopologyLineOffsetParameters( double factor, double units)
TESTDLLSORT_API bool vtkMapper_SetRelativeCoincidentTopologyLineOffsetParameters_0(vtkMapper * callingObject, double factor, double units) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetRelativeCoincidentTopologyLineOffsetParameters]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetRelativeCoincidentTopologyLineOffsetParameters(factor, units);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetRelativeCoincidentTopologyLineOffsetParameters(double & factor, double & units)
// void GetRelativeCoincidentTopologyLineOffsetParameters( double& factor, double& units)
TESTDLLSORT_API bool vtkMapper_GetRelativeCoincidentTopologyLineOffsetParameters_0(vtkMapper * callingObject, double * factor, double * units) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetRelativeCoincidentTopologyLineOffsetParameters]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetRelativeCoincidentTopologyLineOffsetParameters(*factor, *units);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void SetResolveCoincidentTopologyPointOffsetParameter(double units)
// static void SetResolveCoincidentTopologyPointOffsetParameter( double units)
TESTDLLSORT_API bool vtkMapper_SetResolveCoincidentTopologyPointOffsetParameter_0(double units) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetResolveCoincidentTopologyPointOffsetParameter]:[";
#endif
	bool success = true;
	vtkMapper::SetResolveCoincidentTopologyPointOffsetParameter(units);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void GetResolveCoincidentTopologyPointOffsetParameter(double & units)
// static void GetResolveCoincidentTopologyPointOffsetParameter( double& units)
TESTDLLSORT_API bool vtkMapper_GetResolveCoincidentTopologyPointOffsetParameter_0(double * units) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetResolveCoincidentTopologyPointOffsetParameter]:[";
#endif
	bool success = true;
	vtkMapper::GetResolveCoincidentTopologyPointOffsetParameter(*units);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetRelativeCoincidentTopologyPointOffsetParameter(double units)
// void SetRelativeCoincidentTopologyPointOffsetParameter(double units)
TESTDLLSORT_API bool vtkMapper_SetRelativeCoincidentTopologyPointOffsetParameter_0(vtkMapper * callingObject, double units) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetRelativeCoincidentTopologyPointOffsetParameter]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetRelativeCoincidentTopologyPointOffsetParameter(units);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetRelativeCoincidentTopologyPointOffsetParameter(double & units)
// void GetRelativeCoincidentTopologyPointOffsetParameter(double& units)
TESTDLLSORT_API bool vtkMapper_GetRelativeCoincidentTopologyPointOffsetParameter_0(vtkMapper * callingObject, double * units) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetRelativeCoincidentTopologyPointOffsetParameter]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetRelativeCoincidentTopologyPointOffsetParameter(*units);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetCoincidentTopologyPolygonOffsetParameters(double & factor, double & units)
// void GetCoincidentTopologyPolygonOffsetParameters( double& factor, double& units)
TESTDLLSORT_API bool vtkMapper_GetCoincidentTopologyPolygonOffsetParameters_0(vtkMapper * callingObject, double * factor, double * units) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetCoincidentTopologyPolygonOffsetParameters]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetCoincidentTopologyPolygonOffsetParameters(*factor, *units);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetCoincidentTopologyLineOffsetParameters(double & factor, double & units)
// void GetCoincidentTopologyLineOffsetParameters( double& factor, double& units)
TESTDLLSORT_API bool vtkMapper_GetCoincidentTopologyLineOffsetParameters_0(vtkMapper * callingObject, double * factor, double * units) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetCoincidentTopologyLineOffsetParameters]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetCoincidentTopologyLineOffsetParameters(*factor, *units);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetCoincidentTopologyPointOffsetParameter(double & units)
// void GetCoincidentTopologyPointOffsetParameter(double& units)
TESTDLLSORT_API bool vtkMapper_GetCoincidentTopologyPointOffsetParameter_0(vtkMapper * callingObject, double * units) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetCoincidentTopologyPointOffsetParameter]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetCoincidentTopologyPointOffsetParameter(*units);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void SetResolveCoincidentTopologyPolygonOffsetFaces(int faces)
// static void SetResolveCoincidentTopologyPolygonOffsetFaces(int faces)
TESTDLLSORT_API bool vtkMapper_SetResolveCoincidentTopologyPolygonOffsetFaces_0(int faces) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetResolveCoincidentTopologyPolygonOffsetFaces]:[";
#endif
	bool success = true;
	vtkMapper::SetResolveCoincidentTopologyPolygonOffsetFaces(faces);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static int GetResolveCoincidentTopologyPolygonOffsetFaces()
// static int GetResolveCoincidentTopologyPolygonOffsetFaces()
TESTDLLSORT_API bool vtkMapper_GetResolveCoincidentTopologyPolygonOffsetFaces_0(int * return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetResolveCoincidentTopologyPolygonOffsetFaces]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMapper::GetResolveCoincidentTopologyPolygonOffsetFaces();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void SetResolveCoincidentTopologyZShift(double val)
// static void SetResolveCoincidentTopologyZShift(double val)
TESTDLLSORT_API bool vtkMapper_SetResolveCoincidentTopologyZShift_0(double val) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetResolveCoincidentTopologyZShift]:[";
#endif
	bool success = true;
	vtkMapper::SetResolveCoincidentTopologyZShift(val);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double GetResolveCoincidentTopologyZShift()
// static double GetResolveCoincidentTopologyZShift()
TESTDLLSORT_API bool vtkMapper_GetResolveCoincidentTopologyZShift_0(double * return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetResolveCoincidentTopologyZShift]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkMapper::GetResolveCoincidentTopologyZShift();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* GetBounds()
// double *GetBounds()
TESTDLLSORT_API bool vtkMapper_GetBounds_0(double ** return_value, vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetBounds]:[";
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
TESTDLLSORT_API bool vtkMapper_GetBounds_1(vtkMapper * callingObject, double bounds[6]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetBounds]:[";
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

// void SetRenderTime(double time)
// void SetRenderTime(double time)
TESTDLLSORT_API bool vtkMapper_SetRenderTime_0(vtkMapper * callingObject, double time) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::SetRenderTime]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetRenderTime(time);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetRenderTime()
// virtual double GetRenderTime ()
TESTDLLSORT_API bool vtkMapper_GetRenderTime_0(double * return_value, vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetRenderTime]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetRenderTime();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataSet* GetInput()
// vtkDataSet *GetInput()
TESTDLLSORT_API bool vtkMapper_GetInput_0(vtkDataSet ** return_value, vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetInput]:[";
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

// vtkDataSet* GetInputAsDataSet()
// vtkDataSet *GetInputAsDataSet()
TESTDLLSORT_API bool vtkMapper_GetInputAsDataSet_0(vtkDataSet ** return_value, vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetInputAsDataSet]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInputAsDataSet();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkUnsignedCharArray* MapScalars(double alpha)
// virtual vtkUnsignedCharArray *MapScalars(double alpha)
TESTDLLSORT_API bool vtkMapper_MapScalars_0(vtkUnsignedCharArray ** return_value, vtkMapper * callingObject, double alpha) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::MapScalars]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->MapScalars(alpha);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkUnsignedCharArray* MapScalars(double alpha, int & cellFlag)
// virtual vtkUnsignedCharArray *MapScalars(double alpha, int &cellFlag)
TESTDLLSORT_API bool vtkMapper_MapScalars_1(vtkUnsignedCharArray ** return_value, vtkMapper * callingObject, double alpha, int * cellFlag) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::MapScalars]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->MapScalars(alpha, *cellFlag);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkUnsignedCharArray* MapScalars(vtkDataSet * input, double alpha)
// virtual vtkUnsignedCharArray *MapScalars(vtkDataSet *input, double alpha)
TESTDLLSORT_API bool vtkMapper_MapScalars_2(vtkUnsignedCharArray ** return_value, vtkMapper * callingObject, vtkDataSet * input, double alpha) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::MapScalars]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->MapScalars(input, alpha);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkUnsignedCharArray* MapScalars(vtkDataSet * input, double alpha, int & cellFlag)
// virtual vtkUnsignedCharArray *MapScalars(vtkDataSet *input, double alpha, int &cellFlag)
TESTDLLSORT_API bool vtkMapper_MapScalars_3(vtkUnsignedCharArray ** return_value, vtkMapper * callingObject, vtkDataSet * input, double alpha, int * cellFlag) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::MapScalars]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->MapScalars(input, alpha, *cellFlag);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual bool GetIsOpaque()
// virtual bool GetIsOpaque()
TESTDLLSORT_API bool vtkMapper_GetIsOpaque_0(bool * return_value, vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetIsOpaque]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetIsOpaque();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual bool GetSupportsSelection()
// virtual bool GetSupportsSelection()
TESTDLLSORT_API bool vtkMapper_GetSupportsSelection_0(bool * return_value, vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetSupportsSelection]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetSupportsSelection();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int CanUseTextureMapForColoring(vtkDataObject * input)
// virtual int CanUseTextureMapForColoring(vtkDataObject* input)
TESTDLLSORT_API bool vtkMapper_CanUseTextureMapForColoring_0(int * return_value, vtkMapper * callingObject, vtkDataObject * input) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::CanUseTextureMapForColoring]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->CanUseTextureMapForColoring(input);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ClearColorArrays()
// void ClearColorArrays()
TESTDLLSORT_API bool vtkMapper_ClearColorArrays_0(vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::ClearColorArrays]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ClearColorArrays();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkUnsignedCharArray* GetColorMapColors()
// vtkUnsignedCharArray *GetColorMapColors()
TESTDLLSORT_API bool vtkMapper_GetColorMapColors_0(vtkUnsignedCharArray ** return_value, vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetColorMapColors]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetColorMapColors();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkFloatArray* GetColorCoordinates()
// vtkFloatArray *GetColorCoordinates()
TESTDLLSORT_API bool vtkMapper_GetColorCoordinates_0(vtkFloatArray ** return_value, vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetColorCoordinates]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetColorCoordinates();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkImageData* GetColorTextureMap()
// vtkImageData* GetColorTextureMap()
TESTDLLSORT_API bool vtkMapper_GetColorTextureMap_0(vtkImageData ** return_value, vtkMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkMapper::GetColorTextureMap]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetColorTextureMap();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
