
#include <sstream>
#include <iostream>
#include <string>

int		main(int ac, char **av) {
	if (ac < 2) {
		return 1;
	}
	int		i;
	std::string is;
	float	f;
	std::string fs;
	double	d;
	std::string ds;
	char	c;
	std::string cs;

	std::string	s(av[1]);
	try {
		std::stringstream stream;
		c = static_cast<char>(stoi(s));
		if (isprint(c)) {
			stream << c;
			stream >> cs;
		}
		else {
			cs = "Non displayable";
		}
	}
	catch (std::exception &e){
		try {
			if (s[0] == '\'' && isprint(s[1]) && s[2] == '\'' && s.length() == 3) {
				c = s[1];
				if (isprint(c)) {
					cs = std::string((char[]){c, '\0'});
				}
				else {
					cs = "Non displayable";
				}
			}
			else {
				throw std::exception();
			}
		}
		catch (std::exception &e) {
			cs = "impossible";
		}
	}
	try {
		std::stringstream stream;
		i = stoi(s);
		stream << i;
		stream >> is;
	}
	catch (std::exception &e){
		if (cs.length() == 1) {
			std::stringstream stream;
			i = static_cast<int>(c);
			stream << i;
			stream >> is;
		}
		else
			is = "impossible";
	}
	try {
		std::stringstream stream;
		f = stof(s);
		stream.precision(1);
		stream << std::fixed << f;
		stream >> fs;
	}
	catch (std::exception &e){
		if (cs.length() == 1) {
			std::stringstream stream;
			stream.precision(1);
			f = static_cast<float>(c);
			stream << std::fixed << f;
			stream >> fs;
		}
		else
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
		if (cs.length() == 1) {
			std::stringstream stream;
			stream.precision(1);
			d = static_cast<double>(c);
			stream << std::fixed << d;
			stream >> ds;
		}
		else
			ds = "impossible";
	}
	std::cout << "char: " << cs << std::endl;
	std::cout << "int: " << is << std::endl;
	std::cout << "float: " << fs << "f" << std::endl;
	std::cout << "double: " << ds << std::endl;
}