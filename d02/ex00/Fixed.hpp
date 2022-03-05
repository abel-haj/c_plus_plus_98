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
		/* Copy constructor */
		Fixed ( const Fixed& f );
		/* Assignation operator overload */
		Fixed& operator= ( const Fixed& f );
		/* Accessors */
		int getRawBits ( void ) const;
		void setRawBits ( int const raw );
		/* Destructor */
		~Fixed ( void );
};


#endif
