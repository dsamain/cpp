#include "FragTrap.hpp"

int main() {
	FragTrap scavTrap("Bob");
	for (int i = 0; i < 10; i++) {
		(rand() % 2 ? scavTrap.attack("Roger") : scavTrap.beRepaired(3));
	}
	scavTrap.highFivesGuys();
}