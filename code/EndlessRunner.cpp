#include "EndlessRunner.hpp"

#include "raylib.h"

namespace UP {
	
	EndlessRunner::EndlessRunner() {
		// Constructor
	}

	EndlessRunner::~EndlessRunner() {
		// Destructor
		stop();
		CloseWindow();
	}

	bool EndlessRunner::initialize() {
		// Window Parameters
		const int windowWidth{ 800 };
		const int windowHeight{ 450 };
		InitWindow(windowWidth, windowHeight, "Endless Runner");
		Color backgroundColor{ WHITE };
		SetTargetFPS(60);

		start();

		return true;
	}

	void EndlessRunner::update() {

		if (!isRunning()) {
			// If the game isn't running, don't continue
			return; 
		}

		if (WindowShouldClose()) {
			// If the game window is closed stop running
			stop();
		}

		// Update delta time
		m_dt = GetFrameTime();

		// Handle input
		//	networking
		//	user controls

		// Handle game world
		//	game physics

		// Handle output
		//	rendering

		BeginDrawing();

		ClearBackground(WHITE);

		EndDrawing();
		
	}

	bool EndlessRunner::isRunning() {
		return m_running;
	}

	void EndlessRunner::start() {
		m_running = true;
	}

	void EndlessRunner::stop() {
		m_running = false;
		
	}

}