#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(): name("nameless_bureaucrat"), grade(150) { }

Bureaucrat::Bureaucrat(int g, const std::string &s): name(s), grade(g) {
	this->checkGrade();
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ): name(src.name), grade(src.grade) {
	this->checkGrade();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat() { }


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs ) {
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	this->grade = rhs.grade;
	this->checkGrade();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i ) {
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int					Bureaucrat::getGrade() const {
	return this->grade;
}

void				Bureaucrat::incGrade() {
	this->grade--;
	this->checkGrade();
}

void				Bureaucrat::decGrade() {
	this->grade++;
	this->checkGrade();
}

const std::string	&Bureaucrat::getName() const {
	return this->name;
}

void				Bureaucrat::checkGrade() {
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException;
}

/* ************************************************************************** */