#include "Intern.hpp"

Intern::Intern ( void ) {

	std::cout << "An intern was hired!" << std::endl;
}

Intern::Intern ( const Intern& instance ) {

	*this = instance;
}

Intern & Intern::operator= ( const Intern& instance ) {

	(void) instance;
	return *this;
}

Intern::~Intern ( void ) {

	std::cout << "An intern was fired!" << std::endl;
}

Form *president( std::string target ) {

	return (new PresidentialPardonForm( target ));
}

Form *robot( std::string target ) {

	return (new RobotomyRequestForm( target ));
}

Form *shrubbery( std::string target ) {

	return (new ShrubberyCreationForm( target ));
}

Form *Intern::makeForm ( std::string const & form_name, std::string const & target) {

	std::string options[] = { "presidential pardon", "robotomy request", "shrubbery creation" };
	Form *( *funcPtr[3] )( std::string ) = { &president, &robot, &shrubbery };

	for (int i = 0; i < 3; i++)
	{
		if ( !form_name.compare( options[i] ) )
			return (funcPtr[i])( target );
	}

	std::cout << "Intern did not find a Form matching '" << form_name << "'!" << std::endl;

	return NULL;
}
