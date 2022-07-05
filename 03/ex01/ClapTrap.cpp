#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name) {
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
	std::cout << "ClapTrap " << _name << " created\n";
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " destroyed\n";
} 

void ClapTrap::attack(const std::string &target) {
	if (_energy_points > 0) {
		std::cout << "Claptrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage\n";
		_energy_points--;
	} else
		std::cout << "Claptrap " << _name << "have no energy to attack\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "Claptrap " << _name << " take " << amount << " damage\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_energy_points > 0) {
		std::cout << "Claptrap " << _name << " regain " << amount << "hp\n";
		_hit_points++;
		_energy_points--;
	} else
		std::cout << "Claptrap " << _name << "have no energy to be repaired\n";
}