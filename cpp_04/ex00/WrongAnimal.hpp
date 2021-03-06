#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__

#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal(const WrongAnimal &ref);
		WrongAnimal	&operator=(const WrongAnimal &ref);
		WrongAnimal();
		~WrongAnimal();
		void makeSound() const;
		std::string const &getType() const;
	protected:
		std::string animalSound;
		std::string type;
};

#endif
