#include "Dog.hpp"

Dog::Dog ( void ) {

	std::cout << "A Dog came sniffing!" << std::endl;

	this->type = "Dog";
	this->_brain = new Brain ();
}

Dog::Dog ( const Dog& dog ) {

	std::cout << "Dog duplicated!" << std::endl;

	this->type = dog.type;
	this->_brain = new Brain();
	*this->_brain = *dog._brain;
}

Dog& Dog::operator= ( const Dog& dog ) {

	std::cout << "Dog replicated!" << std::endl;

	this->type = dog.type;
	this->_brain = new Brain();
	*this->_brain = *dog._brain;

	return *this;
}

Dog::~Dog ( void ) {

	delete this->_brain;

	std::cout << "The Dog slept!" << std::endl;
}

void Dog::makeSound ( void ) const {

	std::cout << "Woof!" << std::endl;
}
