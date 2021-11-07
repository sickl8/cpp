#include "Dog.hpp"

#define endl std::endl

#define cout std::cout

Dog::Dog() {
	this->type = "Dog";
	this->animalSound = "Bark";
	this->brain = new Brain();
	cout << "Dog created" << endl;
}

Dog::~Dog() {
	delete this->brain;
	cout << "Dog deleted" << endl;
}

void	Dog::makeSound() const {
	cout << animalSound << endl;
}

Dog::Dog(const Dog &ref) {
	this->type = "Dog";
	this->animalSound = "Bark";
	this->brain = new Brain();
	*this = ref;
}

Dog &Dog::operator=(const Dog &ref) {
	this->brain[0] = ref.brain[0];
	return *this;
}