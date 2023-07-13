#include "Object.hpp"

namespace UP {
	
	Object::Object() {
		// TODO: Assign unique ID
	}

	Object::Object(std::string_view n) {
		// TODO: Assign unique ID
		
		name(n);
	}

	void Object::name(std::string_view n) {
		m_name = n;
	}

	std::string_view Object::name() {
		return m_name;
	}

	int Object::id() {
		return m_id;
	}

	void Object::enabled(bool e) {
		m_enabled = e; 
	}

	bool Object::enabled() { 
		return m_enabled;
	}
}