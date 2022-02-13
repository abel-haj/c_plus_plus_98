#include "Fixed.hpp"

Fixed::Fixed() {

	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

/*
 * copy constructor
 */
Fixed::Fixed( const Fixed& f ) {

	std::cout << "Copy constructor called" << std::endl;
	this->_value = f.getRawBits();
}

/*
 * assignation operator overload
 */
Fixed& Fixed::operator=( Fixed& f ) {

	std::cout << "Copy assignment operator called" << std::endl;
	_value = f.getRawBits();

	return *this;
}

int Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits( int const raw ) {

	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}
