#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Intern const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

Form	*createPPForm(std::string target) {
	return new PresidentialPardonForm(target);
}

Form	*createRRForm(std::string target) {
	return new RobotomyRequestForm(target);
}

Form	*createSCForm(std::string target) {
	return new ShrubberyCreationForm(target);
}

Form	*Intern::makeForm(std::string formType, std::string target) {
	std::string formTypes[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	Form *(*f[3])(std::string) = {createRRForm, createPPForm, createSCForm};

	for (int i = 0; i < 3; i++) {
		if (formType == formTypes[i])
			return f[i](target);
	}
	return nullptr;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */