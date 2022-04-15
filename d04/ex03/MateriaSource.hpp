#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		int			_size;
		AMateria	*_inventory[4];

	public:
						MateriaSource( void );
						MateriaSource( MateriaSource const & src );
		MateriaSource&	operator=( MateriaSource const & rhs );
						~MateriaSource( void );

		void			learnMateria( AMateria * materia );
		AMateria*		createMateria( std::string const & type );

		int				getSize( void ) const;
};

#endif