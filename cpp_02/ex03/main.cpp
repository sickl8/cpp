#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

#define testi(x) a = Fixed(x); std::cout << x << ", " << x << ", " << x << ", " << a << std::endl
#define EXPONENT (0b11111111 << 23)
#define SIGN_BIT (~(1 << 31))
#define MANTISSA (SIGN_BIT ^ EXPONENT)

int main( void ) {
	Point a;
	Point b;

	a = b;
	return 0;
}