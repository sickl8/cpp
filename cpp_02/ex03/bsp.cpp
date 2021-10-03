/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaadi <isaadi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 21:59:50 by sickl8            #+#    #+#             */
/*   Updated: 2021/10/03 21:04:08 by isaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Line.hpp"
#include "Fixed.hpp"

#include <stdio.h>

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	Point	*inter[] = {(Point*)NULL, (Point*)NULL, (Point*)NULL};
	Point	points[] = {a, b, c, point};

	for (int i = 0; i < 3; i++) {
		inter[i] = Line(points[i], points[(i + 1) % 3]).lineIntersection(Line(points[(i + 2) % 3], point));
	}
	bool	inside = true;
	for (int i = 0; i < 3; i++) {
		bool one, two;
		one = inter[i] != NULL && Line(points[i], points[(i + 1) % 3]).pointBelongsToSegment(inter[i][0]);
		std::cout << "Line( " << points[i] << ", " << points[(i + 1) % 3] << ").pointBelongsToSegment(" << inter[i][0] << ") = \t\t" << (one ? "true" : "false") << '\n';
		two = !Line(points[i], points[(i + 1) % 3]).pointBelongsToSegment(point);
		std::cout << "!Line( " << points[i] << ", " << points[(i + 1) % 3] << ").pointBelongsToSegment(" << points[3] << ") = \t\t" << (two ? "true" : "false") << '\n';
		inside &= (
					inter[i] != NULL &&
					one &&
					two);
		delete inter[i];
	}
	return (inside);
}