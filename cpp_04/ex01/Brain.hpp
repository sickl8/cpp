#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__

#include <iostream>

class Brain {
	public:
		Brain(const Brain &ref);
		Brain();
		~Brain();
		Brain &operator=(const Brain &ref);
		void setIdeas(std::string *arr, int start, int length);
		void setIdea(std::string idea, int index);
		void printIdeas();
	protected:
		std::string ideas[100];
};

#endif
