#ifndef __DIAMONDTRAP_HPP__
# define __DIAMONDTRAP_HPP__

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ClapTrap, public FragTrap {
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(std::string name);
};

#endif
