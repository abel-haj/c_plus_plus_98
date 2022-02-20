#include "Bureaucrat.hpp"

int	main () {

	// Bureaucrat a;
	// Bureaucrat b ( 100 );
	try {

		Bureaucrat c ( " ", 200 );
	}
	catch ( std::exception& e ) {

		std::cout << e.what();
	}
	// Bureaucrat c ( -5 );

	return 0;
}