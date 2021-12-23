#ifndef __EASYFIND_HPP__
# define __EASYFIND_HPP__

#include <iterator>

template<typename T>
int		easyfind(T container, int toFind) {
	typename T::iterator a = std::find(container.begin(), container.end(), toFind);
	if (a != container.end()) {
		return a - container.begin();
	}
	return (-1);
}

#endif
