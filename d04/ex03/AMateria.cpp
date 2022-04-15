#include "AMateria.hpp"

AMateria::AMateria ( void )
{}

AMateria::AMateria ( std::string const & type)
{
	this->type = type;
}

AMateria::AMateria ( AMateria const & src )
{
	*this = src;
}

AMateria & AMateria::operator= ( AMateria const & )
{
	return *this;
}

AMateria::~AMateria ( void )
{}

std::string const & AMateria::getType() const //Returns the materia type
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << "AMateria::use()" << std::endl;
}