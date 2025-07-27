#include <conio.h>
#include <stdio.h>

int main() {
	// Trigraph Sequence Translation Character 
	// ??= # 
	// ??( [ 
	// ??/ \ 
	// ??) ] 
	// ??' ^ 
	// ??< { 
	// ??! | 
	// ??> } 
	// ??- ~ 
	printf("No? ??/n");
	// translates into: 
	// printf("No?\n"); 
	// Scape Sequences
	printf("\\a Alert Produces an audible or visible alert.\n");
	_getche();
	printf("\a"); // \a Alert Produces an audible or visible alert.
	printf("\\b Backspace Moves the cursor back one position (non-destructive).");
	_getche();
	printf("\b"); // Backspace Moves the cursor back one position (non-destructive).
	_getche();
	printf("\\f Form Feed Moves the cursor to the first position of the next page.");
	_getche();
	printf("\f"); // Form Feed Moves the cursor to the first position of the next page.
	_getche();
	printf("\n \n"); // New Line Moves the cursor to the first position of the next line. 
	_getche();
	printf("\r \n"); // Carriage Return Moves the cursor to the first position of the current line. 
	_getche();
	printf("\t \n"); // Horizontal Tab Moves the cursor to the next horizontal tabular position. 
	_getche();
	printf("\v \n"); // Vertical Tab Moves the cursor to the next vertical tabular position. 
	_getche();
	printf("\' \n"); // Produces a single quote. 
	_getche();
	printf("\" \n"); // Produces a double quote. 
	_getche();
	printf("\? \n"); // Produces a question mark. 
	_getche();
	printf("\\ \n"); // Produces a single backslash. 
	_getche();
	printf("\0 \n"); // Produces a null character. 
	_getche();
	printf("\ddd \n"); // Defines one character by the octal digits (base-8 number). Multiple characters may be defined in the same escape sequence, but the value is implementation-specific (see examples).  
	_getche();
	printf("\x61 \n"); // Defines one character by the hexadecimal digit (base-16 number). 
	_getche();

	return(0);
}








