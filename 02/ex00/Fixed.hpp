#pragma once

#include <iostream>
#include <string.h>

class Fixed {
public:
	Fixed();
	Fixed(const Fixed&);
	~Fixed();
	Fixed &operator=(const Fixed& op);

	int getRawBits() const;
	void setRawBits(int const raw);

private:
	int _val;
	static const int _f_bits;
};

  
