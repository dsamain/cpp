#include <random>
#include <time.h>
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);
	Fixed area(const Point &a, const Point &b, const Point &c);

int main( void ) {
	float x, y;
	std::cout << "Enter triangle coord :\n A: ";
	std::cin >> x >> y; 
	Point a(x, y);
	std::cout << "a.getX(): " << a.getX() << std::endl;
	std::cout << "x y : " << a.getX() << " " << a.getY() << std::endl;
	std::cout << " B: ";
	std::cin >> x >> y; 
	Point b(x, y);
	std::cout << "b : " << b.getX() << " " << b.getY() << std::endl;
	std::cout << " C: ";
	std::cin >> x >> y; 
	Point c(x, y);

	std::cout << "triangle area : " << area(a,b,c) << std::endl;
	return 0;
	while (1) {
		std::cout << "Enter point to check coord :\n";
		std::cin >> x >> y;
		Point p(x, y);
		std::cout << " Point " << x << " " << y << " is " << (bsp(a,b,c,p) ? "" : "not") << " inside the triangle" << std::endl;
	}

}