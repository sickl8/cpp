#include "iter.hpp"
#include <iostream>
#include <string>

const char	*funcString(std::string &p) {
	p = p + p;
	return p.c_str();
}

int		func(int &p) {
	p = p * 2;
	return p;
}

int		main() {
	{
		int len = 40;
		int arr[len];
		for (int i = 0; i < len; i++) {
			arr[i] = i;
		}
		std::cout << "arr: ";
		for (int i = 0; i < len; i++) {
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl << "calling iter..." << std::endl;
		iter(arr, len, func);
		std::cout << "arr: ";
		for (int i = 0; i < len; i++) {
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << "----------------------------------------" << std::endl;
	{
		size_t	len = 26;
		std::string arr[len];
		for (size_t i = 0; i < len; i++) {
			arr[i] = std::string((char[]){(char)i + 'A', '\0'});
		}
		std::cout << "arr: ";
		for (size_t i = 0; i < len; i++) {
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl << "calling iter..." << std::endl;
		iter(arr, len, funcString);
		std::cout << "arr: ";
		for (size_t i = 0; i < len; i++) {
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
	}
}