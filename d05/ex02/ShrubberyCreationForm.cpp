#include "ShrubberyCreationForm.hpp"
#include <fstream>

/*
 * Default Constructor
 */
ShrubberyCreationForm::ShrubberyCreationForm ( void ) :
Form ( "Shrubbery", 137, 145 ),
_target( "target" ) {

	std::cout << "Shrubbery Form '" << this->getName() << "' printed!" << std::endl;
}

/*
 * Copy Constructor
 */
ShrubberyCreationForm::ShrubberyCreationForm ( std::string const & target ) :
Form ( "Shrubbery", 137, 145 ),
_target( target ) {

	std::cout << "Shrubbery Form '" << this->getName() << "' printed!" << std::endl;
}

/*
 * Copy Constructor
 */
ShrubberyCreationForm::ShrubberyCreationForm ( ShrubberyCreationForm const & instance ) :
Form( instance.getName(), instance.getGradeExec(), instance.getGradeSign() ) {

	*this = instance;
	std::cout << "Shrubbery Form '" << this->getName() << "' duplicated!" << std::endl;
}

/*
 * Assignment Operator Overload
 */
ShrubberyCreationForm & ShrubberyCreationForm::operator= ( ShrubberyCreationForm const & instance ) {

	this->_target = instance._target;
	std::cout << "Shrubbery Form '" << this->getName() << "' replicated!" << std::endl;
	return *this;
}

/*
 * Destructor
 */
ShrubberyCreationForm::~ShrubberyCreationForm ( void ) {

	std::cout << "Shrubbery Form '" << this->getName() << "' shredded!" << std::endl;
}

/*
 * Copy Constructor
 */
void ShrubberyCreationForm::execute( const Bureaucrat & executor ) const {

	std::ofstream out;

	if ( !this->getIsSigned() ) {

		throw Form::FormNotSignedException();
	}

	if ( executor.getGrade() > this->getGradeExec() ) {

		throw Form::GradeTooLowException();
	}

	out.open( _target + "_shrubbery" );

	if ( out && out.good() ) {

		out << "                  X" << std::endl
			<< "                XXXXX" << std::endl
			<< "              XXXXXXXXX" << std::endl
			<< "            XXXXXXXXXXXXX" << std::endl
			<< "              XXXXXXXXX" << std::endl
			<< "            XXXXXXXXXXXXX" << std::endl
			<< "          XXXXXXXXXXXXXXXXX" << std::endl
			<< "        XXXXXXXXXXXXXXXXXXXXX" << std::endl
			<< "          XXXXXXXXXXXXXXXXX" << std::endl
			<< "        XXXXXXXXXXXXXXXXXXXXX" << std::endl
			<< "      XXXXXXXXXXXXXXXXXXXXXXXXX" << std::endl
			<< "    XXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << std::endl
			<< "      XXXXXXXXXXXXXXXXXXXXXXXXX" << std::endl
			<< "    XXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << std::endl
			<< "  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << std::endl
			<< "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << std::endl
			<< "               ######" << std::endl
			<< "               ######" << std::endl
			<< "               ######" << std::endl;
	}
}
