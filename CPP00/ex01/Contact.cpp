#include "Contact.hpp"
#include <cstdlib>

void Contact::init_null()
{
		this->first_name = "NULL";
		this->last_name = "NULL";
		this->nickname = "NULL";
		this->phone_number = "000000000";
		this->secret = "NULL";
		this->index = -1;
}

void Contact::init_HPLove()
{
		this->first_name = "Howart";
		this->last_name = "Lovecraft";
		this->nickname = "H. P. Lovecraft";
		this->phone_number = "(555) CTHULHU";
		this->secret = "Don't ask about his cat's name";
		this->index = -1;
}

void Contact::init_ADouglas()
{
		this->first_name = "Douglas";
		this->last_name = "Adams";
		this->nickname = "Marvin";
		this->phone_number = "42";
		this->secret = "Claims to know the Answer to Life, the Universe, and Everything, but forgot the question";
		this->index = -1;
}

void Contact::init_EHarlan()
{
		this->first_name = "Harlan";
		this->last_name = "Ellison";
		this->nickname = "Allied Mastercomputer";
		this->phone_number = "1-555-AM-TECH";
		this->secret = "He actually agrees a bit with the computer";
		this->index = -1;
}

void Contact::init_OGeorge()
{
		this->first_name = "George";
		this->last_name = "Orwell";
		this->nickname = "Big Brother";
		this->phone_number = "1-Litterally-1984";
		this->secret = "Likes the idea of spying on everyone";
		this->index = -1;
}

void Contact::init_STzu()
{
		this->first_name = "Sun";
		this->last_name = "Tzu";
		this->nickname = "General Tzunami";
		this->phone_number = "Plin, The Messager";
		this->secret = "Never real your secrets to anyone, betrayal never comes from an enemy";
		this->index = -1;
}

void Contact::init_NAkatsuki()
{
		this->first_name = "Natsume";
		this->last_name = "Akatsuki";
		this->nickname = "Scumzuma";
		this->phone_number = "1-555-AXEL";
		this->secret = "Wants to learn the skill \"Steal\"";
		this->index = -1;
}

void Contact::init_LTorvalds()
{
		this->first_name = "Linus";
		this->last_name = "Torvalds";
		this->nickname = "Linux";
		this->phone_number = "10101010";
		this->secret = "████████████ █████ ███████ █████ ████████████";
		this->index = -1;
}

void Contact::init_JPaige()
{
		this->first_name = "Jamie";
		this->last_name = "Paige";
		this->nickname = "JamieP";
		this->phone_number = "1-500-MACHINELOVE";
		this->secret = "She feels Bittersweet";
		this->index = -1;
}

std::string Contact::getFName()
{
	return this->first_name;
}

std::string Contact::getLName()
{
	return this->last_name;
}

std::string Contact::getNName()
{
	return this->nickname;
}

std::string Contact::getDSecret()
{
	return this->secret;
}

std::string Contact::getPNumber()
{
	return this->phone_number;
}

bool is_valid_name(std::string str)
{
	size_t i;
	i = 0;
	if(str.empty())
	{
		OUTPUT << "Name cannot be empty" << NL;
		OUTPUT << "Please provide a valid name" << NL;
		return false;
	}
	while(i < str.size())
	{
		if(!(S isalpha(static_cast<unsigned char> (str[i]))))
		{
			OUTPUT << "Found a invalid char in name" << NL;
			OUTPUT << "Please provide a valid name" << NL;
			return false;
		}
		i++;
	}
	return true;
}

bool is_valid_nickname(std::string str)
{
	if(str.empty())
	{
		OUTPUT << "Name cannot be empty" << NL;
		OUTPUT << "Please provide a valid name" << NL;
		return false;
	}
	return true;
}

bool is_valid_number(std::string str)
{

	size_t i;
	i = 0;
	if(str.empty())
	{
		OUTPUT << "Number cannot be empty" << NL;
		OUTPUT << "Please provide a phone number" << NL;
		return false;
	}
	if(str.length() > 9)
	{
		OUTPUT << "Number is invalid" << NL;
		OUTPUT << "Please provide a valid number" << NL;
		return false;
	}
	while(i < str.size())
	{
		if(!(std::isdigit(static_cast<unsigned char> (str[i]))))
		{
			OUTPUT << "Found a non-digit in number" << NL;
			OUTPUT << "Please provide a valid phone number" << NL;
			return false;
		}
		i++;
	}
	return true;
}

bool is_valid_secret(std::string str)
{
	size_t i;
	int spaces;
	spaces = 0;
	i = 0;
	if(str.empty())
	{
		OUTPUT << "You must tell me their secret" << NL;
		return false;
	}
	while(i < str.size() && spaces <= 2)
	{
		if(str[i] == ' ')
			spaces++;
		i++;
	}
	if(spaces < 2)
	{
		OUTPUT << "That is not a secret, tell me the real secret" << NL;
		return false;
	}
	return true;
}

int Contact::getIndex()
{
	return this->index;
}

void Contact::setIndex(int i)
{
	this->index = i;
}

void Contact::init_input()
{
	OUTPUT << "Provide a first name" << NL;
	while(this->first_name.empty() || !is_valid_name(this->first_name))
	{
		OUTPUT << "> ";
		if(!(S getline(INPUT, this->first_name)))
			SEXIT(-1);
	}
	OUTPUT << "Provide a last name\n" ;
	while(this->last_name.empty() || !is_valid_name(this->last_name))
	{
		OUTPUT << "> ";
		if(!(S getline(INPUT, this->last_name)))
			SEXIT(-1);
	}
	OUTPUT << "Provide a nickname\n";
	while(this->nickname.empty() || !is_valid_nickname(this->nickname))
	{
		OUTPUT << "> ";
		if(!(S getline(INPUT, this->nickname)))
			SEXIT(-1);
	}
	OUTPUT << "Provide a phone number\n";
	while(this->phone_number.empty() || !is_valid_number(this->phone_number))
	{
		OUTPUT << "> ";
		if(!(S getline(INPUT, this->phone_number)))
			SEXIT(-1);
	}
	OUTPUT << "Provide a secreteous secret\n" ;
	while(this->secret.empty() || !is_valid_secret(this->secret))
	{
		OUTPUT << "> ";
		if(!(S getline(INPUT, this->secret)))
			SEXIT(-1);
	}
	OUTPUT << "Done: Contact Created Succesufully" << NL;
}


Contact::Contact()
{
	this->init_null();
}

Contact::Contact(int i)
{
	if (i == -1)
		this->init_null();
	if (i == 0)
		this->init_input();
	if(i == 1)
		this->init_HPLove();
	if(i == 2)
		this->init_ADouglas();
	if(i == 3)
		this->init_EHarlan();
	if(i == 4)
		this->init_OGeorge();
	if(i == 5)
		this->init_STzu();
	if(i == 6)
		this->init_NAkatsuki();
	if(i == 7)
		this->init_LTorvalds();
	if(i == 8)
		this->init_JPaige();
}
