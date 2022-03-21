#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

# include "Bureaucrat.hpp"
class Bureaucrat;

class Form {
	private:
		const std::string	_name;
		const int			_grade_exec;
		const int			_grade_sign;
		bool				_isSigned;

	public:
							Form ( void );
							Form ( std::string name, int exec, int sign );
							Form ( const Form& f );
		Form&				operator= ( const Form& f );
							~Form ( void );
		const std::string&	getName ( void ) const;
		const int&	getGradeExec ( void ) const;
		const int&	getGradeSign ( void ) const;
		const bool&	getIsSigned ( void ) const;
		void				beSigned ( const Bureaucrat& b );

		class GradeTooHighException : public std::exception {

			public:
				virtual const char* what() const throw();

		};

		class GradeTooLowException : public std::exception {

			public:
				virtual const char* what() const throw();

		};

		class FormAlreadySigned : public std::exception {

			public:
				virtual const char* what() const throw();

		};

};

std::ostream&				operator<< ( std::ostream& os, const Form& f );

#endif
