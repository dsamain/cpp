#include "HumanB.hpp"

//HumanA::HumanA() {
	//_name = "name";
	//_weapon = Weapon("weapon");
//}

HumanB::HumanB(std::string name) : _name(name) {
}

HumanB::HumanB(std::string name, Weapon &weapon) {
	_name = name;
	_weapon = &weapon;
}

HumanB::~HumanB() {
}  

void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}

void HumanB::print_weapon() {
	std::cout << _weapon->getType();
}

void HumanB::attack() {
	std::cout << _name << " attacks with their ";
	print_weapon();
	std::cout << std::endl;
}

