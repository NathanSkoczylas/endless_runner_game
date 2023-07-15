// ----------------------------------------------------------------------------
// Nathan Skoczylas
// ----------------------------------------------------------------------------

#pragma once

namespace UP {

	class Update {
	public:
		virtual void update(float dt) = 0;
		//virtual void fixedUpdate(float dt) {};
		//virtual void lateUpdate(float dt) {};
	};	
		
} // end namespace