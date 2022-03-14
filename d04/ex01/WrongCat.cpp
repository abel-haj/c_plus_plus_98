#include "WrongCat.hpp"

WrongCat::WrongCat ( void ) {

	this->type = "WrongCat";

	std::cout << "A Wrong Cat dropped from the sky!" << std::endl;
}

WrongCat::WrongCat ( const WrongCat& cat ) {

	this->type = cat.type;

	std::cout << "Wrong Cat duplicated!" << std::endl;
}

WrongCat& WrongCat::operator= ( const WrongCat& cat ) {

	this->type = cat.type;

	std::cout << "Wrong Cat replicated!" << std::endl;
	return *this;
}

WrongCat::~WrongCat ( void ) {

	std::cout << "The Wrong Cat slept!" << std::endl;
}

void WrongCat::makeSound ( void ) const {

	std::cout << "Wrong Meow!" << std::endl;
}
