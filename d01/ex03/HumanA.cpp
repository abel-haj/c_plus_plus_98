#include "HumanA.hpp"

HumanA::HumanA ( std::string name, Weapon& gun ) : _weapon(gun) {

	std::cout << "-------------------------" << std::endl;
	this->_name = name;
	this->_weapon = gun;
	std::cout << this->_name << " was born and picked a " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA() {

	std::cout << this->_name << " died!" << std::endl;
}

void	HumanA::attack ( void ) {

	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
