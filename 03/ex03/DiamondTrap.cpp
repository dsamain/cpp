#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name), _name(name) {
	//_name = ClapTrap::_name + "_clap_name";
	ClapTrap::_name = _name + "_clap_name";
	_hit_points = FragTrap::_hit_points;
	_energy_points = ScavTrap::_energy_points; 
	_attack_damage = FragTrap::_attack_damage;
	this->_name = name;
	std::cout << "DiamondTrap " << _name << " created\n";
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << _name << " destroyed\n";
}  

void DiamondTrap::attack(std::string target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name : " << _name << ", parent name : " << ClapTrap::_name << std::endl;
}