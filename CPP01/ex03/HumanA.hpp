#include "Weapon.hpp"

#pragma once

class HumanA
{
  private:
	HumanA();
	std::string name;
	Weapon *weapon;

  public:
	HumanA(std::string name, Weapon &a);
	void attack();
};
