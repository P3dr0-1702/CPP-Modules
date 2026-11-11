

#include "AForm.hpp"

#ifndef INTERN_HPP
#define INTERN_HPP

class Intern
{
	public:
		Intern();
		Intern(Intern &copy);
		Intern &operator=(Intern &src);
		~Intern();
		AForm *makeForm(std::string form, std::string target);
};

#endif // !INTERN_HPP
