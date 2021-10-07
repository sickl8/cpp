#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

#include <iostream>

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		void		attack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
	protected:
		void		init(int, int, int);
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
};

#endif
