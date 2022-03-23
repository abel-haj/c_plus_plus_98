#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#define NEWLINE std::cout << std::endl;
#define SEPERATE NEWLINE std::cout << "----------------" << std::endl;

int	main () {

	/*
	 * SHRUBBERYCREATIONFORM START
	 */
	{
	NEWLINE
		Bureaucrat b( "florist", 150 );
		ShrubberyCreationForm f( "home" ); // e:137 s:145
	NEWLINE
		std::cout << b << std::endl;
		std::cout << f << std::endl;
	NEWLINE
		b.signForm( f );
		b.executeForm( f );
	NEWLINE
	}
SEPERATE
	{
	NEWLINE
		Bureaucrat b( "florist", 145 );
		ShrubberyCreationForm f( "home" ); // e:137 s:145
	NEWLINE
		std::cout << b << std::endl;
		std::cout << f << std::endl;
	NEWLINE
		b.signForm( f );
		b.executeForm( f );
	NEWLINE
	}
SEPERATE
	{
	NEWLINE
		Bureaucrat b( "florist", 137 );
		ShrubberyCreationForm f( "home" ); // e:137 s:145
	NEWLINE
		std::cout << b << std::endl;
		std::cout << f << std::endl;
	NEWLINE
		b.signForm( f );
		b.executeForm( f );
	NEWLINE
	}
	/*
	 * SHRUBBERYCREATIONFORM END
	 */


	/*
	 * ROBOTOMYREQUESTFROM START
	 */
	{
	NEWLINE
		Bureaucrat b( "Bob", 150 );
		RobotomyRequestForm f( "ClapTrap" ); // e:45 s:72
	NEWLINE
		std::cout << b << std::endl;
		std::cout << f << std::endl;
	NEWLINE
		b.signForm( f );
		b.executeForm( f );
	NEWLINE
	}
SEPERATE
	{
	NEWLINE
		Bureaucrat b( "Bob", 72 );
		RobotomyRequestForm f( "ClapTrap" ); // e:45 s:72
	NEWLINE
		std::cout << b << std::endl;
		std::cout << f << std::endl;
	NEWLINE
		b.signForm( f );
		b.executeForm( f );
	NEWLINE
	}
SEPERATE
	{
	NEWLINE
		Bureaucrat b( "Bob", 45 );
		RobotomyRequestForm f( "ClapTrap" ); // e:45 s:72
	NEWLINE
		std::cout << b << std::endl;
		std::cout << f << std::endl;
	NEWLINE
		b.signForm( f );
		std::cout << "vvvvvvvvvvv" << std::endl;
		b.executeForm( f );
		std::cout << "^^^^^^^^^^^" << std::endl;
	NEWLINE
	}
	/*
	 * ROBOTOMYREQUESTFROM END
	 */


	/*
	 * PRESEDENTIALPARDONFORM START
	 */
	{
	NEWLINE
		Bureaucrat b( "minister", 150 );
		PresidentialPardonForm f( "Villain" ); // e:5 s:25
	NEWLINE
		std::cout << b << std::endl;
		std::cout << f << std::endl;
	NEWLINE
		b.signForm( f );
		b.executeForm( f );
	NEWLINE
	}
SEPERATE
	{
	NEWLINE
		Bureaucrat b( "minister", 25 );
		PresidentialPardonForm f( "Villain" ); // e:5 s:25
	NEWLINE
		std::cout << b << std::endl;
		std::cout << f << std::endl;
	NEWLINE
		b.signForm( f );
		b.executeForm( f );
	NEWLINE
	}
SEPERATE
	{
	NEWLINE
		Bureaucrat b( "Minister", 5 );
		PresidentialPardonForm f( "Villain" ); // e:5 s:25
	NEWLINE
		std::cout << b << std::endl;
		std::cout << f << std::endl;
	NEWLINE
		b.signForm( f );
		std::cout << "vvvvvvvvvvv" << std::endl;
		b.executeForm( f );
		std::cout << "^^^^^^^^^^^" << std::endl;
	NEWLINE
	}
	/*
	 * PRESEDENTIALPARDONFORM END
	 */

	return 0;
}