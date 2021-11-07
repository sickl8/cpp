#ifndef __DOG_HPP__
# define __DOG_HPP__

#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		~Dog();
		void makeSound() const;
	protected:
		std::string animalSound;
};

#endif
