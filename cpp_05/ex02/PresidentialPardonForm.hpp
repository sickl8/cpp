#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public Form {

	public:

		PresidentialPardonForm(std::string target = "none");
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();
		void	execute(const Bureaucrat &ref) const;

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );


	private:
		std::string		target;
		
};

// std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */