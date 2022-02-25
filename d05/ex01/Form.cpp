#include "Form.hpp"

Form::Form ( void ) :
_name( "Default Form" ),
_grade_sign( 150 ),
_grade_exec( 150 ) {

	this->_isSigned = false;
	std::cout << "Form " << this->_name << " issued!" << std::endl;
}

Form::Form ( const std::string& name ) :
_name( name ),
_grade_sign( 150 ),
_grade_exec( 150 ) {

	this->_isSigned = false;
}

Form::Form ( const Form& f ) :
_name( f._name ),
_grade_sign( f._grade_sign ),
_grade_exec( f._grade_exec ) {

	this->_isSigned = f._isSigned;
}

Form& Form::operator= ( const Form& f ) {

	this->_isSigned = f._isSigned;
	return *this;
}

Form::~Form ( void ) {}

const char* Form::GradeTooHighException::what ( void ) const throw() {

	return ( "Grade was too high to operate on this form!" );
}

const char* Form::GradeTooLowException::what ( void ) const throw() {

	return ( "Grade was too low to operate on this form!" );
}

std::ostream& operator<< ( std::ostream& os, const Form& f );
