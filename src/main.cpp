#include <stdlib.h>
#include <stdio.h>
#include <vtkVersion.h>



int
main(int argc, char **argv)
{
  printf("Using VTK version %s\n", vtkVersion::GetVTKVersion());
  return 0;
}
