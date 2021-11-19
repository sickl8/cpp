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

AMateria	&AMateria::operator=(const AMateria &ref) {
	this->type = ref.type;
	return *this;
}

AMateria::AMateria(const AMateria &ref) {
	this->type = ref.type;
}

AMateria::AMateria() {
	
}
