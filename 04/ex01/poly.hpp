#pragma once

#include <iostream>
#include <string.h>

class Brain {
public:
	Brain();
	virtual ~Brain();

private:
	std::string _ideas[100];
};

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
	Dog(const Dog&);
	virtual ~Dog();

	void makeSound();
	void *getBrainAddr();
private:
	Brain *_brain;
};

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat&);
	virtual ~Cat();

	void makeSound();

private:
	Brain *_brain;
};

  

  
 
