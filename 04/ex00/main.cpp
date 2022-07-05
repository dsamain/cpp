#include "poly.hpp"

int main() {
	Animal *animal = new Animal;
	Animal *dog = new Dog;
	Animal *cat = new Cat;

	std::cout << "animal type : " << animal->getType() << std::endl;
	std::cout << "dog type : " << dog->getType() << std::endl;
	std::cout << "cat type : " << cat->getType() << std::endl;

	animal->makeSound();
	dog->makeSound();
	cat->makeSound();

	WrongAnimal *wrongAnimal = new WrongAnimal;
	WrongAnimal *wrongCat = new WrongCat;

	wrongAnimal->makeSound();
	wrongCat->makeSound();

	delete animal;
	delete dog;
	delete cat;
	delete wrongAnimal;
	delete wrongCat;


	

}