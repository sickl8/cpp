#include "DiamondTrap.hpp"

#define out std::cout
#define endl std::endl

DiamondTrap::DiamondTrap() {
	out << "DiamondTrap default constructor called" << endl;
	this->init(100, 50, 30);
}

DiamondTrap::~DiamondTrap() {
	out << "DiamondTrap deconstructor called" << endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name") {
	this->name = name;
	out << "DiamondTrap parameterized constructor called (std::string)" << endl;
	this->init(100, 50, 30);
}

void	DiamondTrap::attack(std::string const & ref) {
	ScavTrap::attack(ref);
}

void	DiamondTrap::whoAmI() {
	out << "My name is " << this->name << endl;
	out << "My clapTrap name is " << ClapTrap::name << endl;
}