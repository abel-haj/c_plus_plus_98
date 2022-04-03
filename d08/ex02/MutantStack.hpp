#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template < typename T >
class MutantStack : public std::vector<T>
{
	private:

	public:
		MutantStack( void ) {}
		MutantStack( MutantStack const & src ) {}
		MutantStack operator = ( MutantStack const & src ) {}
		~MutantStack( void ) {}
};

#endif
