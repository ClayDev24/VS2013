// Standar C Library. See page 86-87 TIPP (vol2)
#include <iostream> // system()
#include <setjmp.h>
#include <stdio.h>

void some_function(jmp_buf);

int main() {
	int value = 0;
	jmp_buf environment_buffer;

	value = setjmp(environment_buffer);
	if (value != 0) {
		printf("Reached this point from a longjmp with value = %d.\n", value);
		system("pause");
		exit(0);
	}
	printf("Calling function.\n");
	some_function(environment_buffer);

	system("pause");
	return(0);
}

void some_function(jmp_buf env_buf) {
	longjmp(env_buf, 5);
}

