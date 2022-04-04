#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template < typename T >
class MutantStack : public std::stack<T>
{
	public:
		typedef T*	iterator;

		MutantStack( void ) {}

		MutantStack( MutantStack const & src ) {

			*this = src;
		}

		MutantStack & operator = ( MutantStack const & src ) {

			while ( !this->empty() )
			{
				this->pop();
			}

			for (size_t i = 0; i < src.size(); i++)
			{
				this->push(src.c[i]);
			}

			return *this;
		}

		~MutantStack( void ) {}

		iterator	begin( void ) {

			return &this->top() - this->size() + 1;
		}

		iterator	end( void ) {

			if (this->size() > 0)
				return &this->top() + 1;
			return NULL;
		}
};

#endif
