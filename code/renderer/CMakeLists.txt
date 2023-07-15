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
	../common/Update.hpp
	
	Renderer.hpp
	TextureUtility.hpp
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
