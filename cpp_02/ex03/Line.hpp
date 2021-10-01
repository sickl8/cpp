#ifndef __LINE_HPP__
# define __LINE_HPP__

# include "Point.hpp"

class Line {
	public:
		Line();
		~Line();
		Line(const Line &ref);
		Line(const Point &a, const Point &b);
		Line(const Fixed &m, const Fixed &b);
		Line &operator=(const Line &ref);
		bool operator==(const Line &ref);
		Fixed	Fx(Fixed &ref);
		bool	pointBelongsToLine(Point p);
	private:
		Point	A;
		Point	B;
		Fixed	m;
		Fixed	b;
};

#endif
