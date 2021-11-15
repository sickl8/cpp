#include "Cat.hpp"

#define endl std::endl

#define cout std::cout

Cat::Cat() {
	this->type = "Cat";
	this->animalSound = "Meow";
	cout << "Cat created" << endl;
}

Cat::~Cat() {
	cout << "Cat deleted" << endl;
}

void	Cat::makeSound() const {
	cout << animalSound << endl;
}
Cat	&Cat::operator=(const Cat &ref) {
	this->type = ref.type;
	return *this;
}

Cat::Cat(const Cat &ref) {
	this->type = ref.type;
}
