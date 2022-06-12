#include "Zombie.hpp"

Zombie::Zombie(std::string s) {
	name = s;
}

Zombie::~Zombie() {
	std::cout << name << " deleted\n";
}

//Zombie::Zombie(std::string s) {
	////name = s;
//}

void Zombie::annonce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..\n";
}
