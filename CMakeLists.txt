# Minimum version of cmake required
cmake_minimum_required(VERSION 3.25)

# C++ Version
set(CMAKE_CXX_STANDARD 20)

# Set project name
project(
	endless_runner
	VERSION 1.0.0
	DESCRIPTION "Endless Runner"
)

# Set the projects root directory
message ("\n****************************************")
set(ROOT_DIR ${PROJECT_SOURCE_DIR})
message (" Project Name: ${PROJECT_NAME} \n Root Directory: ${ROOT_DIR}")
message ("****************************************")


# Thirdparty directory
set(THIRDPARTY_DIR thirdparty)
set(RAYLIB_DIR ${THIRDPARTY_DIR}/raylib/raylib)
message ("\n****************************************")
message (" RayLib Directory: ${RAYLIB_DIR}")
message ("****************************************")
add_subdirectory(${RAYLIB_DIR})

# My Libraries
add_subdirectory(code/components)
add_subdirectory(code/renderer)

# Add subdirectories
add_subdirectory(code)
