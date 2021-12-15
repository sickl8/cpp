
#include <sstream>
#include <iostream>
#include <string>

int		main(int ac, char **av) {
	if (ac < 2) {
		return 1;
	}
	int		i = 808;
	std::string is;
	float	f = 808.808f;
	std::string fs;
	double	d = 808.808;
	std::string ds;
	char	c = 'A';
	std::string cs;

	// (void)i;
	// (void)f;
	// (void)d;
	// (void)c;
	std::string	s(av[1]);
	try {
		std::stringstream stream;
		i = stoi(s);
		stream << i;
		stream >> is;
	}
	catch (std::exception &e){
		is = "impossible";
	}
	try {
		std::stringstream stream;
		c = (char)stoi(s);
		stream << c;
		stream >> cs;
	}
	catch (std::exception &e){
		cs = "impossible";
	}
	try {
		std::stringstream stream;
		f = stof(s);
		stream.precision(1);
		stream << std::fixed << f;
		stream >> fs;
	}
	catch (std::exception &e){
		fs = "impossible";
	}
	try {
		std::stringstream stream;
		d = stod(s);
		stream.precision(1);
		stream << std::fixed << d;
		stream >> ds;
	}
	catch (std::exception &e){
		ds = "impossible";
	}
	std::cout << "char: " << cs << std::endl;
	std::cout << "int: " << is << std::endl;
	std::cout << "float: " << fs << "f" << std::endl;
	std::cout << "double: " << ds << std::endl;
}