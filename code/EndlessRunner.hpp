// ----------------------------------------------------------------------------
// Nathan Skoczylas
// Endless Runner class
// ----------------------------------------------------------------------------

#pragma once

#include <string>
#include <string_view>
#include <memory>

#include "renderer/Renderer.hpp"

namespace UP {

	class EndlessRunner {

		public:
			EndlessRunner();
			virtual ~EndlessRunner();
			
			/**
			* Initializes all of the main components to run the game.
			*
			* @return bool - true if successful
			*/
			bool initialize();

			/**
			* Set's the game to running
			*/
			void start();

			/**
			* Stop's the game from running
			*/
			void stop();

			/**
			* The game's main update loop
			*/
			void update();

			/**
			* Returns if the game is running
			* 
			* @return bool - true when running
			*/
			bool isRunning();

		protected:
			
		private:
			bool m_running{ false };
			float m_dt{};

			Renderer::Renderer m_renderer;

	};
		
} // end namespace