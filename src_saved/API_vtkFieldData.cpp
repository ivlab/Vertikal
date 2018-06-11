
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkFieldData.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkFieldData* New()
// static vtkFieldData *New()
TESTDLLSORT_API bool vtkFieldData_New_0(vtkFieldData ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkFieldData::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkFieldData_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkFieldData::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkFieldData_IsA_0(vtkTypeBool * return_value, vtkFieldData * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::IsA]:[";
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

// static vtkFieldData* SafeDownCast(vtkObjectBase * o)
// static vtkFieldData* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkFieldData_SafeDownCast_0(vtkFieldData ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkFieldData::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkFieldData* NewInstance()
// vtkFieldData *NewInstance()
TESTDLLSORT_API bool vtkFieldData_NewInstance_0(vtkFieldData ** return_value, vtkFieldData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::NewInstance]:[";
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

// virtual void Initialize()
// virtual void Initialize()
TESTDLLSORT_API bool vtkFieldData_Initialize_0(vtkFieldData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::Initialize]:[";
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

// int Allocate(vtkIdType sz, vtkIdType ext = 1000)
// int Allocate(vtkIdType sz, vtkIdType ext=1000)
TESTDLLSORT_API bool vtkFieldData_Allocate_0(int * return_value, vtkFieldData * callingObject, vtkIdType sz, vtkIdType ext = 1000) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::Allocate]:[";
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

// void CopyStructure(vtkFieldData * ARG_0)
// void CopyStructure(vtkFieldData*)
TESTDLLSORT_API bool vtkFieldData_CopyStructure_0(vtkFieldData * callingObject, vtkFieldData * ARG_0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::CopyStructure]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyStructure(ARG_0);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void AllocateArrays(int num)
// void AllocateArrays(int num)
TESTDLLSORT_API bool vtkFieldData_AllocateArrays_0(vtkFieldData * callingObject, int num) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::AllocateArrays]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->AllocateArrays(num);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetNumberOfArrays()
// int GetNumberOfArrays()
TESTDLLSORT_API bool vtkFieldData_GetNumberOfArrays_0(int * return_value, vtkFieldData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::GetNumberOfArrays]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfArrays();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int AddArray(vtkAbstractArray * array)
// int AddArray(vtkAbstractArray *array)
TESTDLLSORT_API bool vtkFieldData_AddArray_0(int * return_value, vtkFieldData * callingObject, vtkAbstractArray * array) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::AddArray]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->AddArray(array);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void RemoveArray(const char * name)
// virtual void RemoveArray(const char *name)
TESTDLLSORT_API bool vtkFieldData_RemoveArray_0(vtkFieldData * callingObject, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::RemoveArray]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveArray(name);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void RemoveArray(int index)
// virtual void RemoveArray(int index)
TESTDLLSORT_API bool vtkFieldData_RemoveArray_1(vtkFieldData * callingObject, int index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::RemoveArray]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveArray(index);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataArray* GetArray(int i)
// vtkDataArray *GetArray(int i)
TESTDLLSORT_API bool vtkFieldData_GetArray_0(vtkDataArray ** return_value, vtkFieldData * callingObject, int i) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::GetArray]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetArray(i);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataArray* GetArray(const char * arrayName, int & index)
// vtkDataArray *GetArray(const char *arrayName, int &index)
TESTDLLSORT_API bool vtkFieldData_GetArray_1(vtkDataArray ** return_value, vtkFieldData * callingObject, const char * arrayName, int * index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::GetArray]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetArray(arrayName, *index);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataArray* GetArray(const char * arrayName)
// vtkDataArray *GetArray(const char *arrayName)
TESTDLLSORT_API bool vtkFieldData_GetArray_2(vtkDataArray ** return_value, vtkFieldData * callingObject, const char * arrayName) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::GetArray]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetArray(arrayName);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkAbstractArray* GetAbstractArray(int i)
// vtkAbstractArray* GetAbstractArray(int i)
TESTDLLSORT_API bool vtkFieldData_GetAbstractArray_0(vtkAbstractArray ** return_value, vtkFieldData * callingObject, int i) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::GetAbstractArray]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAbstractArray(i);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkAbstractArray* GetAbstractArray(const char * arrayName, int & index)
// vtkAbstractArray* GetAbstractArray(const char* arrayName, int &index)
TESTDLLSORT_API bool vtkFieldData_GetAbstractArray_1(vtkAbstractArray ** return_value, vtkFieldData * callingObject, const char * arrayName, int * index) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::GetAbstractArray]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAbstractArray(arrayName, *index);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkAbstractArray* GetAbstractArray(const char * arrayName)
// vtkAbstractArray* GetAbstractArray(const char* arrayName)
TESTDLLSORT_API bool vtkFieldData_GetAbstractArray_2(vtkAbstractArray ** return_value, vtkFieldData * callingObject, const char * arrayName) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::GetAbstractArray]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetAbstractArray(arrayName);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int HasArray(const char * name)
// int HasArray(const char *name)
TESTDLLSORT_API bool vtkFieldData_HasArray_0(int * return_value, vtkFieldData * callingObject, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::HasArray]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->HasArray(name);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// char* GetArrayName(int i)
// const char* GetArrayName(int i)
TESTDLLSORT_API bool vtkFieldData_GetArrayName_0(const char ** return_value, vtkFieldData * callingObject, int i) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::GetArrayName]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetArrayName(i);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void PassData(vtkFieldData * fd)
// virtual void PassData(vtkFieldData* fd)
TESTDLLSORT_API bool vtkFieldData_PassData_0(vtkFieldData * callingObject, vtkFieldData * fd) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::PassData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->PassData(fd);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyFieldOn(const char * name)
// void CopyFieldOn(const char* name)
TESTDLLSORT_API bool vtkFieldData_CopyFieldOn_0(vtkFieldData * callingObject, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::CopyFieldOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyFieldOn(name);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void CopyFieldOff(const char * name)
// void CopyFieldOff(const char* name)
TESTDLLSORT_API bool vtkFieldData_CopyFieldOff_0(vtkFieldData * callingObject, const char * name) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::CopyFieldOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyFieldOff(name);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CopyAllOn(int unused = 0)
// virtual void CopyAllOn(int unused=0)
TESTDLLSORT_API bool vtkFieldData_CopyAllOn_0(vtkFieldData * callingObject, int unused = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::CopyAllOn]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyAllOn(unused);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void CopyAllOff(int unused = 0)
// virtual void CopyAllOff(int unused=0)
TESTDLLSORT_API bool vtkFieldData_CopyAllOff_0(vtkFieldData * callingObject, int unused = 0) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::CopyAllOff]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->CopyAllOff(unused);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void DeepCopy(vtkFieldData * da)
// virtual void DeepCopy(vtkFieldData *da)
TESTDLLSORT_API bool vtkFieldData_DeepCopy_0(vtkFieldData * callingObject, vtkFieldData * da) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::DeepCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->DeepCopy(da);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void ShallowCopy(vtkFieldData * da)
// virtual void ShallowCopy(vtkFieldData *da)
TESTDLLSORT_API bool vtkFieldData_ShallowCopy_0(vtkFieldData * callingObject, vtkFieldData * da) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::ShallowCopy]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->ShallowCopy(da);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Squeeze()
// void Squeeze()
TESTDLLSORT_API bool vtkFieldData_Squeeze_0(vtkFieldData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::Squeeze]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Squeeze();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Reset()
// void Reset()
TESTDLLSORT_API bool vtkFieldData_Reset_0(vtkFieldData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::Reset]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Reset();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual long GetActualMemorySize()
// virtual unsigned long GetActualMemorySize()
TESTDLLSORT_API bool vtkFieldData_GetActualMemorySize_0(unsigned long * return_value, vtkFieldData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::GetActualMemorySize]:[";
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

// vtkMTimeType GetMTime()
// vtkMTimeType GetMTime()
TESTDLLSORT_API bool vtkFieldData_GetMTime_0(vtkMTimeType * return_value, vtkFieldData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::GetMTime]:[";
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

// void GetField(vtkIdList * ptId, vtkFieldData * f)
// void GetField(vtkIdList *ptId, vtkFieldData *f)
TESTDLLSORT_API bool vtkFieldData_GetField_0(vtkFieldData * callingObject, vtkIdList * ptId, vtkFieldData * f) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::GetField]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->GetField(ptId, f);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetArrayContainingComponent(int i, int & arrayComp)
// int GetArrayContainingComponent(int i, int& arrayComp)
TESTDLLSORT_API bool vtkFieldData_GetArrayContainingComponent_0(int * return_value, vtkFieldData * callingObject, int i, int * arrayComp) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::GetArrayContainingComponent]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetArrayContainingComponent(i, *arrayComp);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int GetNumberOfComponents()
// int GetNumberOfComponents()
TESTDLLSORT_API bool vtkFieldData_GetNumberOfComponents_0(int * return_value, vtkFieldData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::GetNumberOfComponents]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfComponents();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType GetNumberOfTuples()
// vtkIdType GetNumberOfTuples()
TESTDLLSORT_API bool vtkFieldData_GetNumberOfTuples_0(vtkIdType * return_value, vtkFieldData * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::GetNumberOfTuples]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfTuples();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetNumberOfTuples(const vtkIdType number)
// void SetNumberOfTuples(const vtkIdType number)
TESTDLLSORT_API bool vtkFieldData_SetNumberOfTuples_0(vtkFieldData * callingObject, const vtkIdType number) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::SetNumberOfTuples]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetNumberOfTuples(number);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetTuple(const vtkIdType i, const vtkIdType j, vtkFieldData * source)
// void SetTuple(const vtkIdType i, const vtkIdType j, vtkFieldData* source)
TESTDLLSORT_API bool vtkFieldData_SetTuple_0(vtkFieldData * callingObject, const vtkIdType i, const vtkIdType j, vtkFieldData * source) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::SetTuple]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetTuple(i, j, source);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void InsertTuple(const vtkIdType i, const vtkIdType j, vtkFieldData * source)
// void InsertTuple(const vtkIdType i, const vtkIdType j, vtkFieldData* source)
TESTDLLSORT_API bool vtkFieldData_InsertTuple_0(vtkFieldData * callingObject, const vtkIdType i, const vtkIdType j, vtkFieldData * source) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::InsertTuple]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->InsertTuple(i, j, source);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkIdType InsertNextTuple(const vtkIdType j, vtkFieldData * source)
// vtkIdType InsertNextTuple(const vtkIdType j, vtkFieldData* source)
TESTDLLSORT_API bool vtkFieldData_InsertNextTuple_0(vtkIdType * return_value, vtkFieldData * callingObject, const vtkIdType j, vtkFieldData * source) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkFieldData::InsertNextTuple]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->InsertNextTuple(j, source);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
