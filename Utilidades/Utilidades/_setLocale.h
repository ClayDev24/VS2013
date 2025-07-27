#pragma once
#include <locale.h> // setlocale()
#include "defines.h" // P_()

namespace utils {

	static void _setLocale(char* locale = "Portuguese") {
		setlocale(LC_ALL, locale);
	}
	// ***************** <<_USAGE_>> *****************
	static void _setLocaleUsage() {
		// Teste do SetLocale:
		S_("Frase com acentua��o...")
			_setLocale();
		S_("Frase com acentua��o...")
			S_("Teste � � � � � � � � � �")
	}

} // utils


