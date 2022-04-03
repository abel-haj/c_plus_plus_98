#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <exception>
# include <iostream>

class Span
{
	private:
		int					_size;
		int					_max;
		std::vector<int>	_tab;
		Span( void );

	public:
		Span( unsigned int n );
		Span( int *a, int *b );
		Span( Span const & src );
		Span & operator =( Span const & src );
		~Span( void );

		void				addNumber( int n ) throw( char const * );
		int					shortestSpan( void ) throw( char const * );
		int					longestSpan( void ) throw( char const * );
		void				printTab( void );
};

#endif
