#include "ClapTrap.hpp"

int main() {
	ClapTrap clapTrap("Bob");
	for (int i = 0; i < 10; i++) {
		(rand() % 2 ? clapTrap.attack("Roger") : clapTrap.beRepaired(3));
	}
	clapTrap.attack("Roger");
	clapTrap.beRepaired(3);
}