#include "Animal.hpp"

#define endl std::endl

#define cout std::cout

Animal::Animal() {
	this->type = "";
	cout << "Animal created" << endl;
}

Animal::Animal(std::string _type) {
	this->type = _type;
	cout << "Animal created" << endl;
}

Animal::~Animal() {
	cout << "Animal deleted" << endl;
}

void	Animal::makeSound() const {
	cout << "I can't make a sound since I don't know what I am" << endl;
}

std::string const&Animal::getType() const {
	return this->type;
}

Animal	&Animal::operator=(const Animal &ref) {
	this->type = ref.type;
	return *this;
}

Animal::Animal(const Animal &ref) {
	this->type = ref.type;
}
