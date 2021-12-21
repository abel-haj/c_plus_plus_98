#include "Karen.hpp"

void Karen::debug( void ) {

	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info( void ) {

	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning( void ) {

	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error( void ) {

	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

Karen::Karen() {

	std::cout << "Karen entered the store." << std::endl;
}

void Karen::complain( std::string level ) {

	if ( level.compare( "DEBUG" ) == 0 ) {

		Karen::debug();

	} else if ( level.compare( "INFO" ) == 0 ) {

		Karen::info();

	} else if ( level.compare( "WARNING" ) == 0 ) {

		Karen::warning();

	} else if ( level.compare( "ERROR" ) == 0 ) {

		Karen::error();

	}

	// switch ( 0 )
	// {
	// case level.compare( "DEBUG" ):
	// 	Karen::debug();
	// 	break;

	// case "INFO":
	// 	Karen::info();
	// 	break;

	// case "WARNING":
	// 	Karen::warning();
	// 	break;

	// case "ERROR":
	// 	Karen::error();
	// 	break;

	// default:
	// 	break;
	// }
}

Karen::~Karen() {

	std::cout << "Karen left the store." << std::endl;
}