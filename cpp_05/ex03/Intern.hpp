#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include <iostream>
# include <string>

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();
		Form	*makeForm(std::string formType, std::string target);
		Intern &		operator=( Intern const & rhs );

	private:

};

// std::ostream &			operator<<( std::ostream & o, Intern const & i );

#endif /* ********************************************************** INTERN_H */