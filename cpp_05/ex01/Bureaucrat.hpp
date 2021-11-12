#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

# include "GradeTooHighException.hpp"
# include "GradeTooLowException.hpp"
# include "Form.hpp"

class Bureaucrat
{

	public:
		Bureaucrat();
		Bureaucrat(int, const std::string &);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();
		void				signForm(Form &f);
		int					getGrade() const;
		void				decGrade();
		void				incGrade();
		const std::string	&getName() const;

		Bureaucrat &		operator=( Bureaucrat const & rhs );

	private:
		void				checkGrade();
		GradeTooHigh			GradeTooHighException;
		GradeTooLow				GradeTooLowException;
		const std::string		name;
		int						grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */