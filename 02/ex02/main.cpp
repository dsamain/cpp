#include <iostream>
#include "Fixed.hpp"
#include <random>
#include <time.h>

int main( void ) {
	Fixed a;
	a = Fixed( 1234.4321f );
	Fixed b( 10 );
	Fixed c( 42.42f );
	Fixed d( b );
	b++;
	std::cout << "b: " << b << std::endl;
	b--;
	std::cout << "b: " << b << std::endl;
	++b;
	std::cout << "b: " << b << std::endl;
	--b;
	std::cout << "b: " << b << std::endl;
	std::cout << "b+c: " << b+c << std::endl;
	std::cout << "c-b: " << c-b << std::endl;
	std::cout << "b*c: " << b*c << std::endl;
	std::cout << "b/c: " << b/c << std::endl;

	std::cout << "min(a,b) : " << Fixed::min(a,b) << std::endl;
	std::cout << "max(a,b) : " << Fixed::max((const Fixed)a,(const Fixed)b) << std::endl;

	{
		std::cout << "\nSubject main\n";
			Fixed a;
			Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
			std::cout << a << std::endl;
			std::cout << ++a << std::endl;
			std::cout << a << std::endl;
			std::cout << a++ << std::endl;
			std::cout << a << std::endl;
			std::cout << b << std::endl;
			std::cout << Fixed::max( a, b ) << std::endl;
	}
}