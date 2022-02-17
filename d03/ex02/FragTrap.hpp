#ifndef  FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include "iostream"

class FragTrap : public ClapTrap {

    private:

    public:
		FragTrap ( void );
        FragTrap ( const std::string& name );
		FragTrap ( const FragTrap& robot );
		FragTrap& operator= ( const FragTrap& robot );
        ~FragTrap ();

		void attack ( const std::string& target );
        void highFivesGuys ( void );
};

#endif