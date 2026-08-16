#include <iostream>

#ifndef BRAIN_HPP
#define	BRAIN_HPP

class Brain
{
	public:
		std::string ideas[100];
		Brain();
		Brain(const Brain &copy);
		~Brain();
		Brain &operator=(const Brain &src);
		void getAnIdea(unsigned int index, const std::string &idea);
		std::string voiceYourThoughts(unsigned int index);
};

#endif // !BRAIN_HPP
