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