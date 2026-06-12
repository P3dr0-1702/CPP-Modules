#include <iostream>
#define OUTPUT std::cout
#define S std::
#define INPUT std::cin
#define NL std::endl
#define SEXIT(code) std::exit(code)

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string secret;
		int index;
	public:
		Contact();
		Contact(int i);
		std::string getFName();
		std::string getLName();
		std::string getNName();
		std::string getPNumber();
		std::string getDSecret();
		void init_null();
		void init_input();
		void init_HPLove();
		void init_ADouglas();
		void init_EHarlan();
		void init_OGeorge();
		void init_STzu();
		void init_NAkatsuki();
		void init_LTorvalds();
		void init_JPaige();
		int getIndex();
		void setIndex(int i);
};
