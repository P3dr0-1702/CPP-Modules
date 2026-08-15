#include "DiamondTrap.hpp"

int main()
{
	std::cout << "\n========== CONSTRUCTORS ==========\n";
	ClapTrap Clappy;
	DiamondTrap Trappy("Trappy");
	DiamondTrap Clappy_Trappy(Trappy);
	ScavTrap Scavvy("Scavvy");
	FragTrap Fraggy("Fraggy");
	DiamondTrap Diamonny("Diamonny");
	int i = 0;

	std::cout << "\n========== BASIC FUNCTIONS ==========\n";
	Clappy.attack("Trappy");
	Trappy.takeDamage(200);
	Clappy_Trappy.beRepaired(10);
	Scavvy.guardGate();
	Fraggy.attack("Trappy");
	Fraggy.beRepaired(10);
	Fraggy.takeDamage(10);
	Fraggy.highFiveGuys();
	Diamonny.attack("Trappy");
	Diamonny.takeDamage(10);
	Diamonny.beRepaired(10);
	Diamonny.highFiveGuys();
	Diamonny.guardGate();
	Diamonny.WhoAmI();
	std::cout << "\n========== NO ENERGY TEST==========\n";
	while(i++ <= 100)
		Diamonny.attack("Trappy");
	std::cout << "\n========== FUCNTION AFTER DEAD TEST==========\n";
	Trappy.attack("Clappy");
	Trappy.beRepaired(1);
	Trappy.takeDamage(10);
	Trappy.highFiveGuys();
	Trappy.WhoAmI();
	Trappy.guardGate();
	std::cout << "\n========== DESTRUCTORS ==========\n";
}
