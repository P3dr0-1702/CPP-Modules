#include "Harl.hpp"


void Harl::debug()
{
	std::cout << "People are always ignoring the important things i have to say" << std::endl; 
}

void Harl::info()
{
	std::cout << "People are nver listen to the iformation i have to give" << std::endl; 
}

void Harl::error()
{
	std::cout << "People hate me for giving them erros" << std::endl; 
}

void Harl::warning()
{
	std::cout << "People frown on me when i give them warnings" << std::endl; 
}

void Harl::complain(std::string level)
{
	int i;
	std::string levels[4] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	i = 0;
	while(i < 4)
	{
		if(levels[i] == level)
			break;;
		i++;
	}
	switch (i)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break;
		default:
			std::cout << "I Have no idea what you want from me" << std::endl;
			break;
	}
}
