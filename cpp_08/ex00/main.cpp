#include <iostream>
#include <vector>
#include <string>
#include "easyfind.hpp"

int		main(
	// int	ac
	// ,char **av
	// ,char **ep
) {
	int arr[] = {1, 2, 3, 4};
	std::vector<int> v(arr, arr + 4);
	int i;
	i = easyfind(v, 5);
	if (i != -1)
		std::cout << "found at index " << i << ", v[i] = " << v[i] << std::endl;
	else
		std::cout << "not found" << std::endl;
	i = easyfind(v, 4);
	if (i != -1)
		std::cout << "found at index " << i << ", v[i] = " << v[i] << std::endl;
	else
		std::cout << "not found" << std::endl;
}