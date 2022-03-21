#include "ScavTrap.hpp"

int	main( void ) {

	ScavTrap r1 ( "botone" );
	std::cout << std::endl;

	ScavTrap r2 ( "bottwo" );
	std::cout << std::endl;

	ScavTrap r3 ( r1 );
	std::cout << std::endl;

	ScavTrap r4;
	std::cout << std::endl;

	r4 = r2;
	std::cout << std::endl;

	r4.attack ( "bottwo" );
	std::cout << std::endl;

	r4.takeDamage ( 10 );
	std::cout << std::endl;

	r4.beRepaired ( 10 );
	std::cout << std::endl;

	r4.guardGate ();

	return 0;
}