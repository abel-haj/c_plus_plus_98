#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal ( void ) {

	this->type = "WrongAnimal";

	std::cout << "A wild wrong animal appeared!" << std::endl;
}

WrongAnimal::WrongAnimal ( const WrongAnimal& animal ) {

	this->type = animal.type;

	std::cout << "WrongAnimal duplicated!" << std::endl;
}

WrongAnimal& WrongAnimal::operator= ( const WrongAnimal& animal ) {

	this->type = animal.type;

	std::cout << "WrongAnimal replicated!" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal ( void ) {

	std::cout << "The WrongAnimal disappeared!" << std::endl;
}

void WrongAnimal::makeSound ( void ) const {

	std::cout << "*wrong loud noise*" << std::endl;
}

const std::string& WrongAnimal::getType ( void ) const {

	return this->type;
}

void WrongAnimal::setType ( const std::string& type ) {

	this->type = type;
}
