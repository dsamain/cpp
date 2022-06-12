#include "../inc/Contact.hpp"

Contact::Contact() : set(0) {

} 
Contact::~Contact() {} 

bool Contact::is_set() {
	return (set);
}

void Contact::assign(std::string new_info[5]) {
	for (int i = 0; i < 5; i++)
		info[i] = new_info[i];
	set = 1;
}

void Contact::print_base_info(int idx) {
	std::cout.width(10); std::cout << idx;
	for (int i = 0; i < 3; i++) {
		std::cout << '|';
		std::cout.width(10);
		std::cout << info[i].substr(0,10 - (info[i].size() > 10)) + (info[i].size() > 10 ? "." : "");
	}
	std::cout << std::endl;
}

void Contact::print_info() {
	std::string out[] = {"First Name: ", "Name: ", "Nickname: ", "Phone: ", "Secret: "};
	for (int i = 0; i < 5; i++)
		std::cout << "	" << out[i] << info[i] << std::endl;
}