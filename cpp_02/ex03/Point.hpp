/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaadi <isaadi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 21:59:43 by sickl8            #+#    #+#             */
/*   Updated: 2021/10/03 17:30:09 by isaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_HPP__
# define __POINT_HPP__

#include "Fixed.hpp"

class Point {
	public:
		Point();
		~Point();
		Point(const Point &ref);
		Point(float x, float y);
		Point	&operator=(const Point &ref);
		int		operator==(const Point &ref) const;
		int		operator!=(const Point &ref) const;
		Fixed	&getX();
		Fixed	&getY();
		Fixed	getX() const;
		Fixed	getY() const;
		void	setX(const Fixed &ref);
		void	setY(const Fixed &ref);
		bool	isInRectangle(const Point &ref0, const Point &ref1);
	private:
		Fixed const	x;
		Fixed const	y;
		Fixed X, Y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
std::ostream &operator<<(std::ostream &ref, Point &ref2);

#endif
