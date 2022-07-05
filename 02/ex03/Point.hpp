#pragma once

#include <iostream>
#include <string.h>
#include "Fixed.hpp"

class Point {
public:
	Point();
	Point(float x, float y);
	Point(const Point &);
	virtual ~Point();
	Point &operator=(const Point &);

	//float getX() const ;
	//float getY() const ;
	Fixed getX() const ;
	Fixed getY() const ;
	

private:
	const Fixed _x;
	const Fixed _y;
};

  
