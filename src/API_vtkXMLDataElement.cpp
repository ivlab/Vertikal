
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkXMLDataElement.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkXMLDataElement_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkXMLDataElement::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkXMLDataElement_IsA_0(vtkTypeBool * return_value, vtkXMLDataElement * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::IsA]:[";
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

// static vtkXMLDataElement* SafeDownCast(vtkObjectBase * o)
// static vtkXMLDataElement* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkXMLDataElement_SafeDownCast_0(vtkXMLDataElement ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkXMLDataElement::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkXMLDataElement* NewInstance()
// vtkXMLDataElement *NewInstance()
TESTDLLSORT_API bool vtkXMLDataElement_NewInstance_0(vtkXMLDataElement ** return_value, vtkXMLDataElement * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::NewInstance]:[";
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

// static vtkXMLDataElement* New()
// static vtkXMLDataElement* New()
TESTDLLSORT_API bool vtkXMLDataElement_New_0(vtkXMLDataElement ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkXMLDataElement::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual char* GetName()
// virtual char* GetName ()
TESTDLLSORT_API bool vtkXMLDataElement_GetName_0(char ** return_value, vtkXMLDataElement * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetName]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetName();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetName(const char * _arg)
// virtual void SetName (const char* _arg)
TESTDLLSORT_API bool vtkXMLDataElement_SetName_0(vtkXMLDataElement * callingObject, const char * _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::SetName]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetName(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual char* GetId()
// virtual char* GetId ()
TESTDLLSORT_API bool vtkXMLDataElement_GetId_0(char ** return_value, vtkXMLDataElement * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetId]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetId();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetId(const char * _arg)
// virtual void SetId (const char* _arg)
TESTDLLSORT_API bool vtkXMLDataElement_SetId_0(vtkXMLDataElement * callingObject, const char * _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::SetId]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetId(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char* GetAttribute(const char * name)
// const char* GetAttribute(const char* name)
TESTDLLSORT_API bool vtkXMLDataElement_GetAttribute_0(const char ** return_value, vtkXMLDataElement * callingObject, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAttribute(name);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetAttribute(const char * name, const char * value)
// void SetAttribute(const char* name, const char* value)
TESTDLLSORT_API bool vtkXMLDataElement_SetAttribute_0(vtkXMLDataElement * callingObject, const char * name, const char * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::SetAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAttribute(name, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetCharacterData(const char * c, int length)
// void SetCharacterData(const char* c, int length)
TESTDLLSORT_API bool vtkXMLDataElement_SetCharacterData_0(vtkXMLDataElement * callingObject, const char * c, int length) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::SetCharacterData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCharacterData(c, length);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AddCharacterData(const char * c, size_t length)
// void AddCharacterData(const char* c, size_t length)
TESTDLLSORT_API bool vtkXMLDataElement_AddCharacterData_0(vtkXMLDataElement * callingObject, const char * c, size_t length) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::AddCharacterData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AddCharacterData(c, length);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual char* GetCharacterData()
// virtual char* GetCharacterData ()
TESTDLLSORT_API bool vtkXMLDataElement_GetCharacterData_0(char ** return_value, vtkXMLDataElement * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetCharacterData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCharacterData();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetScalarAttribute(const char * name, int & value)
// int GetScalarAttribute(const char* name, int& value)
TESTDLLSORT_API bool vtkXMLDataElement_GetScalarAttribute_0(int * return_value, vtkXMLDataElement * callingObject, const char * name, int * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetScalarAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarAttribute(name, *value);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetScalarAttribute(const char * name, float & value)
// int GetScalarAttribute(const char* name, float& value)
TESTDLLSORT_API bool vtkXMLDataElement_GetScalarAttribute_1(int * return_value, vtkXMLDataElement * callingObject, const char * name, float * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetScalarAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarAttribute(name, *value);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetScalarAttribute(const char * name, double & value)
// int GetScalarAttribute(const char* name, double& value)
TESTDLLSORT_API bool vtkXMLDataElement_GetScalarAttribute_2(int * return_value, vtkXMLDataElement * callingObject, const char * name, double * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetScalarAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarAttribute(name, *value);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetScalarAttribute(const char * name, long & value)
// int GetScalarAttribute(const char* name, long& value)
TESTDLLSORT_API bool vtkXMLDataElement_GetScalarAttribute_3(int * return_value, vtkXMLDataElement * callingObject, const char * name, long * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetScalarAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarAttribute(name, *value);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetScalarAttribute(const char * name, unsigned long & value)
// int GetScalarAttribute(const char* name, unsigned long& value)
TESTDLLSORT_API bool vtkXMLDataElement_GetScalarAttribute_4(int * return_value, vtkXMLDataElement * callingObject, const char * name, unsigned long * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetScalarAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarAttribute(name, *value);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetIntAttribute(const char * name, int value)
// void SetIntAttribute(const char* name, int value)
TESTDLLSORT_API bool vtkXMLDataElement_SetIntAttribute_0(vtkXMLDataElement * callingObject, const char * name, int value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::SetIntAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetIntAttribute(name, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetFloatAttribute(const char * name, float value)
// void SetFloatAttribute(const char* name, float value)
TESTDLLSORT_API bool vtkXMLDataElement_SetFloatAttribute_0(vtkXMLDataElement * callingObject, const char * name, float value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::SetFloatAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetFloatAttribute(name, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetDoubleAttribute(const char * name, double value)
// void SetDoubleAttribute(const char* name, double value)
TESTDLLSORT_API bool vtkXMLDataElement_SetDoubleAttribute_0(vtkXMLDataElement * callingObject, const char * name, double value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::SetDoubleAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetDoubleAttribute(name, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetUnsignedLongAttribute(const char * name, unsigned long value)
// void SetUnsignedLongAttribute(const char* name, unsigned long value)
TESTDLLSORT_API bool vtkXMLDataElement_SetUnsignedLongAttribute_0(vtkXMLDataElement * callingObject, const char * name, unsigned long value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::SetUnsignedLongAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetUnsignedLongAttribute(name, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetVectorAttribute(const char * name, int length, int * value)
// int GetVectorAttribute(const char* name, int length, int* value)
TESTDLLSORT_API bool vtkXMLDataElement_GetVectorAttribute_0(int * return_value, vtkXMLDataElement * callingObject, const char * name, int length, int * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetVectorAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetVectorAttribute(name, length, value);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetVectorAttribute(const char * name, int length, float * value)
// int GetVectorAttribute(const char* name, int length, float* value)
TESTDLLSORT_API bool vtkXMLDataElement_GetVectorAttribute_1(int * return_value, vtkXMLDataElement * callingObject, const char * name, int length, float * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetVectorAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetVectorAttribute(name, length, value);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetVectorAttribute(const char * name, int length, double * value)
// int GetVectorAttribute(const char* name, int length, double* value)
TESTDLLSORT_API bool vtkXMLDataElement_GetVectorAttribute_2(int * return_value, vtkXMLDataElement * callingObject, const char * name, int length, double * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetVectorAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetVectorAttribute(name, length, value);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetVectorAttribute(const char * name, int length, long * value)
// int GetVectorAttribute(const char* name, int length, long* value)
TESTDLLSORT_API bool vtkXMLDataElement_GetVectorAttribute_3(int * return_value, vtkXMLDataElement * callingObject, const char * name, int length, long * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetVectorAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetVectorAttribute(name, length, value);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetVectorAttribute(const char * name, int length, unsigned long * value)
// int GetVectorAttribute(const char* name, int length, unsigned long* value)
TESTDLLSORT_API bool vtkXMLDataElement_GetVectorAttribute_4(int * return_value, vtkXMLDataElement * callingObject, const char * name, int length, unsigned long * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetVectorAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetVectorAttribute(name, length, value);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetVectorAttribute(const char * name, int length, const int * value)
// void SetVectorAttribute(const char* name, int length, const int* value)
TESTDLLSORT_API bool vtkXMLDataElement_SetVectorAttribute_0(vtkXMLDataElement * callingObject, const char * name, int length, const int * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::SetVectorAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetVectorAttribute(name, length, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetVectorAttribute(const char * name, int length, const float * value)
// void SetVectorAttribute(const char* name, int length, const float* value)
TESTDLLSORT_API bool vtkXMLDataElement_SetVectorAttribute_1(vtkXMLDataElement * callingObject, const char * name, int length, const float * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::SetVectorAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetVectorAttribute(name, length, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetVectorAttribute(const char * name, int length, const double * value)
// void SetVectorAttribute(const char* name, int length, const double* value)
TESTDLLSORT_API bool vtkXMLDataElement_SetVectorAttribute_2(vtkXMLDataElement * callingObject, const char * name, int length, const double * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::SetVectorAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetVectorAttribute(name, length, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetVectorAttribute(const char * name, int length, const unsigned long * value)
// void SetVectorAttribute(const char* name, int length, const unsigned long* value)
TESTDLLSORT_API bool vtkXMLDataElement_SetVectorAttribute_3(vtkXMLDataElement * callingObject, const char * name, int length, const unsigned long * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::SetVectorAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetVectorAttribute(name, length, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetScalarAttribute(const char * name, long long & value)
// int GetScalarAttribute(const char* name, long long& value)
TESTDLLSORT_API bool vtkXMLDataElement_GetScalarAttribute_5(int * return_value, vtkXMLDataElement * callingObject, const char * name, long long * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetScalarAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarAttribute(name, *value);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetVectorAttribute(const char * name, int length, long long * value)
// int GetVectorAttribute(const char* name, int length, long long* value)
TESTDLLSORT_API bool vtkXMLDataElement_GetVectorAttribute_5(int * return_value, vtkXMLDataElement * callingObject, const char * name, int length, long long * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetVectorAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetVectorAttribute(name, length, value);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetVectorAttribute(const char * name, int length, long long const* value)
// void SetVectorAttribute(const char* name, int length, long long const* value)
TESTDLLSORT_API bool vtkXMLDataElement_SetVectorAttribute_4(vtkXMLDataElement * callingObject, const char * name, int length, long long const* value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::SetVectorAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetVectorAttribute(name, length, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetScalarAttribute(const char * name, unsigned long long & value)
// int GetScalarAttribute(const char* name, unsigned long long& value)
TESTDLLSORT_API bool vtkXMLDataElement_GetScalarAttribute_6(int * return_value, vtkXMLDataElement * callingObject, const char * name, unsigned long long * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetScalarAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetScalarAttribute(name, *value);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetVectorAttribute(const char * name, int length, unsigned long long * value)
// int GetVectorAttribute(const char* name, int length, unsigned long long* value)
TESTDLLSORT_API bool vtkXMLDataElement_GetVectorAttribute_6(int * return_value, vtkXMLDataElement * callingObject, const char * name, int length, unsigned long long * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetVectorAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetVectorAttribute(name, length, value);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetVectorAttribute(const char * name, int length, unsigned long long const* value)
// void SetVectorAttribute(const char* name, int length, unsigned long long const* value)
TESTDLLSORT_API bool vtkXMLDataElement_SetVectorAttribute_5(vtkXMLDataElement * callingObject, const char * name, int length, unsigned long long const* value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::SetVectorAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetVectorAttribute(name, length, value);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetWordTypeAttribute(const char * name, int & value)
// int GetWordTypeAttribute(const char* name, int& value)
TESTDLLSORT_API bool vtkXMLDataElement_GetWordTypeAttribute_0(int * return_value, vtkXMLDataElement * callingObject, const char * name, int * value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetWordTypeAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetWordTypeAttribute(name, *value);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetNumberOfAttributes()
// virtual int GetNumberOfAttributes ()
TESTDLLSORT_API bool vtkXMLDataElement_GetNumberOfAttributes_0(int * return_value, vtkXMLDataElement * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetNumberOfAttributes]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfAttributes();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char* GetAttributeName(int idx)
// const char* GetAttributeName(int idx)
TESTDLLSORT_API bool vtkXMLDataElement_GetAttributeName_0(const char ** return_value, vtkXMLDataElement * callingObject, int idx) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetAttributeName]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAttributeName(idx);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char* GetAttributeValue(int idx)
// const char* GetAttributeValue(int idx)
TESTDLLSORT_API bool vtkXMLDataElement_GetAttributeValue_0(const char ** return_value, vtkXMLDataElement * callingObject, int idx) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetAttributeValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAttributeValue(idx);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void RemoveAttribute(const char * name)
// virtual void RemoveAttribute(const char *name)
TESTDLLSORT_API bool vtkXMLDataElement_RemoveAttribute_0(vtkXMLDataElement * callingObject, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::RemoveAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveAttribute(name);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void RemoveAllAttributes()
// virtual void RemoveAllAttributes()
TESTDLLSORT_API bool vtkXMLDataElement_RemoveAllAttributes_0(vtkXMLDataElement * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::RemoveAllAttributes]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveAllAttributes();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkXMLDataElement* GetParent()
// vtkXMLDataElement* GetParent()
TESTDLLSORT_API bool vtkXMLDataElement_GetParent_0(vtkXMLDataElement ** return_value, vtkXMLDataElement * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetParent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetParent();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetParent(vtkXMLDataElement * parent)
// void SetParent(vtkXMLDataElement* parent)
TESTDLLSORT_API bool vtkXMLDataElement_SetParent_0(vtkXMLDataElement * callingObject, vtkXMLDataElement * parent) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::SetParent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetParent(parent);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkXMLDataElement* GetRoot()
// virtual vtkXMLDataElement* GetRoot()
TESTDLLSORT_API bool vtkXMLDataElement_GetRoot_0(vtkXMLDataElement ** return_value, vtkXMLDataElement * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetRoot]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetRoot();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetNumberOfNestedElements()
// int GetNumberOfNestedElements()
TESTDLLSORT_API bool vtkXMLDataElement_GetNumberOfNestedElements_0(int * return_value, vtkXMLDataElement * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetNumberOfNestedElements]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfNestedElements();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkXMLDataElement* GetNestedElement(int index)
// vtkXMLDataElement* GetNestedElement(int index)
TESTDLLSORT_API bool vtkXMLDataElement_GetNestedElement_0(vtkXMLDataElement ** return_value, vtkXMLDataElement * callingObject, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetNestedElement]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNestedElement(index);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AddNestedElement(vtkXMLDataElement * element)
// void AddNestedElement(vtkXMLDataElement* element)
TESTDLLSORT_API bool vtkXMLDataElement_AddNestedElement_0(vtkXMLDataElement * callingObject, vtkXMLDataElement * element) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::AddNestedElement]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AddNestedElement(element);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void RemoveNestedElement(vtkXMLDataElement * ARG_0)
// virtual void RemoveNestedElement(vtkXMLDataElement *)
TESTDLLSORT_API bool vtkXMLDataElement_RemoveNestedElement_0(vtkXMLDataElement * callingObject, vtkXMLDataElement * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::RemoveNestedElement]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveNestedElement(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void RemoveAllNestedElements()
// virtual void RemoveAllNestedElements()
TESTDLLSORT_API bool vtkXMLDataElement_RemoveAllNestedElements_0(vtkXMLDataElement * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::RemoveAllNestedElements]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveAllNestedElements();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkXMLDataElement* FindNestedElement(const char * id)
// vtkXMLDataElement* FindNestedElement(const char* id)
TESTDLLSORT_API bool vtkXMLDataElement_FindNestedElement_0(vtkXMLDataElement ** return_value, vtkXMLDataElement * callingObject, const char * id) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::FindNestedElement]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->FindNestedElement(id);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkXMLDataElement* FindNestedElementWithName(const char * name)
// vtkXMLDataElement* FindNestedElementWithName(const char* name)
TESTDLLSORT_API bool vtkXMLDataElement_FindNestedElementWithName_0(vtkXMLDataElement ** return_value, vtkXMLDataElement * callingObject, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::FindNestedElementWithName]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->FindNestedElementWithName(name);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkXMLDataElement* FindNestedElementWithNameAndId(const char * name, const char * id)
// vtkXMLDataElement* FindNestedElementWithNameAndId( const char* name, const char* id)
TESTDLLSORT_API bool vtkXMLDataElement_FindNestedElementWithNameAndId_0(vtkXMLDataElement ** return_value, vtkXMLDataElement * callingObject, const char * name, const char * id) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::FindNestedElementWithNameAndId]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->FindNestedElementWithNameAndId(name, id);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkXMLDataElement* FindNestedElementWithNameAndAttribute(const char * name, const char * att_name, const char * att_value)
// vtkXMLDataElement* FindNestedElementWithNameAndAttribute( const char* name, const char* att_name, const char* att_value)
TESTDLLSORT_API bool vtkXMLDataElement_FindNestedElementWithNameAndAttribute_0(vtkXMLDataElement ** return_value, vtkXMLDataElement * callingObject, const char * name, const char * att_name, const char * att_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::FindNestedElementWithNameAndAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->FindNestedElementWithNameAndAttribute(name, att_name, att_value);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkXMLDataElement* LookupElementWithName(const char * name)
// vtkXMLDataElement* LookupElementWithName(const char* name)
TESTDLLSORT_API bool vtkXMLDataElement_LookupElementWithName_0(vtkXMLDataElement ** return_value, vtkXMLDataElement * callingObject, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::LookupElementWithName]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->LookupElementWithName(name);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkXMLDataElement* LookupElement(const char * id)
// vtkXMLDataElement* LookupElement(const char* id)
TESTDLLSORT_API bool vtkXMLDataElement_LookupElement_0(vtkXMLDataElement ** return_value, vtkXMLDataElement * callingObject, const char * id) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::LookupElement]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->LookupElement(id);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkTypeInt64 GetXMLByteIndex()
// virtual vtkTypeInt64 GetXMLByteIndex ()
TESTDLLSORT_API bool vtkXMLDataElement_GetXMLByteIndex_0(vtkTypeInt64 * return_value, vtkXMLDataElement * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetXMLByteIndex]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetXMLByteIndex();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetXMLByteIndex(vtkTypeInt64 _arg)
// virtual void SetXMLByteIndex (vtkTypeInt64 _arg)
TESTDLLSORT_API bool vtkXMLDataElement_SetXMLByteIndex_0(vtkXMLDataElement * callingObject, vtkTypeInt64 _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::SetXMLByteIndex]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetXMLByteIndex(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int IsEqualTo(vtkXMLDataElement * elem)
// virtual int IsEqualTo(vtkXMLDataElement *elem)
TESTDLLSORT_API bool vtkXMLDataElement_IsEqualTo_0(int * return_value, vtkXMLDataElement * callingObject, vtkXMLDataElement * elem) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::IsEqualTo]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->IsEqualTo(elem);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void DeepCopy(vtkXMLDataElement * elem)
// virtual void DeepCopy(vtkXMLDataElement *elem)
TESTDLLSORT_API bool vtkXMLDataElement_DeepCopy_0(vtkXMLDataElement * callingObject, vtkXMLDataElement * elem) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::DeepCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DeepCopy(elem);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetAttributeEncoding(int _arg)
// virtual void SetAttributeEncoding (int _arg)
TESTDLLSORT_API bool vtkXMLDataElement_SetAttributeEncoding_0(vtkXMLDataElement * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::SetAttributeEncoding]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetAttributeEncoding(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetAttributeEncodingMinValue()
// virtual int GetAttributeEncodingMinValue ()
TESTDLLSORT_API bool vtkXMLDataElement_GetAttributeEncodingMinValue_0(int * return_value, vtkXMLDataElement * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetAttributeEncodingMinValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAttributeEncodingMinValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetAttributeEncodingMaxValue()
// virtual int GetAttributeEncodingMaxValue ()
TESTDLLSORT_API bool vtkXMLDataElement_GetAttributeEncodingMaxValue_0(int * return_value, vtkXMLDataElement * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetAttributeEncodingMaxValue]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAttributeEncodingMaxValue();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetAttributeEncoding()
// virtual int GetAttributeEncoding ()
TESTDLLSORT_API bool vtkXMLDataElement_GetAttributeEncoding_0(int * return_value, vtkXMLDataElement * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetAttributeEncoding]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAttributeEncoding();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void PrintXML(const char * fname)
// void PrintXML(const char* fname)
TESTDLLSORT_API bool vtkXMLDataElement_PrintXML_0(vtkXMLDataElement * callingObject, const char * fname) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::PrintXML]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->PrintXML(fname);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetCharacterDataWidth()
// virtual int GetCharacterDataWidth ()
TESTDLLSORT_API bool vtkXMLDataElement_GetCharacterDataWidth_0(int * return_value, vtkXMLDataElement * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::GetCharacterDataWidth]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetCharacterDataWidth();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetCharacterDataWidth(int _arg)
// virtual void SetCharacterDataWidth (int _arg)
TESTDLLSORT_API bool vtkXMLDataElement_SetCharacterDataWidth_0(vtkXMLDataElement * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkXMLDataElement::SetCharacterDataWidth]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetCharacterDataWidth(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
