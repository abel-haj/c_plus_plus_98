#include "FragTrap.hpp"

FragTrap::FragTrap ( void ) {

    this->_name = "nameless";

    std::cout << this->_name << " cool FragTrap appeared!" << std::endl;
}

FragTrap::FragTrap ( const std::string& name ) {

    this->_name = name;

    std::cout << "Cool FragTrap " << this->_name << " appeared!" << std::endl;
}

FragTrap::FragTrap ( const FragTrap& robot ) {

	this->_hp = robot._hp;
	this->_ep = robot._ep;
	this->_dmg = robot._dmg;
	this->_name = robot._name;

	std::cout << "Cool FragTrap " << robot._name << " gave birth to another cool Fragrap!" << std::endl;
}

FragTrap& FragTrap::operator= ( const FragTrap& robot ) {

	this->_hp = robot._hp;
	this->_ep = robot._ep;
	this->_dmg = robot._dmg;
	this->_name = robot._name;

	std::cout << "Cool FragTrap " << robot._name << " infected another FragTrap with his coolness!" << std::endl;

	return *this;
}

FragTrap::~FragTrap ( void ) {

    std::cout << "FragTrap " << this->_name << " became uncool!" << std::endl;
}

void FragTrap::attack ( const std::string& target ) {

	if (this->_hp > 0 && this->_ep > 0) {

		this->_ep--;
		std::cout << "FragTrap " << this->_name << " attacks " << target << " causing " << this->_dmg << " points of damage!" << std::endl;
	}
	else {

		std::cout << "FragTrap " << this->_name << " is incapable of attacking!" << std::endl;
	}
}

void FragTrap::highFivesGuys ( void ) {

    std::cout << "FragTrap " << this->_name << " is going around giving high fives!" << std::endl;
}
