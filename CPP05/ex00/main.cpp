#include "Bureaucrat.hpp"
#include <iostream>
#include <string.h>

int main(void)
{
	try
	{
		Bureaucrat burro("Burro", 151);
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	Bureaucrat burro2("Burrito", 40);
	std::cout << burro2;
	try
	{
		burro2.incrementGrade(41);
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	Bureaucrat burro3("Burrito Jr.", 1);
	try
	{
		burro2.decrementGrade();
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	try
	{
		burro2.incrementGrade();
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
}
