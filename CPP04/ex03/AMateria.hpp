#include <iostream>

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

class ICharacter;

class AMateria
{
	protected:

	public:
		AMateria(const std::string &type);
		const std::string &getType() const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif // !AMATERIA_HPP
