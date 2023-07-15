#include "EndlessRunner.hpp"

#include "raylib.h"

#include <cassert>


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
		bool initSuccessful{ false };

		if (m_renderer.initialize()) {
			initSuccessful = true;
		}

		// Start Game
		start();

		return initSuccessful && isRunning();
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
		//	user controls

		// Handle game world
		//	game physics

		// ** Handle output
		// Rendering
		m_renderer.update(m_dt);

		
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