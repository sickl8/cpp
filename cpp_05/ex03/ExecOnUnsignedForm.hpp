#ifndef __EXECONUNSIGNEDFORM_HPP__
# define __EXECONUNSIGNEDFORM_HPP__

#include <iostream>

class ExecOnUnsignedForm : public std::exception {
	public:
		ExecOnUnsignedForm() _NOEXCEPT;
		~ExecOnUnsignedForm() _NOEXCEPT;
		ExecOnUnsignedForm(const ExecOnUnsignedForm &ref) _NOEXCEPT;
		ExecOnUnsignedForm &operator=(const ExecOnUnsignedForm &ref) _NOEXCEPT;
		const char* what() const _NOEXCEPT;
};

#endif
