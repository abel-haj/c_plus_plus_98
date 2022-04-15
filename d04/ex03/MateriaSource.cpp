#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) : _size( 0 )
{}

MateriaSource::MateriaSource( MateriaSource const & src )
{
	*this = src;
}

int MateriaSource::getSize( void ) const
{
	return this->_size;
}

MateriaSource&	MateriaSource::operator=( MateriaSource const & rhs )
{
	if ( this != &rhs )
	{
		for ( int i = 0; i < this->_size; i++ )
		{
			delete this->_inventory[i];
		}
		this->_size = rhs._size;
		for ( int i = 0; i < this->_size; i++ )
		{
			this->_inventory[i] = rhs._inventory[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource( void )
{
	for ( int i = 0; i < this->_size; i++ )
	{
		delete this->_inventory[i];
	}
}

void			MateriaSource::learnMateria( AMateria * materia )
{
	if ( this->_size < 4 )
	{
		this->_inventory[this->_size] = materia;
		this->_size++;
	}
}

AMateria*		MateriaSource::createMateria( std::string const & type )
{
	AMateria * materia = NULL;

	for (int i = 0; i < this->_size; i++)
	{
		if ( type == this->_inventory[i]->getType() )
		{
			materia = this->_inventory[i];
			break;
		}
	}

	return materia;
}