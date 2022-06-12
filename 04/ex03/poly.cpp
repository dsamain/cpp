#include "poly.hpp"

// AMateria
AMateria::AMateria(std::string const &type) : _type(type) {
	std::cout << "AMateria constructor called\n";
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called\n";
}  

std::string const &AMateria::getType() const {return _type;}

void AMateria::use(ICharacter &target) {}

// Ice
Ice::Ice() : AMateria("ice") {
	std::cout << "Ice constructor called\n";
}

Ice::~Ice() {
	std::cout << "Ice destructor called\n";
}

AMateria *Ice::clone() const {
	Ice *out = new Ice;
	std::cout << "Ice cloned\n";
	return out;
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}

// Cure
Cure::Cure() : AMateria("cure") {
	std::cout << "Cure constructor called\n";
}

Cure::~Cure() {
	std::cout << "Cure destructor called\n";
}

AMateria *Cure::clone() const {
	Cure *out = new Cure;
	std::cout << "Cure cloned\n";
	return out;
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << " wounds *\n";
}

// Character
Character::Character(std::string const &name) : _name(name), _idx(0) {
	std::cout << "Character constructor called\n";
}

Character::Character(Character const &cpy) : _idx(cpy._idx), _name(cpy._name) {

	for (int i = 0; i < cpy._idx; i++)
		_inv[i] = cpy._inv[i]->clone();
	std::cout << "Character copy constructor called\n";
}

Character::~Character() {
	for (int i = 0; i < _idx; i++)
		delete _inv[i];
	std::cout << "Character destructor called\n";
}

Character &Character::operator=(Character const &cpy) {
	this->_name = cpy._name;
	for (int i = 0; i < this->_idx; i++)
		delete this->_inv[i];
	for (int i = 0; i < cpy._idx; i++)
		this->_inv[i] = cpy._inv[i];
	this->_idx = cpy._idx;
	std::cout << "Character assignement constructor called\n";
	return *this;

}

std::string const &Character::getName() const {
	return (_name);
}

void Character::equip(AMateria* m) {
	if (!m)
		std::cout << "No materia provided\n";
	else if (_idx >= 4)
		std::cout << "Inventory is full\n";
	else
		_inv[_idx++] = m;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= _idx)
		std::cout << "No materia to unequip at index " << idx << std::endl;
	else {
		//delete _inv[idx];
		for (int i = idx; i < _idx; i++)
			_inv[i] = _inv[i + 1];
		_idx--;
		std::cout << "Materia at slot " << idx << " deleted\n";
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= _idx)
		std::cout << "No materia to use at index " << idx << std::endl;
	else {
		_inv[idx]->use(target);
	}
}

AMateria *Character::getMateria(int idx) {
	if (idx < 0 || idx >= _idx) {
		std::cout << "No materia to get at idx " << idx << std::endl;
		return NULL;
	}
	return _inv[idx];
}

MateriaSource::MateriaSource() : _idx(0) {}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < _idx; i++)
		delete _inv[i];
}

void MateriaSource::learnMateria(AMateria *m) {
	if (_idx >= 4)
		std::cout << "Source is full\n";
	else
		_inv[_idx++] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < _idx; i++) {
		if (_inv[i]->getType() == type) {
			return _inv[i]->clone();
		}
	}
	return NULL;
}














