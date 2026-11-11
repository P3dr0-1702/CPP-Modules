#include "AForm.hpp"
#include <iostream>
#include <fstream>

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

class ShrubberyCreationForm : public AForm
{
	private:
		ShrubberyCreationForm();
		std::string _target;
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);
		~ShrubberyCreationForm();
		void executeForm(Bureaucrat &executer);
};

#endif // !SHRUBBERYCREATIONFORM_HPP
