#include "Point.hpp"



Fixed area(const Point &a, const Point &b, const Point &c) {
	std:: cout << (a.getX()*(b.getY()-c.getY())) << " + " <<  b.getX()*(c.getY()-a.getY()) << " + " <<  c.getX()*(a.getY()-b.getY()) << " / " << Fixed(2) << std::endl;

	return ((a.getX()*(b.getY()-c.getY())) + b.getX()*(c.getY()-a.getY())+ c.getX()*(a.getY()-b.getY()));// / Fixed(2);
	//return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);


;
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	//std::cout << "A " << area(a, b, c) << std::endl;
	//std::cout << "O " << (area(point, a, b) + area(point, b, c) + area(point, c, a)) << std::endl;
	return ((area(point, b, c) + area(a, point, c) + area(a, b, point)) == area(a,b,c));
}