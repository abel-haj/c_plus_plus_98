#include "ScavTrap.hpp"

ScavTrap::ScavTrap ( std::string name ) {

    this->_name = name;

    std::cout << "ScavTrap " << this->_name << " entered through the gate!" << std::endl;
}

ScavTrap::~ScavTrap ( void ) {

    std::cout << "ScavTrap " << this->_name << " left through the gate!" << std::endl;
}

void ScavTrap::guardGate ( void ) {

    std::cout << "ScavTrap " << this->_name << " is guarding the gate!" << std::endl;
}
