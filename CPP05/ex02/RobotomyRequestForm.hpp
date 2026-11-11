#include "AForm.hpp"
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

class RobotomyRequestForm : public AForm
{
	private:
		RobotomyRequestForm();
		std::string _target;
	public:
		RobotomyRequestForm(std::string path);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
		~RobotomyRequestForm();
		void executeForm(Bureaucrat &executer);
};

#endif // !ROBOTOMYREQUESTFORM_HPP
