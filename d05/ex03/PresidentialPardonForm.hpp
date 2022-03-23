#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form {

	private:
		std::string						_target;
										PresidentialPardonForm ( void );

	public:
										PresidentialPardonForm ( std::string const & target );
										PresidentialPardonForm ( PresidentialPardonForm const & instance );
		PresidentialPardonForm&			operator= ( PresidentialPardonForm const & instance );
										~PresidentialPardonForm ( void );
		virtual void					execute( const Bureaucrat & executor ) const;
};

#endif
