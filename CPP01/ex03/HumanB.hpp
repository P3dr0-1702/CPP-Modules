#include "Weapon.hpp"

#pragma once

class HumanB
{
  private:
	HumanB();
	std::string name;
	Weapon *weapon;

  public:
	HumanB(std::string name);
	HumanB(std::string, Weapon *b);
	void attack();
	void setWeapon(Weapon &weapon);
};
