
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkDataCompressor.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
// static vtkTypeBool IsTypeOf(const char * type)
// static vtkTypeBool IsTypeOf(const char *type)
TESTDLLSORT_API bool vtkDataCompressor_IsTypeOf_0(vtkTypeBool * return_value, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataCompressor::IsTypeOf]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataCompressor::IsTypeOf(type);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkTypeBool IsA(const char * type)
// vtkTypeBool IsA(const char *type)
TESTDLLSORT_API bool vtkDataCompressor_IsA_0(vtkTypeBool * return_value, vtkDataCompressor * callingObject, const char * type) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataCompressor::IsA]:[";
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

// static vtkDataCompressor* SafeDownCast(vtkObjectBase * o)
// static vtkDataCompressor* SafeDownCast(vtkObjectBase *o)
TESTDLLSORT_API bool vtkDataCompressor_SafeDownCast_0(vtkDataCompressor ** return_value, vtkObjectBase * o) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataCompressor::SafeDownCast]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = vtkDataCompressor::SafeDownCast(o);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkDataCompressor* NewInstance()
// vtkDataCompressor *NewInstance()
TESTDLLSORT_API bool vtkDataCompressor_NewInstance_0(vtkDataCompressor ** return_value, vtkDataCompressor * callingObject) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataCompressor::NewInstance]:[";
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

// virtual size_t GetMaximumCompressionSpace(size_t size)
// virtual size_t GetMaximumCompressionSpace(size_t size)
TESTDLLSORT_API bool vtkDataCompressor_GetMaximumCompressionSpace_0(size_t * return_value, vtkDataCompressor * callingObject, size_t size) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataCompressor::GetMaximumCompressionSpace]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->GetMaximumCompressionSpace(size);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// size_t Compress(unsigned char const* uncompressedData, size_t uncompressedSize, unsigned char * compressedData, size_t compressionSpace)
// size_t Compress(unsigned char const* uncompressedData, size_t uncompressedSize, unsigned char* compressedData, size_t compressionSpace)
TESTDLLSORT_API bool vtkDataCompressor_Compress_0(size_t * return_value, vtkDataCompressor * callingObject, unsigned char const* uncompressedData, size_t uncompressedSize, unsigned char * compressedData, size_t compressionSpace) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataCompressor::Compress]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Compress(uncompressedData, uncompressedSize, compressedData, compressionSpace);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// size_t Uncompress(unsigned char const* compressedData, size_t compressedSize, unsigned char * uncompressedData, size_t uncompressedSize)
// size_t Uncompress(unsigned char const* compressedData, size_t compressedSize, unsigned char* uncompressedData, size_t uncompressedSize)
TESTDLLSORT_API bool vtkDataCompressor_Uncompress_0(size_t * return_value, vtkDataCompressor * callingObject, unsigned char const* compressedData, size_t compressedSize, unsigned char * uncompressedData, size_t uncompressedSize) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataCompressor::Uncompress]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Uncompress(compressedData, compressedSize, uncompressedData, uncompressedSize);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkUnsignedCharArray* Compress(unsigned char const* uncompressedData, size_t uncompressedSize)
// vtkUnsignedCharArray* Compress(unsigned char const* uncompressedData, size_t uncompressedSize)
TESTDLLSORT_API bool vtkDataCompressor_Compress_1(vtkUnsignedCharArray ** return_value, vtkDataCompressor * callingObject, unsigned char const* uncompressedData, size_t uncompressedSize) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataCompressor::Compress]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Compress(uncompressedData, uncompressedSize);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

// vtkUnsignedCharArray* Uncompress(unsigned char const* compressedData, size_t compressedSize, size_t uncompressedSize)
// vtkUnsignedCharArray* Uncompress(unsigned char const* compressedData, size_t compressedSize, size_t uncompressedSize)
TESTDLLSORT_API bool vtkDataCompressor_Uncompress_1(vtkUnsignedCharArray ** return_value, vtkDataCompressor * callingObject, unsigned char const* compressedData, size_t compressedSize, size_t uncompressedSize) {
#ifdef DEBUG
	freopen("debug.txt", "a", stdout);
	freopen("debug.txt", "a", stderr);
#endif
#ifdef DEBUG
	std::cout << "[vtkDataCompressor::Uncompress]:[";
#endif
	bool success = true;
#ifdef DEBUG
	std::cout << " (callingObject:" << callingObject << ")";
#endif
	if (callingObject == NULL) return false;
#ifdef DEBUG
	std::cout << " (returnPtr:" << return_value <<  ")";
#endif
	*return_value = callingObject->Uncompress(compressedData, compressedSize, uncompressedSize);
#ifdef DEBUG
	if(return_value) std::cout << " (return_value:" << *return_value <<  ")";
	std::cout << "]"<< std::endl;
#endif
	return success;
}

}
