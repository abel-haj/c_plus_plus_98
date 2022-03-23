#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {

	private:

	public:
							Intern ( void );
							Intern ( const Intern& instance );
		Intern &			operator= ( const Intern& instance );
							~Intern ( void );
		Form				*makeForm ( std::string const & form, std::string const & target);
};

#endif
