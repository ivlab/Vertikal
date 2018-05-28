#include <stdlib.h>
#include <stdio.h>
#include <vtkVersion.h>
#include <vtkDataSet.h>


int
main(int argc, char **argv)
{
  printf("Using VTK version %s\n", vtkVersion::GetVTKVersion());
  vtkDataSet * v = vtkDataSet::New();

  printf("This should be zero: %i\n", v->GetNumberOfPoints());
  return 0;
}
