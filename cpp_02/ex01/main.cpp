#include "Fixed.hpp"
#include <iostream>

#define testi(x) a = Fixed(x); std::cout << x << ", " << x << ", " << x << ", " << a << std::endl
#define EXPONENT (0b11111111 << 23)
#define SIGN_BIT (~(1 << 31))
#define MANTISSA (SIGN_BIT ^ EXPONENT)

int main( void ) {
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}