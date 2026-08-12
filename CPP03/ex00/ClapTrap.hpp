#include <iostream>

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

class ClapTrap
{
	private:
		std::string name;
		int hp;
		int sp;
		int dmg;
	public:
		ClapTrap();
		ClapTrap(ClapTrap &copy);
		ClapTrap(std::string name);
		~ClapTrap();
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif // !CLAPTRAP_HPP
