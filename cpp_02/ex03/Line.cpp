#include "Line.hpp"

Line::Line() {}

Line::~Line() {}

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
}

Line::Line(const Fixed &m, const Fixed &b) {

}

Fixed	Line::Fx(Fixed &ref) {
	return (ref * this->m + this->b);
}



// bool	Line::pointBelongsToLine(Point p) {
// 	return (Fx());
// }
