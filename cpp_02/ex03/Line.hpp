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
		Fixed	Fx(Fixed &ref) const;
		bool	pointBelongsToLine(Point p);
		bool	pointBelongsToSegment(Point p);
		bool	pointBelongsToSegmentStrict(Point p);
		bool	linesIntersect(const Line &ref);
		Point	*lineIntersection(const Line &ref);
	private:
		Point	A;
		Point	B;
		Fixed	m;
		Fixed	b;
};

#endif
