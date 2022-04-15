#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	protected:
		std::string				type;

	public:
								Ice ( void );
								Ice ( Ice const & src );
		Ice&					operator= ( Ice const & );
		virtual					~Ice ( void );

		virtual Ice*			clone() const;
		virtual void			use(ICharacter& target);
};

#endif