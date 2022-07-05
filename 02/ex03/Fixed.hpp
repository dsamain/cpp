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

	bool operator<(const Fixed& op);
	bool operator>(const Fixed& op);
	bool operator<=(const Fixed& op);
	bool operator>=(const Fixed& op);
	bool operator==(const Fixed& op);
	bool operator!=(const Fixed& op);

	Fixed operator+(const Fixed &op) const;
	Fixed operator-(const Fixed &op) const;
	Fixed operator*(const Fixed &op) const;
	Fixed operator/(const Fixed &op) const;

	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);

	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat() const;
	int toInt() const;

private:
	int	_f_bits;
	int _val;
};

std::ostream &operator<<(std::ostream &out, const Fixed& op);
  
