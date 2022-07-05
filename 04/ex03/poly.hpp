#pragma once

#include <iostream>
#include <string.h>

class ICharacter;

class AMateria {
public:
	AMateria(std::string const & type);
	virtual ~AMateria();
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter &target);
protected:
	std::string _type;
};

class Ice : public AMateria {
public:
	Ice();
	virtual ~Ice();

	AMateria *clone() const;
	void use(ICharacter &target);

private:

};

class Cure : public AMateria {
public:
	Cure();
	virtual ~Cure();

	AMateria *clone() const;
	void use(ICharacter &target);

private:

};

// ICharacter
class ICharacter {
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
	virtual AMateria *getMateria(int idx) = 0;
protected:

}; 

class Character : public ICharacter {
public:
	Character(std::string const &name);
	Character &operator=(const Character &);
	Character(Character const &);
	virtual ~Character();


	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	AMateria *getMateria(int idx);

protected:
	std::string _name;
	AMateria *_inv[4];
	int _idx;

};

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource {
public:
	MateriaSource();
	virtual ~MateriaSource();

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
private:
	int _idx;
	AMateria *_inv[4];
};

  
