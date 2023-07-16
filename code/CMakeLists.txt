# Minimum version of cmake required
cmake_minimum_required(VERSION 3.25)

# Set project name
project(
	main_game
	VERSION 1.0.0
	DESCRIPTION "Main Game"
)


# Set sources for project
set(projectSOURCES
	endless_runner.cpp
	
	EndlessRunner.cpp
	
)	

# Set headers for project
set(projectHEADERS
	EndlessRunner.hpp
	
)

# Create executable target
add_executable(${PROJECT_NAME} 
	${projectSOURCES}
	${projectHEADERS}
)


# Link libraries
target_link_libraries(${PROJECT_NAME} 
	raylib
	components
	renderer
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