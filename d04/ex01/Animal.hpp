#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

	protected:
		std::string				type;

	public:
								Animal ( void );
								Animal ( const Animal& animal );
		virtual Animal&			operator= ( const Animal& animal );
		virtual					~Animal ( void );

		virtual void			makeSound ( void ) const;
		const std::string&		getType ( void ) const;
		void					setType ( const std::string& type );

};

#endif
