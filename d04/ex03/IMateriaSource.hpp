#ifndef IMATERIASSOURCE_HPP
# define IMATERIASOURCE_HPP

class IMateriaSource {

	public:
		virtual				~IMateriaSource() {}
		virtual void		learnMateria(AMateria*) = 0;
		virtual AMateria*	createMateria(std::string const & type) = 0;

};

#endif