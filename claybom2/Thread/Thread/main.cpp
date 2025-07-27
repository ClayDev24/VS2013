// Standard C library: (Deprecated)
#include <iostream>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Standard C++ versions of C library:
//#include <cctype>
//#include <cstdio>
//#include <cstring>

int main(void) {
	char string[] = "THIS IS A TEST";
	char ch = 'a';
	int i;

	for (i = 0; (int)i<128; i++) {
		printf("%i- ( %c ) - ________________>>\n", i, i);
		if (isalnum(i))
			printf("\t - Alphabetic Numeric\n");
		if (isalpha(i))
			printf("\t - Alphabetic\n");
		if(isblank(i))
			printf("\t - Blank\n");
		if (iscntrl(i))
			printf("\t - CONTROL\n");
		if (isdigit(i))
			printf("\t - Digit\n");
		if (isgraph(i))
			printf("\t - Graphic\n");
		if (islower(i))
			printf("\t - Lower Case\n");
		if (isprint(i))
			printf("\t - Printable\n");
		if (ispunct(i))
			printf("\t - Punctuation\n");
		if (isspace(i))
			printf("\t - Space\n");
		if (isupper(i))
			printf("\t - Upper case\n");
		if (isxdigit(i))
			printf("\t - Hexadecimal Digit\n");
	}

	for (i = 0; i<strlen(string); i++)
		string[i] = tolower(string[i]);
	printf("%s\n", string);

	for (i = 0; i<strlen(string); i++)
		string[i] = toupper(string[i]);
	printf("%s\n", string);

	system("pause");
	return(0);
}
