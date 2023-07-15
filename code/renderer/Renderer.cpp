// ----------------------------------------------------------------------------
// Nathan Skoczylas
// ----------------------------------------------------------------------------
#include "Renderer.hpp"

#include "TextureUtility.hpp"

namespace UP {
namespace Renderer {

	// Const variables
	constexpr int FPS_RATE{ 60 };
	Texture2D m_menu; // TODO get this outta here

	// Window Parameters
	constexpr int windowWidth{ 800 };
	constexpr int windowHeight{ 450 };
	

	// --------------------------------------------------------------------------------
	// Constructor
	// --------------------------------------------------------------------------------
	Renderer::Renderer() {
		
	}

	// --------------------------------------------------------------------------------
	// Destructor
	// --------------------------------------------------------------------------------
	Renderer::~Renderer() {
		UnloadTexture(m_menu);
	}

	// --------------------------------------------------------------------------------
	// initialize
	// --------------------------------------------------------------------------------
	bool Renderer::initialize() {
		// Init Window		
		InitWindow(windowWidth, windowHeight, "Endless Runner");
		Color backgroundColor{ WHITE };

		// Set FPS
		SetTargetFPS(FPS_RATE);

		// Load textures
		m_menu = TextureUtil::LoadTexture("D:/dev/game_dev/endless_runner_game/art/menu/sunset_mountain_tree.png");

		return true;
	}

	// --------------------------------------------------------------------------------
	// update
	// --------------------------------------------------------------------------------
	void Renderer::update(float dt) {
		BeginDrawing();
		ClearBackground(WHITE);
		
		
		DrawTextureEx(m_menu, { 0.0f, 0.0f }, 0.0f, 0.25f, WHITE);
		
		
		EndDrawing();
	
	}

} // end namespace
} // end namespace