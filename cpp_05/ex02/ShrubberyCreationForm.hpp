#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class ShrubberyCreationForm : public Form 
{

	public:

		ShrubberyCreationForm(std::string target = "none");
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		~ShrubberyCreationForm();
		void	execute(const Bureaucrat &ref) const;

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );

	private:
		std::string		target;
};

// std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i );

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */