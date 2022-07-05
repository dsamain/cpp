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

	bool operator<(const Fixed& op) const;
	bool operator>(const Fixed& op) const;
	bool operator<=(const Fixed& op) const;
	bool operator>=(const Fixed& op) const;
	bool operator==(const Fixed& op) const;
	bool operator!=(const Fixed& op) const;

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

	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);

private:
	int	_f_bits;
	int _val;
};

std::ostream &operator<<(std::ostream &out, const Fixed& op);
  
