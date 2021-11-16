#include "WrongAnimal.hpp"

#define endl std::endl

#define cout std::cout

WrongAnimal::WrongAnimal() {
	this->type = "WrongAnimal";
	this->animalSound = "WrongAnimal sound";
	cout << "WrongAnimal created" << endl;
}

WrongAnimal::~WrongAnimal() {
	cout << "WrongAnimal deleted" << endl;
}

void	WrongAnimal::makeSound() const {
	cout << animalSound << endl;
}

std::string const&WrongAnimal::getType() const {
	return this->type;
}


WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &ref) {
	this->type = ref.type;
	this->animalSound = ref.animalSound;
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &ref) {
	this->type = ref.type;
	this->animalSound = ref.animalSound;
}
