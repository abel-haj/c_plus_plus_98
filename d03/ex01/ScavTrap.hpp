#ifndef  SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include "iostream"

class ScavTrap : public ClapTrap {

    private:

    public:
        ScavTrap ( std::string name );
        ~ScavTrap ();
        void guardGate ( void );
}

#endif