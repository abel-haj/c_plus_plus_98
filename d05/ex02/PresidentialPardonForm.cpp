#include "PresidentialPardonForm.hpp"

/*
 * Default Constructor
 */
PresidentialPardonForm::PresidentialPardonForm ( void ) :
Form ( "Presidential", 5, 25 ),
_target( "target" ) {

	std::cout << "Presidential Form '" << this->getName() << "' printed!" << std::endl;
}

/*
 * Copy Constructor
 */
PresidentialPardonForm::PresidentialPardonForm ( std::string const & target ) :
Form ( "Presidential", 5, 25 ),
_target( target ) {

	std::cout << "Presidential Form '" << this->getName() << "' printed!" << std::endl;
}

/*
 * Copy Constructor
 */
PresidentialPardonForm::PresidentialPardonForm ( PresidentialPardonForm const & instance ) :
Form( instance.getName(), instance.getGradeExec(), instance.getGradeSign() ) {

	*this = instance;
	std::cout << "Presidential Form '" << this->getName() << "' duplicated!" << std::endl;
}

/*
 * Assignment Operator Overload
 */
PresidentialPardonForm & PresidentialPardonForm::operator= ( PresidentialPardonForm const & instance ) {

	this->_target = instance._target;
	std::cout << "Presidential Form '" << this->getName() << "' replicated!" << std::endl;
	return *this;
}

/*
 * Destructor
 */
PresidentialPardonForm::~PresidentialPardonForm ( void ) {

	std::cout << "Presidential Form '" << this->getName() << "' shredded!" << std::endl;
}

/*
 * Copy Constructor
 */
void PresidentialPardonForm::execute( const Bureaucrat & executor ) const {

	if ( !this->getIsSigned() ) {

		throw Form::FormNotSignedException();
	}

	if ( executor.getGrade() > this->getGradeExec() ) {

		throw Form::GradeTooLowException();
	}

	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
}
