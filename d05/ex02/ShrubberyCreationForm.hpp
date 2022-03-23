#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form {

	private:
		std::string						_target;
										ShrubberyCreationForm ( void );

	public:
										ShrubberyCreationForm ( std::string const & target );
										ShrubberyCreationForm ( ShrubberyCreationForm const & instance );
		ShrubberyCreationForm&			operator= ( ShrubberyCreationForm const & instance );
										~ShrubberyCreationForm ( void );
		virtual void					execute( const Bureaucrat & executor ) const;
};

#endif
