#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	name = "Zombie";
	std::cout << "It's Nightime: a Zombie has spawned" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "It's Daytime: " << name << " is fleeying" << std::endl;
}

Zombie::Zombie(std::string given_name)
{
	name = given_name;
	std::cout << "It's Nightime: " << given_name << " has spawned" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ": Braiiiiiiinnnzzz" << std::endl;
}
