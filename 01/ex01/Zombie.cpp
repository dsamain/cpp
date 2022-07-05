#include "Zombie.hpp"

Zombie::Zombie() {
	name = "test";
};

Zombie::Zombie(std::string s) {
	name = s;
}

Zombie::~Zombie() {
	std::cout << name << " deleted\n";
}

void Zombie::set_name(std::string s) {
	name = s;
}

void Zombie::annonce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..\n";
}
