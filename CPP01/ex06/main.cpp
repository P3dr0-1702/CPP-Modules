#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Why can't people put in just 2 arguments?" << std::endl;
		return -1;
	}
	Harl harl;
	harl.complain(argv[1]);
}
