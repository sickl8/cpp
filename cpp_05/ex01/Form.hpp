#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

# include "Bureaucrat.hpp"

class Form
{

	public:

		Form();
		Form(std::string n, int s, int e);
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );
		const std::string		&getName() const;
		bool					getIsSigned() const;
		int						getReqGrdSgn() const;
		int						getReqGrdExc() const;
		void					beSigned(Bureaucrat const &ref);
	private:
		void					checkGrade(int gr);
		void					checkGrades();
		const std::string		name;
		bool					isSigned;
		const int				reqGradeSign;
		const int				reqGradeExec;
		GradeTooHigh			GradeTooHighException;
		GradeTooLow				GradeTooLowException;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */