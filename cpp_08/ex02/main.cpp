#include <iostream>
#include <string>
#include <deque>
#include <list>
#include "mutantstack.hpp"

int		main(
	// int	ac
	// ,char **av
	// ,char **ep
) {
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(12345678);
	mstack.push(12345679);
	mstack.push(12345689);
	mstack.push(12345789);
	mstack.push(12346789);
	mstack.push(12356789);
	mstack.push(12456789);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);

	MutantStack<int> q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	for (MutantStack<int>::iterator itr = q.begin(); itr != q.end(); itr++) {
		std::cout << *itr << std::endl;
	}
}