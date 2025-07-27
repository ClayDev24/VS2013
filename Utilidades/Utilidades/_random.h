#pragma once
#include <cstdlib>   // random()
#include <ctime>     // time()
#include "defines.h" // P_()
#include "_colour.h"

namespace utils {
	/*
	template <typename T>
	static T _random22(const T &_min,const T &_max, bool _truly=false) {
	if(_truly)
	srand(static_cast<T>(time(NULL)));
	T max = (_max+1)-_min;
	return (rand()%max)+_min;
	}
	*/
	static unsigned int _random(const unsigned int &_min, const unsigned int &_max, bool _truly = false) {
		if (_truly)
			srand(static_cast<unsigned int>(time(NULL)));
		unsigned int max = (_max + 1) - _min;
		return (rand() % max) + _min;
	}
	static unsigned long long _random64(const unsigned long long &_min, const unsigned long long &_max, bool _truly = false) {
		if (_truly)
			srand(static_cast<unsigned long>(time(NULL)));

		unsigned long long max = (_max + 1) - _min;
		unsigned long long rnd = static_cast<unsigned long long>(((unsigned long long)rand() << 47) | (unsigned long long)rand());
		//P_(rnd);
		return (rnd%max) + _min;
	}
	// ***************** <<_USAGE_>> *****************
	static void _randomUsage() {
		/*		clb::PrintColour_("Generates 10 numbers betwen 20 to 30 pseudo random (always the same numbers)", FRI);
		for(int i=0; i<10; i++)
		P_(_random(20, 30))
		clb::PrintColour_("Generates 10 numbers betwen 20 to 30 truly random (every run different numbers)", FRI);
		for(int i=0; i<10; i++) {
		Sleep(225); // wait a quarter of a second
		P_(_random(20, 30, true))
		}
		*/	utils::PrintColour_("Generates 10 64bit numbers betwen 100000000000000000 to 1000000000000000000 pseudo random (every run different numbers)", FRI);
	for (int i = 0; i<100; i++) {
		//Sleep(225); // wait a quarter of a second
		P_(_random64(900000000000000000, 1000000000000000000))
	}
	}

} // utils