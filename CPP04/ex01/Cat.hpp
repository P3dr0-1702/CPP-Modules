#include "Animal.hpp"
#include "Brain.hpp"

#ifndef CAT_HPP
#define CAT_HPP
class Cat: public Animal
{
	private:
		Brain *brain;
	public:
		Cat(void);
		Cat(const Cat &copy);
		Cat &operator=(const Cat &src);
		~Cat();
		void makeSound() const;
		void getAnIdea(unsigned int index, const std::string &idea);
		std::string voiceYourThoughts(unsigned int index);
};

#endif // ! CAT_HPP
