#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	protected:
		std::string				type;

	public:
								Cure ( void );
								Cure ( Cure const & src );
		Cure&					operator= ( Cure const & );
		virtual					~Cure ( void );

		virtual Cure*			clone() const;
		virtual void			use(ICharacter& target);
};

#endif