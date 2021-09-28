/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaadi <isaadi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:28:29 by isaadi            #+#    #+#             */
/*   Updated: 2021/09/28 19:27:04 by isaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <cmath>

#define out std::cout

#define eo2(x) (((x + 127) << 23))

#define EXPONENT (0b11111111 << 23)
#define MANTISSA (~0UL) ^ EXPONENT

float	exponentOftwo(int x) {
	float ret;
	int tmp = eo2(x);
	ret = *(float*)&tmp;
	return ret;
}

int		as_int(float num) {
	int ret;

	ret = *((int*)&num);
	return ret;
}

float	as_float(int num) {
	float ret;

	ret = *((float*)&num);
	return ret;
}

Fixed::~Fixed() {
	#ifndef DEBUG
	out << "Destructor called" << std::endl;
	#endif
}

Fixed &Fixed::operator=(const Fixed &ref) {
	#ifndef DEBUG
	out << "Assignation operator called" << std::endl;
	#endif
	this->val = ref.getRawBits();
	return *this;
}

Fixed::Fixed() {
	out << "Default constructor called" << std::endl;
	this->val = 0;
}

Fixed::Fixed(const int num) {
	int sign = num < 0 ? -1 : 1;
	#ifndef DEBUG
	out << "Int constructor called" << std::endl;
	#endif
	this->val = (num * sign) << this->fbits;
	this->val *= sign;
}

float abso(float f) {
	return f < 0 ? -f : f;
}

Fixed::Fixed(const float num) {
	#ifndef DEBUG
	out << "Float constructor called" << std::endl;
	#endif


	
	int sign = num < 0 ? -1 : 1;
	this->val = ((int)(num * sign)) << this->fbits;
	float decp = ((num * sign) - (int)(num * sign));
	int dec[3];
	float close = decp * (1 << this->fbits);
	dec[0] = close;
	dec[1] = roundf(close);
	int index = abso((((float)(dec[0] & 0b11111111)) / (1 << this->fbits)) - decp) > abso((((float)(dec[1] & 0b11111111)) / (1 << this->fbits)) - decp);
	dec[2] = dec[index];
	// dec[2] = roundf(decp * (1 << this->fbits));
	// if (decp * (1 << this->fbits) && !(dec[2] & 0b11111111))
		// dec[2] = decp * (1 << this->fbits);
	this->val |= (dec[2] & 0b11111111);
	this->val *= sign;
}

Fixed::Fixed(const Fixed &ref) {
		#ifndef DEBUG
	out << "Copy constructor called" << std::endl;
	#endif
	this->val = ref.getRawBits();
}

int		Fixed::getRawBits() const {
	#ifndef DEBUG
	out << "getRawBits member function called" << std::endl;
	#endif
	return this->val;
}

void	Fixed::setRawBits(int const raw) {
	this->val = raw;
}

float Fixed::toFloat() const {
	float	ret = 0;
	int		sign = this->val < 0 ? -1 : 1;
	int		va = this->val / sign;

	ret += (va >> 8);
	ret += (float)(va & 0b11111111) / (1 << 8);
	ret *= sign;
	return (ret);
}

int Fixed::toInt() const {
	int		ret = 0;
	int		sign = this->val < 0 ? -1 : 1;
	int		va = this->val * sign;

	ret += va >> 8;
	ret *= sign;
	return (ret);
}

std::ostream &operator<<(std::ostream &cout, const Fixed &obj) {
	cout << obj.toFloat();
	return (cout);
}