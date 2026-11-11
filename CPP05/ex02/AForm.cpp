#include "AForm.hpp"


AForm::AForm(std::string name, int grade_to_sign, int grade_to_exe) : _name(name),
	_sign(grade_to_sign), _exe(grade_to_exe)
{
	this->_is_signed = false;
	if (_sign > 150 || _exe > 150)
		throw AForm::GradeTooLowException();
	else if (_sign < 1 || _exe < 1)
		throw AForm::GradeTooHighException();
	std::cout << "You got mail! New AForm comming in\n";
}

// AForm::AForm(const AForm &copy) : _name(copy._name), _exe(copy._exe),
// 	_sign(copy._sign), _is_signed((copy._is_signed))
// {
// }

AForm::~AForm()
{
	std::cout << this->getName() << " was shredded.\n";
}

AForm &AForm::operator=(const AForm &src)
{
	if (this != &src)
	{
		this->_is_signed = src._is_signed;
	}
	return (*this);
}

std::string AForm::getName(void) const
{
	return (this->_name);
}

int AForm::getExeGrade(void) const
{
	return this->_exe;
}

int AForm::getSignGrade(void) const
{
	return this->_sign;
}

bool AForm::getStatus(void) const
{
	return this->_is_signed;
}

std::ostream &operator<<(std::ostream &out, const AForm &src)
{
	out << "AForm: " << src.getName() << " needs " << src.getSignGrade() << " grade to sign and " << src.getExeGrade() << " grade to execute.";
	if (src.getStatus())
		out << " The form is currently signed.\n";
	else
		out << " The form needs to be signed.\n";

	return out;
}

void AForm::beSigned(Bureaucrat &signer)
{
	if(signer.getGrade() <= this->getSignGrade())
	{
		this->_is_signed = true;
		std::cout << "Bureaucrat " << signer.getName() << " has signed form \"" << this->getName() << "\"\n";
	}
	else
	{
		std::cout << this->getName() <<" Form cannot be signed: ";
		throw GradeTooLowException();
	}
}

const char *AForm::GradeTooHighException::what(void) const throw()
{
	return "Grade is too high.\n";
}

const char *AForm::GradeTooLowException::what(void) const throw()
{
	return "Grade is too low.\n";
}
