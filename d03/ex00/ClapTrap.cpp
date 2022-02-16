#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap ( std::string name ) {

	this->_hp = 10;
	this->_ep = 10;
	this->_dmg = 0;
	this->_name = name;
	std::cout << "A wild ClapTrap appeared: " << name << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap ( const ClapTrap& robot ) {

	this->_hp = robot._hp;
	this->_ep = robot._ep;
	this->_dmg = robot._dmg;
	this->_name = robot._name;
}

// Copy assignment operator
ClapTrap& ClapTrap::operator= ( ClapTrap& robot ) {

	this->_hp = robot._hp;
	this->_ep = robot._ep;
	this->_dmg = robot._dmg;
	this->_name = robot._name;

	return *this;
}

// Destructor
ClapTrap::~ClapTrap ( void ) {

	std::cout << "ClapTrap " << this->_name << " died!" << std::endl;
}

void ClapTrap::attack( const std::string& target ) {

	if (this->_hp > 0 && this->_ep > 0) {

		this->_ep--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_dmg << " points of damage!" << std::endl;
	}
	else {

		std::cout << "ClapTrap " << this->_name << " is incapable of attacking!" << std::endl;
	}
}

void ClapTrap::takeDamage( unsigned int amount ) {

	this->_hp -= amount;

	if (this->_hp < 0)
		this->_hp = 0;

	std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount ) {

	if ( this->_hp > 0 ) {

		if ( this->_ep > 0 ) {

			this->_ep--;
			this->_hp += amount;
			std::cout << "ClapTrap " << this->_name << " recovered " << amount << " points of health!" << std::endl;
		}
		else {

			std::cout << "ClapTrap " << this->_name << " does not have enough energy points!" << std::endl;
		}
	}
	else {

		std::cout << "ClapTrap " << this->_name << " is beyond repairing!" << std::endl;
	}
}
