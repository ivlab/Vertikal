
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <vtkCellLinks.h>
#include <vtkUnicodeStringArray.h>

extern "C" {
}
