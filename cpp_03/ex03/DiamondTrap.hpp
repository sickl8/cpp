#ifndef __DIAMONDTRAP_HPP__
# define __DIAMONDTRAP_HPP__

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(std::string name);
		void	attack(std::string const & ref);
		void	whoAmI();
	private:
		std::string name;
};

#endif
