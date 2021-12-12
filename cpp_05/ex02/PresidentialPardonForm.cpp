#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "GradeTooLowException.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon_" + target, 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src), target(src.target)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	//if ( this != &rhs )
	//{
	//this->_value = rhs.getValue();
	//}
	this->target = rhs.target;
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }

/*
** --------------------------------- METHODS ----------------------------------
*/

void PresidentialPardonForm::execute(const Bureaucrat &ref) const
{
	this->checkGrade(ref.getGrade());
	if (!this->getIsSigned())
	{
		throw ExecOnUnsignedForm();
	}
	if (ref.getGrade() > this->getReqGrdExc())
	{
		throw GradeTooLow();
	}
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */