#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

AForm *writeForm(std::string target, int form)
{
	if(form == 0)
		return new ShrubberyCreationForm(target);
	if(form == 1)
		return new RobotomyRequestForm(target);
	if(form == 2)
		return new PresidentialPardonForm(target);
	return NULL;
}

void sign_and_execute(Bureaucrat &burro, AForm *form)
{
	try
	{
		if(!(*form).getStatus())
			form->beSigned(burro);
		form->executeForm(burro);
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
}

int main(void)
{
	Bureaucrat Jonny("Jonny", 1);
	Bureaucrat maybeJonny("Is that Jonny?", 75);
	Bureaucrat notJonny("Someone else", 150);
	// Form order("sudo rm -rf / --no-preserve-root", 40, 1);
	// ShrubberyCreationForm order("ShrubberyCreationForm");
	// notJonny.signForm(order);
	// Jonnny.signForm(order);
	AForm *orders[3];
	orders[0] = writeForm("Shurberry", 0);
	orders[1] = writeForm("Robotomy", 1);
	orders[2] = writeForm("Presidential", 2);
	// std::cout << Jonny << "\n" << orders[0];
	sign_and_execute(notJonny, orders[0]);
	sign_and_execute(Jonny, orders[0]);

	sign_and_execute(notJonny, orders[1]);
	sign_and_execute(Jonny, orders[1]);

	sign_and_execute(notJonny, orders[2]);
	sign_and_execute(Jonny, orders[2]);
}
