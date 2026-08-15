#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->name = "Nameless Hobo";
	this->hp = 100;
	this->sp = 50;
	this->dmg = 0;
	std::cout << "ScavTrap: " << this->name << " joined" << std::endl;
}


ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->name = name;
	this->hp = 100;
	this->sp = 50;
	this->dmg = 20;
	std::cout << "ScavTrap: " << this->name << " joined" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) :ClapTrap(copy)
{
	*this = copy;
	std::cout << "ScavTrap: " << copy.name << " smurfed his account: " << this->name << " Jr. is a smurf" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: " << this->name << " left the game" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
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

void ScavTrap::attack(const std::string &target)
{

	if(this->hp <= 0)
	{
		std::cout << "ScavTrap: " << this->name << " is dead, let it Rest in Peace" << std::endl;
		return;
	}
	if(this->sp <= 0)
	{
		std::cout << "ScavTrap: " << this->name << " is too tired, give him a \"Mini\" and a \"Tremoço\" adn he'll be good as new" << std::endl;
		return;
	}
	std::cout << "ScavTrap: " << this->name << " attacked " << target << " with it's Terra Blade, causing " << this->dmg << " points of damage" << std::endl;
	this->sp -= 1;
}

void ScavTrap::guardGate(void)
{
	if(this->hp <= 0)
	{
		std::cout << "ScavTrap: " << this->name << " is dead, he ain't gatekeeping no time soon or late" << std::endl;
		return;
	}
	std::cout << "ScavTrap: " << this->name << " is gatekeeping, he refuses to tell you where to start reading The Flash comics" << std::endl;
}
