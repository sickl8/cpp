#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

// # include "Bureaucrat.hpp"

class Bureaucrat;
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"
#include "ExecOnUnsignedForm.hpp"

class Form
{

	public:

		Form();
		Form(std::string n, int s, int e);
		Form( Form const & src );
		virtual ~Form();

		Form &		operator=( Form const & rhs );
		const std::string		&getName() const;
		bool					getIsSigned() const;
		int						getReqGrdSgn() const;
		int						getReqGrdExc() const;
		void					beSigned(Bureaucrat const &ref);
		virtual void			execute(Bureaucrat const & executor) const = 0;
		std::exception const	&getExceptionLow() const;
		std::exception const	&getExceptionHigh() const;
		std::exception const	&getInvalidExec() const;
	protected:
		void					checkGrades(int, int) const;
		void					checkGrade(int grd) const;
		int						returnLegalGrade(int grd) const;
	private:
		const std::string		name;
		bool					isSigned;
		const int				reqGradeSign;
		const int				reqGradeExec;
		GradeTooHigh			GradeTooHighException;
		GradeTooLow				GradeTooLowException;
		ExecOnUnsignedForm		InvalidExec;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */