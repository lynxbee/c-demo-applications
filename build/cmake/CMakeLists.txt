cmake_minimum_required (VERSION 2.6)
project (hello)

set (hello_VERSION_MAJOR 1)
set (hello_VERSION_MINOR 0)

configure_file (
	"${PROJECT_SOURCE_DIR}/helloConfig.h.in"
	"${PROJECT_BINARY_DIR}/helloConfig.h"
)

# add the binary tree to the search path for include files
# so that we will find helloConfig.h
include_directories("${PROJECT_BINARY_DIR}")

#procedure to create and add library
include_directories("${PROJECT_SOURCE_DIR}/MathFunctions")
add_subdirectory (MathFunctions)

add_executable(hello helloworld.c)
#link the library with main program
target_link_libraries (hello MathFunctions)
