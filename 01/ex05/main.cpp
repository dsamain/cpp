#include "Harl.hpp"


int main() {
	Harl harl;
	while (!std::cin.eof()) {
		std::string s;
		std::cin >> s;
		harl.complain(s);
	}

}