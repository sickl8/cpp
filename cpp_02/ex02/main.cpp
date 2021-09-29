#include "Fixed.hpp"
#include <iostream>

#define testi(x) a = Fixed(x); std::cout << x << ", " << x << ", " << x << ", " << a << std::endl
#define EXPONENT (0b11111111 << 23)
#define SIGN_BIT (~(1 << 31))
#define MANTISSA (SIGN_BIT ^ EXPONENT)

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}