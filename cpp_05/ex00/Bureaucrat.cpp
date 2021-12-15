#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(): name("nameless_bureaucrat"), grade(150) { }

Bureaucrat::Bureaucrat(int g, const std::string &s): name(s) {
	this->grade = 150;
	this->checkAndSetGrade(g);
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ): name(src.name) {
	this->grade = 150;
	this->checkAndSetGrade(src.grade);
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
	this->checkAndSetGrade(rhs.grade);
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
	this->checkAndSetGrade(this->grade - 1);
}

void				Bureaucrat::decGrade() {
	this->checkAndSetGrade(this->grade + 1);
}

const std::string	&Bureaucrat::getName() const {
	return this->name;
}

void				Bureaucrat::checkAndSetGrade(int gr) {
	this->grade = gr;
	if (gr < 1) {
		gr = 1;
		this->grade = gr;
		throw Bureaucrat::GradeTooHighException;
	}
	if (gr > 150) {
		gr = 150;
		this->grade = gr;
		throw Bureaucrat::GradeTooLowException;
	}
}

/* ************************************************************************** */