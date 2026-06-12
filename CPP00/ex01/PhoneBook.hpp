#include <iostream>
#include "Contact.hpp"

#define OUTPUT std::cout
#define S std::
#define INPUT std::cin
#define NL std::endl
#define SEXIT(code) std::exit(code)

class Phonebook
{
	private:
		int index;
		Contact contacts[8];
	public:
		Phonebook();
		Contact getContact(int i);
		void add(Contact newContact);
		void search();
};
