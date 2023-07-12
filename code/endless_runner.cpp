#include <iostream>

#include "raylib.h"


// ----------------------------------------------------------------------------
// main
// ----------------------------------------------------------------------------
int main() {
	std::cout << "Endless Runner" << std::endl;
	
	// Window Parameters
	int windowWidth{ 800 };
	int windowHeight{ 450 };
	InitWindow(windowWidth, windowHeight, "Endless Runner");
	Color backgroundColor{ WHITE };
	SetTargetFPS(60);

	// Game loop
	while (!WindowShouldClose()) {
		BeginDrawing();

		ClearBackground(backgroundColor);

		EndDrawing();
	}

	CloseWindow();
	
	return 0;
}
