#pragma once

#include <iostream>
#include <string.h>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public virtual ScavTrap, public virtual FragTrap {
public:
	DiamondTrap(std::string name);
	~DiamondTrap();

	void attack(std::string target);
	void whoAmI();

private:
	std::string _name;
};

  
