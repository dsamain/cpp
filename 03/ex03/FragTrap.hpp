#pragma once

#include <iostream>
#include <string.h>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
	FragTrap(std::string name);
	~FragTrap();

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void highFivesGuys();

private:

};

  
