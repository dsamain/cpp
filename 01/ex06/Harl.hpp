#pragma once

#include <iostream>
#include <string.h>
#include <random>

class Harl {
public:
	Harl();
	~Harl();
	
	void complain(std::string level);
	void filter(std::string level);

private:
	void debug();
	void info();
	void warning();
	void error();

	void (Harl::*_action[4]) ();

};

  