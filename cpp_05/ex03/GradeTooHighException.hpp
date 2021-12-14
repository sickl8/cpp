#ifndef GRADETOOHIGHEXCEPTION_HPP
# define GRADETOOHIGHEXCEPTION_HPP

# include <iostream>
# include <string>

class GradeTooHigh : public std::exception {

	public:

		GradeTooHigh() _NOEXCEPT;
		~GradeTooHigh() _NOEXCEPT;
		const char* what() const _NOEXCEPT;

	private:
		std::string	e;
};

std::ostream &			operator<<( std::ostream & o, GradeTooHigh const & i );

#endif /* ******************************************* GRADETOOHIGH_H */