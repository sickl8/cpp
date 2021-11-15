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
Dog	&Dog::operator=(const Dog &ref) {
	this->type = ref.type;
	return *this;
}

Dog::Dog(const Dog &ref) {
	this->type = ref.type;
}
