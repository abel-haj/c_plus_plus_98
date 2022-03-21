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

// COMPARAISON OPERATORS
bool Fixed::operator> (const Fixed& f) const {

	if (this->_value > f._value)
		return true;
	return false;
}

bool Fixed::operator< (const Fixed& f) const {

	if (this->_value < f._value)
		return true;
	return false;
}

bool Fixed::operator>= (const Fixed& f) const {

	if (this->_value >= f._value)
		return true;
	return false;
}

bool Fixed::operator<= (const Fixed& f) const {

	if (this->_value <= f._value)
		return true;
	return false;
}

bool Fixed::operator== (const Fixed& f) const {

	if (this->_value == f._value)
		return true;
	return false;
}

bool Fixed::operator!= (const Fixed& f) const {

	if (this->_value != f._value)
		return true;
	return false;
}
// COMPARAISON OPERATORS

// ARITHMETIC OPERATORS
Fixed Fixed::operator+ (const Fixed& f) const {

	Fixed ret;
	ret._value = this->_value + f._value;
	return ret;
}

Fixed Fixed::operator- (const Fixed& f) const {

	Fixed ret;
	ret._value = this->_value - f._value;
	return ret;
}

Fixed Fixed::operator* (const Fixed& f) const {

	Fixed ret;
	ret._value = (this->toFloat() * f.toFloat()) * (1 << this->_bits);
	return ret;
}

Fixed Fixed::operator/ (const Fixed& f) const {

	Fixed ret;
	ret._value = (this->toFloat() / f.toFloat()) * (1 << this->_bits);
	return ret;
}
// ARITHMETIC OPERATORS

// INCREMET/DECREMENT OPERATORS
Fixed Fixed::operator++ () {

	this->_value = (this->toFloat() + 1) * (1 << this->_bits);

	return *this;
}

Fixed Fixed::operator++ ( int ) {

	Fixed result;

	result = *this;
	this->_value = (this->toFloat() + 1) * (1 << this->_bits);

	return result;
}

Fixed Fixed::operator-- () {

	this->_value = (this->toFloat() - 1) * (1 << this->_bits);

	return *this;
}

Fixed Fixed::operator-- ( int ) {

	Fixed result;

	result = *this;
	this->_value = (this->toFloat() - 1) * (1 << this->_bits);

	return result;
}
// INCREMET/DECREMENT OPERATORS

/*
 * Returns the smallest Fixed point
 */
Fixed& Fixed::min ( Fixed& f1, Fixed& f2 ) {

	if ( f1 > f2 )
		return f2;
	return f1;
}

/*
 * Returns the smallest Fixed point
 */
const Fixed& Fixed::min ( const Fixed& f1, const Fixed& f2 ) {

	if ( f1 > f2 )
		return f2;
	return f1;
}

/*
 * Returns the greatest Fixed point
 */
Fixed& Fixed::max ( Fixed& f1, Fixed& f2 ) {

	if ( f1 > f2 )
		return f1;
	return f2;
}

/*
 * Returns the greatest Fixed point
 */
const Fixed& Fixed::max ( const Fixed& f1, const Fixed& f2 ) {

	if ( f1 > f2 )
		return f1;
	return f2;
}

/*
 * Insertion operator overload
 */
std::ostream& operator<< ( std::ostream& lhs, const Fixed& f ) {

	lhs << f.toFloat();
	return lhs;
}
