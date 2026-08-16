#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
	std::cout << "A wild Kat has appeared" << std::endl;
	this->type = "Kat";
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal(copy)
{
	*this = copy;
}

WrongCat::~WrongCat()
{
	std::cout << "Kat has fainted" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	if(this != &src)
		this->type = src.type;
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Kat: Miau" << std::endl;
}
