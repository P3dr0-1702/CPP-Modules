#include "AForm.hpp"

#ifndef PRESIDENTIALPARDONFORM_HPP

#define PRESIDENTIALPARDONFORM_HPP

class PresidentialPardonForm : public AForm
{
	private:
		PresidentialPardonForm();
		std::string _target;
	public:
		PresidentialPardonForm(std::string path);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
		~PresidentialPardonForm();
		void executeForm(Bureaucrat &exectioner);
};

#endif // !PRESIDENTIALPARDONFORM_HPP


