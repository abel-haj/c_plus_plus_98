#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() {

	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

/*
 *
 */
Fixed::Fixed(int const n) {
}

/*
 *
 */
Fixed::Fixed(float const n) {
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

	std::cout << "Assignation operator called" << std::endl;
	_value = f.getRawBits();

	return *this;
}

/*
 * insertion operator overload
 */
Fixed& Fixed::operator<<( Fixed& f ) {
}

int Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits( int const raw ) {

	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

/*
 *
 */
float Fixed::toFloat( void ) const {
}

int Fixed::toInt( void ) const {

	return roundf(this->_value);
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}
