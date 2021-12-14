#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "GradeTooLowException.hpp"

#include <iostream>
#include <fstream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreation_" + target, 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src), target(src.target)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	//if ( this != &rhs )
	//{
	//this->_value = rhs.getValue();
	//}
	this->target = rhs.target;
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }

/*
** --------------------------------- METHODS ----------------------------------
*/

void ShrubberyCreationForm::execute(const Bureaucrat &ref) const
{
	this->checkGrade(ref.getGrade());
	if (!this->getIsSigned())
	{
		throw ExecOnUnsignedForm();
	}
	if (ref.getGrade() > this->getReqGrdExc())
	{
		throw GradeTooLow();
	}
	std::ofstream tree;
	tree.open(this->target + "_shrubbery");
	if (tree.is_open())
	{
		tree << "                                              .\n"
				"                                   .         ;\n"
				"      .              .              ;%     ;;\n"
				"        ,           ,                :;%  %;\n"
				"         :         ;                   :;%;'     .,\n"
				",.        %;     %;            ;        %;'    ,;\n"
				"  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
				"   %;       %;%;      ,  ;       %;  ;%;   ,%;'\n"
				"    ;%;      %;        ;%;        % ;%;  ,%;'\n"
				"     `%;.     ;%;     %;'         `;%%;.%;'\n"
				"      `:;%.    ;%%. %@;        %; ;@%;%'\n"
				"         `:%;.  :;bd%;          %;@%;'\n"
				"           `@%:.  :;%.         ;@@%;'\n"
				"             `@%.  `;@%.      ;@@%;\n"
				"               `@%%. `@%%    ;@@%;\n"
				"                 ;@%. :@%%  %@@%;\n"
				"                   %@bd%%%bd%%:;\n"
				"                     #@%%%%%:;;\n"
				"                     %@@%%%::;\n"
				"                     %@@@%(o);  . '\n"
				"                     %@@@o%;:(.,'\n"
				"                 `.. %@@@o%::;\n"
				"                    `)@@@o%::;\n"
				"                     %@@(o)::;\n"
				"                    .%@@@@%::;\n"
				"                    ;%@@@@%::;.\n"
				"                   ;%@@@@%%:;;;.\n"
				"               ...;%@@@@@%%:;;;;,..    Gilo97\n"
				"                                              .\n"
				"                                   .         ;\n"
				"      .              .              ;%     ;;\n"
				"        ,           ,                :;%  %;\n"
				"         :         ;                   :;%;'     .,\n"
				",.        %;     %;            ;        %;'    ,;\n"
				"  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
				"   %;       %;%;      ,  ;       %;  ;%;   ,%;'\n"
				"    ;%;      %;        ;%;        % ;%;  ,%;'\n"
				"     `%;.     ;%;     %;'         `;%%;.%;'\n"
				"      `:;%.    ;%%. %@;        %; ;@%;%'\n"
				"         `:%;.  :;bd%;          %;@%;'\n"
				"           `@%:.  :;%.         ;@@%;'\n"
				"             `@%.  `;@%.      ;@@%;\n"
				"               `@%%. `@%%    ;@@%;\n"
				"                 ;@%. :@%%  %@@%;\n"
				"                   %@bd%%%bd%%:;\n"
				"                     #@%%%%%:;;\n"
				"                     %@@%%%::;\n"
				"                     %@@@%(o);  . '\n"
				"                     %@@@o%;:(.,'\n"
				"                 `.. %@@@o%::;\n"
				"                    `)@@@o%::;\n"
				"                     %@@(o)::;\n"
				"                    .%@@@@%::;\n"
				"                    ;%@@@@%::;.\n"
				"                   ;%@@@@%%:;;;.\n"
				"               ...;%@@@@@%%:;;;;,..    Gilo97\n";
	}
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */