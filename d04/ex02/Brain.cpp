#include "Brain.hpp"

Brain::Brain ( void ) {

	std::cout << "Voila! Brain built." << std::endl;
}

Brain::Brain ( const Brain& brain ) {

	for (size_t i = 0; i < 100; i++) {

		this->ideas[i] = brain.ideas[i];
	}

	std::cout << "Brain duplicated." << std::endl;
}

Brain& Brain::operator= ( const Brain& brain ) {

	for (size_t i = 0; i < 100; i++) {

		this->ideas[i] = brain.ideas[i];
	}

	std::cout << "Brain replicated." << std::endl;
	return *this;
}

Brain::~Brain ( void ) {

	std::cout << "Woah! The brain disintegrated." << std::endl;
}
