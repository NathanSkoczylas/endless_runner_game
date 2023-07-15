// ----------------------------------------------------------------------------
// Nathan Skoczylas
// ----------------------------------------------------------------------------
#include "Renderer.hpp"

#include "TextureUtility.hpp"

namespace UP {
namespace Renderer {

	// Const variables
	constexpr int FPS_RATE{ 60 };
	Texture2D m_menu; // TODO get thits outta here
	
	Renderer::Renderer() {
		
	}

	Renderer::~Renderer() {
		UnloadTexture(m_menu);
	}

	bool Renderer::initialize() {
		// Window Parameters
		const int windowWidth{ 800 };
		const int windowHeight{ 450 };
		InitWindow(windowWidth, windowHeight, "Endless Runner");
		Color backgroundColor{ WHITE };
		SetTargetFPS(FPS_RATE);
		m_menu = TextureUtil::LoadTexture("D:/dev/game_dev/endless_runner_game/art/menu/sunset_mountain_tree.png");

		return true;
	}


	void Renderer::update(float dt) {
		BeginDrawing();
		ClearBackground(WHITE);
		
		
		DrawTextureEx(m_menu, { 0.0f, 0.0f }, 0.0f, 0.25f, WHITE);
		
		
		EndDrawing();
	
	}

} // end namespace
} // end namespace