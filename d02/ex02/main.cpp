#include "Fixed.hpp"

int	main( void ) {

	{
		Fixed a ( 1 );
		Fixed const b( 2 );
		Fixed const c( 2 );
		Fixed const d( -1 );

		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl;

		std::cout << ( a < b ) << " : " << a.toInt() << " < " << b.toInt() << std::endl;
		std::cout << ( b < c ) << " : " << b.toInt() << " < " << c.toInt() << std::endl;
		std::cout << ( b == c ) << " : " << b.toInt() << " == " << c.toInt() << std::endl;
		std::cout << ( c < d ) << " : " << c.toInt() << " < " << d.toInt() << std::endl;
		std::cout << ( c > d ) << " : " << c.toInt() << " > " << d.toInt() << std::endl;
	}

	std::cout << std::endl;

	{
		Fixed a ( Fixed( 22 ) + Fixed( 31 ));
		std::cout << "22 + 31 : " << a << std::endl;

		Fixed b ( Fixed( 52 ) * Fixed( 11 ));
		std::cout << "52 * 11 : " << b << std::endl;

		Fixed c ( Fixed( 28 ) + Fixed( -5 ));
		std::cout << "28 + -5 : " << c << std::endl;

		Fixed d ( Fixed( 29 ) / Fixed( 3 ));
		std::cout << "29 / 3  : " << d << std::endl;
	}

	std::cout << std::endl;

	{
		Fixed a (1);
		Fixed b (1);

		std::cout << a << std::endl;
		std::cout << b << std::endl;

		std::cout << ++a << std::endl;
		std::cout << ++b << std::endl;
		std::cout << std::endl;

		std::cout << a++ << std::endl;
		std::cout << b++ << std::endl;
		std::cout << std::endl;

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << std::endl;

		a--;
		b--;

		std::cout << a << std::endl;
		std::cout << b << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << Fixed::max(Fixed(1), Fixed(2)) << std::endl;

		const Fixed a (2);
		const Fixed b (3);
		std::cout << Fixed::max(b, a) << std::endl;

		std::cout << Fixed::min(Fixed(20), Fixed(10)) << std::endl;

		const Fixed c (30);
		const Fixed d (40);
		std::cout << Fixed::min(c, d) << std::endl;
	}

	return 0;
}
