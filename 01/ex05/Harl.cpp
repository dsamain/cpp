#include "Harl.hpp"

Harl::Harl() {
	//void (Harl::*_action[0]) () = {&Harl::debug};
	_action[0] = &Harl::debug;
	_action[1] = &Harl::info;
	_action[2] = &Harl::warning;
	_action[3] = &Harl::error;
	//std::cout << "test" << std::endl;
	//_action[0] = this->debug;
	//_action[1] = &Harl::info;
	//_action[2] = &Harl::warning;
	//_action[3] = &Harl::error;
}

Harl::~Harl() {
}  

void Harl::complain(std::string level) {
	std::string opt[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++) 
		if (level == opt[i])
			(this->*_action[i])();
}

void Harl::debug() {
	std::cout << "debug" << std::endl;
}

void Harl::info() {
	std::cout << "info" << std::endl;
}

void Harl::warning() {
	std::cout << "warning" << std::endl;
}

void Harl::error() {
	std::cout << "error" << std::endl;
}
