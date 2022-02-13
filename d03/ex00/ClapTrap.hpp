#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		int _hp;
		int _ep;
		int _dmg;
		std::string _name;

	public:
		// Default constructor
		ClapTrap ( std::string name );
		// Copy constructor
		ClapTrap ( const ClapTrap& robot );
		// Copy assignment operator
		ClapTrap& operator= ( ClapTrap& robot );
		// Destructor
		~ClapTrap ( void );

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};


#endif
