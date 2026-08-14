#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap: public ClapTrap
{
	private:
		std::string name;
		int hp;
		int sp;
		int dmg;
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);
		~FragTrap();
		FragTrap &operator=(const FragTrap &src);
		void highFiveGuys(void);
};

#endif // !FRAGTRAP_HPP
