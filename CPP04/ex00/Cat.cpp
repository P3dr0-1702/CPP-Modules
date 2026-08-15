#include "Cat.hpp"

Cat::Cat(void): Animal()
{
	std::cout << "A wild Cat has appeared" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &copy): Animal(copy)
{
	*this = copy;
}

Cat::~Cat()
{
	std::cout << "Cat has fainted" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	if(this != &src)
		this->type = src.type;
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Cat: Miau" << std::endl;
}
