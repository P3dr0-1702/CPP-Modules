#include "ClapTrap.hpp"

int main()
{
	ClapTrap Clappy;
	ClapTrap Trappy("Trappy");
	ClapTrap Clappy_Trappy(Clappy);
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
	Trappy.attack("Clappy");
	Trappy.beRepaired(1);
	Trappy.takeDamage(10);
}
