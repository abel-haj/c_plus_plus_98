#include "Karen.hpp"

int	main( void ) {

	Karen blonde;

	std::cout << "-------------" << std::endl;
	blonde.complain( "DEBUG" );
	std::cout << "-------------" << std::endl;
	blonde.complain( "INFO" );
	std::cout << "-------------" << std::endl;
	blonde.complain( "WARNING" );
	std::cout << "-------------" << std::endl;
	blonde.complain( "ERROR" );
	std::cout << "-------------" << std::endl;

	blonde.complain( "TEST" );
	std::cout << "-------------" << std::endl;

	return 0;
}
