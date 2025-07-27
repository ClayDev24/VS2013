// Standard C Library. See page 86-87 TIPP (vol2)
#include <iostream> // SYSTEM()
#include <stdio.h>
#include <stdarg.h>
// Standard C++ Library:
//#include <cstdio>
//#include <cstdarg>

int FindMax(int amount, ...) {
	int i, val, greater;
	va_list vl;
	va_start(vl, amount);
	greater = va_arg(vl, int);
	for (i = 1; i<amount; i++) {
		val = va_arg(vl, int);
		greater = (greater>val) ? greater : val;
	}
	va_end(vl);
	return greater;
}

void PrintFloats(int amount, ...) {
	int i;
	double val;
	va_list vl;

	printf("Floats passed:\n");
	va_start(vl, amount);
	for (i = 0; i<amount; i++) {
		val = va_arg(vl, double);
		printf("\t%.2f\n", val);
	}
	va_end(vl);
}

void PrintLines(char *first, ...) {
	char* str;
	va_list vl;
	str = first;
	va_start(vl, first);
	do {
		printf("%s\n", str);
		str = va_arg(vl, char*);
	} while (str != NULL);

	va_end(vl);
}

int main() {
	int m;
	m = FindMax(7, 702, 422, 631, 834, 892, 104, 772);
	printf("The greatest one is: %d\n", m);

	PrintFloats(3, 3.14159, 2.71828, 1.41421);

	PrintLines("First", "Second", "Third", "Fourth", NULL);

	system("pause");
	return(0);
}