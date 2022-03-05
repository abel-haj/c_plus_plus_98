#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed ( void ) {

	this->_value = 0;

	std::cout << "Default constructor called" << std::endl;
}

/*
 * Copy constructor
 */
Fixed::Fixed ( const Fixed& f ) {

	std::cout << "Copy constructor called" << std::endl;

	*this = f;
}

/*
 * Assignation operator overload
 */
Fixed& Fixed::operator= ( const Fixed& f ) {

	std::cout << "Copy assignment operator called" << std::endl;

	this->_value = f.getRawBits();

	return *this;
}

int Fixed::getRawBits ( void ) const {

	std::cout << "getRawBits member function called" << std::endl;

	return _value;
}

void Fixed::setRawBits ( int const raw ) {

	std::cout << "setRawBits member function called" << std::endl;

	_value = raw;
}

Fixed::~Fixed ( void ) {

	std::cout << "Destructor called" << std::endl;
}
