#include <string.h>
#include <iostream>

int main() {
	std::string s = "HI THIS IS BRAIN";
	std::string *ptr_s = &s;
	std::string &ref_s = s;

	std::cout << "s address : " << &s << std::endl;
	std::cout << "ptr_s val : " << ptr_s << std::endl;
	std::cout << "ref_s addres : " << &ref_s << std::endl;
	std::cout << "s : " << s << std::endl;
	std::cout << "*ptr_s : " << *ptr_s << std::endl;
	std::cout << "ref_s : " << ref_s << std::endl;
}