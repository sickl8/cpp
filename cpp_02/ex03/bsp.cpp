/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sickl8 <sickl8@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 21:59:50 by sickl8            #+#    #+#             */
/*   Updated: 2021/10/01 10:42:04 by sickl8           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

typedef struct	s_line {
	Point	a, b;
}				Line;

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	if (point == a || point == b || point == c) {
		return false;
	}
	Line A = {.a = a, .b = b}, B = {.a = b, .b = c}, C = {.a = c, .b = a};
	
}