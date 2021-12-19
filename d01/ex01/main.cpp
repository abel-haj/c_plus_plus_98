#include "Zombie.hpp"

int	main ( void ) {

	Zombie hue = Zombie ( "hue" );
	hue.announce();

	int	number = 5;
	Zombie *horde = hue.zombieHorde ( number, "walker" );

	for (int i = 0; i < number; i++) {

		horde[i].announce();
	}

	delete [] horde;

	return ( 0 );
}
