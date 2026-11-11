#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

#ifndef FORM_HPP
#define FORM_HPP

class Form
{
	private:
		const std::string _name;
		bool _is_signed;
		const int _sign;
		const int _exe;
		Form();
	public:
		Form(std::string name, int grade_to_sign, int grade_to_exe);
		Form(const Form &copy);
		Form &operator=(const Form &src);
		int getSignGrade(void) const;
		int getExeGrade(void) const;
		bool getStatus(void) const;
		std::string getName(void) const;
		void beSigned(Bureaucrat &signer);
		class GradeTooHighException : public std::exception
		{
			virtual const char *what(void) const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char *what(void) const throw();
		};
		~Form();

};

std::ostream &operator<<(std::ostream &out, const Form &src);
#endif // !FORM_HPP
