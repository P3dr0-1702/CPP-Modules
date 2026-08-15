#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->name = "Nameless Hobo";
	this->hp = 100;
	this->sp = 100;
	this->dmg = 30;
	std::cout << "FragTrap: " << this->name << " joined" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	this->hp = 100;
	this->sp = 100;
	this->dmg = 30;
	std::cout << "FragTrap: " << this->name << " joined" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	*this = copy;
	std::cout << "FragTrap: " << copy.name << " smurfed his account: " << this->name << " Jr. is a smurf" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: " << this->name << " left the game" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	if (this != &src)
	{
		this->dmg = src.dmg;
		this->hp = src.hp;
		this->sp = src.sp;
		this->name = src.name;
	}
	return (*this);
}

void FragTrap::highFiveGuys(void)
{
	if(this->hp <= 0)
	{
		std::cout << "FragTrap: " << this->name << " is dead, dead men ask for no Highfives" << std::endl;
		return;
	}
	std::cout << "FragTrap: " << this->name << " is requesting a high five, may you give it to him?" << std::endl;
}
