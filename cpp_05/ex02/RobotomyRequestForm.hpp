#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class RobotomyRequestForm : public Form {

	public:
		RobotomyRequestForm(std::string target = "none");
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();
		void	execute(const Bureaucrat &ref) const;
		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

	private:
		std::string		target;
};

// std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i );

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */