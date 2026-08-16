#include "WrongAnimal.hpp"

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
class WrongCat: public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat &copy);
		WrongCat &operator=(const WrongCat &src);
		~WrongCat();
		void makeSound(void) const;

};

#endif // ! WRONGCAT_HPP
