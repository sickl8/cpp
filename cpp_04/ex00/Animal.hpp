#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__


# include <iostream>

class Animal{
	public:
		Animal();
		~Animal();
		Animal(const Animal &ref);
		Animal	&operator=(const Animal &ref);
		Animal(std::string _type);
		virtual void makeSound() const;
		std::string const &getType() const;
	protected:
		std::string type;
};

#endif