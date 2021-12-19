#include <iostream>

int	main ( void ) {

	std::string	brain = "HI THIS IS BRAIN";

	std::string*	stringPTR = &brain;
	std::string&	stringREF = brain;

	std::cout << "string addr         \t" << &brain << std::endl;

	std::cout << "string pointer addr \t" << stringPTR << std::endl;
	std::cout << "string ref addr     \t" << &stringREF << std::endl;

	std::cout << "string pointer value\t" << *stringPTR << std::endl;
	std::cout << "string ref value    \t" << stringREF << std::endl;

	return ( 0 );
}