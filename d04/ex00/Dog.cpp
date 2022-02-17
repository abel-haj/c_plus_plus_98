#include "Dog.hpp"

Dog::Dog ( void ) {

	this->type = "Dog";

	std::cout << "A Dog came sniffing!" << std::endl;
}

Dog::Dog ( const Dog& dog ) {

	this->type = dog.type;

	std::cout << "Dog duplidocated!" << std::endl;
}

Dog& Dog::operator= ( const Dog& dog ) {

	this->type = dog.type;

	std::cout << "Dog replidocated!" << std::endl;
	return *this;
}

Dog::~Dog ( void ) {

	std::cout << "The Dog slept!" << std::endl;
}

void Dog::makeSound ( void ) const {

	std::cout << "Woof!" << std::endl;
}
