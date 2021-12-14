#include "ExecOnUnsignedForm.hpp"

const char* ExecOnUnsignedForm::what() const _NOEXCEPT {
	return ("Attempting to execute form that has not been signed.");
};

ExecOnUnsignedForm	&ExecOnUnsignedForm::operator=(const ExecOnUnsignedForm &ref) _NOEXCEPT {
	(void)ref;
	return *this;
}

ExecOnUnsignedForm::ExecOnUnsignedForm(const ExecOnUnsignedForm &ref) _NOEXCEPT { (void)ref; }

ExecOnUnsignedForm::~ExecOnUnsignedForm() _NOEXCEPT {}

ExecOnUnsignedForm::ExecOnUnsignedForm() _NOEXCEPT {}
