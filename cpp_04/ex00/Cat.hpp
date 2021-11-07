#ifndef __CAT_HPP__
# define __CAT_HPP__

#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		~Cat();
		void makeSound() const;
	protected:
		std::string animalSound;
};

#endif
