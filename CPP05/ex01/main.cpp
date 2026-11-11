#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat Jonnny("Jonny", 1);
	Bureaucrat notJonny("Someone else", 150);
	Form order("sudo rm -rf / --no-preserve-root", 40, 1);
	notJonny.signForm(order);
	Jonnny.signForm(order);
	std::cout << Jonnny << "\n" << order;

}
