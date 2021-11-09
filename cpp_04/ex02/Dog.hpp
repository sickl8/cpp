#ifndef __DOG_HPP__
# define __DOG_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	public:
		Dog();
		virtual ~Dog();
		void makeSound() const;
		Dog(const Dog &ref);
		Dog &operator=(const Dog &ref);
	protected:
		std::string animalSound;
	private:
		Brain *brain;
};

#endif
