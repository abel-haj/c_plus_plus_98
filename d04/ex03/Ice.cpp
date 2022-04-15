#include "Ice.hpp"

/**
 * @brief Construct a new Ice object
 * 
 */
Ice::Ice ( void ) : AMateria("ice")
{}

/**
* @brief Construct a new Ice object from another Ice object
* 
* @param src Ice const & 
*/
Ice::Ice ( Ice const & src ) : AMateria(src)
{}

/**
* @brief Assingment operator overload
* 
* @param rhs 
* @return Ice& 
*/
Ice & Ice::operator= ( Ice const & )
{
	return *this;
}

/**
* @brief Destroy the Ice object
* 
*/
Ice::~Ice ( void )
{}

// [...]

Ice * Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}