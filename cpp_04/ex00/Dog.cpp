#include "Dog.hpp"

#define endl std::endl

#define cout std::cout

Dog::Dog() {
	this->type = "Dog";
	this->animalSound = "Bark";
	cout << "Dog created" << endl;
}

Dog::~Dog() {
	cout << "Dog deleted" << endl;
}

void	Dog::makeSound() const {
	cout << animalSound << endl;
}