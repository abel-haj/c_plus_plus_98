#include "Zombie.hpp"

Zombie::Zombie( void ) {

}

Zombie::Zombie( std::string name ) {

	this->_name = name;
}

void	Zombie::announce() {

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie() {

	std::cout << this->_name << " asleep\n";
}
