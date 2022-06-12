#include "../inc/PhoneBook.hpp"
#include "../inc/Contact.hpp"

int main() {
	PhoneBook rep;
	std::string cmd;
	while (!std::cin.eof()) {
		std::cin >> cmd;
		if (cmd == "ADD") rep.add();
		else if (cmd == "SEARCH") rep.search();
		else if (cmd == "EXIT") return (0);
		else std::cout << "	Invalid command" << std::endl;
	}
}