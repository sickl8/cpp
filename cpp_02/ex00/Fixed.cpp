/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaadi <isaadi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:28:29 by isaadi            #+#    #+#             */
/*   Updated: 2021/09/25 19:21:28 by isaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#define out std::cout

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