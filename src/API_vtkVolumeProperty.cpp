
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkVolumeProperty.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkVolumeProperty* New()
// static vtkVolumeProperty *New()
TESTDLLSORT_API bool vtkVolumeProperty_New_0(vtkVolumeProperty ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkVolumeProperty::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkVolumeProperty_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkVolumeProperty::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkVolumeProperty_IsA_0(vtkTypeBool * return_value, vtkVolumeProperty * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::IsA]:[";
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

// static vtkVolumeProperty* SafeDownCast(vtkObjectBase * o)
// static vtkVolumeProperty* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkVolumeProperty_SafeDownCast_0(vtkVolumeProperty ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkVolumeProperty::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkVolumeProperty* NewInstance()
// vtkVolumeProperty *NewInstance()
TESTDLLSORT_API bool vtkVolumeProperty_NewInstance_0(vtkVolumeProperty ** return_value, vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::NewInstance]:[";
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

// void DeepCopy(vtkVolumeProperty * p)
// void DeepCopy(vtkVolumeProperty *p)
TESTDLLSORT_API bool vtkVolumeProperty_DeepCopy_0(vtkVolumeProperty * callingObject, vtkVolumeProperty * p) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::DeepCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DeepCopy(p);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkMTimeType GetMTime()
// vtkMTimeType GetMTime()
TESTDLLSORT_API bool vtkVolumeProperty_GetMTime_0(vtkMTimeType * return_value, vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetMTime]:[";
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

// virtual void SetIndependentComponents(int _arg)
// virtual void SetIndependentComponents (int _arg)
TESTDLLSORT_API bool vtkVolumeProperty_SetIndependentComponents_0(vtkVolumeProperty * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetIndependentComponents]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetIndependentComponents(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetIndependentComponentsMinValue()
// virtual int GetIndependentComponentsMinValue ()
TESTDLLSORT_API bool vtkVolumeProperty_GetIndependentComponentsMinValue_0(int * return_value, vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetIndependentComponentsMinValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetIndependentComponentsMinValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetIndependentComponentsMaxValue()
// virtual int GetIndependentComponentsMaxValue ()
TESTDLLSORT_API bool vtkVolumeProperty_GetIndependentComponentsMaxValue_0(int * return_value, vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetIndependentComponentsMaxValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetIndependentComponentsMaxValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetIndependentComponents()
// virtual int GetIndependentComponents ()
TESTDLLSORT_API bool vtkVolumeProperty_GetIndependentComponents_0(int * return_value, vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetIndependentComponents]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetIndependentComponents();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void IndependentComponentsOn()
// virtual void IndependentComponentsOn ()
TESTDLLSORT_API bool vtkVolumeProperty_IndependentComponentsOn_0(vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::IndependentComponentsOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->IndependentComponentsOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void IndependentComponentsOff()
// virtual void IndependentComponentsOff ()
TESTDLLSORT_API bool vtkVolumeProperty_IndependentComponentsOff_0(vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::IndependentComponentsOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->IndependentComponentsOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetInterpolationType(int _arg)
// virtual void SetInterpolationType (int _arg)
TESTDLLSORT_API bool vtkVolumeProperty_SetInterpolationType_0(vtkVolumeProperty * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetInterpolationType]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetInterpolationType(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetInterpolationTypeMinValue()
// virtual int GetInterpolationTypeMinValue ()
TESTDLLSORT_API bool vtkVolumeProperty_GetInterpolationTypeMinValue_0(int * return_value, vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetInterpolationTypeMinValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInterpolationTypeMinValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetInterpolationTypeMaxValue()
// virtual int GetInterpolationTypeMaxValue ()
TESTDLLSORT_API bool vtkVolumeProperty_GetInterpolationTypeMaxValue_0(int * return_value, vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetInterpolationTypeMaxValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInterpolationTypeMaxValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetInterpolationType()
// virtual int GetInterpolationType ()
TESTDLLSORT_API bool vtkVolumeProperty_GetInterpolationType_0(int * return_value, vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetInterpolationType]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInterpolationType();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetInterpolationTypeToNearest()
// void SetInterpolationTypeToNearest()
TESTDLLSORT_API bool vtkVolumeProperty_SetInterpolationTypeToNearest_0(vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetInterpolationTypeToNearest]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetInterpolationTypeToNearest();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetInterpolationTypeToLinear()
// void SetInterpolationTypeToLinear()
TESTDLLSORT_API bool vtkVolumeProperty_SetInterpolationTypeToLinear_0(vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetInterpolationTypeToLinear]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetInterpolationTypeToLinear();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char* GetInterpolationTypeAsString()
// const char *GetInterpolationTypeAsString(void)
TESTDLLSORT_API bool vtkVolumeProperty_GetInterpolationTypeAsString_0(const char ** return_value, vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetInterpolationTypeAsString]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInterpolationTypeAsString();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetComponentWeight(int index, double value)
// virtual void SetComponentWeight(int index, double value)
TESTDLLSORT_API bool vtkVolumeProperty_SetComponentWeight_0(vtkVolumeProperty * callingObject, int index, double value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetComponentWeight]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetComponentWeight(index, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetComponentWeight(int index)
// virtual double GetComponentWeight(int index)
TESTDLLSORT_API bool vtkVolumeProperty_GetComponentWeight_0(double * return_value, vtkVolumeProperty * callingObject, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetComponentWeight]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetComponentWeight(index);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetColor(int index, vtkPiecewiseFunction * function)
// void SetColor(int index, vtkPiecewiseFunction *function)
TESTDLLSORT_API bool vtkVolumeProperty_SetColor_0(vtkVolumeProperty * callingObject, int index, vtkPiecewiseFunction * function) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetColor(index, function);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetColor(vtkPiecewiseFunction * function)
// void SetColor(vtkPiecewiseFunction *function)
TESTDLLSORT_API bool vtkVolumeProperty_SetColor_1(vtkVolumeProperty * callingObject, vtkPiecewiseFunction * function) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetColor(function);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetColor(int index, vtkColorTransferFunction * function)
// void SetColor(int index, vtkColorTransferFunction *function)
TESTDLLSORT_API bool vtkVolumeProperty_SetColor_2(vtkVolumeProperty * callingObject, int index, vtkColorTransferFunction * function) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetColor(index, function);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetColor(vtkColorTransferFunction * function)
// void SetColor(vtkColorTransferFunction *function)
TESTDLLSORT_API bool vtkVolumeProperty_SetColor_3(vtkVolumeProperty * callingObject, vtkColorTransferFunction * function) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetColor(function);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetColorChannels(int index)
// int GetColorChannels(int index)
TESTDLLSORT_API bool vtkVolumeProperty_GetColorChannels_0(int * return_value, vtkVolumeProperty * callingObject, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetColorChannels]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetColorChannels(index);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetColorChannels()
// int GetColorChannels()
TESTDLLSORT_API bool vtkVolumeProperty_GetColorChannels_1(int * return_value, vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetColorChannels]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetColorChannels();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkPiecewiseFunction* GetGrayTransferFunction(int index)
// vtkPiecewiseFunction *GetGrayTransferFunction(int index)
TESTDLLSORT_API bool vtkVolumeProperty_GetGrayTransferFunction_0(vtkPiecewiseFunction ** return_value, vtkVolumeProperty * callingObject, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetGrayTransferFunction]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetGrayTransferFunction(index);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkPiecewiseFunction* GetGrayTransferFunction()
// vtkPiecewiseFunction *GetGrayTransferFunction()
TESTDLLSORT_API bool vtkVolumeProperty_GetGrayTransferFunction_1(vtkPiecewiseFunction ** return_value, vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetGrayTransferFunction]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetGrayTransferFunction();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkColorTransferFunction* GetRGBTransferFunction(int index)
// vtkColorTransferFunction *GetRGBTransferFunction(int index)
TESTDLLSORT_API bool vtkVolumeProperty_GetRGBTransferFunction_0(vtkColorTransferFunction ** return_value, vtkVolumeProperty * callingObject, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetRGBTransferFunction]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetRGBTransferFunction(index);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkColorTransferFunction* GetRGBTransferFunction()
// vtkColorTransferFunction *GetRGBTransferFunction()
TESTDLLSORT_API bool vtkVolumeProperty_GetRGBTransferFunction_1(vtkColorTransferFunction ** return_value, vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetRGBTransferFunction]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetRGBTransferFunction();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetScalarOpacity(int index, vtkPiecewiseFunction * function)
// void SetScalarOpacity(int index, vtkPiecewiseFunction *function)
TESTDLLSORT_API bool vtkVolumeProperty_SetScalarOpacity_0(vtkVolumeProperty * callingObject, int index, vtkPiecewiseFunction * function) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetScalarOpacity]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScalarOpacity(index, function);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetScalarOpacity(vtkPiecewiseFunction * function)
// void SetScalarOpacity(vtkPiecewiseFunction *function)
TESTDLLSORT_API bool vtkVolumeProperty_SetScalarOpacity_1(vtkVolumeProperty * callingObject, vtkPiecewiseFunction * function) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetScalarOpacity]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScalarOpacity(function);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkPiecewiseFunction* GetScalarOpacity(int index)
// vtkPiecewiseFunction *GetScalarOpacity(int index)
TESTDLLSORT_API bool vtkVolumeProperty_GetScalarOpacity_0(vtkPiecewiseFunction ** return_value, vtkVolumeProperty * callingObject, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetScalarOpacity]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarOpacity(index);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkPiecewiseFunction* GetScalarOpacity()
// vtkPiecewiseFunction *GetScalarOpacity()
TESTDLLSORT_API bool vtkVolumeProperty_GetScalarOpacity_1(vtkPiecewiseFunction ** return_value, vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetScalarOpacity]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarOpacity();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetScalarOpacityUnitDistance(int index, double distance)
// void SetScalarOpacityUnitDistance(int index, double distance)
TESTDLLSORT_API bool vtkVolumeProperty_SetScalarOpacityUnitDistance_0(vtkVolumeProperty * callingObject, int index, double distance) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetScalarOpacityUnitDistance]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScalarOpacityUnitDistance(index, distance);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetScalarOpacityUnitDistance(double distance)
// void SetScalarOpacityUnitDistance(double distance)
TESTDLLSORT_API bool vtkVolumeProperty_SetScalarOpacityUnitDistance_1(vtkVolumeProperty * callingObject, double distance) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetScalarOpacityUnitDistance]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScalarOpacityUnitDistance(distance);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetScalarOpacityUnitDistance(int index)
// double GetScalarOpacityUnitDistance(int index)
TESTDLLSORT_API bool vtkVolumeProperty_GetScalarOpacityUnitDistance_0(double * return_value, vtkVolumeProperty * callingObject, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetScalarOpacityUnitDistance]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarOpacityUnitDistance(index);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetScalarOpacityUnitDistance()
// double GetScalarOpacityUnitDistance()
TESTDLLSORT_API bool vtkVolumeProperty_GetScalarOpacityUnitDistance_1(double * return_value, vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetScalarOpacityUnitDistance]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarOpacityUnitDistance();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetGradientOpacity(int index, vtkPiecewiseFunction * function)
// void SetGradientOpacity(int index, vtkPiecewiseFunction *function)
TESTDLLSORT_API bool vtkVolumeProperty_SetGradientOpacity_0(vtkVolumeProperty * callingObject, int index, vtkPiecewiseFunction * function) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetGradientOpacity]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetGradientOpacity(index, function);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetGradientOpacity(vtkPiecewiseFunction * function)
// void SetGradientOpacity(vtkPiecewiseFunction *function)
TESTDLLSORT_API bool vtkVolumeProperty_SetGradientOpacity_1(vtkVolumeProperty * callingObject, vtkPiecewiseFunction * function) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetGradientOpacity]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetGradientOpacity(function);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTransferFunction2D(int index, vtkImageData * function)
// void SetTransferFunction2D(int index, vtkImageData* function)
TESTDLLSORT_API bool vtkVolumeProperty_SetTransferFunction2D_0(vtkVolumeProperty * callingObject, int index, vtkImageData * function) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetTransferFunction2D]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTransferFunction2D(index, function);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTransferFunction2D(vtkImageData * function)
// void SetTransferFunction2D(vtkImageData* function)
TESTDLLSORT_API bool vtkVolumeProperty_SetTransferFunction2D_1(vtkVolumeProperty * callingObject, vtkImageData * function) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetTransferFunction2D]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTransferFunction2D(function);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkImageData* GetTransferFunction2D(int index)
// vtkImageData* GetTransferFunction2D(int index)
TESTDLLSORT_API bool vtkVolumeProperty_GetTransferFunction2D_0(vtkImageData ** return_value, vtkVolumeProperty * callingObject, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetTransferFunction2D]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTransferFunction2D(index);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkImageData* GetTransferFunction2D()
// vtkImageData* GetTransferFunction2D()
TESTDLLSORT_API bool vtkVolumeProperty_GetTransferFunction2D_1(vtkImageData ** return_value, vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetTransferFunction2D]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTransferFunction2D();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetTransferFunctionMode(int _arg)
// virtual void SetTransferFunctionMode (int _arg)
TESTDLLSORT_API bool vtkVolumeProperty_SetTransferFunctionMode_0(vtkVolumeProperty * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetTransferFunctionMode]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTransferFunctionMode(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetTransferFunctionModeMinValue()
// virtual int GetTransferFunctionModeMinValue ()
TESTDLLSORT_API bool vtkVolumeProperty_GetTransferFunctionModeMinValue_0(int * return_value, vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetTransferFunctionModeMinValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTransferFunctionModeMinValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetTransferFunctionModeMaxValue()
// virtual int GetTransferFunctionModeMaxValue ()
TESTDLLSORT_API bool vtkVolumeProperty_GetTransferFunctionModeMaxValue_0(int * return_value, vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetTransferFunctionModeMaxValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTransferFunctionModeMaxValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetTransferFunctionMode()
// virtual int GetTransferFunctionMode ()
TESTDLLSORT_API bool vtkVolumeProperty_GetTransferFunctionMode_0(int * return_value, vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetTransferFunctionMode]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTransferFunctionMode();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkPiecewiseFunction* GetGradientOpacity(int index)
// vtkPiecewiseFunction *GetGradientOpacity(int index)
TESTDLLSORT_API bool vtkVolumeProperty_GetGradientOpacity_0(vtkPiecewiseFunction ** return_value, vtkVolumeProperty * callingObject, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetGradientOpacity]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetGradientOpacity(index);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkPiecewiseFunction* GetGradientOpacity()
// vtkPiecewiseFunction *GetGradientOpacity()
TESTDLLSORT_API bool vtkVolumeProperty_GetGradientOpacity_1(vtkPiecewiseFunction ** return_value, vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetGradientOpacity]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetGradientOpacity();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetDisableGradientOpacity(int index, int value)
// virtual void SetDisableGradientOpacity(int index, int value)
TESTDLLSORT_API bool vtkVolumeProperty_SetDisableGradientOpacity_0(vtkVolumeProperty * callingObject, int index, int value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetDisableGradientOpacity]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetDisableGradientOpacity(index, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetDisableGradientOpacity(int value)
// virtual void SetDisableGradientOpacity(int value)
TESTDLLSORT_API bool vtkVolumeProperty_SetDisableGradientOpacity_1(vtkVolumeProperty * callingObject, int value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetDisableGradientOpacity]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetDisableGradientOpacity(value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void DisableGradientOpacityOn(int index)
// virtual void DisableGradientOpacityOn(int index )
TESTDLLSORT_API bool vtkVolumeProperty_DisableGradientOpacityOn_0(vtkVolumeProperty * callingObject, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::DisableGradientOpacityOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DisableGradientOpacityOn(index);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void DisableGradientOpacityOn()
// virtual void DisableGradientOpacityOn()
TESTDLLSORT_API bool vtkVolumeProperty_DisableGradientOpacityOn_1(vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::DisableGradientOpacityOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DisableGradientOpacityOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void DisableGradientOpacityOff(int index)
// virtual void DisableGradientOpacityOff(int index)
TESTDLLSORT_API bool vtkVolumeProperty_DisableGradientOpacityOff_0(vtkVolumeProperty * callingObject, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::DisableGradientOpacityOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DisableGradientOpacityOff(index);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void DisableGradientOpacityOff()
// virtual void DisableGradientOpacityOff()
TESTDLLSORT_API bool vtkVolumeProperty_DisableGradientOpacityOff_1(vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::DisableGradientOpacityOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DisableGradientOpacityOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetDisableGradientOpacity(int index)
// virtual int GetDisableGradientOpacity(int index)
TESTDLLSORT_API bool vtkVolumeProperty_GetDisableGradientOpacity_0(int * return_value, vtkVolumeProperty * callingObject, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetDisableGradientOpacity]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDisableGradientOpacity(index);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetDisableGradientOpacity()
// virtual int GetDisableGradientOpacity()
TESTDLLSORT_API bool vtkVolumeProperty_GetDisableGradientOpacity_1(int * return_value, vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetDisableGradientOpacity]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDisableGradientOpacity();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkPiecewiseFunction* GetStoredGradientOpacity(int index)
// vtkPiecewiseFunction *GetStoredGradientOpacity(int index)
TESTDLLSORT_API bool vtkVolumeProperty_GetStoredGradientOpacity_0(vtkPiecewiseFunction ** return_value, vtkVolumeProperty * callingObject, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetStoredGradientOpacity]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetStoredGradientOpacity(index);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkPiecewiseFunction* GetStoredGradientOpacity()
// vtkPiecewiseFunction *GetStoredGradientOpacity()
TESTDLLSORT_API bool vtkVolumeProperty_GetStoredGradientOpacity_1(vtkPiecewiseFunction ** return_value, vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetStoredGradientOpacity]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetStoredGradientOpacity();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// bool HasGradientOpacity(int index = 0)
// bool HasGradientOpacity(int index = 0)
TESTDLLSORT_API bool vtkVolumeProperty_HasGradientOpacity_0(bool * return_value, vtkVolumeProperty * callingObject, int index = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::HasGradientOpacity]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->HasGradientOpacity(index);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetShade(int index, int value)
// void SetShade(int index, int value)
TESTDLLSORT_API bool vtkVolumeProperty_SetShade_0(vtkVolumeProperty * callingObject, int index, int value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetShade]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetShade(index, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetShade(int value)
// void SetShade(int value)
TESTDLLSORT_API bool vtkVolumeProperty_SetShade_1(vtkVolumeProperty * callingObject, int value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetShade]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetShade(value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetShade(int index)
// int GetShade(int index)
TESTDLLSORT_API bool vtkVolumeProperty_GetShade_0(int * return_value, vtkVolumeProperty * callingObject, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetShade]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetShade(index);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetShade()
// int GetShade()
TESTDLLSORT_API bool vtkVolumeProperty_GetShade_1(int * return_value, vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetShade]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetShade();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ShadeOn(int index)
// void ShadeOn(int index)
TESTDLLSORT_API bool vtkVolumeProperty_ShadeOn_0(vtkVolumeProperty * callingObject, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::ShadeOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ShadeOn(index);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ShadeOn()
// void ShadeOn()
TESTDLLSORT_API bool vtkVolumeProperty_ShadeOn_1(vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::ShadeOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ShadeOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ShadeOff(int index)
// void ShadeOff(int index)
TESTDLLSORT_API bool vtkVolumeProperty_ShadeOff_0(vtkVolumeProperty * callingObject, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::ShadeOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ShadeOff(index);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ShadeOff()
// void ShadeOff()
TESTDLLSORT_API bool vtkVolumeProperty_ShadeOff_1(vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::ShadeOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ShadeOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetAmbient(int index, double value)
// void SetAmbient(int index, double value)
TESTDLLSORT_API bool vtkVolumeProperty_SetAmbient_0(vtkVolumeProperty * callingObject, int index, double value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetAmbient]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAmbient(index, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetAmbient(double value)
// void SetAmbient(double value)
TESTDLLSORT_API bool vtkVolumeProperty_SetAmbient_1(vtkVolumeProperty * callingObject, double value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetAmbient]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAmbient(value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetAmbient(int index)
// double GetAmbient(int index)
TESTDLLSORT_API bool vtkVolumeProperty_GetAmbient_0(double * return_value, vtkVolumeProperty * callingObject, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetAmbient]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAmbient(index);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetAmbient()
// double GetAmbient()
TESTDLLSORT_API bool vtkVolumeProperty_GetAmbient_1(double * return_value, vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetAmbient]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAmbient();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetDiffuse(int index, double value)
// void SetDiffuse(int index, double value)
TESTDLLSORT_API bool vtkVolumeProperty_SetDiffuse_0(vtkVolumeProperty * callingObject, int index, double value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetDiffuse]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetDiffuse(index, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetDiffuse(double value)
// void SetDiffuse(double value)
TESTDLLSORT_API bool vtkVolumeProperty_SetDiffuse_1(vtkVolumeProperty * callingObject, double value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetDiffuse]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetDiffuse(value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetDiffuse(int index)
// double GetDiffuse(int index)
TESTDLLSORT_API bool vtkVolumeProperty_GetDiffuse_0(double * return_value, vtkVolumeProperty * callingObject, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetDiffuse]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDiffuse(index);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetDiffuse()
// double GetDiffuse()
TESTDLLSORT_API bool vtkVolumeProperty_GetDiffuse_1(double * return_value, vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetDiffuse]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDiffuse();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetSpecular(int index, double value)
// void SetSpecular(int index, double value)
TESTDLLSORT_API bool vtkVolumeProperty_SetSpecular_0(vtkVolumeProperty * callingObject, int index, double value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetSpecular]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetSpecular(index, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetSpecular(double value)
// void SetSpecular(double value)
TESTDLLSORT_API bool vtkVolumeProperty_SetSpecular_1(vtkVolumeProperty * callingObject, double value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetSpecular]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetSpecular(value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetSpecular(int index)
// double GetSpecular(int index)
TESTDLLSORT_API bool vtkVolumeProperty_GetSpecular_0(double * return_value, vtkVolumeProperty * callingObject, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetSpecular]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetSpecular(index);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetSpecular()
// double GetSpecular()
TESTDLLSORT_API bool vtkVolumeProperty_GetSpecular_1(double * return_value, vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetSpecular]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetSpecular();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetSpecularPower(int index, double value)
// void SetSpecularPower(int index, double value)
TESTDLLSORT_API bool vtkVolumeProperty_SetSpecularPower_0(vtkVolumeProperty * callingObject, int index, double value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetSpecularPower]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetSpecularPower(index, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetSpecularPower(double value)
// void SetSpecularPower(double value)
TESTDLLSORT_API bool vtkVolumeProperty_SetSpecularPower_1(vtkVolumeProperty * callingObject, double value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::SetSpecularPower]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetSpecularPower(value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetSpecularPower(int index)
// double GetSpecularPower(int index)
TESTDLLSORT_API bool vtkVolumeProperty_GetSpecularPower_0(double * return_value, vtkVolumeProperty * callingObject, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetSpecularPower]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetSpecularPower(index);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetSpecularPower()
// double GetSpecularPower()
TESTDLLSORT_API bool vtkVolumeProperty_GetSpecularPower_1(double * return_value, vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::GetSpecularPower]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetSpecularPower();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void UpdateMTimes()
// void UpdateMTimes()
TESTDLLSORT_API bool vtkVolumeProperty_UpdateMTimes_0(vtkVolumeProperty * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkVolumeProperty::UpdateMTimes]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UpdateMTimes();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
