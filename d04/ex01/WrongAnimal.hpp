#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {

	protected:
		std::string				type;

	public:
								WrongAnimal ( void );
								WrongAnimal ( const WrongAnimal& animal );
		WrongAnimal&			operator= ( const WrongAnimal& animal );
								~WrongAnimal ( void );

		void					makeSound ( void ) const;
		const std::string&		getType ( void ) const;
		void					setType ( const std::string& type );

};

#endif
