#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	Animal *animal[8];
	std::cout << "----- fl 1\n";
	for (int i = 0; i < 4; i++) {
		animal[i] = new Cat();
	}
	std::cout << "----- fl 2\n";
	for (int i = 4; i < 8; i++) {
		animal[i] = new Dog();
	}
	std::cout << "----- end fl\n";

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Cat* cat = new Cat();
	std::cout << "----- cpcats\n";
	Cat copycats = *cat;
	std::cout << "----- end cpcats\n";
	delete cat;
	delete j;//should not create a leak
	delete i;
	std::cout << "-----\n";
	for (int i = 0; i < 8; i++) {
		delete animal[i];
	}
	std::cout << " the end -----\n";
}