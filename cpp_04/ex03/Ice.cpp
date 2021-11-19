#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(): AMateria("ice") {}

Ice::~Ice() {}

AMateria* Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
Ice	&Ice::operator=(const Ice &ref) {
	this->type = ref.type;
	return *this;
}

Ice::Ice(const Ice &ref) {
	this->type = ref.type;
}
