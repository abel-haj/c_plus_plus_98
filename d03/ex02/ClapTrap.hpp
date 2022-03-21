#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:
		int _hp;
		int _ep;
		int _dmg;
		std::string _name;

	public:
		// Default constructor
		ClapTrap ( void );
		// Constructor overload
		ClapTrap ( const std::string& name );
		// Copy constructor
		ClapTrap ( const ClapTrap& robot );
		// Copy assignment operator
		ClapTrap& operator= ( const ClapTrap& robot );
		// Destructor
		~ClapTrap ( void );

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
