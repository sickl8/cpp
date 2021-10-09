#include "ScavTrap.hpp"

#define out std::cout
#define endl std::endl

ScavTrap::ScavTrap() {
	out << "ScavTrap default constructor called" << endl;
	this->init(100, 50, 20);
}

ScavTrap::~ScavTrap() {
	out << "ScavTrap deconstructor called" << endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	out << "ScavTrap parameterized constructor called (std::string)" << endl;
	this->init(100, 50, 20);
}

void		ScavTrap::attack(std::string const & target) {
	out << "ScavTrap " << this->name << " attack " << target << ", causing " << this->attackDamage << " point" << (this->attackDamage == 1 ? "" : "s") << " of damage!" << endl;
}

void		ScavTrap::guardGate() {
	out << "ScavTrap has enterred in Gate keeper mode" << endl;
}