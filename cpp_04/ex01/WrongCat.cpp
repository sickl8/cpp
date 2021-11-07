#include "WrongCat.hpp"

#define endl std::endl

#define cout std::cout

WrongCat::WrongCat() {
	this->type = "WrongCat";
	this->animalSound = "Meow";
	cout << "WrongCat created" << endl;
}

WrongCat::~WrongCat() {
	cout << "WrongCat deleted" << endl;
}

void	WrongCat::makeSound() const {
	cout << animalSound << endl;
}