#include "Karen.hpp"

int	main( void ) {

	Karen blonde;

	blonde.complain( "DEBUG" );
	blonde.complain( "INFO" );
	blonde.complain( "WARNING" );
	blonde.complain( "ERROR" );

	blonde.complain( "TEST" );
	blonde.complain( "TEST" );
	blonde.complain( "TEST" );
	blonde.complain( "TEST" );

	// void (Karen::*ptr)();
	// ptr = &Karen::debug;
	// (this->*ptr)();

	return 0;
}