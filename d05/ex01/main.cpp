#include "Bureaucrat.hpp"

#ifndef MAIN_CPP
# define MAIN_CPP

class main {
	private:

	public:
							main ( void );
							main ( const main& instance );
		main&                operator= ( const main& instance );
							~main ( void );
};

#endif


int	main () {

	// Bureaucrat a;
	// Bureaucrat b ( 100 );
	try
	{
		Bureaucrat c ( " ", 0 );
	}
	catch ( std::exception& e )
	{
		std::cout << e.what() << "\n\n";
	}

	try
	{
		Bureaucrat c ( " ", 151 );
	}
	catch ( std::exception& e )
	{
		std::cout << e.what() << "\n\n";
	}

	try
	{
		Bureaucrat a ( "random", 1 );
		a.incrementGrade();
	}
	catch( std::exception& e )
	{
		std::cout << e.what() << "\n\n";
	}

	try
	{
		Bureaucrat a ( "random", 150 );
		a.decrementGrade();
	}
	catch( std::exception& e )
	{
		std::cout << e.what() << "\n\n";
	}

	// Bureaucrat c ( "", -5 );

	return 0;
}