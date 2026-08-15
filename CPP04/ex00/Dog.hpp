#include "Animal.hpp"

#ifndef DOG_HPP
#define DOG_HPP

class Dog: public Animal
{
	public:
		Dog(void);
		Dog(const Dog &copy);
		Dog &operator=(const Dog &src);
		~Dog();
		void makeSound() const;
};

#endif // !DOG_HPP
