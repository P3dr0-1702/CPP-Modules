#include <iostream>

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(const Animal &copy);
		virtual ~Animal(void);
		Animal &operator=(const Animal &src);

		std::string getType(void) const;
		virtual void makeSound(void) const = 0;
};

#endif
