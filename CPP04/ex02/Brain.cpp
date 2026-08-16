#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Cogito Ergo Sum" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Cogitamus Ergo Sumus" << std::endl;
	*this = copy;
}

Brain &Brain::operator=(const Brain &src)
{
	if(this != &src)
	{
		int i = 0;
		while(i < 100)
		{
			this->ideas[i] = src.ideas[i];
			i++;
		}
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Crazy? I was crazy once. They locked me in a room. A rubber room. A rubber room with rats. And rats make me crazy." << std::endl;
}


void Brain::getAnIdea(unsigned int index, const std::string &idea)
{
	if(index >= 100)
	{
		std::cout << "Not enough rinkles on this brain for so much ideas" << std::endl;
		return;
	}
	this->ideas[index] = idea;
}

std::string Brain::voiceYourThoughts(unsigned int index)
{
	if(index >= 100)
		return "I Forgor 💀";
	return this->ideas[index];
}
