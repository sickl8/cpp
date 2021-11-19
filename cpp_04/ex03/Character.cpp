#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string const &name) {
	this->name = name;
	this->index = 0;
	for (int i = 0; i < 4; i++) {
		this->materia[i] = nullptr;
	}
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		delete this->materia[i];
	}
}

const AMateria *Character::getMateria(int idx) const {
	if (idx < 4 && idx > -1) {
		return this->materia[idx];
	}
	return nullptr;
}

Character &Character::operator=(const Character &ref) {
	for (int i = 0; i < 4; i++) {
		delete this->materia[i];
	}
	for (int i = 0; i < 4; i++) {
		this->materia[i] = ref.getMateria(i)->clone();
	}
	return *this;
}

std::string const & Character::getName() const {
	return this->name;
}
void Character::equip(AMateria* m) {
	if (this->index < 4)
		this->materia[this->index++] = m;
}

void Character::unequip(int idx) {
	if (idx < this->index && idx > -1) {
		this->materia[idx] = nullptr;
		for (int i = idx; i < this->index - 1; i++)
			this->materia[i] = this->materia[i + 1];
		this->index--;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx > -1 && idx < this->index) {
		this->materia[idx]->use(target);
	}
}

Character::Character(const Character &ref) {
	
}

Character::Character() {
	
}
