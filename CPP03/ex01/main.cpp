#include "ScavTrap.hpp"

int main()
{

	std::cout << "\n========== CONSTRUCTORS ==========\n";
	ClapTrap Clappy;
	ScavTrap Trappy("Trappy");
	ScavTrap Clappy_Trappy(Trappy);
	ScavTrap Scavvy("Scavvy");
	int i = 0;

	std::cout << "\n========== BASIC FUNCTIONS ==========\n";
	Clappy.attack("Trappy");
	Trappy.takeDamage(200);
	Clappy_Trappy.beRepaired(10);
	Scavvy.attack("Trappy");
	Scavvy.takeDamage(1);
	Scavvy.beRepaired(1);
	Scavvy.guardGate();
	std::cout << "\n========== NO ENERGY TEST==========\n";
	while(i++ <= 50)
		Scavvy.attack("Trappy");

	std::cout << "\n========== FUCNTION AFTER DEAD TEST==========\n";
	Trappy.attack("Clappy");
	Trappy.beRepaired(1);
	Trappy.takeDamage(10);
	Trappy.guardGate();
	std::cout << "\n========== DESTRUCTORS ==========\n";
}
