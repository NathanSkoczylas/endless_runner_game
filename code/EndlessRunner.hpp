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
			
			bool initialize();
			void start();
			void stop();

			void update();
			bool isRunning();

		protected:
			
		private:
			bool m_running{ false };
			float m_dt{};

			Renderer::Renderer m_renderer;

	};
		
} // end namespace