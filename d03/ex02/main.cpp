#include "FragTrap.hpp"

int	main( void ) {

	FragTrap r1 ( "botone" );
	std::cout << std::endl;

	FragTrap r2 ( "bottwo" );
	std::cout << std::endl;

	FragTrap r3 ( r1 );
	std::cout << std::endl;

	FragTrap r4;
	std::cout << std::endl;

	r4 = r2;
	std::cout << std::endl;

	r4.attack ( "bottwo" );
	std::cout << std::endl;

	r4.takeDamage ( 10 );
	std::cout << std::endl;

	r4.beRepaired ( 10 );
	std::cout << std::endl;

	r4.highFivesGuys ();

	return 0;
}