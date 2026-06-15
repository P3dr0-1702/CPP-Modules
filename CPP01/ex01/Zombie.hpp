#include <iostream>

class Zombie
{
	private:
		std::string name;
	public :
		Zombie();
		~Zombie();
		Zombie(std::string given_name);
		void announce(void);
};


Zombie *newZombie(std::string name);
void randomChump(std::string name);
