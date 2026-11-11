#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


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
	Intern Timmy;
	
	// Form order("sudo rm -rf / --no-preserve-root", 40, 1);
	// ShrubberyCreationForm order("ShrubberyCreationForm");
	// notJonny.signForm(order);
	// Jonnny.signForm(order);
	AForm *orders[3];
	orders[0] = Timmy.makeForm("Non Sense Form", "Absolute gibberish");
	orders[0] = Timmy.makeForm("Shrubbery Creation", "Shurberry");
	orders[1] = Timmy.makeForm("Robotomy Request", "BMO");
	orders[2] = Timmy.makeForm("Presidential Pardon", "Luigi");

	// std::cout << Jonny << "\n" << orders[0];
	sign_and_execute(notJonny, orders[0]);
	sign_and_execute(Jonny, orders[0]);

	sign_and_execute(notJonny, orders[1]);
	sign_and_execute(Jonny, orders[1]);

	sign_and_execute(notJonny, orders[2]);
	sign_and_execute(Jonny, orders[2]);
}
