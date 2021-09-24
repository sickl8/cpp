/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaadi <isaadi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:28:20 by isaadi            #+#    #+#             */
/*   Updated: 2021/09/24 12:35:11 by isaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

enum vals {NONE, DEBUG, INFO, WARNING, ERROR};

int		main(int ac, char **av) {
	std::ostream &cout = std::cout;
	std::ostream &cerr = std::cerr;

	if (ac != 2) {
		cerr << "Illegal number of arguments." << std::endl;
	}
	string in = av[1];
	Karen k;
	int value =
	DEBUG * (in == "DEBUG") +
	WARNING * (in == "WARNING") +
	ERROR * (in == "ERROR") +
	INFO * (in == "INFO");
	switch (value) {
		case DEBUG:
			goto label_debug;
		case INFO:
			goto label_info;
		case WARNING:
			goto label_warning;
		case ERROR:
			goto label_error;
			break;
		default:
			cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			return 0;
	}
	label_debug:
	cout << "[ DEBUG ]" << std::endl;
	k.complain("debug");
	cout << std::endl;
	label_info:
	cout << "[ INFO ]" << std::endl;
	k.complain("info");
	cout << std::endl;
	label_warning:
	cout << "[ WARNING ]" << std::endl;
	k.complain("warning");
	cout << std::endl;
	label_error:
	cout << "[ ERROR ]" << std::endl;
	k.complain("error");
	cout << std::endl;
}