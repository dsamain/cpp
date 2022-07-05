#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	_hit_points = 100, _energy_points = 50, _attack_damage = 20;
	std::cout << "ScavTrap " << _name << " created\n";
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _name << " destroyed\n";
}  

void ScavTrap::attack(const std::string &target) {
	if (_energy_points > 0) {
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage\n";
		_energy_points--;
	} else
		std::cout << "ScavTrap " << _name << " have no energy to attack\n";
}

void ScavTrap::takeDamage(unsigned int amount) {
	std::cout << "ScavTrap " << _name << " take " << amount << " damage\n";
}

void ScavTrap::beRepaired(unsigned int amount) {
	if (_energy_points > 0) {
		std::cout << "ScavTrap " << _name << " regain " << amount << "hp\n";
		_hit_points++;
		_energy_points--;
	} else
		std::cout << "ScavTrap " << _name << " have no energy to be repaired\n";
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode\n";
}