#include "Bureaucrat.hpp"

#define NEWLINE std::cout << std::endl;

int	main () {

	{
		Form a;
		Form b ( "Document", 1, 150 );
		Bureaucrat roger ( "Roger", 75 );
		std::cout << b << std::endl;
		std::cout << "-------------" << std::endl;
		roger.signForm( b );
		std::cout << "-------------" << std::endl;
		std::cout << b << std::endl;
	}
	NEWLINE

	{
		Form f ( "F", 5, 5 );
		Bureaucrat b ( "random", 10 );
		b.signForm( f );
	}
	NEWLINE

	std::cout << "-------------" << std::endl;

	try
	{
		Form c ( "B", 1, 0 );
	}
	catch ( std::exception& e )
	{
		std::cout << e.what();
		NEWLINE
	}

	std::cout << "-------------" << std::endl;

	try
	{
		Form c ( "B", 0, 1 );
	}
	catch ( std::exception& e )
	{
		std::cout << e.what();
		NEWLINE
	}

	std::cout << "-------------" << std::endl;

	try
	{
		Form c ( "", 151, 150 );
	}
	catch ( std::exception& e )
	{
		std::cout << e.what();
		NEWLINE
	}

	std::cout << "-------------" << std::endl;

	try
	{
		Form c ( "", 150, 151 );
	}
	catch ( std::exception& e )
	{
		std::cout << e.what();
		NEWLINE
	}

	return 0;
}