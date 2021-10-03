/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaadi <isaadi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 18:16:48 by isaadi            #+#    #+#             */
/*   Updated: 2021/10/03 17:32:05 by isaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() {}

Point::~Point() {}

Point::Point(const Point &ref): x(ref.x), y(ref.y), X(ref.X), Y(ref.Y) {}

Point::Point(float x, float y) {
	this->X = Fixed(x);
	this->Y = Fixed(y);
}

int		Point::operator==(const Point &ref) const{
	return this->X == ref.X && this->Y == ref.Y;
}

int		Point::operator!=(const Point &ref) const{
	return this->X != ref.X || this->Y != ref.Y;
}

Fixed	Point::getX() const {return this->X;}
Fixed	Point::getY() const {return this->Y;}

Fixed	&Point::getX() {return this->X;}
Fixed	&Point::getY() {return this->Y;}

void	Point::setX(const Fixed &ref) { this->X = ref; }
void	Point::setY(const Fixed &ref) { this->Y = ref; }

std::ostream &operator<<(std::ostream &ref, Point &ref2) {
	ref << "Point(" << ref2.getX() << ", " << ref2.getY() << ")";
	return ref;
}

Point	&Point::operator=(const Point &ref) {
	this->X = ref.getX();
	this->Y = ref.getY();
	return (*this);
}

bool	Point::isInRectangle(const Point &ref0, const Point &ref1) {
	return (
		this->getX() <= Fixed::max(ref0.getX(), ref1.getX()) &&
		this->getX() >= Fixed::min(ref0.getX(), ref1.getX()) &&
		this->getY() <= Fixed::max(ref0.getY(), ref1.getY()) &&
		this->getY() >= Fixed::min(ref0.getY(), ref1.getY())
	);
}