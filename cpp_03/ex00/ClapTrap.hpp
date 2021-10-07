#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

#include <iostream>

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &ref);
		ClapTrap	operator=(const ClapTrap &ref);
		void		attack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
	private:
		void	init();
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
};

#endif
