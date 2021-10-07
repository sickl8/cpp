#include "ClapTrap.hpp"

#define out std::cout
#define endl std::endl

ClapTrap::ClapTrap() {
	out << "Default constructor called" << endl;
	this->init();
}

ClapTrap::~ClapTrap() {
	out << "Deconstructor called" << endl;
}

ClapTrap::ClapTrap(std::string name): name(name) {
	out << "Parameterized constructor called (std::string)" << endl;
	this->init();
}

ClapTrap::ClapTrap(const ClapTrap &ref) {
	out << "Parameterized constructor called (const ClapTrap &)" << endl;
	*this = ref;
}

ClapTrap	ClapTrap::operator=(const ClapTrap &ref) {
	this->name = ref.name;
	this->hitPoints = ref.hitPoints;
	this->energyPoints = ref.energyPoints;
	this->attackDamage = ref.attackDamage;
	return *this;
}

void		ClapTrap::attack(std::string const & target) {
	out << "ClapTrap " << this->name << " attack " << target << ", causing " << this->attackDamage << " point" << (this->attackDamage == 1 ? "" : "s") << " of damage!" << endl;
}

void		ClapTrap::takeDamage(unsigned int amount) {
	out << "ClapTrap " << this->name << " takes " << amount << " point" << (amount == 1 ? "" : "s") <<  " of damage!" << endl;
}

void		ClapTrap::beRepaired(unsigned int amount) {
	out << "ClapTrap " << this->name << " gets repaired for " << amount << " point" << (amount == 1 ? "" : "s") <<  " of energy!" << endl;
}

void		ClapTrap::init() {
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}
