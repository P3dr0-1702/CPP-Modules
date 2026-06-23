#include <iostream>
#include <fstream>

std::string sed_replace(std::string source, std::string find, std::string replace)
{
	std::string result;
	size_t found;
	size_t i;
	i = 0;
	found = 0;
	std::cout << source << std::endl;
	while((found = source.find(find, i)) != std::string::npos)
	{
		result.append(source, i, found - i);
		result += replace;
		i = found + find.size();
	}
	result.append(source, i, source.size() - i);
	return result;
}

void sed_is_for_losers(std::string filename, std::string find, std::string replace)
{
	std::fstream file;
	std::fstream outfile;
	file.open(filename.c_str(), std::ios::in);
	if(!file.is_open())
	{
		std::cout << "Can't read infile, figure it out" << std::endl;
		return;
	}
	std::string temp;
	std::string source;
	while(std::getline(file, temp))
	{
		source.append(temp);
		source += "\n";
	}
	outfile.open(filename.append(".replace").c_str(), std::ios::out);
	if(!outfile.is_open())
	{
		std::cout << "Can't write outfile, figure it out" << std::endl;
		return;
	}
	outfile << sed_replace(source, find, replace);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "I ain't dealing with that cause i am lazy" << std::endl;
		return (-1);
	}
	sed_is_for_losers(argv[1], argv[2], argv[3]);
}
