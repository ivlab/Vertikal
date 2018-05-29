
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkFXAAOptions.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkFXAAOptions* New()
// static vtkFXAAOptions* New()
TESTDLLSORT_API bool vtkFXAAOptions_New_0(vtkFXAAOptions ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkFXAAOptions::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkFXAAOptions_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkFXAAOptions::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkFXAAOptions_IsA_0(vtkTypeBool * return_value, vtkFXAAOptions * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::IsA]:[";
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

// static vtkFXAAOptions* SafeDownCast(vtkObjectBase * o)
// static vtkFXAAOptions* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkFXAAOptions_SafeDownCast_0(vtkFXAAOptions ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkFXAAOptions::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkFXAAOptions* NewInstance()
// vtkFXAAOptions *NewInstance()
TESTDLLSORT_API bool vtkFXAAOptions_NewInstance_0(vtkFXAAOptions ** return_value, vtkFXAAOptions * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::NewInstance]:[";
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

// virtual void SetRelativeContrastThreshold(float _arg)
// virtual void SetRelativeContrastThreshold (float _arg)
TESTDLLSORT_API bool vtkFXAAOptions_SetRelativeContrastThreshold_0(vtkFXAAOptions * callingObject, float _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::SetRelativeContrastThreshold]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetRelativeContrastThreshold(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual float GetRelativeContrastThresholdMinValue()
// virtual float GetRelativeContrastThresholdMinValue ()
TESTDLLSORT_API bool vtkFXAAOptions_GetRelativeContrastThresholdMinValue_0(float * return_value, vtkFXAAOptions * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::GetRelativeContrastThresholdMinValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetRelativeContrastThresholdMinValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual float GetRelativeContrastThresholdMaxValue()
// virtual float GetRelativeContrastThresholdMaxValue ()
TESTDLLSORT_API bool vtkFXAAOptions_GetRelativeContrastThresholdMaxValue_0(float * return_value, vtkFXAAOptions * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::GetRelativeContrastThresholdMaxValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetRelativeContrastThresholdMaxValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual float GetRelativeContrastThreshold()
// virtual float GetRelativeContrastThreshold ()
TESTDLLSORT_API bool vtkFXAAOptions_GetRelativeContrastThreshold_0(float * return_value, vtkFXAAOptions * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::GetRelativeContrastThreshold]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetRelativeContrastThreshold();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetHardContrastThreshold(float _arg)
// virtual void SetHardContrastThreshold (float _arg)
TESTDLLSORT_API bool vtkFXAAOptions_SetHardContrastThreshold_0(vtkFXAAOptions * callingObject, float _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::SetHardContrastThreshold]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetHardContrastThreshold(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual float GetHardContrastThresholdMinValue()
// virtual float GetHardContrastThresholdMinValue ()
TESTDLLSORT_API bool vtkFXAAOptions_GetHardContrastThresholdMinValue_0(float * return_value, vtkFXAAOptions * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::GetHardContrastThresholdMinValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetHardContrastThresholdMinValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual float GetHardContrastThresholdMaxValue()
// virtual float GetHardContrastThresholdMaxValue ()
TESTDLLSORT_API bool vtkFXAAOptions_GetHardContrastThresholdMaxValue_0(float * return_value, vtkFXAAOptions * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::GetHardContrastThresholdMaxValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetHardContrastThresholdMaxValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual float GetHardContrastThreshold()
// virtual float GetHardContrastThreshold ()
TESTDLLSORT_API bool vtkFXAAOptions_GetHardContrastThreshold_0(float * return_value, vtkFXAAOptions * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::GetHardContrastThreshold]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetHardContrastThreshold();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetSubpixelBlendLimit(float _arg)
// virtual void SetSubpixelBlendLimit (float _arg)
TESTDLLSORT_API bool vtkFXAAOptions_SetSubpixelBlendLimit_0(vtkFXAAOptions * callingObject, float _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::SetSubpixelBlendLimit]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetSubpixelBlendLimit(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual float GetSubpixelBlendLimitMinValue()
// virtual float GetSubpixelBlendLimitMinValue ()
TESTDLLSORT_API bool vtkFXAAOptions_GetSubpixelBlendLimitMinValue_0(float * return_value, vtkFXAAOptions * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::GetSubpixelBlendLimitMinValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetSubpixelBlendLimitMinValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual float GetSubpixelBlendLimitMaxValue()
// virtual float GetSubpixelBlendLimitMaxValue ()
TESTDLLSORT_API bool vtkFXAAOptions_GetSubpixelBlendLimitMaxValue_0(float * return_value, vtkFXAAOptions * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::GetSubpixelBlendLimitMaxValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetSubpixelBlendLimitMaxValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual float GetSubpixelBlendLimit()
// virtual float GetSubpixelBlendLimit ()
TESTDLLSORT_API bool vtkFXAAOptions_GetSubpixelBlendLimit_0(float * return_value, vtkFXAAOptions * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::GetSubpixelBlendLimit]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetSubpixelBlendLimit();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetSubpixelContrastThreshold(float _arg)
// virtual void SetSubpixelContrastThreshold (float _arg)
TESTDLLSORT_API bool vtkFXAAOptions_SetSubpixelContrastThreshold_0(vtkFXAAOptions * callingObject, float _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::SetSubpixelContrastThreshold]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetSubpixelContrastThreshold(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual float GetSubpixelContrastThresholdMinValue()
// virtual float GetSubpixelContrastThresholdMinValue ()
TESTDLLSORT_API bool vtkFXAAOptions_GetSubpixelContrastThresholdMinValue_0(float * return_value, vtkFXAAOptions * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::GetSubpixelContrastThresholdMinValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetSubpixelContrastThresholdMinValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual float GetSubpixelContrastThresholdMaxValue()
// virtual float GetSubpixelContrastThresholdMaxValue ()
TESTDLLSORT_API bool vtkFXAAOptions_GetSubpixelContrastThresholdMaxValue_0(float * return_value, vtkFXAAOptions * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::GetSubpixelContrastThresholdMaxValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetSubpixelContrastThresholdMaxValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual float GetSubpixelContrastThreshold()
// virtual float GetSubpixelContrastThreshold ()
TESTDLLSORT_API bool vtkFXAAOptions_GetSubpixelContrastThreshold_0(float * return_value, vtkFXAAOptions * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::GetSubpixelContrastThreshold]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetSubpixelContrastThreshold();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetUseHighQualityEndpoints(bool _arg)
// virtual void SetUseHighQualityEndpoints (bool _arg)
TESTDLLSORT_API bool vtkFXAAOptions_SetUseHighQualityEndpoints_0(vtkFXAAOptions * callingObject, bool _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::SetUseHighQualityEndpoints]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetUseHighQualityEndpoints(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual bool GetUseHighQualityEndpoints()
// virtual bool GetUseHighQualityEndpoints ()
TESTDLLSORT_API bool vtkFXAAOptions_GetUseHighQualityEndpoints_0(bool * return_value, vtkFXAAOptions * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::GetUseHighQualityEndpoints]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUseHighQualityEndpoints();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseHighQualityEndpointsOn()
// virtual void UseHighQualityEndpointsOn ()
TESTDLLSORT_API bool vtkFXAAOptions_UseHighQualityEndpointsOn_0(vtkFXAAOptions * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::UseHighQualityEndpointsOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseHighQualityEndpointsOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseHighQualityEndpointsOff()
// virtual void UseHighQualityEndpointsOff ()
TESTDLLSORT_API bool vtkFXAAOptions_UseHighQualityEndpointsOff_0(vtkFXAAOptions * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::UseHighQualityEndpointsOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseHighQualityEndpointsOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetEndpointSearchIterations(int _arg)
// virtual void SetEndpointSearchIterations (int _arg)
TESTDLLSORT_API bool vtkFXAAOptions_SetEndpointSearchIterations_0(vtkFXAAOptions * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::SetEndpointSearchIterations]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetEndpointSearchIterations(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetEndpointSearchIterationsMinValue()
// virtual int GetEndpointSearchIterationsMinValue ()
TESTDLLSORT_API bool vtkFXAAOptions_GetEndpointSearchIterationsMinValue_0(int * return_value, vtkFXAAOptions * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::GetEndpointSearchIterationsMinValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetEndpointSearchIterationsMinValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetEndpointSearchIterationsMaxValue()
// virtual int GetEndpointSearchIterationsMaxValue ()
TESTDLLSORT_API bool vtkFXAAOptions_GetEndpointSearchIterationsMaxValue_0(int * return_value, vtkFXAAOptions * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::GetEndpointSearchIterationsMaxValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetEndpointSearchIterationsMaxValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetEndpointSearchIterations()
// virtual int GetEndpointSearchIterations ()
TESTDLLSORT_API bool vtkFXAAOptions_GetEndpointSearchIterations_0(int * return_value, vtkFXAAOptions * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFXAAOptions::GetEndpointSearchIterations]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetEndpointSearchIterations();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
