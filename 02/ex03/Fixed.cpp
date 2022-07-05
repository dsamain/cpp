#include "Fixed.hpp"

Fixed::Fixed() {
	_val = 0;
	_f_bits = 8;
}

Fixed::Fixed(const int x) : _f_bits(8), _val(x << _f_bits) {}

Fixed::Fixed(const float x) : _f_bits(8), _val(x * (1 << _f_bits)) {}

Fixed::Fixed(const Fixed &cpy) {*this = cpy;}

Fixed &Fixed::operator=(const Fixed &cpy) {
	_val = cpy.getRawBits();
	_f_bits = 8;
	return (*this);
}

bool Fixed::operator<(const Fixed& op) {
	return (this->_val < op._val);
}

bool Fixed::operator>(const Fixed& op) {
	return (this->_val > op._val);
}

bool Fixed::operator<=(const Fixed& op){
	return (this->_val <= op._val);
}

bool Fixed::operator>=(const Fixed& op) {
	return (this->_val >= op._val);
}

bool Fixed::operator==(const Fixed& op) {
	return (this->_val == op._val);
}

bool Fixed::operator!=(const Fixed& op) {
	return (this->_val != op._val);
}

Fixed Fixed::operator+(const Fixed& op) const {
	Fixed ret;
	ret.setRawBits(getRawBits() + op.getRawBits());
	return ret;
}

Fixed Fixed::operator-(const Fixed& op) const {
	Fixed ret;
	ret.setRawBits(getRawBits() - op.getRawBits());
	return ret;
}

Fixed Fixed::operator*(const Fixed& op) const {
	Fixed out(((float)this->toFloat() * (float)op.toFloat()));
	return out;
}

Fixed Fixed::operator/(const Fixed& op) const {
	Fixed out((float)this->toFloat() / (float)op.toFloat());
	return out;
}

Fixed &Fixed::operator++() {
	_val += (1 << _f_bits);
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed ret(*this);
	++(*this);
	return ret;
}

Fixed &Fixed::operator--() {
	_val -= (1 << _f_bits);
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed ret(*this);
	--(*this);
	return ret;
}

Fixed::~Fixed() {}  

std::ostream &operator<<(std::ostream &out, const Fixed& op) {
	out << op.toFloat();
	return out;
}


int Fixed::getRawBits() const {
	return _val;
}

void Fixed::setRawBits(int const raw) {
	_val = raw;
}

float Fixed::toFloat() const {
	return ((float)_val / (float)(1 << _f_bits));
} 

int Fixed::toInt() const {
	return _val / (1 << _f_bits);
}
