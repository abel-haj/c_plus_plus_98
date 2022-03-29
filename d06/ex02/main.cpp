#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate( void )
{
	srand(time(NULL));
	int n = rand() % 3;

	switch (n)
	{
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return NULL;
}

void identify( Base* p ) {

	if ( dynamic_cast<A*>(p) )
		std::cout << "A" << std::endl;
	else if ( dynamic_cast<B*>(p) )
		std::cout << "B" << std::endl;
	else if ( dynamic_cast<C*>(p) )
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

void identify( Base& p ) {

	Base b;

	try {

		b = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::bad_cast& e) {

		try {

			b = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch(const std::bad_cast& e) {

			try {

				b = dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch(const std::bad_cast& e) {

				std::cout << "Unknown type" << std::endl;
			}
		}
	}
}

int main() {

	{
		Base * p = generate();
		identify(p);
		delete p;
	}

	{
		Base *b = NULL;
		identify(b);
	}

	{
		Base * p = generate();
		identify(*p);
		delete p;
	}

	{
		Base b;
		identify(b);
	}

	return 0;
}
