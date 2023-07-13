#include <iostream>


#include "EndlessRunner.hpp"


// ----------------------------------------------------------------------------
// main
// ----------------------------------------------------------------------------
int main() {
	std::cout << "Endless Runner" << std::endl;
	
	UP::EndlessRunner endlessRunnerGame;
	bool initSuccessful = endlessRunnerGame.initialize();

	// Game loop
	while (initSuccessful && endlessRunnerGame.isRunning()) {

		endlessRunnerGame.update();
		
	}

	endlessRunnerGame.stop();
		
	return 0;
}
