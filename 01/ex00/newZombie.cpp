#include "Zombie.hpp"

Zombie *newZombie(std::string name) {
	Zombie *out = new Zombie(name);	
	//Zombie *out = new Zombie;	

	return out;
}
