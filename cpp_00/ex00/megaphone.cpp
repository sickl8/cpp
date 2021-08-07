#include <iostream>

#define EMPTY "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int		main(int ac, char **av) {
	if (ac > 1) {
		for (int i = 1; av[i]; i++)
			for (int j = 0; av[i][j]; j++)
				std::cout << (char)std::toupper(av[i][j]);
		std::cout << std::endl;
	}
	else
		std::cout << EMPTY << std::endl;
}