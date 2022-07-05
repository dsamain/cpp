#pragma once

#include <iostream>
#include <string.h>
#include <math.h>

class Fixed {
public:
	Fixed();
	Fixed(const int x);
	Fixed(const float x);
	Fixed(const float x, bool f);
	Fixed(const Fixed& x);
	~Fixed();
	Fixed &operator=(const Fixed& op);
	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat() const;
	int toInt() const;
	
private:
	const static int _f_bits;
	int _val;
};

std::ostream &operator<<(std::ostream &out, const Fixed& op);
  
