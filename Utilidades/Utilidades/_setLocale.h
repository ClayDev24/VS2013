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
		S_("Frase com acentuação...")
			_setLocale();
		S_("Frase com acentuação...")
			S_("Teste á é í ó ú à ç ã ô ê")
	}

} // utils


