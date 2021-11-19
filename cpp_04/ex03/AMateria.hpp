#ifndef __AMATERIA_HPP__
# define __AMATERIA_HPP__

#include <iostream>

// # include "ICharacter.hpp"
class ICharacter;

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria();
		AMateria(const AMateria &ref);
		AMateria	&operator=(const AMateria &ref);
		AMateria(std::string const & type);
		virtual ~AMateria();
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
