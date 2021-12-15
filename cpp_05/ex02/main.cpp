#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#define cout std::cout
#define endl std::endl
#define excp std::exception
#define TRYCATCH(x, y) try { cout << "TRYING " #x << endl; x } catch (excp &e) { y }


int		main() {
	{
		ShrubberyCreationForm scf("shrub");
		PresidentialPardonForm ppf("president");
		RobotomyRequestForm rrf("robot");

		Bureaucrat bob(1, "bob");

		scf.beSigned(bob);
		scf.execute(bob);
		ppf.beSigned(bob);
		ppf.execute(bob);
		rrf.beSigned(bob);
		rrf.execute(bob);
	}
	{
		ShrubberyCreationForm scf("shrub");
		PresidentialPardonForm ppf("president");
		RobotomyRequestForm rrf("robot");

		Bureaucrat bob(1, "bob");
		
		TRYCATCH(
			scf.execute(bob);
			cout << "failed" << endl;,
			cout << "success, caught " << e.what() << endl;
		)
		TRYCATCH(
			rrf.execute(bob);
			cout << "failed" << endl;,
			cout << "success, caught " << e.what() << endl;
		)
		TRYCATCH(
			ppf.execute(bob);
			cout << "failed" << endl;,
			cout << "success, caught " << e.what() << endl;
		)
	}
	{
		ShrubberyCreationForm scf("shrub");
		PresidentialPardonForm ppf("president");
		RobotomyRequestForm rrf("robot");

		Bureaucrat bob(1, "bob");
		Bureaucrat obo(150, "obo");

		scf.beSigned(bob);
		TRYCATCH(scf.execute(obo); cout << "failed" << endl;, cout << "success, caught " << e.what() << endl;)
		ppf.beSigned(bob);
		TRYCATCH(ppf.execute(obo); cout << "failed" << endl;, cout << "success, caught " << e.what() << endl;)
		rrf.beSigned(bob);
		TRYCATCH(rrf.execute(obo); cout << "failed" << endl;, cout << "success, caught " << e.what() << endl;)
	}
	{
		ShrubberyCreationForm scf("shrub");
		PresidentialPardonForm ppf("president");
		RobotomyRequestForm rrf("robot");

		Bureaucrat bob(1, "bob");

		scf.beSigned(bob);
		bob.executeForm(scf);
		ppf.beSigned(bob);
		bob.executeForm(ppf);
		rrf.beSigned(bob);
		bob.executeForm(rrf);
	}
	{
		ShrubberyCreationForm scf("shrub");
		PresidentialPardonForm ppf("president");
		RobotomyRequestForm rrf("robot");

		Bureaucrat obo(150, "obo");
		Bureaucrat bob(1, "bob");

		scf.beSigned(bob);
		obo.executeForm(scf);
		ppf.beSigned(bob);
		obo.executeForm(ppf);
		rrf.beSigned(bob);
		obo.executeForm(rrf);
	}
}