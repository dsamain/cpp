#pragma once

#include <iostream>
#include <string.h>
#include "Weapon.hpp"

class HumanB {
public:
	//HumanA();
	HumanB(std::string name);
	HumanB(std::string name, Weapon &weapon);
	~HumanB();

	void setWeapon(Weapon &weapon);
	void print_weapon();
	void attack();

private:
	std::string _name;
	Weapon *_weapon;

};

  
