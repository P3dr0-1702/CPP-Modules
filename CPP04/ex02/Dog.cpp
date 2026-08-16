#include "Dog.hpp"

Dog::Dog(void): Animal()
{
	std::cout << "A wild Dog has appeared" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &copy): Animal(copy), brain(new Brain(*copy.brain))
{
	std::cout << "A wild CopyDog has appeared" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog has fainted" << std::endl;
	delete this->brain;
}

Dog &Dog::operator=(const Dog &src)
{
	if(this != &src)
	{
		this->type = src.type;
		delete this->brain;
		this->brain = new Brain(*src.brain);
	}
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog: Au Au" << std::endl;
}

void Dog::getAnIdea(unsigned int index, const std::string &idea)
{
	this->brain->getAnIdea(index, idea);
}

std::string Dog::voiceYourThoughts(unsigned int index)
{
	return(this->brain->voiceYourThoughts(index));
}
