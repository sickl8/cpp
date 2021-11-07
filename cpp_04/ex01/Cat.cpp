#include "Cat.hpp"

#define endl std::endl

#define cout std::cout

Cat::Cat() {
	this->type = "Cat";
	this->animalSound = "Meow";
	this->brain = new Brain();
	cout << "Cat created" << endl;
}

Cat::~Cat() {
	delete this->brain;
	cout << "Cat deleted" << endl;
}

void	Cat::makeSound() const {
	cout << animalSound << endl;
}

Cat::Cat(const Cat &ref) {
	this->type = "Cat";
	this->animalSound = "Meow";
	this->brain = new Brain();
	*this = ref;
}

Cat &Cat::operator=(const Cat &ref) {
	this->brain[0] = ref.brain[0];
	return *this;
}