#include "ScavTrap.hpp"

int main() {
	ScavTrap	obj("slaptrap");

	obj.attack("5tk");
	obj.takeDamage(10);
	obj.beRepaired(10);
	obj.guardGate();
}