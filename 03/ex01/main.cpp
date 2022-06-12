#include "ScavTrap.hpp"

int main() {
	ScavTrap scavTrap("Bob");
	for (int i = 0; i < 10; i++) {
		(rand() % 2 ? scavTrap.attack("Roger") : scavTrap.beRepaired(3));
	}
	scavTrap.guardGate();
}