#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "GradeTooLowException.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest_" + target, 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src), target(src.target)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	//if ( this != &rhs )
	//{
	//this->_value = rhs.getValue();
	//}
	this->target = rhs.target;
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }

/*
** --------------------------------- METHODS ----------------------------------
*/

void RobotomyRequestForm::execute(const Bureaucrat &ref) const
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
	std::srand(time(nullptr));
	if (std::rand() % 2)
	{
		std::cout << "** LOUD DRILLING NOISES **" << std::endl;
		std::cout << this->target << " has been robotomized successfully" << std::endl;
	}
	else
	{
		std::cout << this->target << " failed robotimization" << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */