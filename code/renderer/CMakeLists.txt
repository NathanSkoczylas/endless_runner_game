# Minimum version of cmake required
cmake_minimum_required(VERSION 3.25)

# Set project name
project(
	renderer
	VERSION 1.0.0
	DESCRIPTION "Rendering Modules"
)

# Set the projects root directory
message ("\n****************************************")
set(RENDERER_DIR ${PROJECT_SOURCE_DIR})
message (" Project Name: ${PROJECT_NAME} \n Root Directory: ${RENDERER_DIR}")
message ("****************************************")


# Set sources for project
set(projectSOURCES
	Renderer.cpp
	TextureUtility.cpp
)

# Set headers for project
set(projectHEADERS
	${CODE_DIR}/common/Update.hpp
	${CODE_DIR}/common/Scene.hpp
	
	Renderer.hpp
	TextureUtility.hpp
)

# Allows cleaner includes in code
include_directories(
	${CODE_DIR}
)

# Create library
add_library(renderer STATIC 
	${projectSOURCES}
	${projectHEADERS}
)

# Link libraries
target_link_libraries(${PROJECT_NAME} 
	raylib
)
