#include "Weapon.hpp"

Weapon::Weapon ( void ) {

	std::cout << "Weapon crafted!" << std::endl;
}

Weapon::Weapon ( std::string type ) {

	this->_type = type;
	std::cout << "Weapon " << this->_type << " crafted!" << std::endl;
}

Weapon::~Weapon ( void ) {

	std::cout << "Weapon broke!" << std::endl;
}

const std::string&	Weapon::getType ( void ) {

	return this->_type;
}

void				Weapon::setType ( std::string type ) {

	this->_type = type;
}
