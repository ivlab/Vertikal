cmake_minimum_required(VERSION 2.6)

project(vtk-interface)

#If you're ready to fix issues with self-generation, set this to true
set(GENERATE_API FALSE)
set(SAVE_API TRUE)

message("${CMAKE_CXX_COMPILER}")

set (py_cmd "${PROJECT_SOURCE_DIR}/generate_api/generate.py")
set (PREDEFINED_SOURCE_DIR "${PROJECT_SOURCE_DIR}/src")
set (SAVED_SOURCE_DIR "${PROJECT_SOURCE_DIR}/src_saved")
set (GENERATED_API "${PROJECT_SOURCE_DIR}/VertikalProject/Assets/Vertikal/Scripts")
set (GENERATED_SOURCE_DIR "${CMAKE_CURRENT_BINARY_DIR}/src")


if(SAVE_API)
	set (SOURCE_DIR "${SAVED_SOURCE_DIR}")
else()
	set (SOURCE_DIR "${GENERATED_SOURCE_DIR}")

endif()

# if(GENERATE_API)
# else()
# endif()

file(MAKE_DIRECTORY ${SOURCE_DIR})
file(MAKE_DIRECTORY ${GENERATED_API})
file(MAKE_DIRECTORY ${GENERATED_API}/API)

find_package(VTK)
include(${VTK_USE_FILE})

file(GLOB CURRENT_API
    "${GENERATED_API}/vtk*.cs"
    "${GENERATED_API}/API/*.cs"
)

if(GENERATE_API)

	# Currently g++ is the only pre-processor that finds system includes.
	# Once this is solved for Clang and Visual Studio compiler, switch 
	# the next two lines:
	#set (PREPROCESSOR "${PROJECT_SOURCE_DIR}/src")
	set (PREPROCESSOR "g++")

	#Remove the old API files
	if ("${CURRENT_API}" STREQUAL "")
		file(REMOVE ${CURRENT_API})
	endif()
	execute_process(
		COMMAND 
		python ${py_cmd} "${VTK_INCLUDE_DIRS}" "${SOURCE_DIR}" "${GENERATED_API}" "${PREPROCESSOR}"
	)


endif()


file(GLOB GENERATED_src
    "${SOURCE_DIR}/*.cpp"
)



# Unity bundle plugin
add_library(vtkplugin MODULE "${GENERATED_src}" "${PREDEFINED_SOURCE_DIR}/custom.cpp")
target_link_libraries(vtkplugin ${VTK_LIBRARIES})
set_target_properties(vtkplugin PROPERTIES BUNDLE TRUE)


install(TARGETS vtkplugin DESTINATION .)
