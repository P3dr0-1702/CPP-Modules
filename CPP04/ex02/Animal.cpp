#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Bixo";
	std::cout << "A wild Bixo has appeared" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
	std::cout << "A wild CopyBixo has appeared" << std::endl;
}

Animal::~Animal()
{
	std::cout << this->type << " has fainted" << std::endl;
}

Animal &Animal::operator=(const Animal &src)
{
	if(this != &src)
	{
		this->type = src.type;
	}
	return *this;
}

std::string Animal::getType(void) const
{
	return this->type;
}


// void Animal::makeSound(void) const
// {
// 	std::cout << "Incoherent Bixo noises" << std::endl;
// }
