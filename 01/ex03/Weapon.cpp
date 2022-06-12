#include "Weapon.hpp"

Weapon::Weapon() : type("sword") {

}

Weapon::Weapon(std::string s) {
	type = s;
}

Weapon::~Weapon() {
}

std::string &Weapon::getType() {
	return (type);
}

void Weapon::setType(std::string s) {
	type = s;
}
