#include "Cat.hpp"

Cat::Cat(void): Animal()
{
	std::cout << "A wild Cat has appeared" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &copy): Animal(copy), brain(new Brain(*copy.brain))
{
	std::cout << "A wild CopyCat has appeared" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat has fainted" << std::endl;
	delete this->brain;
}

Cat &Cat::operator=(const Cat &src)
{
	if(this != &src)
	{
		this->type = src.type;
		delete this->brain;
		this->brain = new Brain(*src.brain);
	}
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Cat: Miau" << std::endl;
}
void Cat::getAnIdea(unsigned int index, const std::string &idea)
{
	return(this->brain->getAnIdea(index, idea));
}

std::string Cat::voiceYourThoughts(unsigned int index)
{
	return(this->brain->voiceYourThoughts(index));
}
