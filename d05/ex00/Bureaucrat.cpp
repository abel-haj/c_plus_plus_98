#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat ( void ) : _name( "worker" ) {

	this->_grade = 150;
	std::cout << "Bureaucrat " << this->_name << " was hired with grade 150!" << std::endl;
}

Bureaucrat::Bureaucrat ( const std::string& name, int grade ) : _name ( name ) {

	if ( grade > 150 )
		throw Bureaucrat::GradeTooLowException();

	else if ( grade < 0 )
		throw Bureaucrat::GradeTooHighException();

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

std::string Bureaucrat::getName ( void ) const {

	return this->_name;
}

int Bureaucrat::getGrade ( void ) const {

	return this->_grade;
}

std::ostream& operator<< ( std::ostream& os, const Bureaucrat& b) {

	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return os;
}
