#include "Zombie.hpp"

Zombie *zombieHorde( int n, std::string name );

int	main ( void ) {

	int	number = 5;
	Zombie *horde = zombieHorde ( number, "walker" );

	for (int i = 0; i < number; i++) {

		horde[i].announce();
	}

	delete [] horde;

	return ( 0 );
}
