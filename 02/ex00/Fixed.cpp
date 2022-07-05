#include "Fixed.hpp"

const int Fixed::_f_bits = 8;

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_val = 0;
}

Fixed::Fixed(const Fixed &cpy) {
	std::cout << "Copy constructor called" << std::endl;
	_val = cpy.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &cpy) {
	std::cout << "Copy assignement operator called" << std::endl;
	_val = cpy.getRawBits();
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