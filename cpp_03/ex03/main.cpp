#include "FragTrap.hpp"

int main() {
	FragTrap	obj("slaptrap");

	obj.attack("5tk");
	obj.takeDamage(10);
	obj.beRepaired(10);
	obj.highFivesGuys();
}