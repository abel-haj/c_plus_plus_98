#ifndef  SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include "iostream"

class ScavTrap : public ClapTrap {

    private:

    public:
		ScavTrap ( void );
        ScavTrap ( const std::string& name );
		ScavTrap ( const ScavTrap& robot );
		ScavTrap& operator= ( const ScavTrap& robot );
        ~ScavTrap ();

		void attack ( const std::string& target );
        void guardGate ( void );
		void printHP ( void );
};

#endif