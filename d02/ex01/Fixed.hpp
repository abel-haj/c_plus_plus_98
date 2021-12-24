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
		Fixed(int const n);
		Fixed(float const n);
		/* copy constructor */
		Fixed( const Fixed& f );
		/* assignation operator overload */
		Fixed& operator=( Fixed& f );
		/* insertion operator overload */
		Fixed& operator<<( Fixed& f );
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		/* destructor */
		~Fixed();
};


#endif
