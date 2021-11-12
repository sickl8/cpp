#include "GradeTooHighException.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

GradeTooHigh::GradeTooHigh() _NOEXCEPT: e("Grade is too high") 
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

GradeTooHigh::~GradeTooHigh() _NOEXCEPT
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

const char	*GradeTooHigh::what() const _NOEXCEPT {
	return this->e.c_str();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */