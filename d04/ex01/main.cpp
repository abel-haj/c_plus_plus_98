#include "Cat.hpp"
#include "Dog.hpp"

#define NEWLINE std::cout << std::endl;
#define DNEWLINE std::cout << std::endl; std::cout << std::endl;

int main ( void ) {

	const Animal* d = new Dog ();
	DNEWLINE
	const Animal* c = new Cat ();

	DNEWLINE

	delete d;
	DNEWLINE
	delete c;


	DNEWLINE


	const Animal* animals[10];

	DNEWLINE

	for (int i = 0; i < 5; i++)
		animals[i] = new Cat();

	DNEWLINE

	for (int j = 5; j < 10; j++)
		animals[j] = new Dog();

	DNEWLINE

	for (size_t i = 0; i < 10; i++) {

		animals[i]->makeSound();
		DNEWLINE
		delete animals[i];
		DNEWLINE
	}

	getchar ();

	return 0;
}