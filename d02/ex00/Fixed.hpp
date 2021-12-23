#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int	_value;
		static const int _bits;

	public:
		/* default constructor */
		Fixed();
		/* copy constructor */
		Fixed( const Fixed& f );
		/* assignation operator overload */
		Fixed& operator=( Fixed& f );
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		/* destructor */
		~Fixed();
};


#endif
