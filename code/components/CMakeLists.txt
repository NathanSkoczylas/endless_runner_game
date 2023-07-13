# Minimum version of cmake required
cmake_minimum_required(VERSION 3.25)

# Set project name
project(
	components
	VERSION 1.0.0
	DESCRIPTION "Game Components"
)

# Set the projects root directory
message ("\n****************************************")
set(CODE_DIR ${PROJECT_SOURCE_DIR})
message (" Project Name: ${PROJECT_NAME} \n Root Directory: ${CODE_DIR}")
message ("****************************************")

# Set sources
set(projectSOURCES
	Object.cpp
	
)

# Set headers
set(projectHEADERS
	components.hpp

	Object.hpp
	
)


#include_directories(
#	${projectSOURCES}
#	${projectHEADERS}
#)

add_library(components STATIC 
	${projectSOURCES}
	${projectHEADERS}
)



# Set the install directory for the executable
#install(FILES ${PROJECT_NAME}
#	CONFIGURATIONS Debug
#	DESTINATION Libraries/bin
#)
#		
#install(FILES ${PROJECT_NAME}
#	CONFIGURATIONS Release
#	DESTINATION Libraries/bin
#)