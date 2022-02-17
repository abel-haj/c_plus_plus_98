#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {

	private:
	public:
					Dog ( void );
					Dog ( const Dog& dog );
		Dog&		operator= ( const Dog& dog );
					~Dog ( void );

		void		makeSound ( void ) const;
};

#endif
