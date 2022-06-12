#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_hit_points = 100, _energy_points = 100, _attack_damage = 30;
	std::cout << "FragTrap " << _name << " created\n";
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " destroyed\n";
}  

void FragTrap::attack(const std::string &target) {
	if (_energy_points > 0) {
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage\n";
		_energy_points--;
	} else
		std::cout << "FragTrap " << _name << "have no energy to attack\n";
}

void FragTrap::takeDamage(unsigned int amount) {
	std::cout << "FragTrap " << _name << " take " << amount << " damage\n";
}

void FragTrap::beRepaired(unsigned int amount) {
	if (_energy_points > 0) {
		std::cout << "FragTrap " << _name << " regain " << amount << "hp\n";
		_hit_points++;
		_energy_points--;
	} else
		std::cout << "FragTrap " << _name << "have no energy to be repaired\n";
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << _name << " ask for a high five\n";
}