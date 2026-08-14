#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "Nameless Hobo";
	this->hp = 10;
	this->sp = 10;
	this->dmg = 0;
	std::cout << "ClapTrap: " << this->name << " joined" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hp = 10;
	this->sp = 10;
	this->dmg = 0;
	std::cout << "ClapTrap: " << this->name << " joined" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	this->hp = 10;
	this->sp = 10;
	this->dmg = 0;
	std::cout << "ClapTrap: " << copy.name << " smurfed his account: " << this->name << " Jr. is a smurf" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: " << this->name << " left the game" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
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

void ClapTrap::attack(const std::string &target)
{

	if(this->hp <= 0)
	{
		std::cout << "ClapTrap: " << this->name << " is dead, let it Rest in Peace" << std::endl;
		return;
	}
	if(this->sp <= 0)
	{
		std::cout << "ClapTrap: " << this->name << " is too tired, give him a \"Mini\" and a \"Tremoço\" adn he'll be good as new" << std::endl;
		return;
	}
	std::cout << "ClapTrap: " << this->name << " attacked " << target << " with it's Terra Blade, causing " << this->dmg << " points of damage" << std::endl;
	this->sp -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	bool already_dead = false;
	if(this->hp <= 0)
		already_dead = true;
	std::cout << "ClapTrap: " << this->name << " received " << amount << " points of Damage\n";
	std::cout << "\tIt had " << this->hp << " Health Points.";
	this->hp -= amount;
	std::cout << " It has now " << this->hp << " Health Points." << std::endl;
	if(already_dead)
		std::cout << "\t" << this->name << " is dead already, why must you defile it's corpse?" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{

	if(this->hp <= 0)
	{
		std::cout << "ClapTrap: " << this->name << " is dead, let it Rest in Peace" << std::endl;
		return;
	}
	if(this->sp <= 0)
	{
		std::cout << "Claptrap " << this->name << " is too tired, give him a \"Mini\" and a \"Tremoço\" adn he'll be good as new" << std::endl;
		return;
	}
	std::cout << "ClapTrap: " << this->name << " received " << amount << " points of Health\n";
	std::cout << "\tIt had " << this->hp << " Health Points.";
	this->hp += amount;
	std::cout << " It has now " << this->hp << " Health Points." << std::endl;
	this->sp -= 1;
}
