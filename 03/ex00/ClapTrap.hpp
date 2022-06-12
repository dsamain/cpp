#pragma once

#include <iostream>
#include <string.h>

class ClapTrap {
public:
	ClapTrap(std::string name);
	~ClapTrap();

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

private:
	std::string _name;
	int _hit_points;
	int _energy_points;
	int _attack_damage;
};

  
