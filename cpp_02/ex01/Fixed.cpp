/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaadi <isaadi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:28:29 by isaadi            #+#    #+#             */
/*   Updated: 2021/09/27 19:38:25 by isaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <cmath>

#define out std::cout

#define eo2(x) (((x + 127) << 23))

float	exponentOftwo(int x) {
	float ret;
	int tmp = eo2(x);
	ret = *(float*)&tmp;
	return ret;
}

Fixed::~Fixed() {
	out << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &ref) {
	out << "Assignation operator called" << std::endl;
	this->val = ref.getRawBits();
	return *this;
}

Fixed::Fixed() {
	out << "Default constructor called" << std::endl;
	this->val = 0;
}

Fixed::Fixed(const int num) {
	int sign = num < 0 ? -1 : 1;
	out << "Int constructor called" << std::endl;
	this->val = (num * sign) << this->fbits;
	this->val *= sign;
}

Fixed::Fixed(const float num) {
	out << "Float constructor called" << std::endl;
	int sign = num < 0 ? -1 : 1;
	this->val = ((int)(num * sign)) << this->fbits;
	int dec = (int)(((((num * sign) - (float)(int)(num * sign)) / exponentOftwo(-7))));
	out << dec << std::endl;
	out << ((float)dec * exponentOftwo(-7)) << std::endl;
	// #include <bitset>
	// char a = -58;
	// std::bitset<8> x(a);
	// std::cout << x << '\n';
	this->val *= sign;
}

Fixed::Fixed(const Fixed &ref) {
	out << "Copy constructor called" << std::endl;
	this->val = ref.getRawBits();
}

int		Fixed::getRawBits() const {
	out << "getRawBits member function called" << std::endl;
	return this->val;
}

void	Fixed::setRawBits(int const raw) {
	this->val = raw;
}

float Fixed::toFloat() const {
	float	ret = 0;
	int		sign = this->val < 0 ? -1 : 1;
	int		va = this->val * sign;

	ret += va >> 8;
	ret += (float)(va & (0b11111111)) * 1e-8;
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