#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	this->name = name;
	std::cout << this->name << " was hired\n";
	if(grade > 150)
		throw GradeTooLowException();
	else if(grade < 1)
		throw GradeTooHighException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &copy)
{
	*this = copy;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << this->name << " was fired\n";
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	if(this != &src)
	{
		this->name = src.name;
		this->grade = src.grade;
	}
	return *this;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "Grade is too high\n";
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "Grade is too low\n";
}

std::string Bureaucrat::getName(void) const
{
	return(this->name);
}

int Bureaucrat::getGrade(void) const
{
	return(this->grade);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &src)
{
	out << src.getName() << ", bureaucrat's rank "<< src.getGrade() << "\n";
	return (out);
}

void Bureaucrat::incrementGrade(unsigned int amount)
{
	this->grade -= amount;
	if(grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::decrementGrade(unsigned int amount)
{
	this->grade += amount;
	if(grade > 150)
		throw GradeTooLowException();
}

void Bureaucrat::incrementGrade(void)
{
	this->grade--;
	if(grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::decrementGrade(void)
{
	this->grade++;
	if(grade > 150)
		throw GradeTooLowException();
}
