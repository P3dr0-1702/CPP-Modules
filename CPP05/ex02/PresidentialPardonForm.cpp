#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy.getName(), copy.getSignGrade(), copy.getExeGrade()),
	_target(copy._target)
{
	*this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	if(this != &src)
		this->_target = src._target;
	return *this;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << this->getName() << " has been shredded. \n";
}

void PresidentialPardonForm::executeForm(Bureaucrat &executer)
{
	if(!this->getStatus())
	{
		std::cout << "Form is not signed.\n";
		return;
	}
	if(executer.getGrade() > this->getExeGrade())
	{
		std::cout << "Executer grad is too low\n";
		return;
	}
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox\n";
}
