#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

# include <iostream>

class Animal {
	public:
		Animal();
		virtual ~Animal();
		Animal(std::string _type);
		virtual void makeSound() const;
		std::string const &getType() const;
	protected:
		std::string type;
};

#endif
