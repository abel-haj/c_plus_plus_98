#include "Form.hpp"

Form::Form ( void ) :
_name( "Default Form" ),
_grade_exec( 150 ),
_grade_sign( 150 ),
_isSigned( false ) {

	std::cout << "Form " << this->_name << " issued!" << std::endl;
}

Form::Form ( const std::string& name ) :
_name( name ),
_grade_exec( 150 ),
_grade_sign( 150 ),
_isSigned( false ) {

	std::cout << "Form " << this->_name << " issued!" << std::endl;
}

Form::Form ( int exec, int sign ) : _grade_exec( exec ), _grade_sign( sign ) {
}

Form::Form ( const Form& f ) :
_name( f._name ),
_grade_exec( f._grade_exec ),
_grade_sign( f._grade_sign ),
_isSigned( f._isSigned ) {

	std::cout << "Form " << this->_name << " duplicated!" << std::endl;
}

Form& Form::operator= ( const Form& f) {

	this->_isSigned = f._isSigned;
	std::cout << "Form " << this->_name << " replicated!" << std::endl;
	return *this;
}

const std::string&	Form::getName ( void ) const {

	return this->_name;
}

Form::~Form ( void ) {

	std::cout << "Form " << this->_name << " destroyed!" << std::endl;
}

void Form::beSigned ( const Bureaucrat& b ) {

	if ( this->_isSigned == true )
		throw Form::FormAlreadySigned();
	else if ( b.getGrade() <= this->_grade_sign )
		this->_isSigned = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what ( void ) const throw() {

	return ( "Grade was too high to operate on this form!" );
}

const char* Form::GradeTooLowException::what ( void ) const throw() {

	return ( "Grade was too low to operate on this form!" );
}

const char* Form::FormAlreadySigned::what ( void ) const throw() {

	return ( "This form was already signed!" );
}

std::ostream& operator<< ( std::ostream& os, const Form& f );
