#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Form {
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_grade_sign;
		const int			_grade_exec;

	public:
							Form ( void );
							Form ( std::string& name );
							Form ( const Form& instance );
		Form&				operator= ( const Form& instance );
							~Form ( void );

		class GradeTooHighException : public std::exception {

			public:
				virtual const char* what() const throw() {
					return ( "Grade was too high to operate on this form!" );
				}

		};

		class GradeTooLowException : public std::exception {

			public:
				virtual const char* what() const throw() {
					return ( "Grade was too low to operate on this form!" );
				}

		};

};

std::ostream&				operator<< ( std::ostream& os, const Form& f );

#endif
