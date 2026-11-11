#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

#ifndef FORM_HPP
#define FORM_HPP

class AForm
{
	protected:
		// std::string _target;
	private:
		const std::string _name;
		bool _is_signed;
		const int _sign;
		const int _exe;
		AForm();
	public:
		AForm(std::string name, int grade_to_sign, int grade_to_exe);
		AForm(const AForm &copy);
		AForm &operator=(const AForm &src);
		int getSignGrade(void) const;
		int getExeGrade(void) const;
		bool getStatus(void) const;
		std::string getName(void) const;
		void beSigned(Bureaucrat &signer);
		virtual void executeForm(Bureaucrat &executer) = 0;
		class GradeTooHighException : public std::exception
		{
			virtual const char *what(void) const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char *what(void) const throw();
		};
		~AForm();

};

std::ostream &operator<<(std::ostream &out, const AForm &src);
#endif // !FORM_HPP
