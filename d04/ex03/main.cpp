#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main ( void )
{
	{
		IMateriaSource* src = new MateriaSource();

		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}

	{
		MateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());

		Character* bob = new Character("Bob");

		Character* joe = new Character("Joe");
		joe->equip(src->createMateria("ice"));
		joe->use(0, *bob);

		*bob = *joe;
		bob->use(0, *joe);

		Character* ace = new Character(*joe);

		delete bob;
		delete joe;
		delete ace;
	}

	system( "leaks -q interface" );

	return 0;
}