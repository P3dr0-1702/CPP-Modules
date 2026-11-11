#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	std::cout << "New Inter was hired\n";
}

Intern::Intern(Intern &copy)
{
	*this = copy;
}

Intern &Intern::operator=(Intern &src)
{
	(void) src;
	return *this;
}

Intern::~Intern()
{
	std::cout << "Intern was fired\n";
}

AForm *Intern::makeForm(std::string form, std::string target)
{
	if(form == "Robotomy Request")
	{
		std::cout << "Intern wrote form: " << form << "\n";
		return new RobotomyRequestForm(target);
	}
	if(form == "Presidential Pardon")
	{
		std::cout << "Intern wrote form: " << form << "\n";
		return new PresidentialPardonForm(target);
	}
	if(form == "Shrubbery Creation")
	{
		std::cout << "Intern wrote form: " << form << "\n";

		return new ShrubberyCreationForm(target);
	}
	std::cout << "Intern was not trained to write form: " << form << "\n";
	return NULL;
}
