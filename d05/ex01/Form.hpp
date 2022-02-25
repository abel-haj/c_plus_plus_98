#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form {
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_grade_sign;
		const int			_grade_exec;

	public:
							Form ( void );
							Form ( const std::string& name );
							Form ( const Form& f );
		Form&				operator= ( const Form& f );
							~Form ( void );
		void				beSigned ( const Bureaucrat& b );

		class GradeTooHighException : public std::exception {

			public:
				virtual const char* what() const throw();

		};

		class GradeTooLowException : public std::exception {

			public:
				virtual const char* what() const throw();

		};

};

std::ostream&				operator<< ( std::ostream& os, const Form& f );

#endif
