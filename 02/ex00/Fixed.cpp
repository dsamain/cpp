#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_val = 0;
	_f_bits = 8;
}

Fixed::Fixed(const Fixed &cpy) : _val(cpy._val), _f_bits(cpy._f_bits) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &cpy) {
	std::cout << "Assignement constructor called" << std::endl;
	_val = cpy.getRawBits();
	_f_bits = 8;
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}  

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return _val;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_val = raw;

}