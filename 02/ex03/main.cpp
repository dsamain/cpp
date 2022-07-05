#include <random>
#include <time.h>
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);
	Fixed area(const Point &a, const Point &b, const Point &c);

int main( void ) {

	//Fixed a(-2), b(-3);
	//std::cout << "a b: " << a << " " << b << std::endl;
	//std::cout << Fixed((float)6) << std::endl;

	//std::cout << (a*b) << std::endl;

	float x, y;
	std::cout << "Enter triangle coord :\n A: ";
	std::cin >> x >> y; 
	Point a(x, y);
	std::cout << "\n B: ";
	std::cin >> x >> y; 
	Point b(x, y);
	std::cout << "\n C: "; 
	std::cin >> x >> y; 
	Point c(x, y);

	//std::cout << "triangle area : " << area(a,b,c) << std::endl;
	while (1) {
		std::cout << "\nEnter point to check coord : ";
		std::cin >> x >> y;
		Point p(x, y);
		std::cout << "\n[" << x << ", " << y << "] is " << (bsp(a,b,c,p) ? "" : "not ") << "inside the triangle\n";
	}

}