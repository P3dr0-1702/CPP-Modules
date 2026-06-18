#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon *weapon)
{
	this->weapon = weapon;
	this->name = name;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack()
{
	if(!this->weapon)
	{
		std::cout << this->name
		<< " attacks with their "
		<< "hand, cause they have no weapon"
		<< std::endl;

	}
	else
	{
		std::cout << this->name
			<< " attacks with their "
			<< this->weapon->getType()
			<< std::endl;
	}
}
