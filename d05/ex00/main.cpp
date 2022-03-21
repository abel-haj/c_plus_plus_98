#include "Bureaucrat.hpp"

#define NEWLINE std::cout << std::endl;

int	main () {

	{
		Bureaucrat a;
		Bureaucrat b ( "Bob", 100 );
		NEWLINE
		b.incrementGrade();
		NEWLINE
		std::cout << b << std::endl;
		NEWLINE
		b.decrementGrade();
		NEWLINE
	}
	NEWLINE

	std::cout << "-------------" << std::endl;

	try
	{
		Bureaucrat c ( "B", 0 );
	}
	catch ( std::exception& e )
	{
		std::cout << e.what();
		NEWLINE
	}

	std::cout << "-------------" << std::endl;

	try
	{
		Bureaucrat c ( "", 151 );
	}
	catch ( std::exception& e )
	{
		std::cout << e.what();
		NEWLINE
	}

	std::cout << "-------------" << std::endl;

	try
	{
		Bureaucrat c ( "random", 1 );
		c.incrementGrade();
		std::cout << "something\n";
	}
	catch( std::exception& e )
	{
		std::cout << e.what();
		NEWLINE
	}

	std::cout << "-------------" << std::endl;

	try
	{
		Bureaucrat c ( "random", 150 );
		c.decrementGrade();
		std::cout << "something\n";
	}
	catch( std::exception& e )
	{
		std::cout << e.what();
		NEWLINE
	}

	return 0;
}