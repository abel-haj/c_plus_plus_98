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
		Fixed ( int const n );
		Fixed ( float const n );
		/* Copy constructor */
		Fixed ( const Fixed& f );
		/* Assignation operator overload */
		Fixed& operator= ( const Fixed& f );
		/* Insertion operator overload */
		int getRawBits ( void ) const;
		void setRawBits ( int const raw );
		float toFloat ( void ) const;
		int toInt ( void ) const;
		/* Destructor */
		~Fixed( void );
};

std::ostream& operator<< ( std::ostream& lhs, const Fixed& f );

#endif
