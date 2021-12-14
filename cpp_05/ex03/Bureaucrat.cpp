#include "Bureaucrat.hpp"
#include "Form.hpp"

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

void				Bureaucrat::signForm(Form &ref) const {
	try {
		ref.beSigned(*this);
		std::cout << this->getName() << " signs " << ref.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << this->getName() << " cannot sign " << ref.getName() << " because " << e.what() << std::endl;
	}
}

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
	if (gr < 1)
		throw Bureaucrat::GradeTooHighException;
	if (gr > 150)
		throw Bureaucrat::GradeTooLowException;
	this->grade = gr;
}

/* ************************************************************************** */