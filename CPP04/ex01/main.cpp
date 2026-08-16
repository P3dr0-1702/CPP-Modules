#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Animal *arr[100];

	int				i;

	i = 0;
	while(i < 50)
		arr[i++] = new Dog;
	while(i < 100)
		arr[i++] = new Cat;
	Dog *Doggo = new Dog;
	Cat *Catto = new Cat;
	Doggo->getAnIdea(0, "I should find a bone");
	Catto->getAnIdea(0, "I'm bored. I should fill my owner shoes with beans");
	std::cout << "Doggo says " << Doggo->voiceYourThoughts(0) << std::endl;
	std::cout << "Catto says " << Catto->voiceYourThoughts(0) << std::endl;
	Dog *baby_Doggo = new Dog(*Doggo);
	Cat *baby_Catto = new Cat(*Catto);
	std::cout << "Baby Doggo says " << baby_Doggo->voiceYourThoughts(0) << std::endl;
	std::cout << "Baby Catto says " << baby_Catto->voiceYourThoughts(0) << std::endl;
	delete Doggo;
	delete Catto;
	std::cout << "Baby Doggo still says " << baby_Doggo->voiceYourThoughts(0) << std::endl;
	std::cout << "Baby Catto still says " << baby_Catto->voiceYourThoughts(0) << std::endl;
	delete baby_Doggo;
	delete baby_Catto;
	while(i-- > 0)
		delete arr[i];
	return (0);
}
