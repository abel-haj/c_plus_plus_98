#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int	main( void ) {

	Zombie alex( "alex" );
	alex.announce();

	randomChump( "someChump" );

	Zombie *bob = newZombie( "bob" );
	bob->announce();
	delete bob;

	return ( 0 );
}
