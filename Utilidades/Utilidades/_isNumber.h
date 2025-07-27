#pragma once
#include <string>
#include "defines.h" // P_()

namespace utils {

	static bool _isNumber(const std::string &_s) {
		for (unsigned int i = 0; i<_s.length(); i++) {
			//P_(_s.at(i))
			if (!((_s.at(i) >= '0') && (_s.at(i) <= '9')))
				return false;
		}
		return true;
	}
	// ***************** <<_USAGE_>> *****************
	static void _isNumberUsage() {
		P_(_isNumber("ABC/0123456789:abc"))
			P_(_isNumber("987659"))
	}

} // utils