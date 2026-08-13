#include "ScavTrap.hpp"

int main()
{
	ClapTrap Clappy;
	ClapTrap Trappy("Trappy");
	ClapTrap Clappy_Trappy(Clappy);
	ScavTrap Scavvy("Scavvy");
	Clappy.attack("Trappy");
	Trappy.takeDamage(10);
	Clappy_Trappy.beRepaired(10);
	Clappy.attack("Trappy");
	Clappy.attack("Trappy");
	Clappy.attack("Trappy");
	Clappy.attack("Trappy");
	Clappy.attack("Trappy");
	Clappy.attack("Trappy");
	Clappy.attack("Trappy");
	Clappy.attack("Trappy");
	Clappy.attack("Trappy");
	Clappy.attack("Trappy");
	Scavvy.attack("Trappy");
	Scavvy.guardGate();
	Scavvy.beRepaired(10);
	Scavvy.takeDamage(200);
	Trappy.attack("Clappy");
	Trappy.beRepaired(1);
	Trappy.takeDamage(10);
}
