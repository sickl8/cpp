#include "FragTrap.hpp"

#define out std::cout
#define endl std::endl

FragTrap::FragTrap() {
	out << "FragTrap default constructor called" << endl;
	this->init(100, 100, 30);
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	out << "FragTrap parameterized constructor called (std::string)" << endl;
	this->init(100, 100, 30);
}

FragTrap::~FragTrap() {
	out << "FragTrap deconstructor called" << endl;
}

void	FragTrap::highFivesGuys() {
	out << "High fives all around! fffpshshsh, fffpshshsh!" << endl;
}