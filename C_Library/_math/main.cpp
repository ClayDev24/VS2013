// Standard C Library.  See page 86-87 TIPP (vol2)
#include<iostream> // system("pause")
#include<math.h> // Sets o'funcs 2 compute common mathematical operations and transformations.
#include<errno.h>
// Standard C++ Library for C:
//#include<cmath>
//#include<cerrno>

#define PI 3.14159265

// Trigonometric Functions:
void _acos();	// Returns the arc cosine of x in radians.
void _asin();	// Returns the arc sine of x in radians.
void _atan();	// Returns the arc tangent of x in radians.
void _atan2();	// Returns the arc tangent in radians of y/x based on the signs of both values to determine the correct quadrant.
void _cos();	// Returns the cosine of a radian angle x.
void _cosh();	// Returns the hyperbolic cosine of x.
void _sin();	// Returns the sin of a radian angle x.
void _sinh();	// Returns the hyperbolic sine of x.
void _tan();	// Returns the tangent of a radian angle x.
void _tanh();	// Returns the hyperbolic tangent of x.

// Exponential, Logarithmic and Power Functions:
void _exp();	// Returns the value of e raised to the xth power.
// The floating point number x is broken up into a mantissa and exponent
// The returned value is the mantissa and the integer pointed to by exponent is the exponent.
// The resultant value is x=mantissa * 1^exponent:
void _frexp();
void _ldexp();	// Returns x multiplied by 2 raised to the power of exponent.
void _log();	// Returns the natual logarithm (base-e logarithm) of x.
void _log10();	// Returns the common logarithm (base-10 logarithm) of x.
// Breaks the floating point number x into integer and fraction components.
// The returned value is the fraction component (part after the decimal), and sets integer to the integer component:
void _modf();
void _pow();	// Returns x raised to the power of y.
void _sqrt();	// Returns the square root of x.

// Other Math Functions:
void _ceil();	// Returns the smallest integer value greater than or equal to x.
void _fabs();	// Returns the absolute value of x (a negative value becomes positive, positibe vlaue is unchanged).
void _floor();	// Returns the largest integer value less than or equal to x.
void _fmod();	// Returns teh remainder of x divided by y.

int main() {
	// Trigonometric Functions:
	_acos();	// Returns the arc cosine of x in radians.
	_asin();	// Returns the arc sine of x in radians.
	_atan();	// Returns the arc tangent of x in radians.
	_atan2();	// Returns the arc tangent in radians of y/x based on the signs of both values to determine the correct quadrant.
	_cos();		// Returns the cosine of a radian angle x.
	_cosh();	// Returns the hyperbolic cosine of x.
	_sin();		// Returns the sin of a radian angle x.
	_sinh();	// Returns the hyperbolic sine of x.
	_tan();		// Returns the tangent of a radian angle x.
	_tanh();	// Returns the hyperbolic tangent of x.

	// Exponential, Logarithmic and Power Functions:
	_exp();		// Returns the value of e raised to the xth power.
	// The floating point number x is broken up into a mantissa and exponent
	// The returned value is the mantissa and the integer pointed to by exponent is the exponent.
	// The resultant value is x=mantissa * 1^exponent:
	_frexp();
	_ldexp();	// Returns x multiplied by 2 raised to the power of exponent.
	_log();		// Returns the natual logarithm (base-e logarithm) of x.
	_log10();	// Returns the common logarithm (base-10 logarithm) of x.
	// Breaks the floating point number x into integer and fraction components.
	// The returned value is the fraction component (part after the decimal), and sets integer to the integer component:
	_modf();
	_pow();		// Returns x raised to the power of y.
	_sqrt();	// Returns the square root of x.

	// Other Math Functions:
	_ceil();	// Returns the smallest integer value greater than or equal to x.
	_fabs();	// Returns the absolute value of x (a negative value becomes positive, positibe vlaue is unchanged).
	_floor();	// Returns the largest integer value less than or equal to x.
	_fmod();	// Returns teh remainder of x divided by y.

	system("pause");
	return(0);
}

void _acos() {
	double param = 60.0;
	printf("The cosine of %lf degrees: %lf.\n", param, (cos(param*PI / 180)));
}

void _asin() {
	double param = 0.5;
	printf("The arc sine of %lf: %lf degrees\n", param, (asin(param)*180.0 / PI));
}

void _atan() {
	double param = 1.0;
	printf("The arc tangent of %lf: %lf degrees\n", param, (atan(param) * 180 / PI));
}

void _atan2() {
	double x, y;
	x = -10.0;
	y = 10.0;
	printf("The arc tangent for (x=%lf, y=%lf): %lf degrees\n", x, y, (atan2(y, x) * 180 / PI));
}

void _cos() {
	double param = 60.0;
	printf("The cosine of %lf degrees: %lf.\n", param, cos(param*PI / 180));
}

void _cosh() {
	double param = log(2.0);
	printf("The hyperbolic cosine of %lf: %lf.\n", param, cosh(param));
}

void _exp() {
	double param = 5.0;
	printf("The exponential value of %lf: %lf.\n", param, exp(5.0));
}

void _sin() {
	double param = 30.0;
	printf("The sine of %lf degrees: %lf.\n", param, sin(param*PI / 180));
}

void _sinh() {
	double param = log(2.0);
	printf("The hyperbolic sine of %lf: %lf.\n", param, sinh(param));
}

void _fabs() {
	printf("The absolute value of 3.1416: %lf\n", fabs(3.1416));
	printf("The absolute value of -10.6 : %lf\n", fabs(-10.6));
}

void _floor() {
	printf("floor of  2.3: %.1lf\n", floor(2.3));
	printf("floor of  3.8: %.1lf\n", floor(3.8));
	printf("floor of -2.3: %.1lf\n", floor(-2.3));
	printf("floor of -3.8: %.1lf\n", floor(-3.8));
}

void _fmod() {
	printf("fmod of  5.3 / 2   : %lf\n", fmod(5.3, 2));
	printf("fmod of 18.5 / 4.2 : %lf\n", fmod(18.5, 4.2));
}

void _frexp() {
	double param = 15.2;
	int n = 0;
	printf("%lf * 2^%d = %f\n", frexp(param, &n), n, param);
}

void _ldexp() {
	double result;
	double param = 0.95;
	int n = 4;
	result = ldexp(param, n);
	printf("%f * 2^%d = %f\n", param, n, result);
}

void _log() {
	double param = 5.5;
	printf("ln(%lf) = %lf\n", param, log(param));
}

void _log10() {
	double param = 1000.0;
	printf("log10(%lf) = %lf\n", param, log10(param));
}

void _modf() {
	double param, fractpart, intpart;
	param = 3.14159265;
	fractpart = modf(param, &intpart);
	printf("%lf = %lf + %lf \n", param, intpart, fractpart);
}

void _pow() {
	printf("7 ^ 3        = %lf\n", pow(7, 3));
	printf("4.73 ^ 12    = %lf\n", pow(4.73, 12));
	printf("32.01 ^ 1.54 = %lf\n", pow(32.01, 1.54));
}

void _sqrt() {
	double param = 1024.0;
	printf("sqrt(%lf) = %lf\n", param, sqrt(param));
}

void _tan() {
	double param = 45.0;
	printf("The tangent of %lf degrees: %lf.\n", param, tan(param*PI / 180));
}

void _tanh() {
	double param = log(2.0);
	printf("The hyperbolic tangent of %lf: %lf.\n", param, tanh(param));
}

void _ceil() {
	printf("ceil of 2.3 : %.1lf\n", ceil(2.3));
	printf("ceil of 3.8 : %.1lf\n", ceil(3.8));
	printf("ceil of -2.3: %.1lf\n", ceil(-2.3));
	printf("ceil of -3.8: %.1lf\n", ceil(-3.8));
}