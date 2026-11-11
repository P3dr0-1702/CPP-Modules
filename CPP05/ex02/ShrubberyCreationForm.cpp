#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm",
	145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : 
	AForm(copy.getName(), copy.getSignGrade(), copy.getSignGrade()), _target(copy._target)
{
	*this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	if (this != &src)
	{
		this->_target = src._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << this->getName() << " has been shredded\n";
}

std::string ascii_tree(void)
{
	std::string out;
	out.append("├── bin/\n");
	out.append("│   ├── cd\n");
	out.append("│   ├── echo\n");
	out.append("│   └── ...\n");
	out.append("├── boot/\n");
	out.append("│   └── ...\n");
	out.append("├── home/\n");
	out.append("│   ├── bocal/\n");
	out.append("│   │   └── ...\n");
	out.append("│   └── pfreire-/\n");
	out.append("│       ├── ...\n");
	out.append("│       └── work/\n");
	out.append("│           ├── ...\n");
	out.append("│           └── cpp/\n");
	out.append("│               ├── cpp05/\n");
	out.append("│               │   └── ...\n");
	out.append("│               └── cpp06/\n");
	out.append("│                   ├── ex01/\n");
	out.append("│                   │   └── ...\n");
	out.append("│                   ├── ex02/\n");
	out.append("│                   │   └── ...\n");
	out.append("│                   ├── ex03/\n");
	out.append("│                   │   └── ShrubberyCreation.cpp\n");
	out.append("│                   └── ex04/\n");
	out.append("│                       └── ...\n");
	out.append("├── lib            /\n");
	out.append("│   ├── includes/\n");
	out.append("│   │   └── ...\n");
	out.append("│   └── ...\n");
	out.append("└── usr/\n");
	out.append("    ├── bin/\n");
	out.append("    │   ├── bash\n");
	out.append("    │   └── ...\n");
	out.append("    └── ...\n");
	return out;
}

void ShrubberyCreationForm::executeForm(Bureaucrat &executer)
{
	std::fstream outfile;
	if(!this->getStatus())
	{
		std::cout << this->getName() << " is not signed. Cannot be executed\n";
		return;
	}
	if(executer.getGrade() <= this->getExeGrade())
	{
		outfile.open(this->_target.append("_shruberry").c_str(), std::ios::out);
		if (!outfile.is_open())
			throw std::runtime_error("Unable to write or create " + this->_target + "_shruberry.\n");
		outfile << ascii_tree();
	}
	else
		std::cout << "Executive " << executer.getName() << " does not have the clearance to execute Form " << this->getName() << ".\n";
}
