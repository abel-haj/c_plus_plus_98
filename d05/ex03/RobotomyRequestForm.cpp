#include "RobotomyRequestForm.hpp"

/*
 * Default Constructor
 */
RobotomyRequestForm::RobotomyRequestForm ( void ) :
Form ( "Robotomy", 45, 72 ),
_target( "target" ) {

	std::cout << "Robotomy Form '" << this->getName() << "' printed!" << std::endl;
}

/*
 * Copy Constructor
 */
RobotomyRequestForm::RobotomyRequestForm ( std::string const & target ) :
Form ( "Robotomy", 45, 72 ),
_target( target ) {

	std::cout << "Robotomy Form '" << this->getName() << "' printed!" << std::endl;
}

/*
 * Copy Constructor
 */
RobotomyRequestForm::RobotomyRequestForm ( RobotomyRequestForm const & instance ) :
Form( instance.getName(), instance.getGradeExec(), instance.getGradeSign() ) {

	*this = instance;
	std::cout << "Robotomy Form '" << this->getName() << "' duplicated!" << std::endl;
}

/*
 * Assignment Operator Overload
 */
RobotomyRequestForm & RobotomyRequestForm::operator= ( RobotomyRequestForm const & instance ) {

	this->_target = instance._target;
	std::cout << "Robotomy Form '" << this->getName() << "' replicated!" << std::endl;
	return *this;
}

/*
 * Destructor
 */
RobotomyRequestForm::~RobotomyRequestForm ( void ) {

	std::cout << "Robotomy Form '" << this->getName() << "' shredded!" << std::endl;
}

/*
 * Copy Constructor
 */
void RobotomyRequestForm::execute( const Bureaucrat & executor ) const {

	if ( !this->getIsSigned() ) {

		throw Form::FormNotSignedException();
	}

	if ( executor.getGrade() > this->getGradeExec() ) {

		throw Form::GradeTooLowException();
	}

	std::cout << "* drilling noises *" << std::endl;
	srand(time(NULL));
	if ( rand() % 2 )
		std::cout << this->_target << " has been robotomized!" << std::endl;
	else
		std::cout << "The robomtoy failed!" << std::endl;
}
