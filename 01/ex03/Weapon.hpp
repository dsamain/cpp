#pragma once

#include <iostream>
#include <string.h>


class Weapon { 
public:
	Weapon();
	Weapon(std::string s);
	~Weapon();

	std::string &getType();
	void setType(std::string s);

private:
	std::string type;

};

  
