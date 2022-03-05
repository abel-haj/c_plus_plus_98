#include "Fixed.hpp"

int	main( void ) {

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	// Fixed a ( 1 );
	// Fixed const b( 2 );
	// Fixed const c( 2 );
	// Fixed const d( -1 );

	// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	// std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	// std::cout << ( a < b ) << " : " << a.toInt() << " < " << b.toInt() << std::endl;
	// std::cout << ( b < c ) << " : " << b.toInt() << " < " << c.toInt() << std::endl;
	// std::cout << ( b == c ) << " : " << b.toInt() << " == " << c.toInt() << std::endl;
	// std::cout << ( c < d ) << " : " << c.toInt() << " < " << d.toInt() << std::endl;
	// std::cout << ( c > d ) << " : " << c.toInt() << " > " << d.toInt() << std::endl;

	// Fixed a ( Fixed( 22 ) + Fixed( 31 ));
	// std::cout << a << std::endl;

	// Fixed b ( Fixed( 52 ) * Fixed( 11 ));
	// std::cout << b << std::endl;

	// Fixed c ( Fixed( 28 ) - Fixed( 5 ));
	// std::cout << c << std::endl;

	// Fixed d ( Fixed( 29 ) / Fixed( 3 ));
	// std::cout << d << std::endl;

	// Fixed a (1);
	// Fixed b (1);

	// std::cout << a << std::endl;
	// std::cout << b << std::endl;

	// b++;
	// std::cout << ++a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << std::endl;

	// // ++a;
	// // ++a;

	// b++;
	// std::cout << a++ << std::endl;
	// std::cout << b << std::endl;
	// std::cout << std::endl;

	// std::cout << a << std::endl;

	return 0;
}