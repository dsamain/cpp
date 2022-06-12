#include "poly.hpp"

// Brain
Brain::Brain() {}

Brain::~Brain() {}

// Animal
Animal::Animal() : _type("") {std::cout << "Animal default contructor called\n";}

Animal::Animal(std::string type) : _type(type) {std::cout << "Animal type constructor called\n";}

Animal::~Animal() {std::cout << "Animal destructor called\n";}

std::string Animal::getType() {return _type;}

void Animal::makeSound() {std::cout << "...\n";}

// Dog
Dog::Dog() : Animal("Dog") {
	_brain = new Brain;
	std::cout << "Dog default constructor called\n";
}

Dog::~Dog() {
	delete _brain;
	std::cout << "Dog destructor called\n";
}

Dog::Dog(const Dog &cpy) {
	_brain = new Brain(*cpy._brain);
	_type = cpy._type;
	std::cout << "Dog copy constructor called\n";
}

void Dog::makeSound() {std::cout << "OUAF\n";}

void *Dog::getBrainAddr() {
	return &_brain;
}

// Cat
Cat::Cat() : Animal("Cat") {
	_brain = new Brain;
	_type = cpy._type;
	std::cout << "Cat default constructor called\n";
}

Cat::~Cat() {
	delete _brain;
	std::cout << "Cat destructor called\n";
}

Cat::Cat(const Cat &cpy) {
	_brain = new Brain(*cpy._brain);
	std::cout << "Cat copy constructor called\n";
}

void Cat::makeSound() {std::cout << "miaou\n";}