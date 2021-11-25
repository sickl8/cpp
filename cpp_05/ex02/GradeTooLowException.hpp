#ifndef GRADETOOLOWEXCEPTION_HPP
# define GRADETOOLOWEXCEPTION_HPP

# include <iostream>
# include <string>

class GradeTooLow : public std::exception {

	public:

		GradeTooLow() _NOEXCEPT;
		~GradeTooLow() _NOEXCEPT;
		const char* what() const _NOEXCEPT;

	private:
		std::string	e;
};

std::ostream &			operator<<( std::ostream & o, GradeTooLow const & i );

#endif /* ******************************************* GRADETOOHIGH_H */