#include "Harl.hpp"


int main() {
	//int (*fp[])() = {func};
	//fp[0]();
	Harl harl;
	while (!std::cin.eof()) {
		std::string s;
		std::cin >> s;
		harl.complain(s);
	}
}