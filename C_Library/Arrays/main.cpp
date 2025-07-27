#include <iostream> // system()
#include <stdio.h>
// Global array:
int global[5]; // Automatic filled with zeros.

int main() {
	int i, i2;
	// ERROR: static arrays always expect constant expressions.
	//int i3[i]; 
	// Single dimension array o'int:
	int undef[5]; // Undefined until first initialization
	char str[16] = "Blueberry"; // Array o'chars. str[8]='y', str[9]=null char
	int y[3] = { 4 }; // y[0]=4, y[1]=0, y[2]=0
	int joe[3][5] = {
		{ 1, 2, 3, 4, 5 },	// joe[0]
		{ 6, 7, 8, 9, 10 },	// joe[1]
		{ 11, 12, 13, 14, 15 }// joe[2]
	};					// joe[3]
	int joe2[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 }; // Same as bfore

	// Accessin' array elements usin' "Offset Operator": []. Kinda like dereference op: *
	for (i = 0; i<5; i++) {
		printf("global[%i]=%i\n", i, global[i]); // Undefiden values
	}

	for (i = 0; i<5; i++) {
		printf("undef[%i]=%i\n", i, undef[i]); // Undefiden values
	}

	printf("%s\n", str);

	for (i = 0; i<3; i++) {
		printf("y[%d]=%d\n", i, y[i]); // Undefiden values
	}
	for (i = 0; i<4; i++) {
		for (i2 = 0; i2<5; i2++) {
			printf("joe[%d][%d]=%d\n", i, i2, joe[i][i2]); // Undefiden values
		}
	}
	for (i = 0; i<4; i++) {
		for (i2 = 0; i2<5; i2++) {
			printf("joe2[%d][%d]=%d\n", i, i2, joe2[i][i2]); // Undefiden values
		}
	}

	system("pause");
	return(0);
}