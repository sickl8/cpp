#ifndef __EASYFIND_HPP__
# define __EASYFIND_HPP__

#include <iterator>

template<typename T, typename it>
it &easyfind(T container, int toFind) {
	auto a = std::find(container.begin(), container.end(), toFind);
	if (a == container.end()) {
		throw std::exception("not found");
	}	
	return (a);
}

#endif
