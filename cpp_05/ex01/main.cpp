#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main() {
	try {
		Bureaucrat bob(0, "bob");
	}
	catch (std::exception &e) {
		std::cerr << "caught exception" << std::endl;
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat obo(151, "bob");
	}
	catch (std::exception &e) {
		std::cerr << "caught exception" << std::endl;
		std::cerr << e.what() << std::endl;
	}
	Bureaucrat bob(150, "bob");
	Bureaucrat obo(1, "obo");
	std::cout << obo << std::endl;
	std::cout << bob << std::endl;
	bob = obo;
	std::cout << bob << std::endl;
	Bureaucrat obbo(10, "obbo");
	Bureaucrat boob(obbo);
	std::cout << obbo << std::endl;
	std::cout << boob << std::endl;
	Bureaucrat booba;
	std::cout << booba << std::endl;
	try { 
		bob.incGrade();
	}
	catch (std::exception &e) {
		std::cerr << "caught exception" << std::endl;
		std::cerr << e.what() << std::endl;
	}
	std::cout << bob << std::endl;
	try {
		Bureaucrat booob(bob);
	}
	catch (std::exception & e) {
		std::cerr << "caught exception" << std::endl;
		std::cerr << e.what() << std::endl;
	}
	Form f("form1", 1, 1);
	bob.decGrade();
	try {
		f.beSigned(bob);
	}
	catch (std::exception &e) {
		std::cerr << "caught exception" << std::endl;
		std::cerr << e.what() << std::endl;
	}
	bob.signForm(f);
}