/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sickl8 <sickl8@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 18:16:48 by isaadi            #+#    #+#             */
/*   Updated: 2021/10/01 10:36:55 by sickl8           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() {}

Point::~Point() {}

Point::Point(const Point &ref): x(ref.x), y(ref.y), X(ref.x), Y(ref.y) {}

Point	&Point::operator=(const Point &ref) {
	this->X = ref.x;
	this->Y = ref.y;
	return (*this);
}

int		Point::operator==(const Point &ref) const{
	return this->X == ref.x && this->Y == ref.y;
}