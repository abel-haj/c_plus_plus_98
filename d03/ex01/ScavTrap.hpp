#ifndef  SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include "iostream"

class ScavTrap : public ClapTrap {

    private:

    public:
        ScavTrap ( std::string name );
		ScavTrap ( const ScavTrap& robot );
		ScavTrap& operator= ( ScavTrap& robot );
        ~ScavTrap ();

        void guardGate ( void );
};

#endif