#include "Cat.hpp"

Cat::Cat ( void ) {

	this->type = "Cat";

	std::cout << "A Cat dropped from the sky!" << std::endl;
}

Cat::Cat ( const Cat& cat ) {

	this->type = cat.type;

	std::cout << "Cat duplicated!" << std::endl;
}

Cat& Cat::operator= ( const Cat& cat ) {

	this->type = cat.type;

	std::cout << "Cat replicated!" << std::endl;
	return *this;
}

Cat::~Cat ( void ) {

	std::cout << "The Cat slept!" << std::endl;
}

void Cat::makeSound ( void ) const {

	std::cout << "Meow!" << std::endl;
}
