#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat ( void ) {

	this->_grade = 150;
	this->_name	= "worker";

	std::cout << "Bureaucrat " << this->_name << " was hired with grade 150!" << std::endl;
}

Bureaucrat::Bureaucrat ( std::string& name, int grade ) : _name ( name ) {

	try {

		if ( grade > 150 )
			throw GradeTooLowException::exception();
		// else if ( grade < 0 )
		// 	throw GradeTooHighException::exception();
		else
		this->_grade = grade;
		std::cout << "Bureaucrat " << this->_name << " was hired with grade " << this->_grade << "!" << std::endl;
	}
	
	catch (std::exception& e) {

		// std::cout << e.what() << std::endl;
		std::cout << "TOO LOW" << std::endl;
	}

	// catch (std::exception& e) {

	// 	std::cout << "STD EXCEPTION" << std::endl;
	// }

}

Bureaucrat::Bureaucrat ( const Bureaucrat& b ) : _name (b._name){

	// this->_name = b._name;
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
