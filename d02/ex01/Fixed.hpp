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
		~Fixed ( void );
};

/* Insertion operator overload */
std::ostream& operator<< ( std::ostream& lhs, const Fixed& f );

#endif
