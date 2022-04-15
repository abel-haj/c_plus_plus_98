#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <stack>
# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string const		_name;
		AMateria *				_inventory[4];
		int						_size;
		std::stack<AMateria*>	_garbage;

	public:
								Character( std::string const & name = "nameless" );
								Character(Character const & src);
		Character&				operator=(Character const & rhs);
								~Character(void);
		std::string const &		getName(void) const;
		void					equip(AMateria* m);
		void					unequip(int idx);
		void					use(int idx, ICharacter& target);
};

#endif