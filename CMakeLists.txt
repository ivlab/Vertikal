cmake_minimum_required(VERSION 2.6)

project(vtk-interface)

set (py_cmd "${PROJECT_SOURCE_DIR}/generate_api/generate.py")
set (PREDEFINED_SOURCE "${PROJECT_SOURCE_DIR}/src")
set (GENERATED_SOURCE "${CMAKE_CURRENT_BINARY_DIR}/src")
set (GENERATED_API "${PROJECT_SOURCE_DIR}/VertikalProject/Assets/Scripts")

file(MAKE_DIRECTORY ${GENERATED_SOURCE})
file(MAKE_DIRECTORY ${GENERATED_API})
file(MAKE_DIRECTORY ${GENERATED_API}/API)

find_package(VTK)
include(${VTK_USE_FILE})


file(MAKE_DIRECTORY "NULL")
file(GLOB CURRENT_API
    "${GENERATED_API}/vtk*.cs"
    "${GENERATED_API}/API/*.cs"
    "NULL"
)

file(REMOVE ${CURRENT_API})


execute_process(
	COMMAND python ${py_cmd} "${VTK_INCLUDE_DIRS}" "${GENERATED_SOURCE}" "${GENERATED_API}"
	)


file(GLOB API_src
    "${GENERATED_SOURCE}/*.cpp"
    "${PREDEFINED_SOURCE}/*.cpp"
)

add_library(vtklib ${API_src})
target_link_libraries(vtklib ${VTK_LIBRARIES})


# Unity bundle plugin
add_library(vtkplugin MODULE ${API_src})
target_link_libraries(vtkplugin ${VTK_LIBRARIES})
set_target_properties(vtkplugin PROPERTIES BUNDLE TRUE)
set_target_properties(vtkplugin PROPERTIES LINK_SEARCH_START_STATIC 1)
set_target_properties(vtkplugin PROPERTIES LINK_SEARCH_END_STATIC 1)


install(TARGETS vtkplugin DESTINATION .)
