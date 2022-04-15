#include "AMateria.hpp"
#include "Character.hpp"

Character::Character( std::string const & name ) : _name( name ), _size( 0 )
{}

Character::Character(Character const & src)
{
	*this = src;
}

Character& Character::operator=(Character const & rhs)
{
	if ( this != &rhs )
	{
		for (int i = 0; i < this->_size; i++)
		{
			delete this->_inventory[i];
		}
		this->_size = rhs._size;
		for (int i = 0; i < this->_size; i++)
		{
			this->_inventory[i] = rhs._inventory[i]->clone();
		}
	}
	return *this;
}

Character::~Character()
{
	for ( int i = 0; i < this->_size; i++ )
	{
		delete this->_inventory[i];
	}
}

std::string const & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	if (this->_size < 4)
	{
		this->_inventory[this->_size] = m->clone();

		this->_size++;
	}
}

void Character::unequip(int idx)
{
	if (idx < this->_size)
	{
		delete this->_inventory[idx];
		this->_size--;
		for (int i = idx; i < this->_size; i++)
		{
			this->_inventory[i] = this->_inventory[i + 1];
		}
	}
}

void Character::use(int idx, ICharacter& target)
{
	if ( idx < this->_size )
	{
		this->_inventory[idx]->use(target);
	}
}