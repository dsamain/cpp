#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(float x, float y) : _x(x), _y(y) {}

Point::Point(const Point &cpy) : _x(cpy._x), _y(cpy._y) {}

Point::~Point() {
}  

Point &Point::operator=(const Point &cpy) {
	(Point)cpy; 
	return *this;
}

//float Point::getX() const {return _x.toFloat();}
//float Point::getY() const {return _y.toFloat();}
Fixed Point::getX() const {return _x;}
Fixed Point::getY() const {return _y;}

