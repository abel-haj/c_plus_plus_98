#include "ShrubberyCreationForm.hpp"

/*
 * Default Constructor
 */
ShrubberyCreationForm::ShrubberyCreationForm ( void ) :
Form ( "Shrubbery", 137, 145 ),
_target( "target" ) {

	std::cout << "Shrubbery Form " << this->getName() << " printed!" << std::endl;
}

/*
 * Copy Constructor
 */
ShrubberyCreationForm::ShrubberyCreationForm ( std::string & target ) :
Form ( "Shrubbery", 137, 145 ),
_target( target ) {

	std::cout << "Shrubbery Form " << this->getName() << " printed!" << std::endl;
}

/*
 * Copy Constructor
 */
ShrubberyCreationForm::ShrubberyCreationForm ( ShrubberyCreationForm const & instance ) :
Form( instance.getName(), instance.getGradeExec(), instance.getGradeSign() ) {

	*this = instance;
	std::cout << "Shrubbery Form " << this->getName() << " duplicated!" << std::endl;
}

/*
 * Assignment Operator Overload
 */
ShrubberyCreationForm & ShrubberyCreationForm::operator= ( ShrubberyCreationForm const & instance ) {

	this->_target = instance._target;
	// this->_isSigned = instance.getIsSigned();
	std::cout << "Shrubbery Form " << this->getName() << " replicated!" << std::endl;
}

/*
 * Destructor
 */
ShrubberyCreationForm::~ShrubberyCreationForm ( void ) {

	std::cout << "Shrubbery Form " << this->getName() << " shredded!" << std::endl;
}

/*
 * Copy Constructor
 */
void ShrubberyCreationForm::execute( const Bureaucrat & executor ) const {

	if ( !this->getIsSigned() ) {

		throw Form::FormNotSignedException();
	}

	if ( executor.getGrade() > this->getGradeExec() ) {

		throw Form::GradeTooLowException();
	}


}
