#include "Bureaucrat.hpp"
#include "Form.hpp"

// #define TRYCATCH(x, y) try { std::cout << "TRYING " #x << std::endl; x } catch (std::exception &e) { y }

#define cout std::cout
#define endl std::endl
#define excp std::exception

int		main() {
	cout << "--------------" << endl;
	cout << "Testing constructors and ostream &operator<<:" << endl;
	cout << "--------------" << endl;
	Form	f1;
	cout << f1 << endl;
	Form	f2("f2", 140, 60);
	cout << f2 << endl;
	Form	dummy("f3", 100, 100);
	Form	f3(dummy);
	cout << f3 << endl;
	cout << "--------------" << endl;
	cout << "Testing invalid constructor arguments:" << endl;
	cout << "--------------" << endl;
	try {
		Form f5("asdf", 200, 1);
	} catch (excp & e) {
		cout << "constructor succeeded! caught exception! e.what() = " << e.what() << endl;
	}
	try {
		Form f5("asdf", 1, 0);
	} catch (excp & e) {
		cout << "constructor succeeded! caught exception! e.what() = " << e.what() << endl;
	}
	cout << "--------------" << endl;
	cout << "Testing assignment operator:" << endl;
	cout << "--------------" << endl;
	Bureaucrat	bob(1, "bob");
	Bureaucrat	obo(150, "obo");
	cout << f1 << endl;
	cout << "signing f1:" << endl;
	f1.beSigned(bob);
	cout << f1 << endl;
	cout << "-------" << endl;
	cout << f2 << endl;
	cout << "assigning f1 to f2" << endl;
	f2 = f1;
	cout << f2 << endl;
	cout << "--------------" << endl;
	cout << "Testing beSigned:" << endl;
	cout << "--------------" << endl;
	cout << "-------" << endl;
	cout << "Testing valid:" << endl;
	cout << "-------" << endl;
	try {
		f3.beSigned(bob);
		cout << "beSigned succeeded!" << endl;
	} catch (excp & e) {
		cout << "beSigned failed :( should've not caught exception, e.what() = " << e.what() << endl;
	}
	cout << "-------" << endl;
	cout << "Testing invalid:" << endl;
	cout << "-------" << endl;
	Form f4("f4", 100, 100);
	try {
		f4.beSigned(obo);
		cout << "beSigned failed :(" << endl;
	} catch (excp & e) {
		cout << "beSigned succeeded! caught exception! e.what() = " << e.what() << endl;
	}
	cout << "--------------" << endl;
	cout << "Testing signForm:" << endl;
	cout << "--------------" << endl;
	cout << "-------" << endl;
	cout << "Testing invalid:" << endl;
	cout << "-------" << endl;
	cout << f4 << endl;
	obo.signForm(f4);
	cout << f4 << endl;
	cout << "-------" << endl;
	cout << "Testing valid:" << endl;
	cout << "-------" << endl;
	cout << f4 << endl;
	bob.signForm(f4);
	cout << f4 << endl;
}