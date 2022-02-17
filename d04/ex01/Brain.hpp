#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {

	protected:
		std::string				ideas[100];

	public:
								Brain ( void );
								Brain ( const Brain& animal );
		Brain&					operator= ( const Brain& animal );
								~Brain ( void );

};

#endif
