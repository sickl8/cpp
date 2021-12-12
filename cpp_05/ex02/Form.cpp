#include "Form.hpp"
#include "Bureaucrat.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : name("nameless"), isSigned(false), reqGradeSign(150), reqGradeExec(150) {}

Form::Form(std::string n, int s, int e) : name(n), isSigned(false), reqGradeSign(this->returnLegalGrade(s)), reqGradeExec(this->returnLegalGrade(e)) {
	this->checkGrades(s, e);
}

Form::Form(const Form &src) : name(src.name), isSigned(src.isSigned), reqGradeSign(src.reqGradeSign), reqGradeExec(src.reqGradeExec) {}

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
	o << "Form: " << i.getName() << ", required grade for signing/executing: " << i.getReqGrdSgn() << "/" << i.getReqGrdExc() << ", signed: " << (i.getIsSigned() ? "true" : "false");
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

int					Form::returnLegalGrade(int gr) const {
	if (gr < 1) {
		// throw Form::GradeTooHighException;
		gr = 1;
	}
	if (150 < gr) {
		// throw Form::GradeTooLowException;
		gr = 150;
	}
	return gr;
}

void				Form::checkGrade(int gr) const {
	if (gr < 1) {
		throw Form::GradeTooHighException;
	}
	if (gr > 150) {
		throw Form::GradeTooLowException;
	}
}

void				Form::checkGrades(int o, int t) const {
	this->checkGrade(o);
	this->checkGrade(t);
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

void	Form::execute(const Bureaucrat &ref) const {
	this->checkGrade(ref.getGrade());
	if (ref.getGrade() > this->reqGradeExec) {
		throw Form::GradeTooLowException;
	}
}

std::exception	const &Form::getExceptionHigh() const {
	return (this->GradeTooHighException);
}

std::exception	const &Form::getExceptionLow() const {
	return (this->GradeTooLowException);
}

std::exception	const &Form::getInvalidExec() const {
	return (this->InvalidExec);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */