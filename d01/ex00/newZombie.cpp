#include "Zombie.hpp"

Zombie* newZombie( std::string name ) {

	Zombie *walker = new Zombie( name );
	return ( walker );
}
