#include "iter.hpp"
#include <iostream>

template < typename T >
void print( T const & t ) {

	std::cout << t << std::endl;
}

int main( void ) {

	int a[5] = { 1, 2, 3, 4, 5 };
	::iter( a, 5, &print );

	std::cout << "-----" << std::endl;

	std::string s[5] = { "one", "two", "three", "four", "five" };
	::iter( s, 5, &print );

	return 0;
}
