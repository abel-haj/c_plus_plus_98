#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat ( void ) : _name( "worker" ) {

	this->_grade = 150;
	std::cout << "Bureaucrat " << this->_name << " was hired with grade 150!" << std::endl;
}

Bureaucrat::Bureaucrat ( const std::string& name, int grade ) : _name ( name ) {

	if ( grade > 150 )
		throw GradeTooLowException();

	else if ( grade < 1 )
		throw GradeTooHighException();

	else
		this->_grade = grade;

	std::cout << "Bureaucrat " << this->_name << " was hired with grade " << this->_grade << "!" << std::endl;

}

Bureaucrat::Bureaucrat ( const Bureaucrat& b ) : _name (b._name){

	this->_grade = b._grade;
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

	if (this->_grade == 1)
		throw GradeTooHighException();
	else
		this->_grade--;

	std::cout << this->_name << " got a promotion!";
}

void Bureaucrat::decrementGrade ( void ) {

	if (this->_grade == 150)
		throw GradeTooLowException();
	else
		this->_grade++;

	std::cout << this->_name << " got a demotion!";
}

void Bureaucrat::signForm ( Form& f ) {

	try {

		f.beSigned( *this );
		std::cout << this->getName() << " signed " << f.getName() << std::endl;
	}
	catch ( std::exception& e ) {

		std::cout << this->getName() << " couldn’t sign" << f.getName() << " because " << e.what() << std::endl;
	}
}

// Bureaucrat grade exceeding 150
const char* Bureaucrat::GradeTooHighException::what ( void ) const throw () {

	return "GRADE WAS ABOVE 150!";
}

// Bureaucrat grade less than 0
const char* Bureaucrat::GradeTooLowException::what ( void ) const throw () {

	return "GRADE WAS ABOVE 150!";
}

std::ostream& operator<< ( std::ostream& os, const Bureaucrat& b) {

	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return os;
}
