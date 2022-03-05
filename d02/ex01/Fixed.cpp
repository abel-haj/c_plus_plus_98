#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed ( void ) {

	this->_value = 0;

	std::cout << "Default constructor called" << std::endl;
}

/*
 * Int constructor overload
 */
Fixed::Fixed ( int const n ) {

	this->_value = n * ( 1 << this->_bits );

	std::cout << "Int constructor called" << std::endl;
}

/*
 * Float constructor overload
 */
Fixed::Fixed ( float const n ) {

	this->_value = roundf(n * ( 1 << this->_bits ));

	std::cout << "Float constructor called" << std::endl;
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

	this->_value = f._value;

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

float Fixed::toFloat ( void ) const {

	return ( (float) (this->_value) / (1 << this->_bits) );
}

int Fixed::toInt ( void ) const {

	return (int)( this->_value / (1 << this->_bits) );
}

Fixed::~Fixed ( void ) {

	std::cout << "Destructor called" << std::endl;
}

/*
 * Insertion operator overload
 */
std::ostream& operator<< ( std::ostream& lhs, const Fixed& f ) {

	lhs << f.toFloat();
	return lhs;
}
