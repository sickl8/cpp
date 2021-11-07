#ifndef __CAT_HPP__
# define __CAT_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public:
		Cat();
		virtual ~Cat();
		void makeSound() const;
		Cat(const Cat &ref);
		Cat &operator=(const Cat &ref);
	protected:
		std::string animalSound;
	private:
		Brain *brain;
};

#endif
