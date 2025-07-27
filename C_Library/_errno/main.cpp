// Standard C Library: (Deprecated). See page 86-87 TIPP (vol2)
#include <iostream>
#include <errno.h>
#include <stdio.h>


// Standard C++ versions of C library:
//#include<cerrno>


int main(void) {
	// Last error number:
	printf("errno: %i\n", errno); // Zero at start up
	// i can zero out or add some value to it dinamically:
	errno = 33;
	printf("errno: %i\n", errno);

	system("pause");
	return(0);
}