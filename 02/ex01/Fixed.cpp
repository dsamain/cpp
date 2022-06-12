#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_val = 0;
	_f_bits = 8;
}

Fixed::Fixed(const int x) {
	std::cout << "Int constructor called" << std::endl;
	_val = x << 8;
	_f_bits = 8;
}


Fixed::Fixed(const float x) {
	std::cout << "Float constructor called" << std::endl;
	_f_bits = 8;
	unsigned int t;
	memcpy(&t, &x, 4);
	//if ((t >> 31) & 1) t ^= (1 >> 31);
	int exp=0, mantis=((t<<1) != 0);
	for (int i = 7; i >= 0; i--)
		exp = (exp << 1) | ((t >> (23 + i)) & 1);
	exp -= 127;
	for (int i = 22; i >= 0; i--)
		mantis = (mantis << 1) | ((t >> i) & 1);
	_val = (exp <= 15 ? mantis >> (15-exp) : mantis << (exp-15)) | (((t >> 31) & 1) << 31);
}

Fixed::Fixed(const Fixed &cpy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed &Fixed::operator=(const Fixed &cpy) {
	std::cout << "Assignement constructor called" << std::endl;
	_val = cpy.getRawBits();
	_f_bits = 8;
	return (*this);
}

Fixed::~Fixed() {
}  

std::ostream &operator<<(std::ostream &out, const Fixed& op) {
	std::cout << op.toFloat();
	return out;
}


int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return _val;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_val = raw;
}

float Fixed::toFloat() const {
	return (float)_val / (1 << _f_bits);
} 

int Fixed::toInt() const {
	return _val / (1 << _f_bits);
}