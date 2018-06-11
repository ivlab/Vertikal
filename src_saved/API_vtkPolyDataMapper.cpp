
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkPolyDataMapper.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkPolyDataMapper* New()
// static vtkPolyDataMapper *New()
TESTDLLSORT_API bool vtkPolyDataMapper_New_0(vtkPolyDataMapper ** return_value) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyDataMapper::New]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPolyDataMapper::New();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkPolyDataMapper_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyDataMapper::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPolyDataMapper::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkPolyDataMapper_IsA_0(vtkTypeBool * return_value, vtkPolyDataMapper * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyDataMapper::IsA]:[";
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

// static vtkPolyDataMapper* SafeDownCast(vtkObjectBase * o)
// static vtkPolyDataMapper* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkPolyDataMapper_SafeDownCast_0(vtkPolyDataMapper ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyDataMapper::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkPolyDataMapper::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkPolyDataMapper* NewInstance()
// vtkPolyDataMapper *NewInstance()
TESTDLLSORT_API bool vtkPolyDataMapper_NewInstance_0(vtkPolyDataMapper ** return_value, vtkPolyDataMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyDataMapper::NewInstance]:[";
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

// virtual void RenderPiece(vtkRenderer * ren, vtkActor * act)
// virtual void RenderPiece(vtkRenderer *ren, vtkActor *act)
TESTDLLSORT_API bool vtkPolyDataMapper_RenderPiece_0(vtkPolyDataMapper * callingObject, vtkRenderer * ren, vtkActor * act) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyDataMapper::RenderPiece]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RenderPiece(ren, act);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Render(vtkRenderer * ren, vtkActor * act)
// void Render(vtkRenderer *ren, vtkActor *act)
TESTDLLSORT_API bool vtkPolyDataMapper_Render_0(vtkPolyDataMapper * callingObject, vtkRenderer * ren, vtkActor * act) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyDataMapper::Render]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Render(ren, act);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void SetInputData(vtkPolyData * in)
// void SetInputData(vtkPolyData *in)
TESTDLLSORT_API bool vtkPolyDataMapper_SetInputData_0(vtkPolyDataMapper * callingObject, vtkPolyData * in) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyDataMapper::SetInputData]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetInputData(in);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkPolyData* GetInput()
// vtkPolyData *GetInput()
TESTDLLSORT_API bool vtkPolyDataMapper_GetInput_0(vtkPolyData ** return_value, vtkPolyDataMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyDataMapper::GetInput]:[";
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

// void Update(int port)
// void Update(int port)
TESTDLLSORT_API bool vtkPolyDataMapper_Update_0(vtkPolyDataMapper * callingObject, int port) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyDataMapper::Update]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Update(port);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// void Update()
// void Update()
TESTDLLSORT_API bool vtkPolyDataMapper_Update_1(vtkPolyDataMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyDataMapper::Update]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->Update();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Update(int port, vtkInformationVector * requests)
// int Update(int port, vtkInformationVector* requests)
TESTDLLSORT_API bool vtkPolyDataMapper_Update_2(int * return_value, vtkPolyDataMapper * callingObject, int port, vtkInformationVector * requests) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyDataMapper::Update]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Update(port, requests);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int Update(vtkInformation * requests)
// int Update(vtkInformation* requests)
TESTDLLSORT_API bool vtkPolyDataMapper_Update_3(int * return_value, vtkPolyDataMapper * callingObject, vtkInformation * requests) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyDataMapper::Update]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Update(requests);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetPiece(int _arg)
// virtual void SetPiece (int _arg)
TESTDLLSORT_API bool vtkPolyDataMapper_SetPiece_0(vtkPolyDataMapper * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyDataMapper::SetPiece]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetPiece(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetPiece()
// virtual int GetPiece ()
TESTDLLSORT_API bool vtkPolyDataMapper_GetPiece_0(int * return_value, vtkPolyDataMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyDataMapper::GetPiece]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetPiece();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetNumberOfPieces(int _arg)
// virtual void SetNumberOfPieces (int _arg)
TESTDLLSORT_API bool vtkPolyDataMapper_SetNumberOfPieces_0(vtkPolyDataMapper * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyDataMapper::SetNumberOfPieces]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetNumberOfPieces(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetNumberOfPieces()
// virtual int GetNumberOfPieces ()
TESTDLLSORT_API bool vtkPolyDataMapper_GetNumberOfPieces_0(int * return_value, vtkPolyDataMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyDataMapper::GetNumberOfPieces]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfPieces();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetNumberOfSubPieces(int _arg)
// virtual void SetNumberOfSubPieces (int _arg)
TESTDLLSORT_API bool vtkPolyDataMapper_SetNumberOfSubPieces_0(vtkPolyDataMapper * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyDataMapper::SetNumberOfSubPieces]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetNumberOfSubPieces(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetNumberOfSubPieces()
// virtual int GetNumberOfSubPieces ()
TESTDLLSORT_API bool vtkPolyDataMapper_GetNumberOfSubPieces_0(int * return_value, vtkPolyDataMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyDataMapper::GetNumberOfSubPieces]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetNumberOfSubPieces();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void SetGhostLevel(int _arg)
// virtual void SetGhostLevel (int _arg)
TESTDLLSORT_API bool vtkPolyDataMapper_SetGhostLevel_0(vtkPolyDataMapper * callingObject, int _arg) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyDataMapper::SetGhostLevel]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->SetGhostLevel(_arg);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual int GetGhostLevel()
// virtual int GetGhostLevel ()
TESTDLLSORT_API bool vtkPolyDataMapper_GetGhostLevel_0(int * return_value, vtkPolyDataMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyDataMapper::GetGhostLevel]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetGhostLevel();
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// double* GetBounds()
// double *GetBounds()
TESTDLLSORT_API bool vtkPolyDataMapper_GetBounds_0(double ** return_value, vtkPolyDataMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyDataMapper::GetBounds]:[";
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
TESTDLLSORT_API bool vtkPolyDataMapper_GetBounds_1(vtkPolyDataMapper * callingObject, double bounds[6]) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyDataMapper::GetBounds]:[";
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

// void ShallowCopy(vtkAbstractMapper * m)
// void ShallowCopy(vtkAbstractMapper *m)
TESTDLLSORT_API bool vtkPolyDataMapper_ShallowCopy_0(vtkPolyDataMapper * callingObject, vtkAbstractMapper * m) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyDataMapper::ShallowCopy]:[";
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

// virtual void RemoveVertexAttributeMapping(const char * vertexAttributeName)
// virtual void RemoveVertexAttributeMapping(const char* vertexAttributeName)
TESTDLLSORT_API bool vtkPolyDataMapper_RemoveVertexAttributeMapping_0(vtkPolyDataMapper * callingObject, const char * vertexAttributeName) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyDataMapper::RemoveVertexAttributeMapping]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveVertexAttributeMapping(vertexAttributeName);
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// virtual void RemoveAllVertexAttributeMappings()
// virtual void RemoveAllVertexAttributeMappings()
TESTDLLSORT_API bool vtkPolyDataMapper_RemoveAllVertexAttributeMappings_0(vtkPolyDataMapper * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyDataMapper::RemoveAllVertexAttributeMappings]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
	callingObject->RemoveAllVertexAttributeMappings();
#ifdef DEBUG
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// int ProcessRequest(vtkInformation * ARG_0, vtkInformationVector ** ARG_1, vtkInformationVector * ARG_2)
// int ProcessRequest(vtkInformation*, vtkInformationVector**, vtkInformationVector*)
TESTDLLSORT_API bool vtkPolyDataMapper_ProcessRequest_0(int * return_value, vtkPolyDataMapper * callingObject, vtkInformation * ARG_0, vtkInformationVector ** ARG_1, vtkInformationVector * ARG_2) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkPolyDataMapper::ProcessRequest]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->ProcessRequest(ARG_0, ARG_1, ARG_2);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
