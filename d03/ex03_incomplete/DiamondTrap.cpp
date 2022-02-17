#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap ( void ) {

    this->_name = "nameless";
	ClapTrap::_name = this->_name + "_clap_name";

    std::cout << this->_name << " shiny DiamondTrap appeared!" << std::endl;
}

DiamondTrap::DiamondTrap ( const std::string& name ) {

    this->_name = name;

    std::cout << "Shiny DiamondTrap " << this->_name << " appeared!" << std::endl;
}

DiamondTrap::DiamondTrap ( const DiamondTrap& robot ) {

	this->_hp = robot._hp;
	this->_ep = robot._ep;
	this->_dmg = robot._dmg;
	this->_name = robot._name;

	std::cout << "Shiny DiamondTrap " << robot._name << " gave birth to another shiny Fragrap!" << std::endl;
}

DiamondTrap& DiamondTrap::operator= ( const DiamondTrap& robot ) {

	this->_hp = robot._hp;
	this->_ep = robot._ep;
	this->_dmg = robot._dmg;
	this->_name = robot._name;

	std::cout << "Shiny DiamondTrap " << robot._name << " infected another DiamondTrap with his shinyness!" << std::endl;

	return *this;
}

DiamondTrap::~DiamondTrap ( void ) {

    std::cout << "DiamondTrap " << this->_name << " became unshiny!" << std::endl;
}

void DiamondTrap::attack ( const std::string& target ) {

	if (this->_hp > 0 && this->_ep > 0) {

		this->_ep--;
		std::cout << "DiamondTrap " << this->_name << " attacks " << target << " causing " << this->_dmg << " points of damage!" << std::endl;
	}
	else {

		std::cout << "DiamondTrap " << this->_name << " is incapable of attacking!" << std::endl;
	}
}

void DiamondTrap::whoAmI ( void ) {
}
