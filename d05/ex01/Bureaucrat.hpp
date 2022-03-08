#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"
class Form;

class Bureaucrat {

	private:
		const std::string		_name;
		int						_grade;

	public:
								Bureaucrat ( void );
								Bureaucrat ( const std::string& name, int grade );
								Bureaucrat ( const Bureaucrat& b );
		Bureaucrat&				operator= ( const Bureaucrat& b );
								~Bureaucrat ( void );

		const std::string&		getName ( void ) const;
		const int&				getGrade ( void ) const;
		void					incrementGrade ( void );
		void					decrementGrade ( void );
		void					signForm ( Form& f );

	class GradeTooHighException : public std::exception {

		public:
			const char* what() const throw ();

	};

	class GradeTooLowException : public std::exception {

		public:
			const char* what() const throw ();

	};

};

std::ostream&					operator<< ( std::ostream& os, const Bureaucrat& b);

#endif
