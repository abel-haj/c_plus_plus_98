#include "Animal.hpp"

Animal::Animal ( void ) {

	this->type = "Animal";

	std::cout << "A wild animal appeared!" << std::endl;
}

Animal::Animal ( const Animal& cat ) {

	this->type = cat.type;

	std::cout << "Animal duplicated!" << std::endl;
}

Animal& Animal::operator= ( const Animal& cat ) {

	this->type = cat.type;

	std::cout << "Animal replicated!" << std::endl;
	return *this;
}

Animal::~Animal ( void ) {

	std::cout << "The Animal disappeared!" << std::endl;
}

void Animal::makeSound ( void ) const {

	std::cout << "*loud noise*" << std::endl;
}

const std::string& Animal::getType ( void ) const {

	return this->type;
}

void Animal::setType ( const std::string& type ) {

	this->type = type;
}
