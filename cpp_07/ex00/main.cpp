#include <iostream>
#include <string>
#include "whatever.hpp"

int		main() {
	int x = 0, y = 1;

	std::cout << "x y: " << x << " | " << y << std::endl;
	std::cout << "calling swap(x, y)" << std::endl;
	swap(x, y);
	std::cout << "x y: " << x << " | " << y << std::endl;
	std::cout << "min(x, y) = " << ::min(x, y) << std::endl;
	std::cout << "max(x, y) = " << ::max(x, y) << std::endl;
	x = y;
	std::cout << "x y: " << x << " | " << y << std::endl;
	std::cout << (&y == &::min(x, y) ? "&y == &min(x, y)": "&y != &min(x, y)") << std::endl;
	std::cout << (&y == &::max(x, y) ? "&y == &max(x, y)": "&y != &max(x, y)") << std::endl;

	std::string a = "string a", b = "string b";

	std::cout << "a b: " << a << " | " << b << std::endl;
	std::cout << "calling swap(a, b)" << std::endl;
	swap(a, b);
	std::cout << "a b: " << a << " | " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
	a = b;
	std::cout << "a b: " << a << " | " << b << std::endl;
	std::cout << (&b == &::min(a, b) ? "&b == &min(a, b)": "&b != &min(a, b)") << std::endl;
	std::cout << (&b == &::max(a, b) ? "&b == &max(a, b)": "&b != &max(a, b)") << std::endl;
}