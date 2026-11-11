#include <iostream>
#include <exception>
#include <string.h>

class AForm;

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Bureaucrat
{
	private:
		std::string name;
		unsigned int grade;
		Bureaucrat();
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &src);
		void incrementGrade(void);
		void incrementGrade(unsigned int amount);
		void decrementGrade(void);
		void decrementGrade(unsigned int amount);
		
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};
		~Bureaucrat();
		std::string getName() const;
		int getGrade() const;
		void signForm(AForm &toSign);

};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &Burro);
#endif // !BUREAUCRAT_HPP
