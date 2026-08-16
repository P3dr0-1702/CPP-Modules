#include "Animal.hpp"
#include "Brain.hpp"

#ifndef DOG_HPP
#define DOG_HPP

class Dog: public Animal
{
	private:
		Brain *brain;
	public:
		Dog(void);
		Dog(const Dog &copy);
		Dog &operator=(const Dog &src);
		~Dog();
		void makeSound() const;
		void getAnIdea(unsigned int index, const std::string &idea);
		std::string voiceYourThoughts(unsigned int index);
};

#endif // !DOG_HPP
