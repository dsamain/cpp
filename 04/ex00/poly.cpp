#include "poly.hpp"

// Animal
Animal::Animal() : _type("") {std::cout << "Animal default contructor called\n";}

Animal::Animal(std::string type) : _type(type) {std::cout << "Animal type constructor called\n";}

Animal::~Animal() {std::cout << "Animal destructor called\n";}

std::string Animal::getType() {return _type;}

void Animal::makeSound() {std::cout << "...\n";}

// Dog
Dog::Dog() : Animal("Dog") {std::cout << "Dog default constructor called\n";}

Dog::~Dog() {std::cout << "Dog destructor called\n";}

void Dog::makeSound() {std::cout << "OUAF\n";}

// Cat
Cat::Cat() : Animal("Cat") {std::cout << "Cat default constructor called\n";}

Cat::~Cat() {std::cout << "Cat destructor called\n";};

void Cat::makeSound() {std::cout << "miaou\n";}

// WrongAnimal
WrongAnimal::WrongAnimal() : _type("") {std::cout << "WrongAnimal default contructor called\n";}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {std::cout << "WrongAnimal type constructor called\n";}

WrongAnimal::~WrongAnimal() {std::cout << "WrongAnimal destructor called\n";}

std::string WrongAnimal::getType() {return _type;}

void WrongAnimal::makeSound() {std::cout << "\'Wrong Animal sound\'\n";}

// WrongCat
WrongCat::WrongCat() : WrongAnimal("WrongCat") {std::cout << "WrongCat default constructor called\n";}

WrongCat::~WrongCat() {std::cout << "WrongCat destructor called\n";};

void WrongCat::makeSound() {std::cout << "miaou\n";}
