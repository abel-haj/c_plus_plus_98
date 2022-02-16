#include "ScavTrap.hpp"

ScavTrap::ScavTrap ( std::string name ) {

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

ScavTrap& ScavTrap::operator= ( ScavTrap& robot ) {

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

void ScavTrap::guardGate ( void ) {

    std::cout << "ScavTrap " << this->_name << " is guarding the gate!" << std::endl;
}
