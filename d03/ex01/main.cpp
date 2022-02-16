#include "ScavTrap.hpp"

int	main( void ) {

	ScavTrap r1 ( "assassin" );

	ScavTrap r2 ( "thief" );

	std::cout << std::endl;

	r1.attack( "thief" );

	std::cout << std::endl;

	r2.takeDamage( 5 );

	std::cout << std::endl;

	r2.beRepaired( 5 );

	std::cout << std::endl;

	r2.attack( "assassin" );

	std::cout << std::endl;

	r1.takeDamage( 5 );

	std::cout << std::endl;

	r1.attack( "theif" );
	
	std::cout << std::endl;

	r2.takeDamage( 10 );

	std::cout << std::endl;

	r2.attack( "assassin" );

	std::cout << std::endl;

	r2.beRepaired( 5 );


	std::cout << std::endl;

	ScavTrap r3 ( "clone" );
	
	std::cout << std::endl;

	r3 = r2;

	std::cout << std::endl;

	ScavTrap r4 ( r1 );

	std::cout << std::endl;

	return 0;
}