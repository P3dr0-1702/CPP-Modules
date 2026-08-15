#include "Dog.hpp"

Dog::Dog(void): Animal()
{
	std::cout << "A wild Dog has appeared" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &copy): Animal(copy)
{
	*this = copy;
}

Dog::~Dog(void)
{
	std::cout << "Dog has fainted" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
	if(this != &src)
		this->type = src.type;
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog: Au Au" << std::endl;
}
