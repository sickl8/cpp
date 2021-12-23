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
	MutantStack<int> q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	for (std::deque<int>::iterator itr = q.begin(); itr != q.end(); itr++) {
		std::cout << *itr << std::endl;
	}
}