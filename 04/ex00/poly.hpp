#pragma once

#include <iostream>
#include <string.h>

class Animal {
public:
	Animal();
	Animal(std::string type);
	virtual ~Animal();

	std::string getType();
	virtual void makeSound();

protected:
	std::string _type;
};

class Dog : public Animal {
public:
	Dog();
	virtual ~Dog();

	void makeSound();
private:
};

class Cat : public Animal {
public:
	Cat();
	virtual ~Cat();

	void makeSound();

private:

};

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	virtual ~WrongAnimal();

	std::string getType();
	void makeSound();

protected:
	std::string _type;
};

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	virtual ~WrongCat();

	void makeSound();

private:

};


  
 
