#include "poly.hpp"

#define N 2

int main() {

	Animal *tab[N];

	for (int i = 0; i < N; i++)
		i % 2 ? tab[i] = new Dog : tab[i] = new Cat;

	// dogs and cats are casted has Animal but their destructor should still be called to delete _brain
	for (int i = 0; i < N; i++)
		delete tab[i];

	Dog a;
	Dog b(a);

	// the constructor copy don't copy the value of _brain (which is a pointer) but alloc a new Brain with the same ideas
	std::cout << "a _brain address : " << a.getBrainAddr() << std::endl;
	std::cout << "b _brain address : " << b.getBrainAddr() << std::endl;

	//uncomment line below will create an error cause Animal is an abstract class ->
	//Animal animal;

	//while (1);
}