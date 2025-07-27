#pragma once
#include <Windows.h> // Sleep()

namespace utils {

	static void _sleep(const int &_milliseconds) {

		Sleep(_milliseconds);

	}

} // utils