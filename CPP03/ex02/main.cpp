#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{

	std::cout << "\n========== CONSTRUCTORS ==========\n";
	ClapTrap Clappy;
	FragTrap Trappy("Trappy");
	FragTrap Clappy_Trappy(Trappy);
	ScavTrap Scavvy("Scavvy");
	FragTrap Fraggy("Fraggy");
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
	std::cout << "\n========== NO ENERGY TEST==========\n";
	while(i++ <= 100)
		Fraggy.attack("Trappy");
	std::cout << "\n========== FUCNTION AFTER DEAD TEST==========\n";
	Trappy.attack("Clappy");
	Trappy.beRepaired(1);
	Trappy.takeDamage(10);
	Trappy.highFiveGuys();
	std::cout << "\n========== DESTRUCTORS ==========\n";
}
