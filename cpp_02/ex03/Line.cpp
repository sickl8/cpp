#include "Line.hpp"

Line::Line() {

}

Line::~Line() {

}

Line &Line::operator=(const Line &ref) {
	this->A = ref.A;
	this->B = ref.B;
	this->m = ref.m;
	this->b = ref.b;
	return (*this);
}

Line::Line(const Line &ref) {
	*this = ref;
}

Line::Line(const Point &a, const Point &b) {
	this->A = a;
	this->B = b;
	this->m = (this->A.getY() - this->B.getY()) / (this->A.getX() - this->B.getX());
	if (this->m.isInf()) {
		this->b = this->A.getX();
	} else {
		this->b = this->A.getY() - this->m * this->A.getX();
		// b    =      y         -    m    *       x       ;
	}
}

Line::Line(const Fixed &m, const Fixed &b) {
	this->m = m;
	this->b = b;
}

Fixed	Line::Fx(Fixed &ref) const {
	return (ref * this->m + this->b);
}

bool	Line::pointBelongsToLine(Point p) {
	if (this->m.isInf())
		return (this->b == p.getX());
	else
		return (this->Fx(p.getX()) == p.getY());
}

bool	Line::pointBelongsToSegment(Point p) {
	return (this->pointBelongsToLine(p) && p.isInRectangle(this->A, this->B));
}

bool	Line::pointBelongsToSegmentStrict(Point p) {
	return (this->pointBelongsToSegment(p) && p != this->A && p != this->B);
}

bool	Line::linesIntersect(const Line &ref) {
	return (this->m != ref.m);
}

Point	*Line::lineIntersection(const Line &ref) {
	Point	*ret;
	
	if (!this->linesIntersect(ref)) {
		return NULL;
	}
	ret = new Point;

	if (this->m.isInf()) {
		ret->setX(this->b);
		ret->setY(ref.Fx(ret->getX()));
	}
	else if (ref.m.isInf()) {
		ret->setX(ref.b);
		ret->setY(this->Fx(ret->getX()));
	}
	else {
		ret->setX((ref.b - this->b) / (this->m - ref.m));
		ret->setY(this->Fx(ret->getX()));
	}
	return ret;
}