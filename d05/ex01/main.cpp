#include "Bureaucrat.hpp"
// #include "Form.hpp"

int	main () {

	// Bureaucrat a;
	// Bureaucrat b ( 100 );
	// try
	// {
	// 	Bureaucrat c ( " ", 0 );
	// }
	// catch ( std::exception& e )
	// {
	// 	std::cout << e.what() << "\n\n";
	// }

	// try
	// {
	// 	Bureaucrat c ( " ", 151 );
	// }
	// catch ( std::exception& e )
	// {
	// 	std::cout << e.what() << "\n\n";
	// }

	// try
	// {
	// 	Bureaucrat a ( "random", 1 );
	// 	a.incrementGrade();
	// }
	// catch( std::exception& e )
	// {
	// 	std::cout << e.what() << "\n\n";
	// }

	// try
	// {
	// 	Bureaucrat a ( "random", 150 );
	// 	a.decrementGrade();
	// }
	// catch( std::exception& e )
	// {
	// 	std::cout << e.what() << "\n\n";
	// }

	// Bureaucrat c ( "", -5 );

	Form a;
	Form b ( "B" );
	Form c;

	c = a;

	Bureaucrat ba;
	Bureaucrat bb ( "Office worker", 125 );

	ba.signForm( a );

	return 0;
}