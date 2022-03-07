#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int	_value;
		static const int _bits = 8;

	public:
		/* Default constructor */
		Fixed ( void );
		/* Int constructor */
		Fixed ( int const n );
		/* Float constructor */
		Fixed ( float const n );
		/* Copy constructor */
		Fixed ( const Fixed& f );
		/* Assignation operator overload */
		Fixed& operator= ( const Fixed& f );
		/* Accessors */
		int getRawBits ( void ) const;
		void setRawBits ( int const raw );
		/* Member function */
		float toFloat ( void ) const;
		/* Member function */
		int toInt ( void ) const;
		/* Destructor */
		~Fixed( void );

		// COMPARAISON OPERATORS
		bool operator> (const Fixed& f) const;
		bool operator< (const Fixed& f) const;
		bool operator>= (const Fixed& f) const;
		bool operator<= (const Fixed& f) const;
		bool operator== (const Fixed& f) const;
		bool operator!= (const Fixed& f) const;
		// COMPARAISON OPERATORS

		// ARITHMETIC OPERATORS
		Fixed operator+ (const Fixed& f) const;
		Fixed operator- (const Fixed& f) const;
		Fixed operator* (const Fixed& f) const;
		Fixed operator/ (const Fixed& f) const;
		// ARITHMETIC OPERATORS

		// INCREMET/DECREMENT OPERATORS
		Fixed operator++ ();
		Fixed operator++ ( int );
		Fixed operator-- ();
		Fixed operator-- ( int );
		// INCREMET/DECREMENT OPERATORS

		static Fixed& min ( Fixed& f1, Fixed& f2 );
		static const Fixed& min ( const Fixed& f1, const Fixed& f2 );
		static Fixed& max ( Fixed& f1, Fixed& f2 );
		static const Fixed& max ( const Fixed& f1, const Fixed& f2 );
};

/* Insertion operator overload */
std::ostream& operator<< ( std::ostream& lhs, const Fixed& f );

#endif
