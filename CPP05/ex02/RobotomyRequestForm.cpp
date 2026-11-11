#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotommyRequestForm", 72, 45)
{
	this->_target = target;
	std::cout << this->getName() << " has been written.\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy.getName(), copy.getSignGrade(), copy.getExeGrade()),
	_target(copy._target)
{
	*this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	if(this != &src)
	{
		this->_target = src._target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << this->getName() << " has been shredded.\n";
}

void RobotomyRequestForm::executeForm(Bureaucrat &executer)
{
	int i = time(0);
	if(!this->getStatus())
	{
		std::cout << "Form is not signed.\n";
		return;
	}
	if(executer.getGrade() > this->getExeGrade())
	{
		std::cout << "Executer grade is too low\n";
		return;
	}
	if(i % 2 == 0)
	{
		std::cout << this->_target << " was robotomized\n";
	}
	else
		std::cout << "Rotomy attempy failed\n";

}
