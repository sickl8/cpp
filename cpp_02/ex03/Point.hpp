#ifndef __POINT_HPP__
# define __POINT_HPP__

class Point {
	public:
		Point();
		~Point();
		Point(const Point &ref);
		Point operator=(const Point &ref);
};

#endif
