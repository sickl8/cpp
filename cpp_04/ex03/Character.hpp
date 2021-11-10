#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__

#include "ICharacter.hpp"

class Character : public ICharacter {
	protected:
		std::string	name;
		int			index;
		AMateria	*materia[4];
	public:
		Character(std::string const &name);
		Character &operator=(const Character &ref);
		~Character();
		const AMateria *getMateria(int idx) const;
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
