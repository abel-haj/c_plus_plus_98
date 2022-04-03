#include "easyfind.hpp"
#include <iostream>
#include <exception>
#include <list>
#include <vector>

int main( void ) {

	int a[] = {1, 2, 3, 4, 5};

	try {

		std::vector<int> v;
		v = std::vector<int>(a, a + 5);
		std::vector<int>::iterator it;

		it = easyfind(v, 1);
		std::cout << "Found element: " << *it << std::endl;
	}
	catch ( char const * s ) {

		std::cout << "Exception: " << s << std::endl;
	}

	try {

		std::list<int> l;
		l = std::list<int>(a, a + 5);
		std::list<int>::iterator it;

		it = easyfind(l, 4);
		std::cout << "Found element: " << *it << std::endl;
	}
	catch ( char const * s ) {

		std::cout << "Exception: " << s << std::endl;
	}

	return 0;
}