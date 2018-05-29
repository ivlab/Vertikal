
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkLookupTable.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkLookupTable* New()
// static vtkLookupTable *New()
TESTDLLSORT_API bool vtkLookupTable_New_0(vtkLookupTable ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkLookupTable::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkLookupTable_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkLookupTable::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkLookupTable_IsA_0(vtkTypeBool * return_value, vtkLookupTable * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::IsA]:[";
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

// static vtkLookupTable* SafeDownCast(vtkObjectBase * o)
// static vtkLookupTable* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkLookupTable_SafeDownCast_0(vtkLookupTable ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkLookupTable::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkLookupTable* NewInstance()
// vtkLookupTable *NewInstance()
TESTDLLSORT_API bool vtkLookupTable_NewInstance_0(vtkLookupTable ** return_value, vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::NewInstance]:[";
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

// int IsOpaque()
// int IsOpaque()
TESTDLLSORT_API bool vtkLookupTable_IsOpaque_0(int * return_value, vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::IsOpaque]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->IsOpaque();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Allocate(int sz = 256, int ext = 256)
// int Allocate(int sz=256, int ext=256)
TESTDLLSORT_API bool vtkLookupTable_Allocate_0(int * return_value, vtkLookupTable * callingObject, int sz = 256, int ext = 256) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::Allocate]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Allocate(sz, ext);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Build()
// void Build()
TESTDLLSORT_API bool vtkLookupTable_Build_0(vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::Build]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Build();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ForceBuild()
// virtual void ForceBuild()
TESTDLLSORT_API bool vtkLookupTable_ForceBuild_0(vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::ForceBuild]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ForceBuild();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void BuildSpecialColors()
// void BuildSpecialColors()
TESTDLLSORT_API bool vtkLookupTable_BuildSpecialColors_0(vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::BuildSpecialColors]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->BuildSpecialColors();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetRamp(int _arg)
// virtual void SetRamp (int _arg)
TESTDLLSORT_API bool vtkLookupTable_SetRamp_0(vtkLookupTable * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetRamp]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetRamp(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetRampToLinear()
// void SetRampToLinear()
TESTDLLSORT_API bool vtkLookupTable_SetRampToLinear_0(vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetRampToLinear]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetRampToLinear();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetRampToSCurve()
// void SetRampToSCurve()
TESTDLLSORT_API bool vtkLookupTable_SetRampToSCurve_0(vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetRampToSCurve]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetRampToSCurve();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetRampToSQRT()
// void SetRampToSQRT()
TESTDLLSORT_API bool vtkLookupTable_SetRampToSQRT_0(vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetRampToSQRT]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetRampToSQRT();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetRamp()
// virtual int GetRamp ()
TESTDLLSORT_API bool vtkLookupTable_GetRamp_0(int * return_value, vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetRamp]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetRamp();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetScale(int scale)
// void SetScale(int scale)
TESTDLLSORT_API bool vtkLookupTable_SetScale_0(vtkLookupTable * callingObject, int scale) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetScale]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScale(scale);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetScaleToLinear()
// void SetScaleToLinear()
TESTDLLSORT_API bool vtkLookupTable_SetScaleToLinear_0(vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetScaleToLinear]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScaleToLinear();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetScaleToLog10()
// void SetScaleToLog10()
TESTDLLSORT_API bool vtkLookupTable_SetScaleToLog10_0(vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetScaleToLog10]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetScaleToLog10();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetScale()
// virtual int GetScale ()
TESTDLLSORT_API bool vtkLookupTable_GetScale_0(int * return_value, vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetScale]:[";
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

// virtual void SetTableRange(const double r[2])
// virtual void SetTableRange(const double r[2])
TESTDLLSORT_API bool vtkLookupTable_SetTableRange_0(vtkLookupTable * callingObject, const double r[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetTableRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTableRange(r);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetTableRange(double min, double max)
// virtual void SetTableRange(double min, double max)
TESTDLLSORT_API bool vtkLookupTable_SetTableRange_1(vtkLookupTable * callingObject, double min, double max) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetTableRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTableRange(min, max);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetTableRange()
// virtual double *GetTableRange ()
TESTDLLSORT_API bool vtkLookupTable_GetTableRange_0(double ** return_value, vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetTableRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTableRange();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetTableRange(double data[2])
// virtual void GetTableRange (double data[2])
TESTDLLSORT_API bool vtkLookupTable_GetTableRange_1(vtkLookupTable * callingObject, double data[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetTableRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetTableRange(data);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetHueRange(double _arg1, double _arg2)
// virtual void SetHueRange (double _arg1, double _arg2)
TESTDLLSORT_API bool vtkLookupTable_SetHueRange_0(vtkLookupTable * callingObject, double _arg1, double _arg2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetHueRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetHueRange(_arg1, _arg2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetHueRange(double _arg[2])
// void SetHueRange (double _arg[2])
TESTDLLSORT_API bool vtkLookupTable_SetHueRange_1(vtkLookupTable * callingObject, double _arg[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetHueRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetHueRange(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetHueRange()
// virtual double *GetHueRange ()
TESTDLLSORT_API bool vtkLookupTable_GetHueRange_0(double ** return_value, vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetHueRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetHueRange();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetHueRange(double & _arg1, double & _arg2)
// virtual void GetHueRange (double &_arg1, double &_arg2)
TESTDLLSORT_API bool vtkLookupTable_GetHueRange_1(vtkLookupTable * callingObject, double * _arg1, double * _arg2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetHueRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetHueRange(*_arg1, *_arg2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetHueRange(double _arg[2])
// virtual void GetHueRange (double _arg[2])
TESTDLLSORT_API bool vtkLookupTable_GetHueRange_2(vtkLookupTable * callingObject, double _arg[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetHueRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetHueRange(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetSaturationRange(double _arg1, double _arg2)
// virtual void SetSaturationRange (double _arg1, double _arg2)
TESTDLLSORT_API bool vtkLookupTable_SetSaturationRange_0(vtkLookupTable * callingObject, double _arg1, double _arg2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetSaturationRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetSaturationRange(_arg1, _arg2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetSaturationRange(double _arg[2])
// void SetSaturationRange (double _arg[2])
TESTDLLSORT_API bool vtkLookupTable_SetSaturationRange_1(vtkLookupTable * callingObject, double _arg[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetSaturationRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetSaturationRange(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetSaturationRange()
// virtual double *GetSaturationRange ()
TESTDLLSORT_API bool vtkLookupTable_GetSaturationRange_0(double ** return_value, vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetSaturationRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetSaturationRange();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetSaturationRange(double & _arg1, double & _arg2)
// virtual void GetSaturationRange (double &_arg1, double &_arg2)
TESTDLLSORT_API bool vtkLookupTable_GetSaturationRange_1(vtkLookupTable * callingObject, double * _arg1, double * _arg2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetSaturationRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetSaturationRange(*_arg1, *_arg2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetSaturationRange(double _arg[2])
// virtual void GetSaturationRange (double _arg[2])
TESTDLLSORT_API bool vtkLookupTable_GetSaturationRange_2(vtkLookupTable * callingObject, double _arg[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetSaturationRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetSaturationRange(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetValueRange(double _arg1, double _arg2)
// virtual void SetValueRange (double _arg1, double _arg2)
TESTDLLSORT_API bool vtkLookupTable_SetValueRange_0(vtkLookupTable * callingObject, double _arg1, double _arg2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetValueRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetValueRange(_arg1, _arg2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetValueRange(double _arg[2])
// void SetValueRange (double _arg[2])
TESTDLLSORT_API bool vtkLookupTable_SetValueRange_1(vtkLookupTable * callingObject, double _arg[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetValueRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetValueRange(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetValueRange()
// virtual double *GetValueRange ()
TESTDLLSORT_API bool vtkLookupTable_GetValueRange_0(double ** return_value, vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetValueRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetValueRange();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetValueRange(double & _arg1, double & _arg2)
// virtual void GetValueRange (double &_arg1, double &_arg2)
TESTDLLSORT_API bool vtkLookupTable_GetValueRange_1(vtkLookupTable * callingObject, double * _arg1, double * _arg2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetValueRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetValueRange(*_arg1, *_arg2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetValueRange(double _arg[2])
// virtual void GetValueRange (double _arg[2])
TESTDLLSORT_API bool vtkLookupTable_GetValueRange_2(vtkLookupTable * callingObject, double _arg[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetValueRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetValueRange(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetAlphaRange(double _arg1, double _arg2)
// virtual void SetAlphaRange (double _arg1, double _arg2)
TESTDLLSORT_API bool vtkLookupTable_SetAlphaRange_0(vtkLookupTable * callingObject, double _arg1, double _arg2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetAlphaRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAlphaRange(_arg1, _arg2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetAlphaRange(double _arg[2])
// void SetAlphaRange (double _arg[2])
TESTDLLSORT_API bool vtkLookupTable_SetAlphaRange_1(vtkLookupTable * callingObject, double _arg[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetAlphaRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAlphaRange(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetAlphaRange()
// virtual double *GetAlphaRange ()
TESTDLLSORT_API bool vtkLookupTable_GetAlphaRange_0(double ** return_value, vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetAlphaRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAlphaRange();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetAlphaRange(double & _arg1, double & _arg2)
// virtual void GetAlphaRange (double &_arg1, double &_arg2)
TESTDLLSORT_API bool vtkLookupTable_GetAlphaRange_1(vtkLookupTable * callingObject, double * _arg1, double * _arg2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetAlphaRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetAlphaRange(*_arg1, *_arg2);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetAlphaRange(double _arg[2])
// virtual void GetAlphaRange (double _arg[2])
TESTDLLSORT_API bool vtkLookupTable_GetAlphaRange_2(vtkLookupTable * callingObject, double _arg[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetAlphaRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetAlphaRange(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetNanColor(double _arg1, double _arg2, double _arg3, double _arg4)
// virtual void SetNanColor (double _arg1, double _arg2, double _arg3, double _arg4)
TESTDLLSORT_API bool vtkLookupTable_SetNanColor_0(vtkLookupTable * callingObject, double _arg1, double _arg2, double _arg3, double _arg4) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetNanColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetNanColor(_arg1, _arg2, _arg3, _arg4);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetNanColor(double _arg[4])
// virtual void SetNanColor (double _arg[4])
TESTDLLSORT_API bool vtkLookupTable_SetNanColor_1(vtkLookupTable * callingObject, double _arg[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetNanColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetNanColor(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetNanColor()
// virtual double *GetNanColor ()
TESTDLLSORT_API bool vtkLookupTable_GetNanColor_0(double ** return_value, vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetNanColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNanColor();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetNanColor(double & _arg1, double & _arg2, double & _arg3, double & _arg4)
// virtual void GetNanColor (double &_arg1, double &_arg2, double &_arg3, double &_arg4)
TESTDLLSORT_API bool vtkLookupTable_GetNanColor_1(vtkLookupTable * callingObject, double * _arg1, double * _arg2, double * _arg3, double * _arg4) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetNanColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetNanColor(*_arg1, *_arg2, *_arg3, *_arg4);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetNanColor(double _arg[4])
// virtual void GetNanColor (double _arg[4])
TESTDLLSORT_API bool vtkLookupTable_GetNanColor_2(vtkLookupTable * callingObject, double _arg[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetNanColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetNanColor(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char* GetNanColorAsUnsignedChars()
// unsigned char* GetNanColorAsUnsignedChars()
TESTDLLSORT_API bool vtkLookupTable_GetNanColorAsUnsignedChars_0(unsigned char ** return_value, vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetNanColorAsUnsignedChars]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNanColorAsUnsignedChars();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void GetColorAsUnsignedChars(const double colorIn[4], unsigned char colorOut[4])
// static void GetColorAsUnsignedChars(const double colorIn[4], unsigned char colorOut[4])
TESTDLLSORT_API bool vtkLookupTable_GetColorAsUnsignedChars_0(const double colorIn[4], unsigned char colorOut[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetColorAsUnsignedChars]:[";
#endif
	bool success = true;
	vtkLookupTable::GetColorAsUnsignedChars(colorIn, colorOut);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetBelowRangeColor(double _arg1, double _arg2, double _arg3, double _arg4)
// virtual void SetBelowRangeColor (double _arg1, double _arg2, double _arg3, double _arg4)
TESTDLLSORT_API bool vtkLookupTable_SetBelowRangeColor_0(vtkLookupTable * callingObject, double _arg1, double _arg2, double _arg3, double _arg4) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetBelowRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetBelowRangeColor(_arg1, _arg2, _arg3, _arg4);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetBelowRangeColor(double _arg[4])
// virtual void SetBelowRangeColor (double _arg[4])
TESTDLLSORT_API bool vtkLookupTable_SetBelowRangeColor_1(vtkLookupTable * callingObject, double _arg[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetBelowRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetBelowRangeColor(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetBelowRangeColor()
// virtual double *GetBelowRangeColor ()
TESTDLLSORT_API bool vtkLookupTable_GetBelowRangeColor_0(double ** return_value, vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetBelowRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetBelowRangeColor();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetBelowRangeColor(double & _arg1, double & _arg2, double & _arg3, double & _arg4)
// virtual void GetBelowRangeColor (double &_arg1, double &_arg2, double &_arg3, double &_arg4)
TESTDLLSORT_API bool vtkLookupTable_GetBelowRangeColor_1(vtkLookupTable * callingObject, double * _arg1, double * _arg2, double * _arg3, double * _arg4) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetBelowRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetBelowRangeColor(*_arg1, *_arg2, *_arg3, *_arg4);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetBelowRangeColor(double _arg[4])
// virtual void GetBelowRangeColor (double _arg[4])
TESTDLLSORT_API bool vtkLookupTable_GetBelowRangeColor_2(vtkLookupTable * callingObject, double _arg[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetBelowRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetBelowRangeColor(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetUseBelowRangeColor(int _arg)
// virtual void SetUseBelowRangeColor (int _arg)
TESTDLLSORT_API bool vtkLookupTable_SetUseBelowRangeColor_0(vtkLookupTable * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetUseBelowRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetUseBelowRangeColor(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetUseBelowRangeColor()
// virtual int GetUseBelowRangeColor ()
TESTDLLSORT_API bool vtkLookupTable_GetUseBelowRangeColor_0(int * return_value, vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetUseBelowRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUseBelowRangeColor();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseBelowRangeColorOn()
// virtual void UseBelowRangeColorOn ()
TESTDLLSORT_API bool vtkLookupTable_UseBelowRangeColorOn_0(vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::UseBelowRangeColorOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseBelowRangeColorOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseBelowRangeColorOff()
// virtual void UseBelowRangeColorOff ()
TESTDLLSORT_API bool vtkLookupTable_UseBelowRangeColorOff_0(vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::UseBelowRangeColorOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseBelowRangeColorOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetAboveRangeColor(double _arg1, double _arg2, double _arg3, double _arg4)
// virtual void SetAboveRangeColor (double _arg1, double _arg2, double _arg3, double _arg4)
TESTDLLSORT_API bool vtkLookupTable_SetAboveRangeColor_0(vtkLookupTable * callingObject, double _arg1, double _arg2, double _arg3, double _arg4) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetAboveRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAboveRangeColor(_arg1, _arg2, _arg3, _arg4);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetAboveRangeColor(double _arg[4])
// virtual void SetAboveRangeColor (double _arg[4])
TESTDLLSORT_API bool vtkLookupTable_SetAboveRangeColor_1(vtkLookupTable * callingObject, double _arg[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetAboveRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAboveRangeColor(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double* GetAboveRangeColor()
// virtual double *GetAboveRangeColor ()
TESTDLLSORT_API bool vtkLookupTable_GetAboveRangeColor_0(double ** return_value, vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetAboveRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAboveRangeColor();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetAboveRangeColor(double & _arg1, double & _arg2, double & _arg3, double & _arg4)
// virtual void GetAboveRangeColor (double &_arg1, double &_arg2, double &_arg3, double &_arg4)
TESTDLLSORT_API bool vtkLookupTable_GetAboveRangeColor_1(vtkLookupTable * callingObject, double * _arg1, double * _arg2, double * _arg3, double * _arg4) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetAboveRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetAboveRangeColor(*_arg1, *_arg2, *_arg3, *_arg4);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetAboveRangeColor(double _arg[4])
// virtual void GetAboveRangeColor (double _arg[4])
TESTDLLSORT_API bool vtkLookupTable_GetAboveRangeColor_2(vtkLookupTable * callingObject, double _arg[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetAboveRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetAboveRangeColor(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetUseAboveRangeColor(int _arg)
// virtual void SetUseAboveRangeColor (int _arg)
TESTDLLSORT_API bool vtkLookupTable_SetUseAboveRangeColor_0(vtkLookupTable * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetUseAboveRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetUseAboveRangeColor(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetUseAboveRangeColor()
// virtual int GetUseAboveRangeColor ()
TESTDLLSORT_API bool vtkLookupTable_GetUseAboveRangeColor_0(int * return_value, vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetUseAboveRangeColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUseAboveRangeColor();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseAboveRangeColorOn()
// virtual void UseAboveRangeColorOn ()
TESTDLLSORT_API bool vtkLookupTable_UseAboveRangeColorOn_0(vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::UseAboveRangeColorOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseAboveRangeColorOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void UseAboveRangeColorOff()
// virtual void UseAboveRangeColorOff ()
TESTDLLSORT_API bool vtkLookupTable_UseAboveRangeColorOff_0(vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::UseAboveRangeColorOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->UseAboveRangeColorOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char* MapValue(double v)
// unsigned char* MapValue(double v)
TESTDLLSORT_API bool vtkLookupTable_MapValue_0(unsigned char ** return_value, vtkLookupTable * callingObject, double v) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::MapValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->MapValue(v);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetColor(double x, double rgb[3])
// void GetColor(double x, double rgb[3])
TESTDLLSORT_API bool vtkLookupTable_GetColor_0(vtkLookupTable * callingObject, double x, double rgb[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetColor(x, rgb);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double GetOpacity(double v)
// double GetOpacity(double v)
TESTDLLSORT_API bool vtkLookupTable_GetOpacity_0(double * return_value, vtkLookupTable * callingObject, double v) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetOpacity]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetOpacity(v);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkIdType GetIndex(double v)
// virtual vtkIdType GetIndex(double v)
TESTDLLSORT_API bool vtkLookupTable_GetIndex_0(vtkIdType * return_value, vtkLookupTable * callingObject, double v) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetIndex]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetIndex(v);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetNumberOfTableValues(vtkIdType number)
// void SetNumberOfTableValues(vtkIdType number)
TESTDLLSORT_API bool vtkLookupTable_SetNumberOfTableValues_0(vtkLookupTable * callingObject, vtkIdType number) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetNumberOfTableValues]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetNumberOfTableValues(number);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType GetNumberOfTableValues()
// vtkIdType GetNumberOfTableValues()
TESTDLLSORT_API bool vtkLookupTable_GetNumberOfTableValues_0(vtkIdType * return_value, vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetNumberOfTableValues]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfTableValues();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetTableValue(vtkIdType indx, const double rgba[4])
// virtual void SetTableValue(vtkIdType indx, const double rgba[4])
TESTDLLSORT_API bool vtkLookupTable_SetTableValue_0(vtkLookupTable * callingObject, vtkIdType indx, const double rgba[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetTableValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTableValue(indx, rgba);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* GetTableValue(vtkIdType id)
// double *GetTableValue(vtkIdType id)
TESTDLLSORT_API bool vtkLookupTable_GetTableValue_0(double ** return_value, vtkLookupTable * callingObject, vtkIdType id) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetTableValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTableValue(id);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetTableValue(vtkIdType id, double rgba[4])
// void GetTableValue(vtkIdType id, double rgba[4])
TESTDLLSORT_API bool vtkLookupTable_GetTableValue_1(vtkLookupTable * callingObject, vtkIdType id, double rgba[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetTableValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetTableValue(id, rgba);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char* GetPointer(vtkIdType id)
// unsigned char *GetPointer(vtkIdType id)
TESTDLLSORT_API bool vtkLookupTable_GetPointer_0(unsigned char ** return_value, vtkLookupTable * callingObject, vtkIdType id) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetPointer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPointer(id);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char* WritePointer(vtkIdType id, int number)
// unsigned char *WritePointer(vtkIdType id, int number)
TESTDLLSORT_API bool vtkLookupTable_WritePointer_0(unsigned char ** return_value, vtkLookupTable * callingObject, vtkIdType id, int number) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::WritePointer]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->WritePointer(id, number);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* GetRange()
// double *GetRange()
TESTDLLSORT_API bool vtkLookupTable_GetRange_0(double ** return_value, vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetRange();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetRange(double min, double max)
// void SetRange(double min, double max)
TESTDLLSORT_API bool vtkLookupTable_SetRange_0(vtkLookupTable * callingObject, double min, double max) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetRange(min, max);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetRange(const double rng[2])
// void SetRange(const double rng[2])
TESTDLLSORT_API bool vtkLookupTable_SetRange_1(vtkLookupTable * callingObject, const double rng[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetRange]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetRange(rng);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void GetLogRange(const double range[2], double log_range[2])
// static void GetLogRange(const double range[2], double log_range[2])
TESTDLLSORT_API bool vtkLookupTable_GetLogRange_0(const double range[2], double log_range[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetLogRange]:[";
#endif
	bool success = true;
	vtkLookupTable::GetLogRange(range, log_range);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static double ApplyLogScale(double v, const double range[2], const double log_range[2])
// static double ApplyLogScale(double v, const double range[2], const double log_range[2])
TESTDLLSORT_API bool vtkLookupTable_ApplyLogScale_0(double * return_value, double v, const double range[2], const double log_range[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::ApplyLogScale]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkLookupTable::ApplyLogScale(v, range, log_range);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetNumberOfColors(vtkIdType _arg)
// virtual void SetNumberOfColors (vtkIdType _arg)
TESTDLLSORT_API bool vtkLookupTable_SetNumberOfColors_0(vtkLookupTable * callingObject, vtkIdType _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetNumberOfColors]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetNumberOfColors(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkIdType GetNumberOfColorsMinValue()
// virtual vtkIdType GetNumberOfColorsMinValue ()
TESTDLLSORT_API bool vtkLookupTable_GetNumberOfColorsMinValue_0(vtkIdType * return_value, vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetNumberOfColorsMinValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfColorsMinValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkIdType GetNumberOfColorsMaxValue()
// virtual vtkIdType GetNumberOfColorsMaxValue ()
TESTDLLSORT_API bool vtkLookupTable_GetNumberOfColorsMaxValue_0(vtkIdType * return_value, vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetNumberOfColorsMaxValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfColorsMaxValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkIdType GetNumberOfColors()
// virtual vtkIdType GetNumberOfColors ()
TESTDLLSORT_API bool vtkLookupTable_GetNumberOfColors_0(vtkIdType * return_value, vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetNumberOfColors]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfColors();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTable(vtkUnsignedCharArray * ARG_0)
// void SetTable(vtkUnsignedCharArray *)
TESTDLLSORT_API bool vtkLookupTable_SetTable_0(vtkLookupTable * callingObject, vtkUnsignedCharArray * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::SetTable]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTable(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkUnsignedCharArray* GetTable()
// virtual vtkUnsignedCharArray *GetTable ()
TESTDLLSORT_API bool vtkLookupTable_GetTable_0(vtkUnsignedCharArray ** return_value, vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetTable]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetTable();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void MapScalarsThroughTable2(void * input, unsigned char * output, int inputDataType, int numberOfValues, int inputIncrement, int outputIncrement)
// void MapScalarsThroughTable2(void *input, unsigned char *output, int inputDataType, int numberOfValues, int inputIncrement, int outputIncrement)
TESTDLLSORT_API bool vtkLookupTable_MapScalarsThroughTable2_0(vtkLookupTable * callingObject, void * input, unsigned char * output, int inputDataType, int numberOfValues, int inputIncrement, int outputIncrement) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::MapScalarsThroughTable2]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->MapScalarsThroughTable2(input, output, inputDataType, numberOfValues, inputIncrement, outputIncrement);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void DeepCopy(vtkScalarsToColors * lut)
// void DeepCopy(vtkScalarsToColors *lut)
TESTDLLSORT_API bool vtkLookupTable_DeepCopy_0(vtkLookupTable * callingObject, vtkScalarsToColors * lut) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::DeepCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DeepCopy(lut);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int UsingLogScale()
// int UsingLogScale()
TESTDLLSORT_API bool vtkLookupTable_UsingLogScale_0(int * return_value, vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::UsingLogScale]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->UsingLogScale();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType GetNumberOfAvailableColors()
// vtkIdType GetNumberOfAvailableColors()
TESTDLLSORT_API bool vtkLookupTable_GetNumberOfAvailableColors_0(vtkIdType * return_value, vtkLookupTable * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetNumberOfAvailableColors]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfAvailableColors();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GetIndexedColor(vtkIdType idx, double rgba[4])
// void GetIndexedColor(vtkIdType idx, double rgba[4])
TESTDLLSORT_API bool vtkLookupTable_GetIndexedColor_0(vtkLookupTable * callingObject, vtkIdType idx, double rgba[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkLookupTable::GetIndexedColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetIndexedColor(idx, rgba);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
