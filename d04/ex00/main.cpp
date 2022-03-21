#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongCat.hpp"

int main ( void ) {

	{
		const Animal* meta = new Animal ();
		std::cout << std::endl;

		const Animal* i = new Dog ();
		std::cout << std::endl;

		const Animal* j = new Cat ();
		std::cout << std::endl;

		meta->makeSound ();
		i->makeSound ();
		j->makeSound ();
		std::cout << std::endl;

		delete i;
		std::cout << std::endl;

		delete j;
		std::cout << std::endl;

		delete meta;
		std::cout << std::endl;
	}

	std::cout << "----------------" << std::endl;
	std::cout << std::endl;

	{
		const WrongAnimal* wrongMmeta = new WrongAnimal ();
		std::cout << std::endl;

		const WrongAnimal* wrongJ = new WrongCat ();
		std::cout << std::endl;

		wrongMmeta->makeSound ();
		wrongJ->makeSound ();
		std::cout << std::endl;

		delete wrongJ;
		std::cout << std::endl;

		delete wrongMmeta;
		std::cout << std::endl;
	}

	std::cout << "----------------" << std::endl;
	system( "leaks animal" );

	return 0;
}
