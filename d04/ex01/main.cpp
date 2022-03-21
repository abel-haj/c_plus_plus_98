#include "Cat.hpp"
#include "Dog.hpp"

#define NEWLINE std::cout << std::endl;
#define DNEWLINE std::cout << std::endl; std::cout << std::endl;
#define N 4

int main ( void ) {

	{
		const Animal* i = new Dog ();
		DNEWLINE

		const Animal* j = new Cat ();
		DNEWLINE

		delete i;
		DNEWLINE

		delete j;
		DNEWLINE
	}

	{
		const Animal* animals[N];

		DNEWLINE

		for (int i = 0; i < N / 2; i++)
			animals[i] = new Cat();
		DNEWLINE

		for (int j = N / 2; j < N; j++)
			animals[j] = new Dog();
		DNEWLINE

		for (size_t i = 0; i < N; i++) {

			delete animals[i];
			DNEWLINE
		}
	}

	std::cout << "----------------" << std::endl;
	system( "leaks brain" );

	return 0;
}
