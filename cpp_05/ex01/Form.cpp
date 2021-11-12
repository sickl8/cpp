#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : name("nameless"), reqGradeSign(150), reqGradeExec(150), isSigned(false) {}
Form::Form(std::string n, int s, int e) : name(n), reqGradeSign(s), reqGradeExec(e), isSigned(false) {
	this->checkGrades();
}

Form::Form(const Form &src) : name(src.name), reqGradeExec(src.reqGradeExec), reqGradeSign(src.reqGradeSign), isSigned(src.isSigned) {
	this->checkGrades();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &Form::operator=(Form const &rhs)
{
	//if ( this != &rhs )
	//{
	//this->_value = rhs.getValue();
	//}
	this->isSigned = rhs.isSigned;
	return *this;
}

std::ostream &operator<<(std::ostream &o, Form const &i)
{
	o << "Form: " << i.getName() << ", required grade for signing/executing: " << i.getReqGrdSgn() << "/" << i.getReqGrdExc() << ", signed: " << i.getIsSigned();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void				Form::checkGrade(int gr) {
	if (gr < 1)
		throw Form::GradeTooHighException;
	if (gr > 150)
		throw Form::GradeTooLowException;
}

void				Form::checkGrades() {
	this->checkGrade(this->reqGradeExec);
	this->checkGrade(this->reqGradeSign);
}

void					Form::beSigned(Bureaucrat const &ref) {
	this->checkGrade(ref.getGrade());
	if (ref.getGrade() <= this->reqGradeSign) {
		this->isSigned = true;
	}
	else {
		throw Form::GradeTooLowException;
	}
}

const std::string &Form::getName() const
{
	return this->name;
}

bool Form::getIsSigned() const
{
	return this->isSigned;
}

int Form::getReqGrdSgn() const
{
	return this->reqGradeSign;
}

int Form::getReqGrdExc() const
{
	return this->reqGradeExec;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */