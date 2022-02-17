#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	private:
	public:
					WrongCat ( void );
					WrongCat ( const WrongCat& cat );
		WrongCat&		operator= ( const WrongCat& cat );
					~WrongCat ( void );

		void		makeSound ( void ) const;
};

#endif
