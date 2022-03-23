#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form {

	private:
		std::string						_target;
										RobotomyRequestForm ( void );

	public:
										RobotomyRequestForm ( std::string const & target );
										RobotomyRequestForm ( RobotomyRequestForm const & instance );
		RobotomyRequestForm&			operator= ( RobotomyRequestForm const & instance );
										~RobotomyRequestForm ( void );
		virtual void					execute( const Bureaucrat & executor ) const;
};

#endif
