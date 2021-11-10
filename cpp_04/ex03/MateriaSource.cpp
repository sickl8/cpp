#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		this->materia[i] = nullptr;
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		delete this->materia[i];
	}
}

void	MateriaSource::learnMateria(AMateria* mt) {
	for (int i = 0; i < 4; i++) {
		if (this->materia[i] == nullptr) {
			this->materia[i] = mt;
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (this->materia[i] && this->materia[i]->getType() == type) {
			return this->materia[i]->clone();
		}
	}
	return nullptr;
}