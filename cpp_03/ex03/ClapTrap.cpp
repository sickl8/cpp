#include "ClapTrap.hpp"

#define out std::cout
#define endl std::endl

ClapTrap::ClapTrap() {
	out << "ClapTrap default constructor called" << endl;
	this->init(10, 10, 0);
}

ClapTrap::~ClapTrap() {
	out << "ClapTrap deconstructor called" << endl;
}

ClapTrap::ClapTrap(std::string name): name(name) {
	out << "ClapTrap parameterized constructor called (std::string)" << endl;
	this->init(10, 10, 0);
}

void		ClapTrap::attack(std::string const & target) {
	out << "ClapTrap " << this->name << " attack " << target << ", causing " << this->attackDamage << " point" << (this->attackDamage == 1 ? "" : "s") << " of damage!" << endl;
}

void		ClapTrap::takeDamage(unsigned int amount) {
	out << this->name << " takes " << amount << " point" << (amount == 1 ? "" : "s") <<  " of damage!" << endl;
}

void		ClapTrap::beRepaired(unsigned int amount) {
	out << this->name << " gets repaired for " << amount << " point" << (amount == 1 ? "" : "s") <<  " of energy!" << endl;
}

void		ClapTrap::init(int a, int b, int c) {
	this->hitPoints = a;
	this->energyPoints = b;
	this->attackDamage = c;
}
