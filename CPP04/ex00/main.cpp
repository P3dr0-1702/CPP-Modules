#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	
	const WrongAnimal *bixo = new WrongAnimal();
	const WrongAnimal *gyato = new WrongCat();
	std::cout << bixo->getType() << std::endl;
	std::cout << gyato->getType() << std::endl;
	bixo->makeSound();
	gyato->makeSound();

	delete meta;
	delete j;
	delete i;
	delete bixo;
	delete gyato;
	return 0;
}
