#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "Bixo";
	std::cout << "A wild Bixo has appeared" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << this->type << " has fainted" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	if(this != &src)
	{
		this->type = src.type;
	}
	return *this;
}

std::string WrongAnimal::getType(void) const
{
	return this->type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Incoherent Bixo noises" << std::endl;
}
