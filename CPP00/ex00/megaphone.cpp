#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	int i;
	size_t j;

	if(argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	i = 1;
	while(i < argc)
	{
		std::string temp = argv[i];
		j = 0;
		while(j < temp.size())
		{
			temp[j] = toupper(temp[j]);
			j++;
		}
		std::cout << temp;
		i++;
	}
}
