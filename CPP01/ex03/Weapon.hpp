#include <iostream>

class Weapon
{
	private:
		std::string	type;
	public:
		std::string &getTyped();
		void	setType(std::string newType);
};
