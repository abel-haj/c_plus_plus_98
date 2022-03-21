#include "Cat.hpp"

Cat::Cat ( void ) {

	std::cout << "A Cat dropped from the sky!" << std::endl;

	this->type = "Cat";
	this->_brain = new Brain ();
}

Cat::Cat ( const Cat& cat ) {

	std::cout << "Cat duplicated!" << std::endl;

	this->type = cat.type;
	this->_brain = new Brain();
	*this->_brain = *cat._brain;
}

Cat& Cat::operator= ( const Cat& cat ) {

	std::cout << "Cat replicated!" << std::endl;

	this->type = cat.type;
	delete this->_brain;
	this->_brain = new Brain();
	*this->_brain = *cat._brain;

	return *this;
}

Cat::~Cat ( void ) {

	delete this->_brain;

	std::cout << "The Cat slept!" << std::endl;
}

void Cat::makeSound ( void ) const {

	std::cout << "Meow!" << std::endl;
}
