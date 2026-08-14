#include "DiamondTrap.hpp"

int main()
{
	ClapTrap Clappy;
	ClapTrap Trappy("Trappy");
	ClapTrap Clappy_Trappy(Clappy);
	ScavTrap Scavvy("Scavvy");
	FragTrap Fraggy("Fraggy");
	DiamondTrap Diammy("Diammy");
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
	Scavvy.attack("Trappy");
	Fraggy.attack("Trappy");
	Fraggy.takeDamage(200);
	Fraggy.attack("Clappy");
	Diammy.attack("Bozo, The Clown");
	Diammy.takeDamage(50);
	Diammy.WhoAmI();
	Diammy.guardGate();
	Fraggy.highFiveGuys();
	Trappy.beRepaired(1);
	Trappy.takeDamage(10);
}
