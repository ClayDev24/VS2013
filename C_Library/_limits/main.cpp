// Standard C Library. See page 86-87 TIPP (vol2)
#include<iostream> //system()
#include<limits.h>
// Standard C++ Library equivalent to C:
//#include<climits>

int main(void) {

	printf("CHAR_BIT  : %i\n", CHAR_BIT);  // Number of bits in a byte.  
	printf("SCHAR_MIN : %i\n", SCHAR_MIN); // Minimum value for a signed char.  
	printf("SCHAR_MAX : %i\n", SCHAR_MAX); // Maximum value for a signed char.  
	printf("UCHAR_MAX : %i\n", UCHAR_MAX); // Maximum value for an unsigned char.  
	printf("CHAR_MIN  : %i\n", CHAR_MIN);  // These define the minimum and maximum values for a char. If a char is being represented as a signed integer, then their values are
	printf("CHAR_MAX  : %i\n", CHAR_MAX);  // the same as the signed char (SCHAR) values. Otherwise CHAR_MIN is 0 and CHAR_MAX is the same as UCHAR_MAX.  
	printf("MB_LEN_MAX: %i\n", MB_LEN_MAX);// Maximum number of bytes in a multibyte character.  
	printf("SHRT_MIN  : %i\n", SHRT_MIN);  // Minimum value for a short int (signed).  
	printf("SHRT_MAX  : %i\n", SHRT_MAX);  // Maximum value for a short int (signed).  
	printf("USHRT_MAX : %i\n", USHRT_MAX); // Maximum value for an unsigned short int.  
	printf("INT_MIN   : %i\n", INT_MIN);   // Minimum value for an int (signed).  
	printf("INT_MAX   : %i\n", INT_MAX);   // Maximum value for an int (signed).  
	printf("UINT_MAX  : %ui\n",UINT_MAX);  // Maximum value for an unsigned int.  
	printf("LONG_MIN  : %i\n", LONG_MIN);  // Minimum value for a long int.  
	printf("LONG_MAX  : %i\n", LONG_MAX);  // Maximum value for a long int.  
	printf("ULONG_MAX : %ul\n",ULONG_MAX); // Maximum value for an unsigned long int.  

	system("pause");
	return(0);
}
