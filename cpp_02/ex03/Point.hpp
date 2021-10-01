/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sickl8 <sickl8@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 21:59:43 by sickl8            #+#    #+#             */
/*   Updated: 2021/10/01 10:36:51 by sickl8           ###   ########.fr       */
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
		Point	&operator=(const Point &ref);
		int		operator==(const Point &ref) const;
	private:
		Fixed const	x;
		Fixed const	y;
		Fixed X, Y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif