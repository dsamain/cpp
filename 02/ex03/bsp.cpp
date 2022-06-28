#include "Point.hpp"



Fixed area(const Point &a, const Point &b, const Point &c) {
	Fixed ret = ((a.getX()*(b.getY()-c.getY()))
				+ b.getX()*(c.getY()-a.getY())
				+ c.getX()*(a.getY()-b.getY())) / Fixed(2);

	return (ret < Fixed(0) ? ret * -1 : ret);
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	return ((area(point, b, c) + area(a, point, c) + area(a, b, point)) == area(a,b,c));
}