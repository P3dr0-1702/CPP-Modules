#include "Harl.hpp"

int main()
{
	Harl harl;
	std::string levels[4] = 
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	int i = 0;
	while(i < 4)
	{
		harl.complain(levels[i]);
		i++;
	}
}
