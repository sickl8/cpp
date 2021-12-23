#include <iostream>
#include <string>
#include "span.hpp"



int		main(
	// int	ac
	// ,char **av
	// ,char **ep
) {
	Span	s(2159);
	std::srand(time(NULL));
	try {
		for (int i = 0; i < 3000; i++) {
			int z =  std::rand();
			// std::cout << z << std::endl;
			// std::cout << "i = " << i << std::endl;
			s.addNumber(z);
		}
	}
	catch (std::exception &e) {
		std::cout << "caught exception, what() == " << e.what() << std::endl;
	}
	std::cout << "longest span = " << s.longestSpan() << std::endl;
	std::cout << "shortest span = " << s.shortestSpan() << std::endl;
	try {
		Span sp(0);
		sp.shortestSpan();
		std::cout << "this message shoudn't be printed" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "caught exception, what() == " << e.what() << std::endl;
	}
	try {
		Span sp(1);
		sp.shortestSpan();
		std::cout << "this message shoudn't be printed" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "caught exception, what() == " << e.what() << std::endl;
	}
	try {
		Span sp(2);
		sp.shortestSpan();
		std::cout << "this message shoudn't be printed" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "caught exception, what() == " << e.what() << std::endl;
	}
	try {
		Span sp(2);
		try {
			sp.shortestSpan();
			std::cout << "didn't throw while expected too" << std::endl;
		}
		catch (std::exception &e) {
			std::cout << "throwed as expected, what() == " << e.what() << std::endl;
		}
		sp.addNumber(1);
		try {
			sp.longestSpan();
			std::cout << "didn't throw while expected too" << std::endl;
		}
		catch (std::exception &e) {
			std::cout << "throwed as expected, what() == " << e.what()<< std::endl;
		}
		sp.addNumber(1);
		try {
			sp.shortestSpan();
			std::cout << "didn't throw, as expected" << std::endl;
		}
		catch (std::exception &e) {
			std::cout << "throwed while not expected too, what() == " << e.what()<< std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << "caught exception, what() == " << e.what() << std::endl;
	}
	{
		try {
			Span sp(53);

			for (int i = 0; i < 50; i++) {
				sp.addNumber(i);
			}
			int arr[] = { 10, 20, 30 };
			int n = sizeof(arr) / sizeof(arr[0]);
			std::vector<int> vec(arr, arr + n);
			sp.addNumber(vec.begin(), vec.end());
		} catch (std::exception &e) {
			std::cout << "throwed while expected not too, what() == " << e.what() << std::endl;
		}
		try {
			Span sp(52);

			for (int i = 0; i < 50; i++) {
				sp.addNumber(i);
			}
			int arr[] = { 10, 20, 30 };
			int n = sizeof(arr) / sizeof(arr[0]);
			std::vector<int> vec(arr, arr + n);
			sp.addNumber(vec.begin(), vec.end());
			std::cout << "did not throw while not expected too" << std::endl;
		} catch (std::exception &e) {
			std::cout << "throwed as expected, what() == " << e.what() << std::endl;
		}
	}
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
}