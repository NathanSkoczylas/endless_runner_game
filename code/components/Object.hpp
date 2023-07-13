// ----------------------------------------------------------------------------
// Nathan Skoczylas, 2023-07-12
// Object class
// ----------------------------------------------------------------------------

#pragma once

#include <string>
#include <string_view>

namespace UP {

	class Object {

		public:
			Object();
			Object(std::string_view id);
			virtual ~Object() = default;
			
			int id();
			void enabled(bool e);
			bool enabled();

		protected:
			void name(std::string_view n);
			std::string_view name();
			
		private:
			int m_id{}; // unique ID of the object
			std::string m_name{}; // Name of the object
			bool m_enabled{ true }; // If the object is enabled
			
	};
		
} // end namespace