//#include "vld.h" // No memory leaks DETECTED!
#include <windows.h> // SetConsoleTitle()
#include <iostream>
#include "utils.h"
#include "fracao.h"

// add the complete or relative path of the power include directory:
//#include "../../include/power.h"
// Project->Porperties (Alt+F7)->Configuration Properties->C/C++ ->General-> Additional Include Directories:
// <"../../include/power.h">

//ALT+F7->Configuration Properties->Linker->Input->Additional Dependencies: <power.lib>

//ALT+F7->Configuration Properties->Linker->General->Additional Library Dependencies: <..\..\utils\lib>
//complete: <I:\Programming\C++\Progs\claybom\utils\lib>
//or relative: <..\..\utils\lib>

int main(int argc, char *argv[]) {
	SetConsoleTitle("<<_UTILIDADES_>>"); // windows.h
	//using namespace std;
	//using namespace clb;

	//utils::_allocCountUsage();
	//utils::_assertUsage();      // NOT IMPLEMENTED YET
	//utils::_charIsWhatUsage();
	//utils::_chronometerUsage();
	//utils::_commandLineArgsUsage(argc, argv);
	//utils::_conversions();
	//utils::_countVectorUsage();
	//utils::_fileCopyCatUsage();
	utils::_dictionaryUsage();
	//utils::_inputLineUsage();   // Gets the whole line
	//utils::_inputWordUsage();   // Gets only the first word
	//utils::_isNumberUsage();
	//utils::_randomUsage();
	//utils::_randomWordsUsage();
	//utils::_requireUsage();
	//utils::_setLocaleUsage();
	//utils::_exeUsage();
	//utils::_showVetorUsage();
	//utils::_sleep(5000);        // 5s
	//utils::_sortUsage();
	//utils::_testMemoryUsage(); // CÓDIGO COM ERRO DE FUNCIONALIDADE...
	//utils::_2UpperUsage();
	//utils::_typeNumberUsage();
	
	// Non-tatic functions:
	//utils::EnterValueUsage();
	//utils::ExtensoUsage();
	//utils::MemsetUsage();
	//utils::PrintBinaryUsage();
	//utils::TimeElapsedUsage();
	//utils::TokenizerUsage();
	//utils::VetorComparisonUsage();
	//prtAlloc();

	utils::fracao();

	system("pause");
	return(0);
}