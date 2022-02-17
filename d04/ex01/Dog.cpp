#include "Dog.hpp"

Dog::Dog ( void ) {

	this->type = "Dog";
	this->_brain = new Brain ();

	std::cout << "A Dog came sniffing!" << std::endl;
}

// TODO
	// deep copy
Dog::Dog ( const Dog& dog ) {

	this->type = dog.type;
	this->_brain = dog._brain;

	std::cout << "Dog duplidocated!" << std::endl;
}

Dog& Dog::operator= ( const Dog& dog ) {

	this->type = dog.type;
	this->_brain = dog._brain;

	std::cout << "Dog replidocated!" << std::endl;
	return *this;
}

Dog::~Dog ( void ) {

	delete this->_brain;

	std::cout << "The Dog slept!" << std::endl;
}

void Dog::makeSound ( void ) const {

	std::cout << "Woof!" << std::endl;
}
