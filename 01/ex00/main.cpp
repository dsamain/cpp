#include "Zombie.hpp"

int main() {
	Zombie *z_heap = newZombie("z_heap");
	z_heap->annonce();
	delete z_heap;
	Zombie z_stack("z_stack");
	z_stack.annonce();
	randomChump("rand");
}