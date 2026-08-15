#include "ClapTrap.hpp"

int main()
{

	std::cout << "\n========== CONSTRUCTORS ==========\n";
	ClapTrap Clappy;
	ClapTrap Trappy("Trappy");
	ClapTrap Clappy_Trappy(Clappy);
	int i = 0;

	std::cout << "\n========== BASIC FUNCTIONS ==========\n";
	Clappy.attack("Trappy");
	Trappy.takeDamage(10);
	Clappy_Trappy.beRepaired(10);
	std::cout << "\n========== NO ENERGY TEST==========\n";
	while(i++ <= 10)
		Clappy.attack("Trappy");

	std::cout << "\n========== FUCNTION AFTER DEAD TEST==========\n";
	Trappy.attack("Clappy");
	Trappy.beRepaired(1);
	Trappy.takeDamage(10);
	std::cout << "\n========== DESTRUCTORS ==========\n";
}
