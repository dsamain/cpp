#include "Zombie.hpp"

int main() {
	int n = 10;
	Zombie *horde = zombieHorde(n, "z");

	for (int i = 0; i < n ;i++)
		horde[i].annonce();
	delete[] horde;
}