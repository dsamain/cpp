#include "Weapon.hpp"

Weapon::Weapon() : _type("hand") {

}

Weapon::Weapon(std::string s) {
	_type = s;
}

Weapon::~Weapon() {
}

std::string &Weapon::getType() {
	return (_type);
}

void Weapon::setType(std::string s) {
	_type = s;
}
