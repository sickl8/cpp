#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const &type) {
	this->type = type;
}

AMateria::~AMateria() {}

std::string const &AMateria::getType() const {
	return this->type;
}

void	AMateria::use(ICharacter& target) {
	std::cout << "shouldn't call use of AMateria, target -> " << target.getName() << std::endl;
}