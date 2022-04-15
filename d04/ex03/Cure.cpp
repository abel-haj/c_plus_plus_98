#include "Cure.hpp"

/**
 * @brief Construct a new Cure object
 * 
 */
Cure::Cure ( void ) : AMateria("cure")
{}

/**
* @brief Construct a new Cure object from another Cure object
* 
* @param src Cure const & 
*/
Cure::Cure ( Cure const & src ) : AMateria(src)
{}

/**
* @brief Assingment operator overload
* 
* @param rhs 
* @return Cure& 
*/
Cure & Cure::operator= ( Cure const & )
{
	return *this;
}

/**
* @brief Destroy the Cure object
* 
*/
Cure::~Cure ( void )
{}

// [...]

Cure * Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}