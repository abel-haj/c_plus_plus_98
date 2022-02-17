#include "ScavTrap.hpp"

ScavTrap::ScavTrap ( void ) {

    this->_name = "nameless";

    std::cout << this->_name << " ScavTrap entered through the gate!" << std::endl;
}

ScavTrap::ScavTrap ( const std::string& name ) {

    this->_name = name;

    std::cout << "ScavTrap " << this->_name << " entered through the gate!" << std::endl;
}

ScavTrap::ScavTrap ( const ScavTrap& robot ) {

	this->_hp = robot._hp;
	this->_ep = robot._ep;
	this->_dmg = robot._dmg;
	this->_name = robot._name;

	std::cout << "Woah! The twin " << robot._name << " entered through the gate!" << std::endl;
}

ScavTrap& ScavTrap::operator= ( const ScavTrap& robot ) {

	this->_hp = robot._hp;
	this->_ep = robot._ep;
	this->_dmg = robot._dmg;
	this->_name = robot._name;

	std::cout << "Woah! The doppleganger " << robot._name << " entered through the gate!" << std::endl;

	return *this;
}

ScavTrap::~ScavTrap ( void ) {

    std::cout << "ScavTrap " << this->_name << " left through the gate!" << std::endl;
}

void ScavTrap::attack ( const std::string& target ) {

	if (this->_hp > 0 && this->_ep > 0) {

		this->_ep--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_dmg << " points of damage!" << std::endl;
	}
	else {

		std::cout << "ScavTrap " << this->_name << " is incapable of attacking!" << std::endl;
	}
}

void ScavTrap::guardGate ( void ) {

    std::cout << "ScavTrap " << this->_name << " is guarding the gate!" << std::endl;
}

void ScavTrap::printHP ( void ) {
	std::cout << "HP is : " << this->_hp << std::endl;
}
