#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#define cout std::cout
#define endl std::endl
#define excp std::exception
#define TRYCATCH(x, y) try { cout << "TRYING " #x << endl; x } catch (excp &e) { y }


int		main() {
	Intern intern;
	Bureaucrat bob(1, "bob");
	{
		Form	*sc = intern.makeForm("shrubbery creation", "shrubbery");
		Form	*pp = intern.makeForm("presidential pardon", "president");
		Form	*rr = intern.makeForm("robotomy request", "robotomy");

		sc->beSigned(bob);
		pp->beSigned(bob);
		rr->beSigned(bob);
		sc->execute(bob);
		pp->execute(bob);
		rr->execute(bob);
		delete sc;
		delete pp;
		delete rr;
	}
}