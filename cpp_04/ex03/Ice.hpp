#ifndef __ICE_HPP__
# define __ICE_HPP__

#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice(const Ice &ref);
		Ice	&operator=(const Ice &ref);
		Ice();
		~Ice();
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
