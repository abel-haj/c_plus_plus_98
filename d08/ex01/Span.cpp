#include "Span.hpp"
#include <iostream>

Span::Span( void )
: _size( 0 ), _max( 0 ) {}

Span::Span( unsigned int n )
: _size( 0 ), _max( n ) {}

Span::Span( int *s, int *e )
: _size( 0 ), _max( 0 ) {

	for (unsigned int i = 0; i < e - s; i++)
	{
		this->_tab.insert(this->_tab.end(), s[i]);
		this->_size++;
		this->_max++;
	}
}

Span::Span( Span const & src )
{
	*this = src;
}

Span & Span::operator =( Span const & src )
{
	this->_size = src._size;
	this->_max = src._max;
	this->_tab = src._tab;
	return (*this);
}

Span::~Span()
{}

void Span::addNumber( int n ) throw( char const * )
{
	if (_size == _max)
		throw "Out of range!";
	this->_tab.insert(this->_tab.end(), n);
	this->_size++;
}

int Span::shortestSpan( void ) throw( char const * )
{
	if ( this->_size == 1 || this->_size == 0 )
		throw ( "Span size is not enough!" );

	std::vector<int>::iterator	it;

	int f = *this->_tab.begin();
	int s = *(this->_tab.begin() + 1);
	int span = abs(f - s);
	for ( it=this->_tab.begin()+1; it!=(this->_tab.end()-1); ++it )
	{
		f = *it;
		s = *(it + 1);
		if ( span > abs(f - s) )
			span = abs(f - s);
	}
	return (span);
}

int Span::longestSpan( void ) throw( char const * )
{
	if ( this->_size == 1 || this->_size == 0 )
		throw ( "Span size is not enough!" );

	std::vector<int>::iterator	it;

	int f = *this->_tab.begin();
	int s = *(this->_tab.begin() + 1);
	int span = abs(f - s);
	for ( it=this->_tab.begin()+1; it!=(this->_tab.end()-1); ++it )
	{
		f = *it;
		s = *(it + 1);
		if ( span < abs(f - s) )
			span = abs(f - s);
	}
	return (span);
}

void Span::printTab( void )
{
	std::cout << "Span: ";
	for (int i = 0; i < this->_size; i++)
		std::cout << this->_tab[i] << " ";
	std::cout << std::endl;
}
