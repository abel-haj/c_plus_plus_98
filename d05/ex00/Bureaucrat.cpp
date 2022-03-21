#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat ( void ) : _name( "worker" ) {

	this->_grade = 150;
	std::cout << "Bureaucrat " << this->_name
		<< " was hired with grade 150!" << std::endl;
}

Bureaucrat::Bureaucrat ( const std::string& name, int grade ) :
_name ( name ),
_grade ( grade ) {

	if ( grade > 150 )
		throw GradeTooLowException();

	else if ( grade < 1 )
		throw GradeTooHighException();

	std::cout << "Bureaucrat " << this->_name
		<< " was hired with grade " << this->_grade
		<< "!" << std::endl;
}

Bureaucrat::Bureaucrat ( const Bureaucrat& b ) :
_name ( b._name ) {

	*this = b;
}

Bureaucrat& Bureaucrat::operator= ( const Bureaucrat& b ) {

	this->_grade = b._grade;

	return *this;
}

Bureaucrat::~Bureaucrat ( void ) {

	std::cout << "Bureaucrat " << this->_name << " resigned!" << std::endl;
}

const std::string& Bureaucrat::getName ( void ) const {

	return this->_name;
}

const int& Bureaucrat::getGrade ( void ) const {

	return this->_grade;
}

void Bureaucrat::incrementGrade ( void ) {

	if ( this->_grade == 1 )
		throw GradeTooHighException();
	else
		this->_grade--;

	std::cout << this->_name << " got a promotion!" << std::endl;
}

void Bureaucrat::decrementGrade ( void ) {

	if ( this->_grade == 150 )
		throw GradeTooLowException();
	else
		this->_grade++;

	std::cout << this->_name << " got a demotion!" << std::endl;
}

// Exception class member functions
const char* Bureaucrat::GradeTooHighException::what ( void ) const throw () {

	return "GRADE WAS ABOVE 1!";
}

// Exception class member functions
const char* Bureaucrat::GradeTooLowException::what ( void ) const throw () {

	return "GRADE WAS BELOW 150!";
}

std::ostream& operator<< ( std::ostream& os, const Bureaucrat& b) {

	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return os;
}
