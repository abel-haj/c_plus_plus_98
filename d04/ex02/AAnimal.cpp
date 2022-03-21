#include "AAnimal.hpp"

AAnimal::AAnimal ( void ) {

	this->type = "AAnimal";

	std::cout << "A wild animal appeared!" << std::endl;
}

AAnimal::AAnimal ( const AAnimal& cat ) {

	this->type = cat.type;

	std::cout << "AAnimal duplicated!" << std::endl;
}

AAnimal& AAnimal::operator= ( const AAnimal& cat ) {

	this->type = cat.type;

	std::cout << "AAnimal replicated!" << std::endl;
	return *this;
}

AAnimal::~AAnimal ( void ) {

	std::cout << "The AAnimal disappeared!" << std::endl;
}

const std::string& AAnimal::getType ( void ) const {

	return this->type;
}

void AAnimal::setType ( const std::string& type ) {

	this->type = type;
}
