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
}