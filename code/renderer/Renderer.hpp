// ----------------------------------------------------------------------------
// Nathan Skoczylas
// ----------------------------------------------------------------------------

#pragma once

#include <string>
#include <memory>

#include "common/Update.hpp"

#include "raylib.h"

namespace UP {
namespace Renderer {

	class Renderer : public Update {

		public:
			Renderer();
			virtual ~Renderer();

			/**
			* Update loop for renderer
			* 
			* @param float dt - delta time
			*/
			void update(float dt) override;

			/**
			* Initializes the rendering pipeline
			*  - Creates window
			*  - Set FPS
			*  - Load textures
			* 
			* @return bool - true when successful
			*/
			bool initialize();


		protected:
			
			
		private:
			

	};
		
} // end namespace
} // end namespace