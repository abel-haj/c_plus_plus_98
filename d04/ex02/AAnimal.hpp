#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal {

	protected:
		std::string				type;

	public:
								AAnimal ( void );
								AAnimal ( const AAnimal& animal );
		virtual AAnimal&		operator= ( const AAnimal& animal );
		virtual					~AAnimal ( void );

		virtual void			makeSound ( void ) const = 0;
		const std::string&		getType ( void ) const;
		void					setType ( const std::string& type );

};

#endif
