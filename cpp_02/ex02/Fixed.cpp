/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaadi <isaadi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:28:29 by isaadi            #+#    #+#             */
/*   Updated: 2021/09/28 19:28:36 by isaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <cmath>

#define out std::cout

#define SIGN(x) (x & (1 << 31))
#define INTEGER(x) ((x ^ (SIGN(x) | 0b11111111)) >> 8)
#define DECIMAL(x) (x & 0b11111111)

#define eo2(x) (((x + 127) << 23))

#define EXPONENT (0b11111111 << 23)
#define MANTISSA (~0UL) ^ EXPONENT

float exponentOftwo(int x)
{
	float ret;
	int tmp = eo2(x);
	ret = *(float *)&tmp;
	return ret;
}

int as_int(float num)
{
	int ret;

	ret = *((int *)&num);
	return ret;
}

float as_float(int num)
{
	float ret;

	ret = *((float *)&num);
	return ret;
}

Fixed::~Fixed()
{
#ifndef DEBUG
	out << "Destructor called" << std::endl;
#endif
}

Fixed &Fixed::operator=(const Fixed &ref)
{
#ifndef DEBUG
	out << "Assignation operator called" << std::endl;
#endif
	this->val = ref.val;
	return *this;
}

Fixed::Fixed()
{
#ifndef DEBUG
	out << "Default constructor called" << std::endl;
#endif
	this->val = 0;
}

Fixed::Fixed(const int num)
{
	int sign = num < 0 ? -1 : 1;
#ifndef DEBUG
	out << "Int constructor called" << std::endl;
#endif
	this->val = (num * sign) << this->fbits;
	this->val *= sign;
}

float abso(float f)
{
	return f < 0 ? -f : f;
}

Fixed::Fixed(const float num)
{
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
	this->val |= (dec[2] & 0b11111111);
	this->val *= sign;
}

Fixed::Fixed(const Fixed &ref)
{
#ifndef DEBUG
	out << "Copy constructor called" << std::endl;
#endif
	*this = ref;
}

int Fixed::getRawBits() const
{
#ifndef DEBUG
	out << "getRawBits member function called" << std::endl;
#endif
	return this->val;
}

void Fixed::setRawBits(int const raw)
{
	this->val = raw;
}

float Fixed::toFloat() const
{
	float ret = 0;
	int sign = this->val < 0 ? -1 : 1;
	int va = this->val / sign;

	ret += (va >> 8);
	ret += (float)(va & 0b11111111) / (1 << 8);
	ret *= sign;
	return (ret);
}

int Fixed::toInt() const
{
	int ret = 0;
	int sign = this->val < 0 ? -1 : 1;
	int va = this->val * sign;

	ret += va >> 8;
	ret *= sign;
	return (ret);
}

std::ostream &operator<<(std::ostream &cout, const Fixed &obj)
{
	cout << obj.toFloat();
	return (cout);
}

int Fixed::operator>(const Fixed &ref)
{
	return this->val > ref.val;
}

int Fixed::operator<(const Fixed &ref)
{
	return this->val < ref.val;
}

int Fixed::operator<=(const Fixed &ref)
{
	return this->val <= ref.val;
}

int Fixed::operator>=(const Fixed &ref)
{
	return this->val >= ref.val;
}

int Fixed::operator==(const Fixed &ref)
{
	return this->val == ref.val;
}

int Fixed::operator!=(const Fixed &ref)
{
	return this->val != ref.val;
}

Fixed &Fixed::operator+(const Fixed &ref)
{
	this->val += ref.val;
	return *this;
}

Fixed &Fixed::operator-(const Fixed &ref)
{
	this->val -= ref.val;
	return *this;
}

Fixed &Fixed::operator*(const Fixed &ref)
{
	this->val = ((long)this->val * (long)ref.val) >> 8;
	return *this;
}

Fixed &Fixed::operator/(const Fixed &ref)
{
	this->val = (((long)this->val) << 8) / ref.val;
	return *this;
}

Fixed &Fixed::operator++()
{
	this->val += 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed ret;

	ret = *this;
	this->val += 1;
	return ret;
}

Fixed &Fixed::operator--()
{
	this->val -= 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed ret;

	ret = *this;
	this->val -= 1;
	return ret;
}

Fixed &Fixed::min(Fixed &ref0, Fixed &ref1)
{
	return ref0 < ref1 ? ref0 : ref1;
}

const Fixed &Fixed::min(const Fixed &ref0, const Fixed &ref1)
{
	Fixed a, b;
	a = ref0;
	b = ref1;
	return a < b ? ref0 : ref1;
}

Fixed &Fixed::max(Fixed &ref0, Fixed &ref1)
{
	return ref0 > ref1 ? ref0 : ref1;
}

const Fixed &Fixed::max(const Fixed &ref0, const Fixed &ref1)
{
	Fixed a, b;
	a = ref0;
	b = ref1;
	return a > b ? ref0 : ref1;
}
