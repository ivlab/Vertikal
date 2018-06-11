
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkScalarsToColors.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkScalarsToColors_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkScalarsToColors::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkScalarsToColors_IsA_0(vtkTypeBool * return_value, vtkScalarsToColors * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::IsA]:[";
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

// static vtkScalarsToColors* SafeDownCast(vtkObjectBase * o)
// static vtkScalarsToColors* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkScalarsToColors_SafeDownCast_0(vtkScalarsToColors ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkScalarsToColors::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkScalarsToColors* NewInstance()
// vtkScalarsToColors *NewInstance()
TESTDLLSORT_API bool vtkScalarsToColors_NewInstance_0(vtkScalarsToColors ** return_value, vtkScalarsToColors * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::NewInstance]:[";
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

// static vtkScalarsToColors* New()
// static vtkScalarsToColors *New()
TESTDLLSORT_API bool vtkScalarsToColors_New_0(vtkScalarsToColors ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkScalarsToColors::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int IsOpaque()
// virtual int IsOpaque()
TESTDLLSORT_API bool vtkScalarsToColors_IsOpaque_0(int * return_value, vtkScalarsToColors * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::IsOpaque]:[";
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

// virtual void Build()
// virtual void Build()
TESTDLLSORT_API bool vtkScalarsToColors_Build_0(vtkScalarsToColors * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::Build]:[";
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

// virtual double* GetRange()
// virtual double *GetRange()
TESTDLLSORT_API bool vtkScalarsToColors_GetRange_0(double ** return_value, vtkScalarsToColors * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::GetRange]:[";
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

// virtual void SetRange(double min, double max)
// virtual void SetRange(double min, double max)
TESTDLLSORT_API bool vtkScalarsToColors_SetRange_0(vtkScalarsToColors * callingObject, double min, double max) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::SetRange]:[";
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

// virtual void SetRange(const double rng[2])
// virtual void SetRange(const double rng[2])
TESTDLLSORT_API bool vtkScalarsToColors_SetRange_1(vtkScalarsToColors * callingObject, const double rng[2]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::SetRange]:[";
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

// virtual char* MapValue(double v)
// virtual unsigned char *MapValue(double v)
TESTDLLSORT_API bool vtkScalarsToColors_MapValue_0(unsigned char ** return_value, vtkScalarsToColors * callingObject, double v) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::MapValue]:[";
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

// virtual void GetColor(double v, double rgb[3])
// virtual void GetColor(double v, double rgb[3])
TESTDLLSORT_API bool vtkScalarsToColors_GetColor_0(vtkScalarsToColors * callingObject, double v, double rgb[3]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::GetColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetColor(v, rgb);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* GetColor(double v)
// double *GetColor(double v)
TESTDLLSORT_API bool vtkScalarsToColors_GetColor_1(double ** return_value, vtkScalarsToColors * callingObject, double v) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::GetColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetColor(v);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetOpacity(double v)
// virtual double GetOpacity(double v)
TESTDLLSORT_API bool vtkScalarsToColors_GetOpacity_0(double * return_value, vtkScalarsToColors * callingObject, double v) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::GetOpacity]:[";
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

// double GetLuminance(double x)
// double GetLuminance(double x)
TESTDLLSORT_API bool vtkScalarsToColors_GetLuminance_0(double * return_value, vtkScalarsToColors * callingObject, double x) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::GetLuminance]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetLuminance(x);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetAlpha(double alpha)
// virtual void SetAlpha(double alpha)
TESTDLLSORT_API bool vtkScalarsToColors_SetAlpha_0(vtkScalarsToColors * callingObject, double alpha) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::SetAlpha]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAlpha(alpha);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual double GetAlpha()
// virtual double GetAlpha ()
TESTDLLSORT_API bool vtkScalarsToColors_GetAlpha_0(double * return_value, vtkScalarsToColors * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::GetAlpha]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAlpha();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkUnsignedCharArray* MapScalars(vtkDataArray * scalars, int colorMode, int component)
// virtual vtkUnsignedCharArray *MapScalars(vtkDataArray *scalars, int colorMode, int component)
TESTDLLSORT_API bool vtkScalarsToColors_MapScalars_0(vtkUnsignedCharArray ** return_value, vtkScalarsToColors * callingObject, vtkDataArray * scalars, int colorMode, int component) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::MapScalars]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->MapScalars(scalars, colorMode, component);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkUnsignedCharArray* MapScalars(vtkAbstractArray * scalars, int colorMode, int component)
// virtual vtkUnsignedCharArray *MapScalars(vtkAbstractArray *scalars, int colorMode, int component)
TESTDLLSORT_API bool vtkScalarsToColors_MapScalars_1(vtkUnsignedCharArray ** return_value, vtkScalarsToColors * callingObject, vtkAbstractArray * scalars, int colorMode, int component) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::MapScalars]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->MapScalars(scalars, colorMode, component);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetVectorMode(int _arg)
// virtual void SetVectorMode (int _arg)
TESTDLLSORT_API bool vtkScalarsToColors_SetVectorMode_0(vtkScalarsToColors * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::SetVectorMode]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetVectorMode(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetVectorMode()
// virtual int GetVectorMode ()
TESTDLLSORT_API bool vtkScalarsToColors_GetVectorMode_0(int * return_value, vtkScalarsToColors * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::GetVectorMode]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetVectorMode();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetVectorModeToMagnitude()
// void SetVectorModeToMagnitude()
TESTDLLSORT_API bool vtkScalarsToColors_SetVectorModeToMagnitude_0(vtkScalarsToColors * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::SetVectorModeToMagnitude]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetVectorModeToMagnitude();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetVectorModeToComponent()
// void SetVectorModeToComponent()
TESTDLLSORT_API bool vtkScalarsToColors_SetVectorModeToComponent_0(vtkScalarsToColors * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::SetVectorModeToComponent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetVectorModeToComponent();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetVectorModeToRGBColors()
// void SetVectorModeToRGBColors()
TESTDLLSORT_API bool vtkScalarsToColors_SetVectorModeToRGBColors_0(vtkScalarsToColors * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::SetVectorModeToRGBColors]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetVectorModeToRGBColors();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetVectorComponent(int _arg)
// virtual void SetVectorComponent (int _arg)
TESTDLLSORT_API bool vtkScalarsToColors_SetVectorComponent_0(vtkScalarsToColors * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::SetVectorComponent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetVectorComponent(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetVectorComponent()
// virtual int GetVectorComponent ()
TESTDLLSORT_API bool vtkScalarsToColors_GetVectorComponent_0(int * return_value, vtkScalarsToColors * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::GetVectorComponent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetVectorComponent();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetVectorSize(int _arg)
// virtual void SetVectorSize (int _arg)
TESTDLLSORT_API bool vtkScalarsToColors_SetVectorSize_0(vtkScalarsToColors * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::SetVectorSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetVectorSize(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetVectorSize()
// virtual int GetVectorSize ()
TESTDLLSORT_API bool vtkScalarsToColors_GetVectorSize_0(int * return_value, vtkScalarsToColors * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::GetVectorSize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetVectorSize();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void MapVectorsThroughTable(void * input, unsigned char * output, int inputDataType, int numberOfValues, int inputIncrement, int outputFormat, int vectorComponent, int vectorSize)
// void MapVectorsThroughTable(void *input, unsigned char *output, int inputDataType, int numberOfValues, int inputIncrement, int outputFormat, int vectorComponent, int vectorSize)
TESTDLLSORT_API bool vtkScalarsToColors_MapVectorsThroughTable_0(vtkScalarsToColors * callingObject, void * input, unsigned char * output, int inputDataType, int numberOfValues, int inputIncrement, int outputFormat, int vectorComponent, int vectorSize) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::MapVectorsThroughTable]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->MapVectorsThroughTable(input, output, inputDataType, numberOfValues, inputIncrement, outputFormat, vectorComponent, vectorSize);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void MapVectorsThroughTable(void * input, unsigned char * output, int inputDataType, int numberOfValues, int inputIncrement, int outputFormat)
// void MapVectorsThroughTable(void *input, unsigned char *output, int inputDataType, int numberOfValues, int inputIncrement, int outputFormat)
TESTDLLSORT_API bool vtkScalarsToColors_MapVectorsThroughTable_1(vtkScalarsToColors * callingObject, void * input, unsigned char * output, int inputDataType, int numberOfValues, int inputIncrement, int outputFormat) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::MapVectorsThroughTable]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->MapVectorsThroughTable(input, output, inputDataType, numberOfValues, inputIncrement, outputFormat);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void MapScalarsThroughTable(vtkDataArray * scalars, unsigned char * output, int outputFormat)
// void MapScalarsThroughTable(vtkDataArray *scalars, unsigned char *output, int outputFormat)
TESTDLLSORT_API bool vtkScalarsToColors_MapScalarsThroughTable_0(vtkScalarsToColors * callingObject, vtkDataArray * scalars, unsigned char * output, int outputFormat) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::MapScalarsThroughTable]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->MapScalarsThroughTable(scalars, output, outputFormat);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void MapScalarsThroughTable(vtkDataArray * scalars, unsigned char * output)
// void MapScalarsThroughTable(vtkDataArray *scalars, unsigned char *output)
TESTDLLSORT_API bool vtkScalarsToColors_MapScalarsThroughTable_1(vtkScalarsToColors * callingObject, vtkDataArray * scalars, unsigned char * output) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::MapScalarsThroughTable]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->MapScalarsThroughTable(scalars, output);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void MapScalarsThroughTable(void * input, unsigned char * output, int inputDataType, int numberOfValues, int inputIncrement, int outputFormat)
// void MapScalarsThroughTable(void *input, unsigned char *output, int inputDataType, int numberOfValues, int inputIncrement, int outputFormat)
TESTDLLSORT_API bool vtkScalarsToColors_MapScalarsThroughTable_2(vtkScalarsToColors * callingObject, void * input, unsigned char * output, int inputDataType, int numberOfValues, int inputIncrement, int outputFormat) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::MapScalarsThroughTable]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->MapScalarsThroughTable(input, output, inputDataType, numberOfValues, inputIncrement, outputFormat);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void MapScalarsThroughTable2(void * input, unsigned char * output, int inputDataType, int numberOfValues, int inputIncrement, int outputFormat)
// virtual void MapScalarsThroughTable2(void *input, unsigned char *output, int inputDataType, int numberOfValues, int inputIncrement, int outputFormat)
TESTDLLSORT_API bool vtkScalarsToColors_MapScalarsThroughTable2_0(vtkScalarsToColors * callingObject, void * input, unsigned char * output, int inputDataType, int numberOfValues, int inputIncrement, int outputFormat) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::MapScalarsThroughTable2]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->MapScalarsThroughTable2(input, output, inputDataType, numberOfValues, inputIncrement, outputFormat);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void DeepCopy(vtkScalarsToColors * o)
// virtual void DeepCopy(vtkScalarsToColors *o)
TESTDLLSORT_API bool vtkScalarsToColors_DeepCopy_0(vtkScalarsToColors * callingObject, vtkScalarsToColors * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::DeepCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DeepCopy(o);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int UsingLogScale()
// virtual int UsingLogScale()
TESTDLLSORT_API bool vtkScalarsToColors_UsingLogScale_0(int * return_value, vtkScalarsToColors * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::UsingLogScale]:[";
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

// virtual vtkIdType GetNumberOfAvailableColors()
// virtual vtkIdType GetNumberOfAvailableColors()
TESTDLLSORT_API bool vtkScalarsToColors_GetNumberOfAvailableColors_0(vtkIdType * return_value, vtkScalarsToColors * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::GetNumberOfAvailableColors]:[";
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

// virtual void SetAnnotations(vtkAbstractArray * values, vtkStringArray * annotations)
// virtual void SetAnnotations( vtkAbstractArray* values, vtkStringArray* annotations )
TESTDLLSORT_API bool vtkScalarsToColors_SetAnnotations_0(vtkScalarsToColors * callingObject, vtkAbstractArray * values, vtkStringArray * annotations) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::SetAnnotations]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAnnotations(values, annotations);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkAbstractArray* GetAnnotatedValues()
// virtual vtkAbstractArray *GetAnnotatedValues ()
TESTDLLSORT_API bool vtkScalarsToColors_GetAnnotatedValues_0(vtkAbstractArray ** return_value, vtkScalarsToColors * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::GetAnnotatedValues]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAnnotatedValues();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkStringArray* GetAnnotations()
// virtual vtkStringArray *GetAnnotations ()
TESTDLLSORT_API bool vtkScalarsToColors_GetAnnotations_0(vtkStringArray ** return_value, vtkScalarsToColors * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::GetAnnotations]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAnnotations();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkIdType SetAnnotation(vtkStdString value, vtkStdString annotation)
// virtual vtkIdType SetAnnotation(vtkStdString value, vtkStdString annotation)
TESTDLLSORT_API bool vtkScalarsToColors_SetAnnotation_0(vtkIdType * return_value, vtkScalarsToColors * callingObject, vtkStdString value, vtkStdString annotation) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::SetAnnotation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->SetAnnotation(value, annotation);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType GetNumberOfAnnotatedValues()
// vtkIdType GetNumberOfAnnotatedValues()
TESTDLLSORT_API bool vtkScalarsToColors_GetNumberOfAnnotatedValues_0(vtkIdType * return_value, vtkScalarsToColors * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::GetNumberOfAnnotatedValues]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfAnnotatedValues();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkStdString GetAnnotation(vtkIdType idx)
// vtkStdString GetAnnotation(vtkIdType idx)
TESTDLLSORT_API bool vtkScalarsToColors_GetAnnotation_0(vtkStdString * return_value, vtkScalarsToColors * callingObject, vtkIdType idx) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::GetAnnotation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAnnotation(idx);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void GetIndexedColor(vtkIdType i, double rgba[4])
// virtual void GetIndexedColor(vtkIdType i, double rgba[4])
TESTDLLSORT_API bool vtkScalarsToColors_GetIndexedColor_0(vtkScalarsToColors * callingObject, vtkIdType i, double rgba[4]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::GetIndexedColor]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetIndexedColor(i, rgba);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ResetAnnotations()
// virtual void ResetAnnotations()
TESTDLLSORT_API bool vtkScalarsToColors_ResetAnnotations_0(vtkScalarsToColors * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::ResetAnnotations]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ResetAnnotations();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetIndexedLookup(int _arg)
// virtual void SetIndexedLookup (int _arg)
TESTDLLSORT_API bool vtkScalarsToColors_SetIndexedLookup_0(vtkScalarsToColors * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::SetIndexedLookup]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetIndexedLookup(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetIndexedLookup()
// virtual int GetIndexedLookup ()
TESTDLLSORT_API bool vtkScalarsToColors_GetIndexedLookup_0(int * return_value, vtkScalarsToColors * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::GetIndexedLookup]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetIndexedLookup();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void IndexedLookupOn()
// virtual void IndexedLookupOn ()
TESTDLLSORT_API bool vtkScalarsToColors_IndexedLookupOn_0(vtkScalarsToColors * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::IndexedLookupOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->IndexedLookupOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void IndexedLookupOff()
// virtual void IndexedLookupOff ()
TESTDLLSORT_API bool vtkScalarsToColors_IndexedLookupOff_0(vtkScalarsToColors * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkScalarsToColors::IndexedLookupOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->IndexedLookupOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
