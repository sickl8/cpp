#ifndef __MUTANTSTACK_HPP__
# define __MUTANTSTACK_HPP__

#include <stack>
#include <deque>

template<class T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack &ref);
		MutantStack &operator=(const MutantStack&ref);
		typedef typename std::deque<T>::iterator	iterator;
		iterator	begin();
		iterator	end();
};

template<class T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack<T> &ref) {
	this->c = ref.c;
	return *this;
}

template<class T>
MutantStack<T>::MutantStack(const MutantStack<T> &ref) {
	this->c = ref.c;
}

template<class T>
MutantStack<T>::~MutantStack() {}

template<class T>
MutantStack<T>::MutantStack() {

}

template<class T>
typename MutantStack<T>::iterator	MutantStack<T>::begin() {
	return this->c.begin();
}

template<class T>
typename MutantStack<T>::iterator	MutantStack<T>::end() {
	return this->c.end();
}

#endif
