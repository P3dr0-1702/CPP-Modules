#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap("Nameless Hobo_clap_name"), ScavTrap(), FragTrap()
{
	this->name = "Nameless Hobo";
	this->hp = 100;
	this->sp = 50;
	this->dmg = 30;
	std::cout << "DiamondTrap: " << this->name << " joined" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->name = name;
	this->hp = 100;
	this->sp = 50;
	this->dmg = 30;
	std::cout << "DiamondTrap: " << this->name << " joined" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	*this = copy;
	std::cout << "DiamondTrap: " << copy.name << " smurfed his account: " << this->name << " Jr. is a smurf" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: " << this->name << " left the game" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
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

void DiamondTrap::WhoAmI(void)
{
	if(this->hp <= 0)
	{
		std::cout << "DiamondTrap: " << this->name << " ain't nobody anymore, he's dead" << std::endl;
		return;
	}
	std::cout << "DiamondTrap: " << this->name << "'s name is " << this->name << " (duh). His ClapTrap name is " << ClapTrap::name << std::endl;
}
