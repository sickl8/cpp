#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

# include "GradeTooHighException.hpp"
# include "GradeTooLowException.hpp"

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat(int, const std::string &);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();
		int					getGrade() const;
		void				decGrade();
		void				incGrade();
		const std::string	&getName() const;

		Bureaucrat &		operator=( Bureaucrat const & rhs );

	private:
		void					checkAndSetGrade(int gr);
		GradeTooHigh			GradeTooHighException;
		GradeTooLow				GradeTooLowException;
		const std::string		name;
		int						grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */