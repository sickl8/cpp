#ifndef __CURE_HPP__
# define __CURE_HPP__

#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure(const Cure &ref);
		Cure	&operator=(const Cure &ref);
		Cure();
		~Cure();
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
