# Minimum version of cmake required
cmake_minimum_required(VERSION 3.25)

# Set project name
project(
	main_game
	VERSION 1.0.0
	DESCRIPTION "Main Game"
)

# Set the projects root directory
message ("\n****************************************")
set(CODE_DIR ${PROJECT_SOURCE_DIR})
message (" Project Name: ${PROJECT_NAME} \n Root Directory: ${CODE_DIR}")
message ("****************************************")

# Set sources for bored engine
set(projectSOURCES
	endless_runner.cpp
	
)

set(projectHEADERS
	
)

# Create executable target
add_executable(${PROJECT_NAME} 
	${projectSOURCES}
	${projectHEADERS}
)


# Link libraries
target_link_libraries(${PROJECT_NAME} 
	raylib
)

# Set the install directory for the executable
install(TARGETS ${PROJECT_NAME}
	CONFIGURATIONS Debug
	RUNTIME DESTINATION Debug/bin
)
		
install(TARGETS ${PROJECT_NAME}
	CONFIGURATIONS Release
	RUNTIME DESTINATION Release/bin
)