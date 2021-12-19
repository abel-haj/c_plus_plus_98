#include "Zombie.hpp"

void randomChump( std::string name ) {

	Zombie walker = Zombie( name );
	walker.announce();
}
