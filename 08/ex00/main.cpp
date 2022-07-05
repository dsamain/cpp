#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main() {
	int x;

	std::string s = "abcdef";
	x = 'a';
	std::cout << (char)x << " is" << (easyfind(s, x) ? "" : " not") << " in the container" << std::endl;
	x = 'z';
	std::cout << (char)x << " is" << (easyfind(s, x) ? "" : " not") << " in the container" << std::endl;

	std::vector<int> v(10);
	for (int i = 0; i < 10; i++) v[i] = i;

	while (1) {
		std::cout << "number to find : ";
		std::cin >> x;
		std::cout << x << " is" << (easyfind(v, x) ? "" : " not") << " in the container" << std::endl;
	}
}