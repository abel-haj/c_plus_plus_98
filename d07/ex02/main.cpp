#include "Array.hpp"
#include <iostream>

int main( void ) {

	{
		Array <int> a;
	}

	{
		Array < Array < int > > a (5);
		a[0] = Array <int> (2);
		a[0][0] = 0;
		a[0][1] = 1;
		std::cout << "0:0 -> " << a[0][0] << ",0:1 -> " << a[0][1] << std::endl;
	}

	{
		Array <int> a(5);
		std::cout << "a size is " << a.size() << std::endl;
		std::cout << "a[0] is " << a[0] << std::endl;
		a [0] = 5;
		std::cout << "a[0] is " << a[0] << std::endl;
		try {

			std::cout << "a[5] is " << a[5] << std::endl;

		} catch ( std::exception & e ) {

			std::cout << "Exception: " << e.what() << std::endl;
		}
	}

	return 0;
}
