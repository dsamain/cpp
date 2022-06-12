#include "HumanA.hpp"

//HumanA::HumanA() {
	//_name = "name";
	//_weapon = Weapon("weapon");
//}

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), _name(name) {
}

HumanA::~HumanA() {
}  

void HumanA::print_weapon() {
	std::cout << _weapon.getType();
}

void HumanA::attack() {
	std::cout << _name << " attacks with their ";
	print_weapon();
	std::cout << std::endl;
}

