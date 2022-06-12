#pragma once

#include <iostream>
#include <string.h>
#include "Weapon.hpp"

class HumanA {
public:
	//HumanA();
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void print_weapon();
	void attack();

private:
	std::string _name;
	Weapon &_weapon;

};

  
