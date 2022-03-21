#include "Cat.hpp"
#include "Dog.hpp"

int main ( void ) {

	
	const AAnimal* i = new Dog ();
	std::cout << std::endl;

	const AAnimal* j = new Cat ();
	std::cout << std::endl;

	i->makeSound ();
	j->makeSound ();
	std::cout << std::endl;

	delete i;
	std::cout << std::endl;

	delete j;
	std::cout << std::endl;

	// AAnimal a;

	return 0;
}
