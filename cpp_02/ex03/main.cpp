#include "Fixed.hpp"
#include "Point.hpp"
#include "Line.hpp"
#include <iostream>

#define testi(x) a = Fixed(x); std::cout << x << ", " << x << ", " << x << ", " << a << std::endl
#define EXPONENT (0b11111111 << 23)
#define SIGN_BIT (~(1 << 31))
#define MANTISSA (SIGN_BIT ^ EXPONENT)

int main( void ) {
	Point a = Point(0, 5);
	Point b = Point(5, 7);
	Point c = Point(5, 3);
	Point p = Point(2.5, 4);

	std::cout << p << std::endl;
	std::cout << bsp(a, b, c, p) << std::endl;
	return 0;
}