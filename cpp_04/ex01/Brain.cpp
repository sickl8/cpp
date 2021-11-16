#include "Brain.hpp"

#define cout std::cout
#define endl std::endl

Brain::Brain() {
	cout << "Brain Constructor" << endl;
}
Brain::~Brain() {
	cout << "Brain Deconstructor" << endl;
}

Brain &Brain::operator=(const Brain &ref) {
	for (int i = 0; i < 100; i++) {
		if (!(ref.ideas[i] == "")
		 && ref.ideas[i].c_str())
			this->ideas[i]
			= ref.ideas[i].c_str();
	}
	return *this;
}

void Brain::setIdeas(std::string *arr, int start, int length) {
	for (int i = start; i < 100 && i < length; i++) {
		if (arr[i - start] != "" && arr[i - start].c_str())
			this->ideas[i] = arr[i - start].c_str();
	}
}

void Brain::setIdea(std::string idea, int index) {
	if (index < 99 && index > -1)
		if (idea != "" && idea.c_str())
			this->ideas[index] = idea.c_str();
}

void Brain::printIdeas() {
	for (int i = 0; i < 100; i++) {
		if (this->ideas[i] != "") {
			cout << this->ideas[i] << endl;
		}
	}
}


Brain::Brain(const Brain &ref) {
	for (int i = 0; i < 100; i++) {
		if (!(ref.ideas[i] == "")
		&& ref.ideas[i].c_str())
			this->ideas[i]
			= ref.ideas[i].c_str();
	}
}
