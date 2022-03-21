#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {

	private:
		Brain*		_brain;

	public:
					Dog ( void );
					Dog ( const Dog& dog );
		Dog&		operator= ( const Dog& dog );
		virtual		~Dog ( void );

		void		makeSound ( void ) const;
};

#endif
