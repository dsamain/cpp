#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook() : idx(0) {
}

PhoneBook::~PhoneBook() {}

void PhoneBook::add() {
	int val;
	std::cout << "Adding contact:\n"; 
	std::string out[] = {"	First Name: ", "\n	Name: ", "\n	Nickname: ", "\n	Phone: ", "\n	Secret: "};
	std::string info[5];
	for (int i = 0; i < 5; i++) {
		std::cout << out[i];
		std::cin >> info[i];
	}
	contacts[idx].assign(info);
	idx = (idx + 1) % 8;	
}

void PhoneBook::search() {
	std::cout.width(35);
	std::cout << std::endl << "\033[4mPhoneBook\033[0m" << std::endl << std::endl;
	for (int i = 0; i < 8 && contacts[i].is_set(); i++)
		contacts[i].print_base_info(i);
	if (!contacts[0].is_set())
		return ;
	std::cout << std::endl;
	int idx;
	std::cout << "Enter index of contact: ";
	std::cin >> idx;
	if (idx < 0 || idx > 7 || !contacts[idx].is_set()) {
		std::cout << std::endl << "Invalid index" << std::endl;
		search();
		return ;
	}
	std::cout << std::endl << "Contact " << idx << ":" << std::endl;
	contacts[idx].print_info();

}