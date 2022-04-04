#include "Span.hpp"
#include <iostream>

int main( void ) {

	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		sp.printTab();

		try
		{
			sp.addNumber(0);
		}
		catch( const char * s )
		{
			std::cerr << "Exception: " << s << '\n';
		}
	}

	{
		int a[] = {6, 3, 17, 9, 11};
		Span sp;
		sp.addNumber(a, a + 5);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		sp.printTab();

		try
		{
			sp.addNumber(0);
		}
		catch( const char * s )
		{
			std::cerr << "Exception: " << s << '\n';
		}

		Span sp2;
		sp2 = sp;
		std::cout << sp2.shortestSpan() << std::endl;
	}

	{
		Span sp;
		try
		{
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch( const char * s )
		{
			std::cerr << "Exception: " << s << '\n';
		}
	}

	return 0;
}