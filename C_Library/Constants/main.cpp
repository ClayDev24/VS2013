#include <conio.h> // _getche()
#include <stdio.h>

const volatile int i=0;
const int  hex = 0xA3;
const int  oct = 033;
const int   i2 = 33;
const float f = 7.4e5;
const float f2 = 7.4E5;
const float f3 = 5l;  // Long double
const int   i3 = 5L;  // Unsigned long integer
const int   i4 = 33u; // Unsigned long integer
const int   i5 = 33U; // idem
const char   c = 'c';

int main() {

	printf("%i \n", i);
	printf("%X \n", hex);
	printf("%o \n", oct);
	printf("%i \n", i2);
	printf("%f \n", f);
	printf("%f \n", f2);
	printf("%f \n", f3);
	//	printf("%i \n", i);
	//	printf("%i \n", i);
	//	printf("%i \n", i);
	printf("%c \n", c);

	_getche();
	return(0);
}