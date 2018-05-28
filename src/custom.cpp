#ifdef _WIN32

#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

#include <iostream>
#include <string>
#include <vtkDataSet.h>
#include <vtkXMLImageDataReader.h>
#include <vtkXMLStructuredGridReader.h>
#include <vtkXMLUnstructuredGridReader.h>
#include <vtkXMLPolyDataReader.h>
#include <vtkPointData.h>
#include <vtkFloatArray.h>
#include <vtkSmartPointer.h>
#include <vtkContourFilter.h>
#include <vtkPolyDataNormals.h>
#include <vtkCellData.h>
#include <vtkUnstructuredGrid.h>
#include <vtkImageData.h>

#include <vtkVersion.h>

extern "C" {
    

	TESTDLLSORT_API char* get_vtk_version()
    {
        char * str = new char[512];
        strcpy(str,vtkVersion::GetVTKVersion());
        return str;
    }

}

