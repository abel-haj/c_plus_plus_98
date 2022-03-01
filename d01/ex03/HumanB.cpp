#include "HumanB.hpp"


HumanB::HumanB ( std::string name ) {

	this->_name = name;
	std::cout << this->_name << " was born" << std::endl;
}

HumanB::~HumanB() {

	std::cout << this->_name << " died!" << std::endl;
}
void	HumanB::attack ( void ) {

	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon weapon ) {

	this->_weapon = &weapon;
}
