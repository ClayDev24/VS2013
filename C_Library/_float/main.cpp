// Standard C Library: (Deprecated). See page 86-87 TIPP (vol2)
#include <iostream> // system()
#include <float.h>
#include <stdio.h> // printf()
// Standard C++ versions of C library:
//#include <cfloat>

int main(void) {

#define FLT_ROUNDS 0

	// Defines the way floating-point numbers are rounded:
	printf("FLT_ROUNDS: %i\n", FLT_ROUNDS);
	// Base (radix) for all floating-point types (float, double and long double). (eg.: base2=binary. base10=decinam, base16=hexadecimal:
	printf("Radix:\n");
	printf("FLT_RADIX : %i\n", FLT_RADIX);
	// Precission of significand, i.e. the number of digits that conform the significand.
	printf("Mantissa Digits:\n");
	printf("FLT_MANT_DIG : %i\n", FLT_MANT_DIG);
	printf("DBL_MANT_DIG : %i\n", DBL_MANT_DIG);
	printf("LDBL_MANT_DIG: %i\n", LDBL_MANT_DIG);
	// The maximum number decimal digits (base10) that can be represented without change after rounding:
	// Number of decimal digits that can be rounded into a floating-point and back without change in the number of decimal digits.
	printf("Digits:\n");
	printf("FLT_DIG : %i\n", FLT_DIG);
	printf("DBL_DIG : %i\n", DBL_DIG);
	printf("LDBL_DIG: %i\n", LDBL_DIG);
	// The minimum negative integer value for an exponent in base FLT_RACIX:
	// Minimum negative integer value for the exponent that generates a normalized floating-point number.
	printf("Minumum Exponent:\n");
	printf("FLT_MIN_EXP : %i\n", FLT_MIN_EXP);
	printf("DBL_MIN_EXP : %i\n", DBL_MIN_EXP);
	printf("LDBL_MIN_EXP: %i\n", LDBL_MIN_EXP);
	// The minimum negative integer value for an exponent in base 10:
	// Minimum negative integer value for the exponent of a base-10 expression that whould generate a normalized floating-point number.
	printf("Minimum Base10 Exponent:\n");
	printf("FLT_MIN_10_EXP : %i\n", FLT_MIN_10_EXP);
	printf("DBL_MIN_10_EXP : %i\n", DBL_MIN_10_EXP);
	printf("LDBL_MIN_10_EXP: %i\n", LDBL_MIN_10_EXP);
	// The maximum integer value for an exponent in base FLT_RACIX:
	// Maximum integer value for the exponent that generates a normalized floating-point number.
	printf("Maximum Exponent:\n");
	printf("FLT_MAX_EXP : %i\n", FLT_MAX_EXP);
	printf("DBL_MAX_EXP : %i\n", DBL_MAX_EXP);
	printf("LDBL_MAX_EXP: %i\n", LDBL_MAX_EXP);
	// The maximum integer value for an exponent in base 10:
	// Maximum integer value for the exponent of a base-10 expression that whould generate a normalized floating-point number.
	printf("Maximum Base10 Exponent:\n");
	printf("FLT_MAX_10_EXP : %i\n", FLT_MAX_10_EXP);
	printf("DBL_MAX_10_EXP : %i\n", DBL_MAX_10_EXP);
	printf("LDBL_MAX_10_EXP: %i\n", LDBL_MAX_10_EXP);
	// Maximum finite floating point value:
	// Maximum finite representable floating-point number.
	printf("Maximum:\n");
	printf("FLT_MAX : %f\n", FLT_MAX);
	printf("DBL_MAX : %f\n", DBL_MAX);
	printf("LDBL_MAX: %f\n", LDBL_MAX);
	// Least significant digit representable:
	// Difference between 1 and the least value greater than 1 that is representable.
	printf("EPSILON:\n");
	printf("FLT_EPSILON : %f\n", FLT_EPSILON);
	printf("DBL_EPSILON : %f\n", DBL_EPSILON);
	printf("LDBL_EPSILON: %f\n", LDBL_EPSILON);
	// Minimum floatin point value:
	// Minimum representable floating-point number.
	printf("Minimum:\n");
	printf("FLT_MIN : %f\n", FLT_MIN);
	printf("DBL_MIN : %d\n", DBL_MIN);
	printf("LDBL_MIN: %ld\n", LDBL_MIN);

	system("pause");
	return(0);
}