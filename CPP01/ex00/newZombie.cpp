#include "Zombie.hpp"
#include <iostream>

Zombie	*newZombie(std::string name)
{
	Zombie	*newZom;

	newZom = new Zombie(name);
	return (newZom);
}
