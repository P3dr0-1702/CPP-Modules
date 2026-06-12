#include "PhoneBook.hpp"

Phonebook::Phonebook()
{
	this->index = 0;
}

void Phonebook::add(Contact new_contact)
{
	new_contact.setIndex(this->index % 7);
	this->contacts[this->index % 7] = new_contact;
	this->index++;
}

Contact Phonebook::getContact(int i)
{
	return (this->contacts[i]);
}
