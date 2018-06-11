
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkDataObject.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkDataObject* New()
// static vtkDataObject *New()
TESTDLLSORT_API bool vtkDataObject_New_0(vtkDataObject ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkDataObject_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkDataObject_IsA_0(vtkTypeBool * return_value, vtkDataObject * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::IsA]:[";
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

// static vtkDataObject* SafeDownCast(vtkObjectBase * o)
// static vtkDataObject* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkDataObject_SafeDownCast_0(vtkDataObject ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataObject* NewInstance()
// vtkDataObject *NewInstance()
TESTDLLSORT_API bool vtkDataObject_NewInstance_0(vtkDataObject ** return_value, vtkDataObject * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::NewInstance]:[";
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

// virtual vtkInformation* GetInformation()
// virtual vtkInformation *GetInformation ()
TESTDLLSORT_API bool vtkDataObject_GetInformation_0(vtkInformation ** return_value, vtkDataObject * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::GetInformation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetInformation();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetInformation(vtkInformation * ARG_0)
// virtual void SetInformation(vtkInformation*)
TESTDLLSORT_API bool vtkDataObject_SetInformation_0(vtkDataObject * callingObject, vtkInformation * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::SetInformation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetInformation(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkMTimeType GetMTime()
// vtkMTimeType GetMTime()
TESTDLLSORT_API bool vtkDataObject_GetMTime_0(vtkMTimeType * return_value, vtkDataObject * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::GetMTime]:[";
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

// virtual void Initialize()
// virtual void Initialize()
TESTDLLSORT_API bool vtkDataObject_Initialize_0(vtkDataObject * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::Initialize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Initialize();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void ReleaseData()
// void ReleaseData()
TESTDLLSORT_API bool vtkDataObject_ReleaseData_0(vtkDataObject * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::ReleaseData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ReleaseData();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetDataReleased()
// virtual int GetDataReleased ()
TESTDLLSORT_API bool vtkDataObject_GetDataReleased_0(int * return_value, vtkDataObject * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::GetDataReleased]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDataReleased();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void SetGlobalReleaseDataFlag(int val)
// static void SetGlobalReleaseDataFlag(int val)
TESTDLLSORT_API bool vtkDataObject_SetGlobalReleaseDataFlag_0(int val) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::SetGlobalReleaseDataFlag]:[";
#endif
	bool success = true;
	vtkDataObject::SetGlobalReleaseDataFlag(val);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GlobalReleaseDataFlagOn()
// void GlobalReleaseDataFlagOn()
TESTDLLSORT_API bool vtkDataObject_GlobalReleaseDataFlagOn_0(vtkDataObject * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::GlobalReleaseDataFlagOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GlobalReleaseDataFlagOn();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void GlobalReleaseDataFlagOff()
// void GlobalReleaseDataFlagOff()
TESTDLLSORT_API bool vtkDataObject_GlobalReleaseDataFlagOff_0(vtkDataObject * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::GlobalReleaseDataFlagOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GlobalReleaseDataFlagOff();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static int GetGlobalReleaseDataFlag()
// static int GetGlobalReleaseDataFlag()
TESTDLLSORT_API bool vtkDataObject_GetGlobalReleaseDataFlag_0(int * return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::GetGlobalReleaseDataFlag]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::GetGlobalReleaseDataFlag();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetFieldData(vtkFieldData * ARG_0)
// virtual void SetFieldData(vtkFieldData*)
TESTDLLSORT_API bool vtkDataObject_SetFieldData_0(vtkDataObject * callingObject, vtkFieldData * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::SetFieldData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetFieldData(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkFieldData* GetFieldData()
// virtual vtkFieldData *GetFieldData ()
TESTDLLSORT_API bool vtkDataObject_GetFieldData_0(vtkFieldData ** return_value, vtkDataObject * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::GetFieldData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetFieldData();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetDataObjectType()
// virtual int GetDataObjectType()
TESTDLLSORT_API bool vtkDataObject_GetDataObjectType_0(int * return_value, vtkDataObject * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::GetDataObjectType]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetDataObjectType();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkMTimeType GetUpdateTime()
// vtkMTimeType GetUpdateTime()
TESTDLLSORT_API bool vtkDataObject_GetUpdateTime_0(vtkMTimeType * return_value, vtkDataObject * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::GetUpdateTime]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetUpdateTime();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual long GetActualMemorySize()
// virtual unsigned long GetActualMemorySize()
TESTDLLSORT_API bool vtkDataObject_GetActualMemorySize_0(unsigned long * return_value, vtkDataObject * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::GetActualMemorySize]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetActualMemorySize();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CopyInformationFromPipeline(vtkInformation * ARG_0)
// virtual void CopyInformationFromPipeline(vtkInformation* )
TESTDLLSORT_API bool vtkDataObject_CopyInformationFromPipeline_0(vtkDataObject * callingObject, vtkInformation * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::CopyInformationFromPipeline]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyInformationFromPipeline(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CopyInformationToPipeline(vtkInformation * ARG_0)
// virtual void CopyInformationToPipeline(vtkInformation* )
TESTDLLSORT_API bool vtkDataObject_CopyInformationToPipeline_0(vtkDataObject * callingObject, vtkInformation * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::CopyInformationToPipeline]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyInformationToPipeline(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformation* GetActiveFieldInformation(vtkInformation * info, int fieldAssociation, int attributeType)
// static vtkInformation *GetActiveFieldInformation(vtkInformation *info, int fieldAssociation, int attributeType)
TESTDLLSORT_API bool vtkDataObject_GetActiveFieldInformation_0(vtkInformation ** return_value, vtkInformation * info, int fieldAssociation, int attributeType) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::GetActiveFieldInformation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::GetActiveFieldInformation(info, fieldAssociation, attributeType);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformation* GetNamedFieldInformation(vtkInformation * info, int fieldAssociation, const char * name)
// static vtkInformation *GetNamedFieldInformation(vtkInformation *info, int fieldAssociation, const char *name)
TESTDLLSORT_API bool vtkDataObject_GetNamedFieldInformation_0(vtkInformation ** return_value, vtkInformation * info, int fieldAssociation, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::GetNamedFieldInformation]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::GetNamedFieldInformation(info, fieldAssociation, name);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void RemoveNamedFieldInformation(vtkInformation * info, int fieldAssociation, const char * name)
// static void RemoveNamedFieldInformation(vtkInformation *info, int fieldAssociation, const char *name)
TESTDLLSORT_API bool vtkDataObject_RemoveNamedFieldInformation_0(vtkInformation * info, int fieldAssociation, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::RemoveNamedFieldInformation]:[";
#endif
	bool success = true;
	vtkDataObject::RemoveNamedFieldInformation(info, fieldAssociation, name);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformation* SetActiveAttribute(vtkInformation * info, int fieldAssociation, const char * attributeName, int attributeType)
// static vtkInformation *SetActiveAttribute(vtkInformation *info, int fieldAssociation, const char *attributeName, int attributeType)
TESTDLLSORT_API bool vtkDataObject_SetActiveAttribute_0(vtkInformation ** return_value, vtkInformation * info, int fieldAssociation, const char * attributeName, int attributeType) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::SetActiveAttribute]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::SetActiveAttribute(info, fieldAssociation, attributeName, attributeType);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void SetActiveAttributeInfo(vtkInformation * info, int fieldAssociation, int attributeType, const char * name, int arrayType, int numComponents, int numTuples)
// static void SetActiveAttributeInfo(vtkInformation *info, int fieldAssociation, int attributeType, const char *name, int arrayType, int numComponents, int numTuples)
TESTDLLSORT_API bool vtkDataObject_SetActiveAttributeInfo_0(vtkInformation * info, int fieldAssociation, int attributeType, const char * name, int arrayType, int numComponents, int numTuples) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::SetActiveAttributeInfo]:[";
#endif
	bool success = true;
	vtkDataObject::SetActiveAttributeInfo(info, fieldAssociation, attributeType, name, arrayType, numComponents, numTuples);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static void SetPointDataActiveScalarInfo(vtkInformation * info, int arrayType, int numComponents)
// static void SetPointDataActiveScalarInfo(vtkInformation *info, int arrayType, int numComponents)
TESTDLLSORT_API bool vtkDataObject_SetPointDataActiveScalarInfo_0(vtkInformation * info, int arrayType, int numComponents) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::SetPointDataActiveScalarInfo]:[";
#endif
	bool success = true;
	vtkDataObject::SetPointDataActiveScalarInfo(info, arrayType, numComponents);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void DataHasBeenGenerated()
// void DataHasBeenGenerated()
TESTDLLSORT_API bool vtkDataObject_DataHasBeenGenerated_0(vtkDataObject * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::DataHasBeenGenerated]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DataHasBeenGenerated();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void PrepareForNewData()
// virtual void PrepareForNewData()
TESTDLLSORT_API bool vtkDataObject_PrepareForNewData_0(vtkDataObject * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::PrepareForNewData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->PrepareForNewData();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ShallowCopy(vtkDataObject * src)
// virtual void ShallowCopy(vtkDataObject *src)
TESTDLLSORT_API bool vtkDataObject_ShallowCopy_0(vtkDataObject * callingObject, vtkDataObject * src) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::ShallowCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ShallowCopy(src);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void DeepCopy(vtkDataObject * src)
// virtual void DeepCopy(vtkDataObject *src)
TESTDLLSORT_API bool vtkDataObject_DeepCopy_0(vtkDataObject * callingObject, vtkDataObject * src) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::DeepCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DeepCopy(src);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetExtentType()
// virtual int GetExtentType()
TESTDLLSORT_API bool vtkDataObject_GetExtentType_0(int * return_value, vtkDataObject * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::GetExtentType]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetExtentType();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void Crop(const int * updateExtent)
// virtual void Crop(const int* updateExtent)
TESTDLLSORT_API bool vtkDataObject_Crop_0(vtkDataObject * callingObject, const int * updateExtent) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::Crop]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Crop(updateExtent);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkDataSetAttributes* GetAttributes(int type)
// virtual vtkDataSetAttributes* GetAttributes(int type)
TESTDLLSORT_API bool vtkDataObject_GetAttributes_0(vtkDataSetAttributes ** return_value, vtkDataObject * callingObject, int type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::GetAttributes]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAttributes(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkFieldData* GetAttributesAsFieldData(int type)
// virtual vtkFieldData* GetAttributesAsFieldData(int type)
TESTDLLSORT_API bool vtkDataObject_GetAttributesAsFieldData_0(vtkFieldData ** return_value, vtkDataObject * callingObject, int type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::GetAttributesAsFieldData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAttributesAsFieldData(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetAttributeTypeForArray(vtkAbstractArray * arr)
// virtual int GetAttributeTypeForArray(vtkAbstractArray* arr)
TESTDLLSORT_API bool vtkDataObject_GetAttributeTypeForArray_0(int * return_value, vtkDataObject * callingObject, vtkAbstractArray * arr) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::GetAttributeTypeForArray]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAttributeTypeForArray(arr);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual vtkIdType GetNumberOfElements(int type)
// virtual vtkIdType GetNumberOfElements(int type)
TESTDLLSORT_API bool vtkDataObject_GetNumberOfElements_0(vtkIdType * return_value, vtkDataObject * callingObject, int type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::GetNumberOfElements]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfElements(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static char* GetAssociationTypeAsString(int associationType)
// static const char* GetAssociationTypeAsString(int associationType)
TESTDLLSORT_API bool vtkDataObject_GetAssociationTypeAsString_0(const char ** return_value, int associationType) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::GetAssociationTypeAsString]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::GetAssociationTypeAsString(associationType);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static int GetAssociationTypeFromString(const char * associationType)
// static int GetAssociationTypeFromString(const char* associationType)
TESTDLLSORT_API bool vtkDataObject_GetAssociationTypeFromString_0(int * return_value, const char * associationType) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::GetAssociationTypeFromString]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::GetAssociationTypeFromString(associationType);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationStringKey* DATA_TYPE_NAME()
// static vtkInformationStringKey* DATA_TYPE_NAME()
TESTDLLSORT_API bool vtkDataObject_DATA_TYPE_NAME_0(vtkInformationStringKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::DATA_TYPE_NAME]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::DATA_TYPE_NAME();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationDataObjectKey* DATA_OBJECT()
// static vtkInformationDataObjectKey* DATA_OBJECT()
TESTDLLSORT_API bool vtkDataObject_DATA_OBJECT_0(vtkInformationDataObjectKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::DATA_OBJECT]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::DATA_OBJECT();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationIntegerKey* DATA_EXTENT_TYPE()
// static vtkInformationIntegerKey* DATA_EXTENT_TYPE()
TESTDLLSORT_API bool vtkDataObject_DATA_EXTENT_TYPE_0(vtkInformationIntegerKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::DATA_EXTENT_TYPE]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::DATA_EXTENT_TYPE();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationIntegerPointerKey* DATA_EXTENT()
// static vtkInformationIntegerPointerKey* DATA_EXTENT()
TESTDLLSORT_API bool vtkDataObject_DATA_EXTENT_0(vtkInformationIntegerPointerKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::DATA_EXTENT]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::DATA_EXTENT();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationIntegerVectorKey* ALL_PIECES_EXTENT()
// static vtkInformationIntegerVectorKey* ALL_PIECES_EXTENT()
TESTDLLSORT_API bool vtkDataObject_ALL_PIECES_EXTENT_0(vtkInformationIntegerVectorKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::ALL_PIECES_EXTENT]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::ALL_PIECES_EXTENT();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationIntegerKey* DATA_PIECE_NUMBER()
// static vtkInformationIntegerKey* DATA_PIECE_NUMBER()
TESTDLLSORT_API bool vtkDataObject_DATA_PIECE_NUMBER_0(vtkInformationIntegerKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::DATA_PIECE_NUMBER]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::DATA_PIECE_NUMBER();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationIntegerKey* DATA_NUMBER_OF_PIECES()
// static vtkInformationIntegerKey* DATA_NUMBER_OF_PIECES()
TESTDLLSORT_API bool vtkDataObject_DATA_NUMBER_OF_PIECES_0(vtkInformationIntegerKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::DATA_NUMBER_OF_PIECES]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::DATA_NUMBER_OF_PIECES();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationIntegerKey* DATA_NUMBER_OF_GHOST_LEVELS()
// static vtkInformationIntegerKey* DATA_NUMBER_OF_GHOST_LEVELS()
TESTDLLSORT_API bool vtkDataObject_DATA_NUMBER_OF_GHOST_LEVELS_0(vtkInformationIntegerKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::DATA_NUMBER_OF_GHOST_LEVELS]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::DATA_NUMBER_OF_GHOST_LEVELS();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationDoubleKey* DATA_TIME_STEP()
// static vtkInformationDoubleKey* DATA_TIME_STEP()
TESTDLLSORT_API bool vtkDataObject_DATA_TIME_STEP_0(vtkInformationDoubleKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::DATA_TIME_STEP]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::DATA_TIME_STEP();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationInformationVectorKey* POINT_DATA_VECTOR()
// static vtkInformationInformationVectorKey* POINT_DATA_VECTOR()
TESTDLLSORT_API bool vtkDataObject_POINT_DATA_VECTOR_0(vtkInformationInformationVectorKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::POINT_DATA_VECTOR]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::POINT_DATA_VECTOR();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationInformationVectorKey* CELL_DATA_VECTOR()
// static vtkInformationInformationVectorKey* CELL_DATA_VECTOR()
TESTDLLSORT_API bool vtkDataObject_CELL_DATA_VECTOR_0(vtkInformationInformationVectorKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::CELL_DATA_VECTOR]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::CELL_DATA_VECTOR();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationInformationVectorKey* VERTEX_DATA_VECTOR()
// static vtkInformationInformationVectorKey* VERTEX_DATA_VECTOR()
TESTDLLSORT_API bool vtkDataObject_VERTEX_DATA_VECTOR_0(vtkInformationInformationVectorKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::VERTEX_DATA_VECTOR]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::VERTEX_DATA_VECTOR();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationInformationVectorKey* EDGE_DATA_VECTOR()
// static vtkInformationInformationVectorKey* EDGE_DATA_VECTOR()
TESTDLLSORT_API bool vtkDataObject_EDGE_DATA_VECTOR_0(vtkInformationInformationVectorKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::EDGE_DATA_VECTOR]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::EDGE_DATA_VECTOR();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationIntegerKey* FIELD_ARRAY_TYPE()
// static vtkInformationIntegerKey* FIELD_ARRAY_TYPE()
TESTDLLSORT_API bool vtkDataObject_FIELD_ARRAY_TYPE_0(vtkInformationIntegerKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::FIELD_ARRAY_TYPE]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::FIELD_ARRAY_TYPE();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationIntegerKey* FIELD_ASSOCIATION()
// static vtkInformationIntegerKey* FIELD_ASSOCIATION()
TESTDLLSORT_API bool vtkDataObject_FIELD_ASSOCIATION_0(vtkInformationIntegerKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::FIELD_ASSOCIATION]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::FIELD_ASSOCIATION();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationIntegerKey* FIELD_ATTRIBUTE_TYPE()
// static vtkInformationIntegerKey* FIELD_ATTRIBUTE_TYPE()
TESTDLLSORT_API bool vtkDataObject_FIELD_ATTRIBUTE_TYPE_0(vtkInformationIntegerKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::FIELD_ATTRIBUTE_TYPE]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::FIELD_ATTRIBUTE_TYPE();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationIntegerKey* FIELD_ACTIVE_ATTRIBUTE()
// static vtkInformationIntegerKey* FIELD_ACTIVE_ATTRIBUTE()
TESTDLLSORT_API bool vtkDataObject_FIELD_ACTIVE_ATTRIBUTE_0(vtkInformationIntegerKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::FIELD_ACTIVE_ATTRIBUTE]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::FIELD_ACTIVE_ATTRIBUTE();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationIntegerKey* FIELD_NUMBER_OF_COMPONENTS()
// static vtkInformationIntegerKey* FIELD_NUMBER_OF_COMPONENTS()
TESTDLLSORT_API bool vtkDataObject_FIELD_NUMBER_OF_COMPONENTS_0(vtkInformationIntegerKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::FIELD_NUMBER_OF_COMPONENTS]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::FIELD_NUMBER_OF_COMPONENTS();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationIntegerKey* FIELD_NUMBER_OF_TUPLES()
// static vtkInformationIntegerKey* FIELD_NUMBER_OF_TUPLES()
TESTDLLSORT_API bool vtkDataObject_FIELD_NUMBER_OF_TUPLES_0(vtkInformationIntegerKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::FIELD_NUMBER_OF_TUPLES]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::FIELD_NUMBER_OF_TUPLES();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationIntegerKey* FIELD_OPERATION()
// static vtkInformationIntegerKey* FIELD_OPERATION()
TESTDLLSORT_API bool vtkDataObject_FIELD_OPERATION_0(vtkInformationIntegerKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::FIELD_OPERATION]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::FIELD_OPERATION();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationDoubleVectorKey* FIELD_RANGE()
// static vtkInformationDoubleVectorKey* FIELD_RANGE()
TESTDLLSORT_API bool vtkDataObject_FIELD_RANGE_0(vtkInformationDoubleVectorKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::FIELD_RANGE]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::FIELD_RANGE();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationIntegerVectorKey* PIECE_EXTENT()
// static vtkInformationIntegerVectorKey* PIECE_EXTENT()
TESTDLLSORT_API bool vtkDataObject_PIECE_EXTENT_0(vtkInformationIntegerVectorKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::PIECE_EXTENT]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::PIECE_EXTENT();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationStringKey* FIELD_NAME()
// static vtkInformationStringKey* FIELD_NAME()
TESTDLLSORT_API bool vtkDataObject_FIELD_NAME_0(vtkInformationStringKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::FIELD_NAME]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::FIELD_NAME();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationDoubleVectorKey* ORIGIN()
// static vtkInformationDoubleVectorKey* ORIGIN()
TESTDLLSORT_API bool vtkDataObject_ORIGIN_0(vtkInformationDoubleVectorKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::ORIGIN]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::ORIGIN();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationDoubleVectorKey* SPACING()
// static vtkInformationDoubleVectorKey* SPACING()
TESTDLLSORT_API bool vtkDataObject_SPACING_0(vtkInformationDoubleVectorKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::SPACING]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::SPACING();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationDoubleVectorKey* BOUNDING_BOX()
// static vtkInformationDoubleVectorKey* BOUNDING_BOX()
TESTDLLSORT_API bool vtkDataObject_BOUNDING_BOX_0(vtkInformationDoubleVectorKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::BOUNDING_BOX]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::BOUNDING_BOX();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkInformationDataObjectKey* SIL()
// static vtkInformationDataObjectKey* SIL()
TESTDLLSORT_API bool vtkDataObject_SIL_0(vtkInformationDataObjectKey ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::SIL]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::SIL();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkDataObject* GetData(vtkInformation * info)
// static vtkDataObject* GetData(vtkInformation* info)
TESTDLLSORT_API bool vtkDataObject_GetData_0(vtkDataObject ** return_value, vtkInformation * info) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::GetData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::GetData(info);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkDataObject* GetData(vtkInformationVector * v, int i = 0)
// static vtkDataObject* GetData(vtkInformationVector* v, int i=0)
TESTDLLSORT_API bool vtkDataObject_GetData_1(vtkDataObject ** return_value, vtkInformationVector * v, int i = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataObject::GetData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataObject::GetData(v, i);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
