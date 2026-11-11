#include "Form.hpp"

Form::Form(std::string name, int grade_to_sign, int grade_to_exe) : _name(name),
	_sign(grade_to_sign), _exe(grade_to_exe)
{
	this->_is_signed = false;
	if (_sign > 150 || _exe > 150)
		throw Form::GradeTooLowException();
	else if (_sign < 1 || _exe < 1)
		throw Form::GradeTooHighException();
	std::cout << "You got mail! New Form comming in\n";
}

// Form::Form(const Form &copy) : _name(copy._name), _exe(copy._exe),
// 	_sign(copy._sign), _is_signed((copy._is_signed))
// {
// }

Form &Form::operator=(const Form &src)
{
	if (this != &src)
	{
		this->_is_signed = src._is_signed;
	}
	return (*this);
}

Form::~Form()
{
	std::cout << "Form "<< this->_name << "was shredded\n";
}

std::string Form::getName(void) const
{
	return (this->_name);
}

int Form::getExeGrade(void) const
{
	return this->_exe;
}

int Form::getSignGrade(void) const
{
	return this->_sign;
}

bool Form::getStatus(void) const
{
	return this->_is_signed;
}

std::ostream &operator<<(std::ostream &out, const Form &src)
{
	out << "Form: " << src.getName() << " needs " << src.getSignGrade() << " grade to sign and " << src.getExeGrade() << " grade to execute.";
	if (src.getStatus())
		out << " The form is currently signed.\n";
	else
		out << " The form needs to be signed.\n";

	return out;
}

void Form::beSigned(Bureaucrat &signer)
{
	if(signer.getGrade() <= this->getSignGrade())
	{
		this->_is_signed = true;
		std::cout << "Bureaucrat " << signer.getName() << " has signed form \"" << this->getName() << "\"\n";
	}
	else
		throw GradeTooLowException();
}

const char *Form::GradeTooHighException::what(void) const throw()
{
	return "Grade is too high.";
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return "Grade is too low";
}
