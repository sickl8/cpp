#include"Animal.hpp"

#define endl std::endl

#define cout std::cout

Animal::Animal(std::string _type) {
	this->type = _type;
	cout << "Animal created" << endl;
}


void	Animal::makeSound() const {
	cout << "I can't make a sound since I don't know what I am" << endl;
}

std::string const&Animal::getType() const {
	return this->type;
}


Animal::Animal() {
	this->type = "";
	cout << "Animal created" << endl;
}

Animal::  ~    Animal() {
	cout << "Animal deleted" << endl;
}

Animal	&Animal::operator=(const Animal &ref) {}

Animal::Animal(const Animal &ref) {}
