#include "Intern.hpp"

#define NEWLINE std::cout << std::endl;
#define SEPERATE NEWLINE std::cout << "----------------" << std::endl;

int	main () {

	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		delete rrf;
	}
SEPERATE
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;
	}
SEPERATE
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		delete rrf;
	}
SEPERATE
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("shrubbery", "Bender");
		delete rrf;
	}

	return 0;
}