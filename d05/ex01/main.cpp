#include "Bureaucrat.hpp"

#define NEWLINE std::cout << std::endl;
#define SEPERATE std::cout << "-------------" << std::endl;

int	main () {

	{
		Form a;
		Form b ( "Document", 1, 150 );
		Bureaucrat roger ( "Roger", 75 );
		std::cout << b << std::endl;
		NEWLINE
		roger.signForm( b );
		std::cout << b << std::endl;
		NEWLINE
	}
SEPERATE
	{
		Form f ( "F", 5, 5 );
		Bureaucrat b ( "random", 10 );
		b.signForm( f );
		NEWLINE
	}
SEPERATE
	try
	{
		Form c ( "B", 1, 0 );
	}
	catch ( std::exception& e )
	{
		std::cout << e.what();
		NEWLINE
	}
SEPERATE
	try
	{
		Form c ( "B", 0, 1 );
	}
	catch ( std::exception& e )
	{
		std::cout << e.what();
		NEWLINE
	}
SEPERATE
	try
	{
		Form c ( "", 151, 150 );
	}
	catch ( std::exception& e )
	{
		std::cout << e.what();
		NEWLINE
	}
SEPERATE
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