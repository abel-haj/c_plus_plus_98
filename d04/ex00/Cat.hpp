#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {

	private:
	public:
					Cat ( void );
					Cat ( const Cat& cat );
		Cat&		operator= ( const Cat& cat );
					~Cat ( void );

		void		makeSound ( void ) const;
};

#endif
