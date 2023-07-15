// ----------------------------------------------------------------------------
// Nathan Skoczylas
// ----------------------------------------------------------------------------

#pragma once

#include <string>
#include <memory>

#include "../common/Update.hpp"

#include "raylib.h"

namespace UP {
namespace Renderer {

	class Renderer : public Update {

		public:
			Renderer();
			virtual ~Renderer();

			void update(float dt) override;

			bool initialize();


		protected:
			
			
		private:
			

	};
		
} // end namespace
} // end namespace