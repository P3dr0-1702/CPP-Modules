#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include "PhoneBook.hpp"

Contact createContact(void)
{
	Contact newContact;
	return newContact;
}

Contact createContact(int i)
{
	Contact newContact(i);
	return newContact;
}

std::string formatField(const std::string &str)
{
	if(str.length() > 10)
		return (str.substr(0, 9) + ".");
	return str;
}

void print_contact(Contact contact)
{

	OUTPUT << S setw(10) << contact.getIndex() + 1;
	OUTPUT << "|";
	OUTPUT << S setw(10) << formatField(contact.getFName());
	OUTPUT << "|";
	OUTPUT << S setw(10) << formatField(contact.getLName());
	OUTPUT << "|";
	OUTPUT << S setw(10) << formatField(contact.getNName());
	OUTPUT << "|";
	OUTPUT << NL;
}

bool valid_id(S string input)
{
	size_t i;
	if(input.size() > 1)
	{
		OUTPUT << "Input a valid ID" << NL;
		return false;
	}
	i = 0;
	while(i < input.size())
	{
		if(!(S isdigit(input[i])))
		{
			OUTPUT << "That is not a number" << NL;
			return false;
		}
		i++;
	}
	return true;
}

void print_contact_info(Contact cont)
{

	OUTPUT << "\n\n--------------------------------------" << NL;
	OUTPUT << "Contact Information: " << NL;
	OUTPUT << "First Name: " <<cont.getFName() << NL;
	OUTPUT << "Last Name: " <<cont.getLName() << NL;
	OUTPUT << "Nickname: " <<cont.getNName() << NL;
	OUTPUT << "Phone Number: " << cont.getPNumber() << NL;
	OUTPUT << "Secret: " << cont.getDSecret() << NL;
	OUTPUT << "--------------------------------------\n\n" << NL;
	
}

void search(Phonebook book)
{

	int i;
	int start;
	S string input;

	while(true)
	{
		i = 0;
		start = 0;
		input = "";
		while(start < 8 && book.getContact(start).getIndex() != 0)
			start++;
		
		OUTPUT << "\n\n--------------------------------------------" << NL;
		while(i < 7)
		{
			print_contact(book.getContact((start + i )% 7));
			i++;
		}
		OUTPUT << "--------------------------------------------\n\n" << NL;
		OUTPUT << "Chose contact to inspect :" << NL;
		OUTPUT << "(Send 0 to Quit Search)" << NL;
		while(input.empty() || !valid_id(input))
		{
			OUTPUT << "> ";
			if(!(S getline(INPUT, input)))
				SEXIT(-1);
		}
		int id = S atoi(input.c_str()) - 1;
		if(id == -1)
		{
			OUTPUT << "Quitting" << NL;
			return;
		}
		print_contact_info(book.getContact(id));
	}
}

// void call(Phonebook book)
// {
// 	std::string input;
// 	while(input.empty() || )
// 	if(!getline(std::cin, input))
// 		std::exit(0);
//
// }

void fill(Phonebook &book)
{
	int i = 0;
	OUTPUT << "Filling Phonebook from backup" << NL;
	while(i < 7)
	{
		book.add(createContact(i + 1));
		i++;
	}
}

int main()
{
	std::string input;
	Phonebook book;

	std::cout << "Starting Phone Book" << std::endl;

	while (true)
	{
		OUTPUT << "CMD: ";
		if(!(S getline(INPUT, input)))
			SEXIT(-1);
		if(input.empty())
			continue;

		if (input == "SEARCH")
			search(book);
		if (input == "ADD")
			book.add(createContact(0));
		if(input == "FILL")
			fill(book);
		if (input == "EXIT")
			SEXIT(0);
	}
	return 0;
}
